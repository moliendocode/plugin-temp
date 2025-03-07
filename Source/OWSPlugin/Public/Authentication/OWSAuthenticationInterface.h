#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
// Explicitly include delegate-related headers if needed
#include "Delegates/Delegate.h"

#include "OWSAuthenticationInterface.generated.h"

// Delegate declarations DESPUÉS del include del .generated.h
DECLARE_DYNAMIC_DELEGATE_TwoParams(FLoginDelegate, bool, bSuccess, const FString&, ErrorMessage);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FRegisterDelegate, bool, bSuccess, const FString&, ErrorMessage);

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

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
    bool IsLoggedIn();
    virtual bool IsLoggedIn_Implementation() = 0;
};