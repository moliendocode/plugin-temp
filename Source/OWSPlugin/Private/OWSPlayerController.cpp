#include "OWSPlayerController.h"
#include "OWSCharacter.h"
#include "OWSPlayerState.h"
#include "DataTypes/OWSDataTypes.h"
#include "GameFramework/Pawn.h"
#include "OWSGameInstanceSubsystem.h"
#include "Authentication/OWSAuthentication.h"
#include "Kismet/GameplayStatics.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "JsonObjectConverter.h"
#include "../OWSPlugin.h"
#include "GameFramework/PlayerInput.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"

// Define log category properly
DECLARE_LOG_CATEGORY_EXTERN(LogOWSPlayerController, Log, All);
DEFINE_LOG_CATEGORY(LogOWSPlayerController);

AOWSPlayerController::AOWSPlayerController()
{
    bReplicates = true;
}

void AOWSPlayerController::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::BeginPlay"));

    // Input (Enhanced Input Setup)
    if (IsLocalController())
    {
        if (UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
        {
            if (DefaultInputMappingContext)
            {
                InputSystem->AddMappingContext(DefaultInputMappingContext, 0);
                UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::BeginPlay Input Mapping Context Added"));
            }
            else
            {
                UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::BeginPlay DefaultInputMappingContext is NULL"));
            }
        }
    }

    // Try AutoLogin (only on clients or standalone)
    if (GetNetMode() == NM_Client || GetNetMode() == NM_Standalone)
    {
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
            {
                if (OWSGameInstanceSubsystem->IsLoggedIn())
                {
                    // Get Character Data (Simplified - directly call the server function)
                    OWSGameInstanceSubsystem->SetCharacterName(TEXT("TestChar")); // HARDCODED - TODO: Remove this
                    Server_GetCharacterData(OWSGameInstanceSubsystem->GetCharacterName());
                }
            }
        }
    }
}

void AOWSPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Set up Enhanced Input bindings.
    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (MoveInputAction)
        {
            EnhancedInputComponent->BindAction(MoveInputAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
            UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::SetupInputComponent Move Action Bound"));
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::SetupInputComponent MoveInputAction is NULL"));
        }

        if (JumpInputAction)
        {
            EnhancedInputComponent->BindAction(JumpInputAction, ETriggerEvent::Started, this, &ThisClass::Jump);
            UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::SetupInputComponent Jump Action Bound"));
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::SetupInputComponent JumpInputAction is NULL"));
        }

        if (LookInputAction)
        {
            EnhancedInputComponent->BindAction(LookInputAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
            UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::SetupInputComponent Look Action Bound"));
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::SetupInputComponent LookInputAction is NULL"));
        }
    }
}

void AOWSPlayerController::Move(const FInputActionValue& Value)
{
    // We don't need Controller variable, we already are a controller
    FVector2D MoveValue = Value.Get<FVector2D>();

    if (MoveValue.Y != 0.0f)
    {
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

        if (GetPawn())
        {
            GetPawn()->AddMovementInput(ForwardDirection, MoveValue.Y);
            Server_Move(GetPawn()->GetActorLocation()); // Update server with new position
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::Move Pawn is NULL"));
        }
    }
    if (MoveValue.X != 0.0f)
    {
        const FRotator Rotation = GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        if (GetPawn())
        {
            GetPawn()->AddMovementInput(RightDirection, MoveValue.X);
            Server_Move(GetPawn()->GetActorLocation()); // Update server with new position
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::Move Pawn is NULL"));
        }
    }
}

void AOWSPlayerController::Jump()
{
    if (GetCharacter())
    {
        AOWSCharacter* OWSCharacter = Cast<AOWSCharacter>(GetCharacter());
        if (OWSCharacter)
        {
            OWSCharacter->Jump();
            OWSCharacter->Server_Jump();
        }
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::Jump Character is NULL"));
    }
}

void AOWSPlayerController::Look(const FInputActionValue& Value)
{
    FVector2D LookAxisVector = Value.Get<FVector2D>();

    // We already are a controller
    AddYawInput(LookAxisVector.X);
    AddPitchInput(LookAxisVector.Y);
}


