#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Authentication/OWSAuthenticationInterface.h"
#include "OWSPlayerController.generated.h"

class AOWSCharacter;
class UInputMappingContext;
class UInputAction;

// Forward declarations CORRECTAS para FHttpRequestPtr y FHttpResponsePtr:
class FHttpRequestPtr;
class FHttpResponsePtr;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoginSuccessDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE__OneParam(FOnLoginFailDelegate, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRegisterSuccessDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegisterFailDelegate, const FString&, ErrorMessage);

UCLASS()
class OWSPLUGIN_API AOWSPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AOWSPlayerController();

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	// Login
	UFUNCTION(BlueprintCallable, Category = "OWS|Authentication")
	void LoginUser(const FString& Username, const FString& Password);

	UFUNCTION(Server, Reliable, WithValidation, Category = "OWS|Authentication")
	void Server_LoginUser(const FString& Username, const FString& Password);
	bool Server_LoginUser_Validate(const FString& Username, const FString& Password);

	void OnLoginComplete(bool bSuccess, const FString& ErrorMessage);

	UFUNCTION(Client, Reliable, Category = "OWS|Authentication") //Ahora si se usa
		void Client_OnLoginComplete(bool bSuccess, const FString& ErrorMessage);
	void Client_OnLoginComplete_Implementation(bool bSuccess, const FString& ErrorMessage);

	UPROPERTY(BlueprintAssignable, Category = "OWS|Authentication")
	FOnLoginSuccessDelegate OnLoginSuccess;

	UPROPERTY(BlueprintAssignable, Category = "OWS|Authentication")
	FOnLoginFailDelegate OnLoginFail;

	// Register
	UFUNCTION(BlueprintCallable, Category = "OWS|Authentication")
	void RegisterUser(const FString& Username, const FString& Password, const FString& Email);

	UFUNCTION(Server, Reliable, WithValidation, Category = "OWS|Authentication")
	void Server_RegisterUser(const FString& Username, const FString& Password, const FString& Email);
	bool Server_RegisterUser_Validate(const FString& Username, const FString& Password, const FString& Email);

	void OnRegisterComplete(bool bSuccess, const FString& ErrorMessage);

	UFUNCTION(Client, Reliable, Category = "OWS|Authentication") //Ahora si se usa
		void Client_OnRegisterComplete(bool bSuccess, const FString& ErrorMessage);
	void Client_OnRegisterComplete_Implementation(bool bSuccess, const FString& ErrorMessage);

	UPROPERTY(BlueprintAssignable, Category = "OWS|Authentication")
	FOnRegisterSuccessDelegate OnRegisterSuccess;

	UPROPERTY(BlueprintAssignable, Category = "OWS|Authentication")
	FOnRegisterFailDelegate OnRegisterFail;

	// Character Data
	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "OWS|Character")
	void Server_GetCharacterData(const FString& CharacterName);
	void Server_GetCharacterData_Implementation(const FString& CharacterName);

	UFUNCTION() // Ya no es BlueprintCallable
		void OnGetCharacterDataResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	//Input
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Move(FVector_NetQuantize NewLocation);
	void Server_Move_Implementation(FVector_NetQuantize NewLocation);
	bool Server_Move_Validate(FVector_NetQuantize NewLocation);


protected:

	// Input
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "OWS|Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultInputMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "OWS|Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "OWS|Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> JumpInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "OWS|Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookInputAction;

	void Move(const FInputActionValue& Value);
	void Jump();
	void Look(const FInputActionValue& Value);

	//Character Class para spawnear
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "OWS|Character", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AOWSCharacter> CharacterClass;
};