// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(OWSPlugin, Log, All);


class FOWSPlugin : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

namespace OWSPluginConfig
{
    static FORCEINLINE FString GetCustomerGUID()
    {
        FString GUID;
        // Ahora se lee desde la sección [/Script/OWSPlugin]
        if (GConfig->GetString(TEXT("/Script/OWSPlugin"), TEXT("CustomerGUID"), GUID, GGameIni))
        {
            return GUID;
        }
        return TEXT("");
    }
}