void AOWSPlayerController::Server_GetCharacterData_Implementation(const FString& CharacterName)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::Server_GetCharacterData_Implementation CALLED"));

    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
        {
            FString CustomerGUID = OWSPluginConfig::GetCustomerGUID();
            FString authToken = OWSGameInstanceSubsystem->GetAuthToken();

            TSharedPtr<FJsonObject> RequestJson = MakeShareable(new FJsonObject);
            RequestJson->SetStringField(TEXT("CharacterName"), CharacterName);

            FString RequestBody;
            TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
            FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

            TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
            HttpRequest->SetVerb(TEXT("POST"));
            HttpRequest->SetURL(TEXT("http://localhost:44323/api/Character/GetCharData")); // Your OWS2 server URL
            HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
            HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *authToken));
            HttpRequest->SetHeader(TEXT("X-CustomerGUID"), CustomerGUID);
            HttpRequest->SetContentAsString(RequestBody);
            HttpRequest->OnProcessRequestComplete().BindUObject(this, &AOWSPlayerController::OnGetCharacterDataResponseReceived);
            HttpRequest->ProcessRequest();
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Error, TEXT("Server_GetCharacterData_Implementation: OWSGameInstanceSubsystem not found!"));
        }
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("Server_GetCharacterData_Implementation: GameInstance not found!"));
    }
}

void AOWSPlayerController::OnGetCharacterDataResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::OnGetCharacterDataResponseReceived CALLED"));

    FString ErrorMessage;

    if (bWasSuccessful && Response.IsValid() && EHttpResponseCodes::IsOk(Response->GetResponseCode()))
    {
        TSharedPtr<FJsonObject> ResponseJson;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

        if (FJsonSerializer::Deserialize(Reader, ResponseJson))
        {
            FCharacterData CharData;
            if (FJsonObjectConverter::JsonObjectToUStruct(ResponseJson->GetObjectField("CharacterData").ToSharedRef(), &CharData, 0, 0))
            {
                TArray<FInventoryData> InvData;
                if (FJsonObjectConverter::JsonArrayToUStruct(ResponseJson->GetArrayField("InventoryData"), &InvData, 0, 0))
                {
                    FCharacterStats CharStats;
                    if (FJsonObjectConverter::JsonObjectToUStruct(ResponseJson->GetObjectField("CharacterStats").ToSharedRef(), &CharStats, 0, 0))
                    {
                        // Character Spawning and Possession (Simplified)
                        FActorSpawnParameters SpawnParams;
                        SpawnParams.Owner = this;
                        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
                        FVector SpawnLoc = FVector(CharData.X, CharData.Y, CharData.Z);
                        FRotator SpawnRot = FRotator(CharData.RX, CharData.RY, CharData.RZ);

                        //  Use the CharacterClass from the PlayerController
                        AOWSCharacter* NewCharacter = GetWorld()->SpawnActor<AOWSCharacter>(CharacterClass, SpawnLoc, SpawnRot, SpawnParams);
                        if (NewCharacter)
                        {
                            // Update character with received data (IMPORTANT: This now uses delegates)
                            if (GetLocalRole() == ROLE_Authority)
                            {
                                NewCharacter->UpdateCharacterData(CharData, InvData, CharStats);
                            }

                            // Possess the new character.
                            UnPossess();
                            Possess(NewCharacter);

                            // Set PlayerState (if you have a custom PlayerState)
                            if (AOWSPlayerState* OWSPlayerState = Cast<AOWSPlayerState>(PlayerState))
                            {
                                OWSPlayerState->SetCharacterName(CharData.CharacterName);
                            }
                            else
                            {
                                UE_LOG(LogOWSPlayerController, Warning, TEXT("AOWSPlayerController::OnGetCharacterDataResponseReceived OWSPlayerState is NULL"));
                            }
                        }
                        else
                        {
                            UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to spawn character."));
                            ErrorMessage = TEXT("Failed to spawn character.");
                        }
                    }
                    else
                    {
                        UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to deserialize CharacterStats."));
                        ErrorMessage = TEXT("Failed to deserialize character stats.");
                    }
                }
                else
                {
                    UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to deserialize inventory data."));
                    ErrorMessage = TEXT("Failed to deserialize inventory data.");
                }
            }
            else
            {
                UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to deserialize character data."));
                ErrorMessage = TEXT("Failed to deserialize character data.");
            }
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to deserialize response."));
            ErrorMessage = TEXT("Failed to deserialize the server response.");
        }
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("GetCharacterData Failed: HTTP Error %d"), Response.IsValid() ? Response->GetResponseCode() : -1);
        FString ResponseMessage = Response.IsValid() ? Response->GetContentAsString() : TEXT("No response from server.");
        UE_LOG(LogOWSPlayerController, Error, TEXT("Response: %s"), *ResponseMessage);
        ErrorMessage = ResponseMessage;
    }
}

