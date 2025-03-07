// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAPISubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAPISubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAPISubsystem();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAPISubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSAPISubsystem Function AddOrUpdateGlobalDataItem
struct Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics
{
	struct OWSAPISubsystem_eventAddOrUpdateGlobalDataItem_Parms
	{
		FString GlobalDataKey;
		FString GlobalDataValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GlobalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add or Update Global Data Item\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or Update Global Data Item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue = { "GlobalDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAPISubsystem, nullptr, "AddOrUpdateGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::OWSAPISubsystem_eventAddOrUpdateGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::OWSAPISubsystem_eventAddOrUpdateGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAPISubsystem::execAddOrUpdateGlobalDataItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateGlobalDataItem(Z_Param_GlobalDataKey,Z_Param_GlobalDataValue);
	P_NATIVE_END;
}
// End Class UOWSAPISubsystem Function AddOrUpdateGlobalDataItem

// Begin Class UOWSAPISubsystem Function CreateCharacterUsingDefaultCharacterValues
struct Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics
{
	struct OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString DefaultSetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Users" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Character Using Default Character Values\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Character Using Default Character Values" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName = { "DefaultSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms, DefaultSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAPISubsystem, nullptr, "CreateCharacterUsingDefaultCharacterValues", nullptr, nullptr, Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::OWSAPISubsystem_eventCreateCharacterUsingDefaultCharacterValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAPISubsystem::execCreateCharacterUsingDefaultCharacterValues)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCharacterUsingDefaultCharacterValues(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_DefaultSetName);
	P_NATIVE_END;
}
// End Class UOWSAPISubsystem Function CreateCharacterUsingDefaultCharacterValues

// Begin Class UOWSAPISubsystem Function GetGlobalDataItem
struct Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics
{
	struct OWSAPISubsystem_eventGetGlobalDataItem_Parms
	{
		FString GlobalDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GlobalData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Global Data Item\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Global Data Item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventGetGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::NewProp_GlobalDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAPISubsystem, nullptr, "GetGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::OWSAPISubsystem_eventGetGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::OWSAPISubsystem_eventGetGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAPISubsystem::execGetGlobalDataItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalDataItem(Z_Param_GlobalDataKey);
	P_NATIVE_END;
}
// End Class UOWSAPISubsystem Function GetGlobalDataItem

// Begin Class UOWSAPISubsystem Function Logout
struct Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics
{
	struct OWSAPISubsystem_eventLogout_Parms
	{
		FString UserSessionGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Users" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Logout\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logout" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAPISubsystem_eventLogout_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAPISubsystem, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::OWSAPISubsystem_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::OWSAPISubsystem_eventLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAPISubsystem_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAPISubsystem_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAPISubsystem::execLogout)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout(Z_Param_UserSessionGUID);
	P_NATIVE_END;
}
// End Class UOWSAPISubsystem Function Logout

// Begin Class UOWSAPISubsystem
void UOWSAPISubsystem::StaticRegisterNativesUOWSAPISubsystem()
{
	UClass* Class = UOWSAPISubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateGlobalDataItem", &UOWSAPISubsystem::execAddOrUpdateGlobalDataItem },
		{ "CreateCharacterUsingDefaultCharacterValues", &UOWSAPISubsystem::execCreateCharacterUsingDefaultCharacterValues },
		{ "GetGlobalDataItem", &UOWSAPISubsystem::execGetGlobalDataItem },
		{ "Logout", &UOWSAPISubsystem::execLogout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAPISubsystem);
UClass* Z_Construct_UClass_UOWSAPISubsystem_NoRegister()
{
	return UOWSAPISubsystem::StaticClass();
}
struct Z_Construct_UClass_UOWSAPISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSAPISubsystem.h" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSAPICustomerKey_MetaData[] = {
		{ "Category", "OWSAPISubsystem" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2APIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2InstanceManagementAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2CharacterPersistenceAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2GlobalDataAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSEncryptionKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSAPISubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSAPICustomerKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2APIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2InstanceManagementAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2CharacterPersistenceAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2GlobalDataAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSEncryptionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAPISubsystem_AddOrUpdateGlobalDataItem, "AddOrUpdateGlobalDataItem" }, // 3418888985
		{ &Z_Construct_UFunction_UOWSAPISubsystem_CreateCharacterUsingDefaultCharacterValues, "CreateCharacterUsingDefaultCharacterValues" }, // 138392795
		{ &Z_Construct_UFunction_UOWSAPISubsystem_GetGlobalDataItem, "GetGlobalDataItem" }, // 3598729184
		{ &Z_Construct_UFunction_UOWSAPISubsystem_Logout, "Logout" }, // 2970576629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAPISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWSAPICustomerKey = { "OWSAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWSAPICustomerKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSAPICustomerKey_MetaData), NewProp_OWSAPICustomerKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2APIPath = { "OWS2APIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWS2APIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2APIPath_MetaData), NewProp_OWS2APIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2InstanceManagementAPIPath = { "OWS2InstanceManagementAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWS2InstanceManagementAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2InstanceManagementAPIPath_MetaData), NewProp_OWS2InstanceManagementAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2CharacterPersistenceAPIPath = { "OWS2CharacterPersistenceAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWS2CharacterPersistenceAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2CharacterPersistenceAPIPath_MetaData), NewProp_OWS2CharacterPersistenceAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2GlobalDataAPIPath = { "OWS2GlobalDataAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWS2GlobalDataAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2GlobalDataAPIPath_MetaData), NewProp_OWS2GlobalDataAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWSEncryptionKey = { "OWSEncryptionKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAPISubsystem, OWSEncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSEncryptionKey_MetaData), NewProp_OWSEncryptionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAPISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWSAPICustomerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2APIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2InstanceManagementAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2CharacterPersistenceAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWS2GlobalDataAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAPISubsystem_Statics::NewProp_OWSEncryptionKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAPISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAPISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAPISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAPISubsystem_Statics::ClassParams = {
	&UOWSAPISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAPISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAPISubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAPISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAPISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAPISubsystem()
{
	if (!Z_Registration_Info_UClass_UOWSAPISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAPISubsystem.OuterSingleton, Z_Construct_UClass_UOWSAPISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAPISubsystem.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAPISubsystem>()
{
	return UOWSAPISubsystem::StaticClass();
}
UOWSAPISubsystem::UOWSAPISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAPISubsystem);
UOWSAPISubsystem::~UOWSAPISubsystem() {}
// End Class UOWSAPISubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAPISubsystem, UOWSAPISubsystem::StaticClass, TEXT("UOWSAPISubsystem"), &Z_Registration_Info_UClass_UOWSAPISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAPISubsystem), 1515403484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_2921756016(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
