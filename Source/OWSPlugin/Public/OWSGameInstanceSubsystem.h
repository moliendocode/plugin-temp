#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Authentication/OWSAuthenticationInterface.h"
#include "Authentication/OWSAuthentication.h"
#include "OWSGameInstanceSubsystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOWSGameInstanceSubsystem, Log, All);

/**
 * Subsystem to store the authentication token for the current session.
 * This is a temporary solution for development. For a production game,
 * a more secure method of storing credentials should be used.
 */
UCLASS(Config=OWSPlugin)
class OWSPLUGIN_API UOWSGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UOWSGameInstanceSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UFUNCTION(BlueprintPure, Category = "OWS")
	FString GetCustomerGUID() const;

	// Sets the authentication token.
	UFUNCTION(BlueprintCallable, Category = "OWS|Authentication")
	void SetAuthToken(const FString& NewToken);

	// Gets the authentication token.
	UFUNCTION(BlueprintPure, Category = "OWS|Authentication")
	FString GetAuthToken() const;

	// Clears the authentication token (logout).
	UFUNCTION(BlueprintCallable, Category = "OWS|Authentication")
	void ClearAuthToken();

	UFUNCTION(BlueprintPure, Category = "OWS|Authentication")
	bool IsLoggedIn() const;

	// Added for convenience
	void SetCharacterName(const FString& NewCharacterName);
	FString GetCharacterName() const;

	IOWSAuthenticationInterface& GetAuthInterface() { return *Authentication; }

	UFUNCTION(BlueprintPure, Category = "OWS|Authentication")
	UOWSAuthentication* GetAuthentication() const { return Authentication; }

private:
	// The authentication token.
	UPROPERTY()
	FString AuthToken;

	// The name of the character.
	UPROPERTY()
	FString CharacterName;

	// Ahora usamos un puntero UPROPERTY para que el GC lo administre
	UPROPERTY()
	UOWSAuthentication* Authentication;
};
