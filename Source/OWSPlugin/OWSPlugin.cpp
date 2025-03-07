// Copyright Epic Games, Inc. All Rights Reserved.

#include "OWSPlugin.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

// Define a log category for the entire plugin (optional, but good practice)
DECLARE_LOG_CATEGORY_EXTERN(OWSPlugin, Log, All);
DEFINE_LOG_CATEGORY(OWSPlugin);

void FOWSPlugin::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UE_LOG(OWSPlugin, Log, TEXT("OWSPlugin module starting up"));
}

void FOWSPlugin::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UE_LOG(OWSPlugin, Log, TEXT("OWSPlugin module shutting down"));
}

IMPLEMENT_MODULE(FOWSPlugin, OWSPlugin)