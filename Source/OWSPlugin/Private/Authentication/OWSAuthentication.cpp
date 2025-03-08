#include "Authentication/OWSAuthentication.h"
#include "../OWSPlugin.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "JsonObjectConverter.h"
#include "OWSGameInstanceSubsystem.h"

DEFINE_LOG_CATEGORY(LogOWSAuthentication);

UOWSAuthentication::UOWSAuthentication(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    BaseUrl = TEXT("http://localhost:44302");
    CustomerGUID = TEXT("");
}

void UOWSAuthentication::Init(const FString& InCustomerGUID)
{
    CustomerGUID = InCustomerGUID;
}

void UOWSAuthentication::Login_Implementation(const FString& Username, const FString& Password, const FLoginDelegate& Callback)
{
    // Obtén el GUID desde la configuración
    FString ConfigGUID = OWSPluginConfig::GetCustomerGUID();
    UE_LOG(LogOWSAuthentication, Log, TEXT("UOWSAuthentication::Login - User: %s, CustomerGUID: %s"), *Username, *ConfigGUID);

    // Crear el payload JSON.
    TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
    RequestJson->SetStringField(TEXT("email"), Username);
    RequestJson->SetStringField(TEXT("password"), Password);

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    // Crear la petición HTTP.
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetURL(BaseUrl + TEXT("/api/Users/LoginAndCreateSession"));
    UE_LOG(LogOWSAuthentication, Log, TEXT("%s/api/Users/LoginAndCreateSession"), *BaseUrl);
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("X-CustomerGUID"), ConfigGUID);
    HttpRequest->SetContentAsString(RequestBody);
    UE_LOG(LogOWSAuthentication, Log, TEXT("Request Body: %s"), *RequestBody);

    // Bind del delegado de respuesta.
    HttpRequest->OnProcessRequestComplete().BindLambda(
        [Callback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            FString ErrorMessage;
            if (bWasSuccessful && Response.IsValid())
            {
                FString ResponseContent = Response->GetContentAsString();
                UE_LOG(LogOWSAuthentication, Log, TEXT("Login Response Code: %d"), Response->GetResponseCode());
                UE_LOG(LogOWSAuthentication, Log, TEXT("Response Body: %s"), *ResponseContent);
                if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
                {
                    // Deserializar la respuesta.
                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
                        // Extraer el UserSessionGuid de autenticación.
                        FString AuthToken;
                        if (ResponseJson->TryGetStringField(TEXT("userSessionGuid"), AuthToken))
                        {
                            // Almacenar el token en el subsistema.
                            if (UGameInstance* GameInstance = GEngine->GameViewport->GetGameInstance())
                            {
                                if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
                                {
                                    OWSGameInstanceSubsystem->SetAuthToken(AuthToken);
                                    Callback.ExecuteIfBound(true, "");
                                    return;
                                }
                                else
                                {
                                    UE_LOG(LogOWSAuthentication, Error, TEXT("Login: OWSGameInstanceSubsystem not found!"));
                                    ErrorMessage = TEXT("Internal error: OWSGameInstanceSubsystem not found");
                                }
                            }
                            else
                            {
                                UE_LOG(LogOWSAuthentication, Error, TEXT("Login: GameInstance not found!"));
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
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Login Failed: HTTP Error %d"), Response->GetResponseCode());
                    FString ResponseMessage = Response->GetContentAsString();
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Response: %s"), *ResponseMessage);

                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseMessage);
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
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

    HttpRequest->ProcessRequest();
}


void UOWSAuthentication::Register_Implementation(const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback)
{
    // Obtener el CustomerGUID desde la configuración
    FString ConfigGUID = OWSPluginConfig::GetCustomerGUID();
    UE_LOG(LogOWSAuthentication, Log, TEXT("UOWSAuthentication::Register - User: %s, Email: %s, CustomerGUID: %s"), *Username, *Email, *ConfigGUID);

    TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
    RequestJson->SetStringField(TEXT("email"), Email);
    RequestJson->SetStringField(TEXT("password"), Password);
    RequestJson->SetStringField(TEXT("firstName"), Email);
    RequestJson->SetStringField(TEXT("lastName"), TEXT("None"));

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetURL(BaseUrl + TEXT("/api/Users/RegisterUser"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("X-CustomerGUID"), ConfigGUID);
    HttpRequest->SetContentAsString(RequestBody);

    HttpRequest->OnProcessRequestComplete().BindLambda(
        [Callback](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            FString ErrorMessage;
            if (bWasSuccessful && Response.IsValid())
            {
                UE_LOG(LogOWSAuthentication, Log, TEXT("Register Response Code: %d"), Response->GetResponseCode());
                if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
                {
                    Callback.ExecuteIfBound(true, "");
                    return;
                }
                else
                {
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Register Failed: HTTP Error %d"), Response->GetResponseCode());
                    FString ResponseMessage = Response->GetContentAsString();
                    UE_LOG(LogOWSAuthentication, Error, TEXT("Response: %s"), *ResponseMessage);

                    TSharedPtr<FJsonObject> ResponseJson;
                    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseMessage);
                    if (FJsonSerializer::Deserialize(Reader, ResponseJson))
                    {
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
            UE_LOG(LogOWSAuthentication, Error, TEXT("Logout: OWSGameInstanceSubsystem not found!"));
        }
    }
    else
    {
        UE_LOG(LogOWSAuthentication, Error, TEXT("Logout: GameInstance not found!"));
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
            UE_LOG(LogOWSAuthentication, Error, TEXT("IsLoggedIn: OWSGameInstanceSubsystem not found!"));
            return false;
        }
    }
    else
    {
        UE_LOG(LogOWSAuthentication, Error, TEXT("IsLoggedIn: GameInstance not found!"));
        return false;
    }
}
