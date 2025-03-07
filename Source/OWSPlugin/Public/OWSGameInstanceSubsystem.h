#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OWSGameInstanceSubsystem.generated.h"

/**
 * Subsystem to store the authentication token for the current session.
 * This is a temporary solution for development.  For a production game,
 * a more secure method of storing credentials should be used.
 */
UCLASS()
class OWSPLUGIN_API UOWSGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
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

	//Added for convenience
	void SetCharacterName(const FString& NewCharacterName);
	FString GetCharacterName() const;

private:
	// The authentication token.
	UPROPERTY()
	FString AuthToken;

	// The name of the character.
	UPROPERTY()
	FString CharacterName;
};