#include "OWSGameInstanceSubsystem.h"
#include "../OWSPlugin.h"

DEFINE_LOG_CATEGORY(LogOWSGameInstanceSubsystem);

UOWSGameInstanceSubsystem::UOWSGameInstanceSubsystem()
{
}

FString UOWSGameInstanceSubsystem::GetCustomerGUID() const
{
	return OWSPluginConfig::GetCustomerGUID();
}


void UOWSGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Crear la instancia de UOWSAuthentication usando NewObject para que se administre correctamente
	if (UGameInstance* GI = GetGameInstance())
	{
		Authentication = NewObject<UOWSAuthentication>(GI);
		if (Authentication)
		{
			// Inicializamos con el CustomerGUID
			Authentication->Init(OWSPluginConfig::GetCustomerGUID());
		}
		else
		{
			UE_LOG(LogOWSGameInstanceSubsystem, Error, TEXT("Failed to create UOWSAuthentication instance."));
		}
	}
	else
	{
		UE_LOG(LogOWSGameInstanceSubsystem, Error, TEXT("GameInstance is null in UOWSGameInstanceSubsystem::Initialize"));
	}
}

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