void AOWSPlayerController::Server_LoginUser_Implementation(const FString& Username, const FString& Password)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::Server_LoginUser_Implementation CALLED"));

    if (UGameInstance* GameInstance = GetGameInstance())
    {
        // Crea una instancia de UOWSAuthentication asociada al GameInstance
        UOWSAuthentication* Auth = NewObject<UOWSAuthentication>(GameInstance);
        if (Auth)
        {
            FLoginDelegate LoginCallback;
            LoginCallback.BindDynamic(this, &AOWSPlayerController::OnLoginComplete);
            // Llama a la función sin pasar CustomerGUID (la implementación la obtiene internamente)
            IOWSAuthenticationInterface::Execute_Login(Auth, Username, Password, LoginCallback);
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Error, TEXT("Failed to create UOWSAuthentication instance."));
        }
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("Server_LoginUser_Implementation: GameInstance is NULL"));
    }
}

bool AOWSPlayerController::Server_LoginUser_Validate(const FString& Username, const FString& Password)
{
    return true; // Add validation if needed
}

void AOWSPlayerController::OnLoginComplete(bool bSuccess, const FString& ErrorMessage)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::OnLoginComplete - Success: %s, Error: %s"), (bSuccess ? TEXT("true") : TEXT("false")), *ErrorMessage);

    // Notify clients of login result
    Client_OnLoginComplete(bSuccess, ErrorMessage);
}

void AOWSPlayerController::Client_OnLoginComplete_Implementation(bool bSuccess, const FString& ErrorMessage)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::Client_OnLoginComplete_Implementation CALLED"));
    if (bSuccess)
    {
        // Get Character Data (now handled automatically after login)
        if (UGameInstance* GameInstance = GetGameInstance())
        {
            if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
            {
                OWSGameInstanceSubsystem->SetCharacterName(TEXT("TestChar")); //HARDCODED, to remove
                Server_GetCharacterData(OWSGameInstanceSubsystem->GetCharacterName());
            }
        }
        OnLoginSuccess.Broadcast(); // Notify BP
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("Login Failed: %s"), *ErrorMessage);
        OnLoginFail.Broadcast(ErrorMessage);  // Notify BP
    }
}


void AOWSPlayerController::Server_RegisterUser_Implementation(const FString& Username, const FString& Password, const FString& Email)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::Server_RegisterUser_Implementation CALLED"));

    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UOWSGameInstanceSubsystem* OWSGameInstanceSubsystem = GameInstance->GetSubsystem<UOWSGameInstanceSubsystem>())
        {
            // Usa el objeto de autenticación del subsistema
            FRegisterDelegate RegisterCallback;
            RegisterCallback.BindDynamic(this, &AOWSPlayerController::OnRegisterComplete);
            IOWSAuthenticationInterface::Execute_Register(OWSGameInstanceSubsystem->GetAuthentication(), Username, Password, Email, RegisterCallback);
        }
        else
        {
            UE_LOG(LogOWSPlayerController, Error, TEXT("AOWSPlayerController::Server_RegisterUser_Implementation OWSGameInstanceSubsystem is NULL"));
        }
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("Server_RegisterUser_Implementation: GameInstance is NULL"));
    }
}

bool AOWSPlayerController::Server_RegisterUser_Validate(const FString& Username, const FString& Password, const FString& Email)
{
    return true; // Add validation if needed
}

void AOWSPlayerController::OnRegisterComplete(bool bSuccess, const FString& ErrorMessage)
{
    UE_LOG(LogOWSPlayerController, Verbose, TEXT("AOWSPlayerController::OnRegisterComplete - Success: %s"), (bSuccess ? TEXT("true") : TEXT("false")));

    // Notify clients of register result
    Client_OnRegisterComplete(bSuccess, ErrorMessage);
}

void AOWSPlayerController::Client_OnRegisterComplete_Implementation(bool bSuccess, const FString& ErrorMessage)
{
    if (bSuccess)
    {
        OnRegisterSuccess.Broadcast(); // Notify BP
    }
    else
    {
        UE_LOG(LogOWSPlayerController, Error, TEXT("Register Failed: %s"), *ErrorMessage);
        OnRegisterFail.Broadcast(ErrorMessage); // Notify BP
    }
}


void AOWSPlayerController::Server_Move_Implementation(FVector_NetQuantize NewLocation)
{
    if (GetPawn())
    {
        GetPawn()->SetActorLocation(NewLocation);
    }
}

bool AOWSPlayerController::Server_Move_Validate(FVector_NetQuantize NewLocation)
{
    return true;
}

// --------------------------------------------------------------------------------------- //

void AOWSPlayerController::LoginUser(const FString& Username, const FString& Password)
{
    Server_LoginUser(Username, Password);
}

void AOWSPlayerController::RegisterUser(const FString& Username, const FString& Password, const FString& Email)
{
    Server_RegisterUser(Username, Password, Email);
}