// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstance();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSGameInstance Function BeginLoadingScreen
struct Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics
{
	struct OWSGameInstance_eventBeginLoadingScreen_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventBeginLoadingScreen_Parms, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "BeginLoadingScreen", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::OWSGameInstance_eventBeginLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::OWSGameInstance_eventBeginLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execBeginLoadingScreen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginLoadingScreen(Z_Param_MapName);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function BeginLoadingScreen

// Begin Class UOWSGameInstance Function DecryptWithAES
struct Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics
{
	struct OWSGameInstance_eventDecryptWithAES_Parms
	{
		FString StringToDecrypt;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringToDecrypt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_StringToDecrypt = { "StringToDecrypt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventDecryptWithAES_Parms, StringToDecrypt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventDecryptWithAES_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventDecryptWithAES_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_StringToDecrypt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "DecryptWithAES", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::OWSGameInstance_eventDecryptWithAES_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::OWSGameInstance_eventDecryptWithAES_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execDecryptWithAES)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringToDecrypt);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOWSGameInstance::DecryptWithAES(Z_Param_StringToDecrypt,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function DecryptWithAES

// Begin Class UOWSGameInstance Function EncryptWithAES
struct Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics
{
	struct OWSGameInstance_eventEncryptWithAES_Parms
	{
		FString StringtoEncrypt;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Encryption" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringtoEncrypt;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_StringtoEncrypt = { "StringtoEncrypt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventEncryptWithAES_Parms, StringtoEncrypt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventEncryptWithAES_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventEncryptWithAES_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_StringtoEncrypt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "EncryptWithAES", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::OWSGameInstance_eventEncryptWithAES_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::OWSGameInstance_eventEncryptWithAES_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execEncryptWithAES)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StringtoEncrypt);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UOWSGameInstance::EncryptWithAES(Z_Param_StringtoEncrypt,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function EncryptWithAES

// Begin Class UOWSGameInstance Function EndLoadingScreen
struct Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics
{
	struct OWSGameInstance_eventEndLoadingScreen_Parms
	{
		UWorld* world;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventEndLoadingScreen_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::NewProp_world,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "EndLoadingScreen", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::OWSGameInstance_eventEndLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::OWSGameInstance_eventEndLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execEndLoadingScreen)
{
	P_GET_OBJECT(UWorld,Z_Param_world);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndLoadingScreen(Z_Param_world);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function EndLoadingScreen

// Begin Class UOWSGameInstance Function FindClass
struct Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics
{
	struct OWSGameInstance_eventFindClass_Parms
	{
		FString ClassName;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventFindClass_Parms, ClassName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventFindClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "FindClass", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::OWSGameInstance_eventFindClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::OWSGameInstance_eventFindClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_FindClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_FindClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execFindClass)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->FindClass(Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function FindClass

// Begin Class UOWSGameInstance Function FindGameplayAbilityClass
struct Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics
{
	struct OWSGameInstance_eventFindGameplayAbilityClass_Parms
	{
		FString ClassName;
		TSubclassOf<UGameplayAbility> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventFindGameplayAbilityClass_Parms, ClassName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventFindGameplayAbilityClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "FindGameplayAbilityClass", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::OWSGameInstance_eventFindGameplayAbilityClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::OWSGameInstance_eventFindGameplayAbilityClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execFindGameplayAbilityClass)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayAbility>*)Z_Param__Result=P_THIS->FindGameplayAbilityClass(Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function FindGameplayAbilityClass

// Begin Class UOWSGameInstance Function HideLoadingDialog
static const FName NAME_UOWSGameInstance_HideLoadingDialog = FName(TEXT("HideLoadingDialog"));
void UOWSGameInstance::HideLoadingDialog()
{
	UFunction* Func = FindFunctionChecked(NAME_UOWSGameInstance_HideLoadingDialog);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "HideLoadingDialog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSGameInstance Function HideLoadingDialog

// Begin Class UOWSGameInstance Function HideLoadingScreen
struct Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "HideLoadingScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execHideLoadingScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideLoadingScreen();
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function HideLoadingScreen

// Begin Class UOWSGameInstance Function LoadGameplayAbilityClass
struct Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics
{
	struct OWSGameInstance_eventLoadGameplayAbilityClass_Parms
	{
		FString PathToGameplayAbilityClass;
		TSubclassOf<UGameplayAbility> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Abilities" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathToGameplayAbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_PathToGameplayAbilityClass = { "PathToGameplayAbilityClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadGameplayAbilityClass_Parms, PathToGameplayAbilityClass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadGameplayAbilityClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_PathToGameplayAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadGameplayAbilityClass", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::OWSGameInstance_eventLoadGameplayAbilityClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::OWSGameInstance_eventLoadGameplayAbilityClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadGameplayAbilityClass)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PathToGameplayAbilityClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayAbility>*)Z_Param__Result=P_THIS->LoadGameplayAbilityClass(Z_Param_PathToGameplayAbilityClass);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadGameplayAbilityClass

// Begin Class UOWSGameInstance Function LoadMaterialInstanceFromPath
struct Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics
{
	struct OWSGameInstance_eventLoadMaterialInstanceFromPath_Parms
	{
		FString MaterialInstancePath;
		UMaterialInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialInstancePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::NewProp_MaterialInstancePath = { "MaterialInstancePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadMaterialInstanceFromPath_Parms, MaterialInstancePath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadMaterialInstanceFromPath_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::NewProp_MaterialInstancePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadMaterialInstanceFromPath", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::OWSGameInstance_eventLoadMaterialInstanceFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::OWSGameInstance_eventLoadMaterialInstanceFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadMaterialInstanceFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MaterialInstancePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstance**)Z_Param__Result=P_THIS->LoadMaterialInstanceFromPath(Z_Param_MaterialInstancePath);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadMaterialInstanceFromPath

// Begin Class UOWSGameInstance Function LoadSkeletalMeshFromPath
struct Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics
{
	struct OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms
	{
		FString SkeletalMeshPath;
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms, SkeletalMeshPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_SkeletalMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadSkeletalMeshFromPath", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::OWSGameInstance_eventLoadSkeletalMeshFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadSkeletalMeshFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SkeletalMeshPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=P_THIS->LoadSkeletalMeshFromPath(Z_Param_SkeletalMeshPath);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadSkeletalMeshFromPath

// Begin Class UOWSGameInstance Function LoadSkeletonFromPath
struct Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics
{
	struct OWSGameInstance_eventLoadSkeletonFromPath_Parms
	{
		FString SkeletonPath;
		USkeleton* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletonFromPath_Parms, SkeletonPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadSkeletonFromPath_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::NewProp_SkeletonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadSkeletonFromPath", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::OWSGameInstance_eventLoadSkeletonFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::OWSGameInstance_eventLoadSkeletonFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadSkeletonFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SkeletonPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeleton**)Z_Param__Result=P_THIS->LoadSkeletonFromPath(Z_Param_SkeletonPath);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadSkeletonFromPath

// Begin Class UOWSGameInstance Function LoadStaticMeshFromPath
struct Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics
{
	struct OWSGameInstance_eventLoadStaticMeshFromPath_Parms
	{
		FString StaticMeshPath;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadStaticMeshFromPath_Parms, StaticMeshPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadStaticMeshFromPath_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_StaticMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadStaticMeshFromPath", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::OWSGameInstance_eventLoadStaticMeshFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::OWSGameInstance_eventLoadStaticMeshFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadStaticMeshFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StaticMeshPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->LoadStaticMeshFromPath(Z_Param_StaticMeshPath);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadStaticMeshFromPath

// Begin Class UOWSGameInstance Function LoadWeaponActorClassFromPath
struct Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics
{
	struct OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms
	{
		FString WeaponActorClassPath;
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponActorClassPath;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_WeaponActorClassPath = { "WeaponActorClassPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms, WeaponActorClassPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_WeaponActorClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "LoadWeaponActorClassFromPath", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::OWSGameInstance_eventLoadWeaponActorClassFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execLoadWeaponActorClassFromPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_WeaponActorClassPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->LoadWeaponActorClassFromPath(Z_Param_WeaponActorClassPath);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function LoadWeaponActorClassFromPath

// Begin Class UOWSGameInstance Function RPGBeginLoadingScreen
static const FName NAME_UOWSGameInstance_RPGBeginLoadingScreen = FName(TEXT("RPGBeginLoadingScreen"));
void UOWSGameInstance::RPGBeginLoadingScreen()
{
	UFunction* Func = FindFunctionChecked(NAME_UOWSGameInstance_RPGBeginLoadingScreen);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "RPGBeginLoadingScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSGameInstance Function RPGBeginLoadingScreen

// Begin Class UOWSGameInstance Function RPGEndLoadingScreen
static const FName NAME_UOWSGameInstance_RPGEndLoadingScreen = FName(TEXT("RPGEndLoadingScreen"));
void UOWSGameInstance::RPGEndLoadingScreen()
{
	UFunction* Func = FindFunctionChecked(NAME_UOWSGameInstance_RPGEndLoadingScreen);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "RPGEndLoadingScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSGameInstance Function RPGEndLoadingScreen

// Begin Class UOWSGameInstance Function SerializeStructToJSONString
struct Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics
{
	struct OWSGameInstance_eventSerializeStructToJSONString_Parms
	{
		const UStruct* StructToSerialize;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StructToSerialize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StructToSerialize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize = { "StructToSerialize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventSerializeStructToJSONString_Parms, StructToSerialize), Z_Construct_UClass_UStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StructToSerialize_MetaData), NewProp_StructToSerialize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstance_eventSerializeStructToJSONString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_StructToSerialize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstance, nullptr, "SerializeStructToJSONString", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::OWSGameInstance_eventSerializeStructToJSONString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::OWSGameInstance_eventSerializeStructToJSONString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstance::execSerializeStructToJSONString)
{
	P_GET_OBJECT(UStruct,Z_Param_StructToSerialize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->SerializeStructToJSONString(Z_Param_StructToSerialize);
	P_NATIVE_END;
}
// End Class UOWSGameInstance Function SerializeStructToJSONString

// Begin Class UOWSGameInstance
void UOWSGameInstance::StaticRegisterNativesUOWSGameInstance()
{
	UClass* Class = UOWSGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginLoadingScreen", &UOWSGameInstance::execBeginLoadingScreen },
		{ "DecryptWithAES", &UOWSGameInstance::execDecryptWithAES },
		{ "EncryptWithAES", &UOWSGameInstance::execEncryptWithAES },
		{ "EndLoadingScreen", &UOWSGameInstance::execEndLoadingScreen },
		{ "FindClass", &UOWSGameInstance::execFindClass },
		{ "FindGameplayAbilityClass", &UOWSGameInstance::execFindGameplayAbilityClass },
		{ "HideLoadingScreen", &UOWSGameInstance::execHideLoadingScreen },
		{ "LoadGameplayAbilityClass", &UOWSGameInstance::execLoadGameplayAbilityClass },
		{ "LoadMaterialInstanceFromPath", &UOWSGameInstance::execLoadMaterialInstanceFromPath },
		{ "LoadSkeletalMeshFromPath", &UOWSGameInstance::execLoadSkeletalMeshFromPath },
		{ "LoadSkeletonFromPath", &UOWSGameInstance::execLoadSkeletonFromPath },
		{ "LoadStaticMeshFromPath", &UOWSGameInstance::execLoadStaticMeshFromPath },
		{ "LoadWeaponActorClassFromPath", &UOWSGameInstance::execLoadWeaponActorClassFromPath },
		{ "SerializeStructToJSONString", &UOWSGameInstance::execSerializeStructToJSONString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSGameInstance);
UClass* Z_Construct_UClass_UOWSGameInstance_NoRegister()
{
	return UOWSGameInstance::StaticClass();
}
struct Z_Construct_UClass_UOWSGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameInstance.h" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Sessions" },
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMeshItemsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalMeshItemsMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalMeshItemsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LocalMeshItemsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSGameInstance_BeginLoadingScreen, "BeginLoadingScreen" }, // 2357302618
		{ &Z_Construct_UFunction_UOWSGameInstance_DecryptWithAES, "DecryptWithAES" }, // 3859525775
		{ &Z_Construct_UFunction_UOWSGameInstance_EncryptWithAES, "EncryptWithAES" }, // 1673784732
		{ &Z_Construct_UFunction_UOWSGameInstance_EndLoadingScreen, "EndLoadingScreen" }, // 87612468
		{ &Z_Construct_UFunction_UOWSGameInstance_FindClass, "FindClass" }, // 599152573
		{ &Z_Construct_UFunction_UOWSGameInstance_FindGameplayAbilityClass, "FindGameplayAbilityClass" }, // 3716048219
		{ &Z_Construct_UFunction_UOWSGameInstance_HideLoadingDialog, "HideLoadingDialog" }, // 415281762
		{ &Z_Construct_UFunction_UOWSGameInstance_HideLoadingScreen, "HideLoadingScreen" }, // 711098120
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadGameplayAbilityClass, "LoadGameplayAbilityClass" }, // 332847622
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadMaterialInstanceFromPath, "LoadMaterialInstanceFromPath" }, // 1895102120
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadSkeletalMeshFromPath, "LoadSkeletalMeshFromPath" }, // 2757088496
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadSkeletonFromPath, "LoadSkeletonFromPath" }, // 58150287
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadStaticMeshFromPath, "LoadStaticMeshFromPath" }, // 2497359688
		{ &Z_Construct_UFunction_UOWSGameInstance_LoadWeaponActorClassFromPath, "LoadWeaponActorClassFromPath" }, // 1639420471
		{ &Z_Construct_UFunction_UOWSGameInstance_RPGBeginLoadingScreen, "RPGBeginLoadingScreen" }, // 3547906609
		{ &Z_Construct_UFunction_UOWSGameInstance_RPGEndLoadingScreen, "RPGEndLoadingScreen" }, // 3516521490
		{ &Z_Construct_UFunction_UOWSGameInstance_SerializeStructToJSONString, "SerializeStructToJSONString" }, // 916824335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSGameInstance, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap_ValueProp = { "LocalMeshItemsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap_Key_KeyProp = { "LocalMeshItemsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap = { "LocalMeshItemsMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSGameInstance, LocalMeshItemsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMeshItemsMap_MetaData), NewProp_LocalMeshItemsMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstance_Statics::NewProp_LocalMeshItemsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSGameInstance_Statics::ClassParams = {
	&UOWSGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSGameInstance()
{
	if (!Z_Registration_Info_UClass_UOWSGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSGameInstance.OuterSingleton, Z_Construct_UClass_UOWSGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSGameInstance.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSGameInstance>()
{
	return UOWSGameInstance::StaticClass();
}
UOWSGameInstance::UOWSGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSGameInstance);
UOWSGameInstance::~UOWSGameInstance() {}
// End Class UOWSGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSGameInstance, UOWSGameInstance::StaticClass, TEXT("UOWSGameInstance"), &Z_Registration_Info_UClass_UOWSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSGameInstance), 3346363219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_1654672558(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
