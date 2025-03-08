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
    UOWSAuthentication();

    // Funciones _Implementation sin virtual ni override
    void Login_Implementation(const FString& Username, const FString& Password, const FLoginDelegate& Callback);
    void Register_Implementation(const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback);
    void Logout_Implementation();
    bool IsLoggedIn_Implementation();

private:
    FString BaseUrl;
};