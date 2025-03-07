#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OWSAuthenticationInterface.generated.h" // This MUST be the last include

UINTERFACE(MinimalAPI, Blueprintable)
class UOWSAuthenticationInterface : public UInterface
{
	GENERATED_BODY()
};

class OWSPLUGIN_API IOWSAuthenticationInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
	void Login(const FString& Username, const FString& Password, FLoginDelegate Callback);
	virtual void Login_Implementation(const FString& Username, const FString& Password, FLoginDelegate Callback) = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
	void Register(const FString& Username, const FString& Password, const FString& Email, FRegisterDelegate Callback);
	virtual void Register_Implementation(const FString& Username, const FString& Password, const FString& Email, FRegisterDelegate Callback) = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
	void Logout();
	virtual void Logout_Implementation() = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS")
	bool IsLoggedIn();
	virtual bool IsLoggedIn_Implementation() = 0;
};

// Delegate declarations OUTSIDE the interface class:
DECLARE_DELEGATE_TwoParams(FLoginDelegate, bool, const FString&);
DECLARE_DELEGATE_TwoParams(FRegisterDelegate, bool, const FString&);