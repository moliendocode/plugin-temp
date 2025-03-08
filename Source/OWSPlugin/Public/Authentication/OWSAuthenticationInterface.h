#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Delegates/Delegate.h"
#include "OWSAuthenticationInterface.generated.h"

// Delegate declarations
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
    // Declaración de funciones con BlueprintNativeEvent
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
    void Login(const FString& Username, const FString& Password, const FLoginDelegate& Callback);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
    void Register(const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
    void Logout();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "OWS|Authentication")
    bool IsLoggedIn();
};