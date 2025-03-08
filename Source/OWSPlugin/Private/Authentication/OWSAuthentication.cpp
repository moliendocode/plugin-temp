#include "Authentication/OWSAuthentication.h"
#include "../OWSPlugin.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"  // Correct include
#include "Interfaces/IHttpResponse.h" // Correct include
#include "JsonObjectConverter.h"
#include "OWSGameInstanceSubsystem.h"


DEFINE_LOG_CATEGORY(LogOWSAuthentication); // Define a log category

UOWSAuthentication::UOWSAuthentication() :
    BaseUrl(TEXT("http://localhost:9000")) //  Replace with your OWS2 server URL
{

}

void UOWSAuthentication::Login_Implementation(const FString& Username, const FString& Password, const FLoginDelegate& Callback)
{
    UE_LOG(LogOWSAuthentication, Log, TEXT("UOWSAuthentication::Login - User: %s"), *Username);

    // Create the JSON payload.
    TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
    RequestJson->SetStringField(TEXT("Username"), Username);
    RequestJson->SetStringField(TEXT("Password"), Password);

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    // Create the HTTP request.
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetURL(BaseUrl + TEXT("/api/User/Login"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetContentAsString(RequestBody);

    // Bind the response delegate.
    HttpRequest->OnProcessRequestComplete().BindLambda(
        [Callback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            FString ErrorMessage;

            if (bWasSuccessful && Response.IsValid())
            {
                UE_LOG(LogOWSAuthentication, Log, TEXT("Login Response Code: %d"), Response->GetResponseCode());
                if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
                {
                    // Deserialize the response.
                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
                        // Extract the authentication token.
                        FString AuthToken;
                        if (ResponseJson->TryGetStringField(TEXT("Token"), AuthToken))
                        {
                            // Store the token (temporarily - see UOWSGameInstanceSubsystem).
                            if (UGameInstance* GameInstance = GEngine->GameViewport->GetGameInstance())
                            {
                                if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
                                {
                                    OWSGameInstanceSubsystem->SetAuthToken(AuthToken);
                                    // Notify the caller of success.
                                    Callback.ExecuteIfBound(true, "");
                                    return;
                                }
                                else
                                {
                                    UE_LOG(LogOWSAuthentication, Error, TEXT("Login:  OWSGameInstanceSubsystem not found!"));
                                    ErrorMessage = TEXT("Internal error: OWSGameInstanceSubsystem not found");
                                }
                            }
                            else
                            {
                                UE_LOG(LogOWSAuthentication, Error, TEXT("Login:  GameInstance not found!"));
                                ErrorMessage = TEXT("Internal error: GameInstance not found");
                            }
                        }
                        else
                        {
                            UE_LOG(LogOWSAuthentication, Error, TEXT("Login: No 'Token' field in response."));
                            ErrorMessage = TEXT("Invalid server response.");
                        }
                    }
                    else
                    {
                        UE_LOG(LogOWSAuthentication, Error, TEXT("Login: Failed to deserialize response."));
                        ErrorMessage = TEXT("Invalid server response.");
                    }
                }
                else
                {
                    // Handle error responses.
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Login Failed: HTTP Error %d"), Response->GetResponseCode());
                    FString ResponseMessage = Response->GetContentAsString();
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Response: %s"), *ResponseMessage);

                    //Try to get the error message
                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseMessage);
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
                        // Extract the error message.
                        if (ResponseJson->TryGetStringField(TEXT("error"), ErrorMessage))
                        {
                            UE_LOG(LogOWSAuthentication, Error, TEXT("Login: Error message: %s"), *ErrorMessage);
                        }
                        else
                        {
                            ErrorMessage = ResponseMessage;
                        }
                    }
                    else
                    {
                        ErrorMessage = ResponseMessage;
                    }
                }
            }
            else
            {
                UE_LOG(LogOWSAuthentication, Error, TEXT("Login Failed: No response from server."));
                ErrorMessage = TEXT("No response from server.");
            }
            Callback.ExecuteIfBound(false, ErrorMessage);
        });

    // Send the request.
    HttpRequest->ProcessRequest();
}



void UOWSAuthentication::Register_Implementation(const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback)
{
    UE_LOG(LogOWSAuthentication, Log, TEXT("UOWSAuthentication::Register - User: %s, Email: %s"), *Username, *Email);

    // Create the JSON payload.
    TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
    RequestJson->SetStringField(TEXT("Username"), Username);
    RequestJson->SetStringField(TEXT("Password"), Password);
    RequestJson->SetStringField(TEXT("Email"), Email);

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    // Create the HTTP request.
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetURL(BaseUrl + TEXT("/api/User/Register"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetContentAsString(RequestBody);

    // Bind the response delegate.
    HttpRequest->OnProcessRequestComplete().BindLambda(
        [Callback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            FString ErrorMessage;
            if (bWasSuccessful && Response.IsValid())
            {

                UE_LOG(LogOWSAuthentication, Log, TEXT("Register Response Code: %d"), Response->GetResponseCode());
                if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
                {
                    // Registration successful.
                    Callback.ExecuteIfBound(true, "");
                    return;
                }
                else
                {
                    // Handle error responses.
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Register Failed: HTTP Error %d"), Response->GetResponseCode());
                    FString ResponseMessage = Response->GetContentAsString();
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Response: %s"), *ResponseMessage);

                    //Try to get the error message
                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseMessage);
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
                        // Extract the error message.
                        if (ResponseJson->TryGetStringField(TEXT("error"), ErrorMessage))
                        {
                            UE_LOG(LogOWSAuthentication, Error, TEXT("Register: Error message: %s"), *ErrorMessage);
                        }
                        else
                        {
                            ErrorMessage = ResponseMessage;
                        }
                    }
                    else
                    {
                        ErrorMessage = ResponseMessage;
                    }
                }
            }
            else
            {
                UE_LOG(LogOWSAuthentication, Error, TEXT("Register Failed: No response from server."));
                ErrorMessage = TEXT("No response from server.");
            }
            Callback.ExecuteIfBound(false, ErrorMessage);
        });

    // Send the request.
    HttpRequest->ProcessRequest();
}

void UOWSAuthentication::Logout_Implementation()
{
    if (UGameInstance* GameInstance = GEngine->GameViewport->GetGameInstance())
    {
        if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
        {
            OWSGameInstanceSubsystem->ClearAuthToken();
        }
        else
        {
            UE_LOG(LogOWSAuthentication, Error, TEXT("Logout:  OWSGameInstanceSubsystem not found!"));
        }
    }
    else
    {
        UE_LOG(LogOWSAuthentication, Error, TEXT("Logout:  GameInstance not found!"));
    }
}

bool UOWSAuthentication::IsLoggedIn_Implementation()
{
    if (UGameInstance* GameInstance = GEngine->GameViewport->GetGameInstance())
    {
        if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
        {
            return OWSGameInstanceSubsystem->IsLoggedIn();
        }
        else
        {
            UE_LOG(LogOWSAuthentication, Error, TEXT("IsLoggedIn:  OWSGameInstanceSubsystem not found!"));
            return false;
        }
    }
    else
    {
        UE_LOG(LogOWSAuthentication, Error, TEXT("IsLoggedIn:  GameInstance not found!"));
        return false;
    }
}