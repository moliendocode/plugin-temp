// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlugin_init() {}
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature();
	OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OWSPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OWSPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OWSPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x032C7404,
				0x96226436,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OWSPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OWSPlugin(Z_Construct_UPackage__Script_OWSPlugin, TEXT("/Script/OWSPlugin"), Z_Registration_Info_UPackage__Script_OWSPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x032C7404, 0x96226436));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
