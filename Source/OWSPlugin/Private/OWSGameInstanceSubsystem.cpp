#include "OWSGameInstanceSubsystem.h"
#include "../OWSPlugin.h"

DEFINE_LOG_CATEGORY(LogOWSGameInstanceSubsystem); // Define a log category


void UOWSGameInstanceSubsystem::SetAuthToken(const FString& NewToken)
{
	AuthToken = NewToken;
	UE_LOG(LogOWSGameInstanceSubsystem, Log, TEXT("AuthToken set: %s"), *AuthToken);
}

FString UOWSGameInstanceSubsystem::GetAuthToken() const
{
	return AuthToken;
}

void UOWSGameInstanceSubsystem::ClearAuthToken()
{
	AuthToken.Empty();
	UE_LOG(LogOWSGameInstanceSubsystem, Log, TEXT("AuthToken cleared"));
}

bool UOWSGameInstanceSubsystem::IsLoggedIn() const
{
	return !AuthToken.IsEmpty();
}

void UOWSGameInstanceSubsystem::SetCharacterName(const FString& NewCharacterName)
{
	CharacterName = NewCharacterName;
	UE_LOG(LogOWSGameInstanceSubsystem, Log, TEXT("CharacterName set: %s"), *CharacterName);
}

FString UOWSGameInstanceSubsystem::GetCharacterName() const
{
	return CharacterName;
}