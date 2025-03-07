#pragma once

#include "CoreMinimal.h"
#include "OWSAuthenticationInterface.h"
#include "OWSAuthentication.generated.h" // This MUST be the last include

/**
 * Implements the IOWSAuthenticationInterface using simple username/password
 * authentication against the OWS2 backend.
 */
class OWSPLUGIN_API FOWSAuthentication : public IOWSAuthenticationInterface
{
public:
	FOWSAuthentication();

	// IOWSAuthenticationInterface
	virtual void Login_Implementation(const FString& Username, const FString& Password, FLoginDelegate Callback) override;
	virtual void Register_Implementation(const FString& Username, const FString& Password, const FString& Email, FRegisterDelegate Callback) override;
	virtual void Logout_Implementation() override;
	virtual bool IsLoggedIn_Implementation() override;
	// ~IOWSAuthenticationInterface

private:
	// Base URL of the OWS2 server.
	FString BaseUrl;
};