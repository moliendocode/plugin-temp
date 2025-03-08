#pragma once
#include "CoreMinimal.h"
#include "OWSAuthenticationInterface.h"
#include "OWSAuthentication.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOWSAuthentication, Log, All);

UCLASS()
class OWSPLUGIN_API UOWSAuthentication : public UObject, public IOWSAuthenticationInterface
{
    GENERATED_BODY()
public:
    UOWSAuthentication(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "OWS|Authentication")
    void Init(const FString& InCustomerGUID);

    // Actualiza las funciones para que ya no reciban el CustomerGUID como parámetro
    void Login_Implementation(const FString& Username, const FString& Password, const FLoginDelegate& Callback);
    void Register_Implementation(const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback);
    void Logout_Implementation();
    bool IsLoggedIn_Implementation();

private:
    FString BaseUrl;
    FString CustomerGUID;
};
