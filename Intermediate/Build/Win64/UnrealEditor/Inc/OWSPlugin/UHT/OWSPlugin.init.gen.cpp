// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlugin_init() {}
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OWSPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OWSPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OWSPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB39FA0AF,
				0xF6598677,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OWSPlugin(Z_Construct_UPackage__Script_OWSPlugin, TEXT("/Script/OWSPlugin"), Z_Registration_Info_UPackage__Script_OWSPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB39FA0AF, 0xF6598677));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
