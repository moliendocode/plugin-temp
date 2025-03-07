// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSPlayerControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlayerControllerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSPlayerControllerComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSPlayerControllerComponent Function AddAbilityToCharacter
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics
{
	struct OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms
	{
		FString CharName;
		FString AbilityName;
		int32 AbilityLevel;
		FString CustomJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add Ability To Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Ability To Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms, AbilityName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_CustomJSON = { "CustomJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms, CustomJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::NewProp_CustomJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "AddAbilityToCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::OWSPlayerControllerComponent_eventAddAbilityToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execAddAbilityToCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbilityName);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAbilityToCharacter(Z_Param_CharName,Z_Param_AbilityName,Z_Param_AbilityLevel,Z_Param_CustomJSON);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function AddAbilityToCharacter

// Begin Class UOWSPlayerControllerComponent Function AddOrUpdateCustomCharacterData
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics
{
	struct OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms
	{
		FString CharName;
		FString CustomFieldName;
		FString CustomValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add or Update Custom Character Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or Update Custom Character Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms, CustomFieldName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomValue = { "CustomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms, CustomValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomFieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::NewProp_CustomValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "AddOrUpdateCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::OWSPlayerControllerComponent_eventAddOrUpdateCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execAddOrUpdateCustomCharacterData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomFieldName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateCustomCharacterData(Z_Param_CharName,Z_Param_CustomFieldName,Z_Param_CustomValue);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function AddOrUpdateCustomCharacterData

// Begin Class UOWSPlayerControllerComponent Function CreateCharacter
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics
{
	struct OWSPlayerControllerComponent_eventCreateCharacter_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString ClassName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacter_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacter_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacter_Parms, ClassName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::NewProp_ClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "CreateCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::OWSPlayerControllerComponent_eventCreateCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::OWSPlayerControllerComponent_eventCreateCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execCreateCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function CreateCharacter

// Begin Class UOWSPlayerControllerComponent Function CreateCharacterUsingDefaultCharacterValues
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics
{
	struct OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString DefaultSetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Character Using Default Character Values\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName = { "DefaultSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms, DefaultSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "CreateCharacterUsingDefaultCharacterValues", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::OWSPlayerControllerComponent_eventCreateCharacterUsingDefaultCharacterValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execCreateCharacterUsingDefaultCharacterValues)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCharacterUsingDefaultCharacterValues(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_DefaultSetName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function CreateCharacterUsingDefaultCharacterValues

// Begin Class UOWSPlayerControllerComponent Function GetAbilityBars
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics
{
	struct OWSPlayerControllerComponent_eventGetAbilityBars_Parms
	{
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Ability Bars\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Ability Bars" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetAbilityBars_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetAbilityBars", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::OWSPlayerControllerComponent_eventGetAbilityBars_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::OWSPlayerControllerComponent_eventGetAbilityBars_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetAbilityBars)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAbilityBars(Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetAbilityBars

// Begin Class UOWSPlayerControllerComponent Function GetAllCharacters
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics
{
	struct OWSPlayerControllerComponent_eventGetAllCharacters_Parms
	{
		FString UserSessionGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get All Characters\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All Characters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetAllCharacters_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetAllCharacters", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::OWSPlayerControllerComponent_eventGetAllCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::OWSPlayerControllerComponent_eventGetAllCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetAllCharacters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllCharacters(Z_Param_UserSessionGUID);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetAllCharacters

// Begin Class UOWSPlayerControllerComponent Function GetCharacterAbilities
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics
{
	struct OWSPlayerControllerComponent_eventGetCharacterAbilities_Parms
	{
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Character Abilities\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Character Abilities" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetCharacterAbilities_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetCharacterAbilities", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::OWSPlayerControllerComponent_eventGetCharacterAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::OWSPlayerControllerComponent_eventGetCharacterAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetCharacterAbilities)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterAbilities(Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetCharacterAbilities

// Begin Class UOWSPlayerControllerComponent Function GetCharacterDataAndCustomData
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics
{
	struct OWSPlayerControllerComponent_eventGetCharacterDataAndCustomData_Parms
	{
		FString UserSessionGUID;
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Character Data and Custom Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Character Data and Custom Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetCharacterDataAndCustomData_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetCharacterDataAndCustomData_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetCharacterDataAndCustomData", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::OWSPlayerControllerComponent_eventGetCharacterDataAndCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::OWSPlayerControllerComponent_eventGetCharacterDataAndCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetCharacterDataAndCustomData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterDataAndCustomData(Z_Param_UserSessionGUID,Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetCharacterDataAndCustomData

// Begin Class UOWSPlayerControllerComponent Function GetCharacterStats
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics
{
	struct OWSPlayerControllerComponent_eventGetCharacterStats_Parms
	{
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Character Stats\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Character Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetCharacterStats_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetCharacterStats", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::OWSPlayerControllerComponent_eventGetCharacterStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::OWSPlayerControllerComponent_eventGetCharacterStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetCharacterStats)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterStats(Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetCharacterStats

// Begin Class UOWSPlayerControllerComponent Function GetCharacterStatuses
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Character Statuses\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Character Statuses" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetCharacterStatuses", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetCharacterStatuses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterStatuses();
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetCharacterStatuses

// Begin Class UOWSPlayerControllerComponent Function GetChatGroupsForPlayer
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Chat Groups for Player\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Chat Groups for Player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetChatGroupsForPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetChatGroupsForPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChatGroupsForPlayer();
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetChatGroupsForPlayer

// Begin Class UOWSPlayerControllerComponent Function GetCustomCharacterData
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics
{
	struct OWSPlayerControllerComponent_eventGetCustomCharacterData_Parms
	{
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Custom Character Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Custom Character Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetCustomCharacterData_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::OWSPlayerControllerComponent_eventGetCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::OWSPlayerControllerComponent_eventGetCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetCustomCharacterData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomCharacterData(Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetCustomCharacterData

// Begin Class UOWSPlayerControllerComponent Function GetOWSPlayerState
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics
{
	struct OWSPlayerControllerComponent_eventGetOWSPlayerState_Parms
	{
		AOWSPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetOWSPlayerState_Parms, ReturnValue), Z_Construct_UClass_AOWSPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetOWSPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::OWSPlayerControllerComponent_eventGetOWSPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::OWSPlayerControllerComponent_eventGetOWSPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetOWSPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSPlayerState**)Z_Param__Result=P_THIS->GetOWSPlayerState();
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetOWSPlayerState

// Begin Class UOWSPlayerControllerComponent Function GetPlayerGroupsCharacterIsIn
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics
{
	struct OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		int32 PlayerGroupTypeID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Player Groups Character is In\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Groups Character is In" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroupTypeID = { "PlayerGroupTypeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms, PlayerGroupTypeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroupTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetPlayerGroupsCharacterIsIn", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::OWSPlayerControllerComponent_eventGetPlayerGroupsCharacterIsIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetPlayerGroupsCharacterIsIn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerGroupTypeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerGroupsCharacterIsIn(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_PlayerGroupTypeID);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetPlayerGroupsCharacterIsIn

// Begin Class UOWSPlayerControllerComponent Function GetZoneServerToTravelTo
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics
{
	struct OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms
	{
		FString CharacterName;
		TEnumAsByte<ERPGSchemeToChooseMap::SchemeToChooseMap> SelectedSchemeToChooseMap;
		int32 WorldServerID;
		FString ZoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Zone Server to Travel To\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Zone Server to Travel To" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedSchemeToChooseMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap = { "SelectedSchemeToChooseMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms, SelectedSchemeToChooseMap), Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap, METADATA_PARAMS(0, nullptr) }; // 395812411
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms, WorldServerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms, ZoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_WorldServerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "GetZoneServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::OWSPlayerControllerComponent_eventGetZoneServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execGetZoneServerToTravelTo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectedSchemeToChooseMap);
	P_GET_PROPERTY(FIntProperty,Z_Param_WorldServerID);
	P_GET_PROPERTY(FStrProperty,Z_Param_ZoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetZoneServerToTravelTo(Z_Param_CharacterName,ERPGSchemeToChooseMap::SchemeToChooseMap(Z_Param_SelectedSchemeToChooseMap),Z_Param_WorldServerID,Z_Param_ZoneName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function GetZoneServerToTravelTo

// Begin Class UOWSPlayerControllerComponent Function PlayerLogout
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics
{
	struct OWSPlayerControllerComponent_eventPlayerLogout_Parms
	{
		FString CharName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Player Logout\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Logout" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventPlayerLogout_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::NewProp_CharName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "PlayerLogout", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::OWSPlayerControllerComponent_eventPlayerLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::OWSPlayerControllerComponent_eventPlayerLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execPlayerLogout)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerLogout(Z_Param_CharName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function PlayerLogout

// Begin Class UOWSPlayerControllerComponent Function RemoveAbilityFromCharacter
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics
{
	struct OWSPlayerControllerComponent_eventRemoveAbilityFromCharacter_Parms
	{
		FString CharName;
		FString AbilityName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove Ability From Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Ability From Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventRemoveAbilityFromCharacter_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventRemoveAbilityFromCharacter_Parms, AbilityName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::NewProp_AbilityName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "RemoveAbilityFromCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::OWSPlayerControllerComponent_eventRemoveAbilityFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::OWSPlayerControllerComponent_eventRemoveAbilityFromCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execRemoveAbilityFromCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbilityName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityFromCharacter(Z_Param_CharName,Z_Param_AbilityName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function RemoveAbilityFromCharacter

// Begin Class UOWSPlayerControllerComponent Function RemoveCharacter
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics
{
	struct OWSPlayerControllerComponent_eventRemoveCharacter_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventRemoveCharacter_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventRemoveCharacter_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "RemoveCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::OWSPlayerControllerComponent_eventRemoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::OWSPlayerControllerComponent_eventRemoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execRemoveCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function RemoveCharacter

// Begin Class UOWSPlayerControllerComponent Function SaveAllPlayerData
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Save All Player Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save All Player Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "SaveAllPlayerData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execSaveAllPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAllPlayerData();
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function SaveAllPlayerData

// Begin Class UOWSPlayerControllerComponent Function SavePlayerLocation
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Save Player Location\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save Player Location" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "SavePlayerLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execSavePlayerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePlayerLocation();
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function SavePlayerLocation

// Begin Class UOWSPlayerControllerComponent Function SetSelectedCharacterAndConnectToLastZone
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics
{
	struct OWSPlayerControllerComponent_eventSetSelectedCharacterAndConnectToLastZone_Parms
	{
		FString UserSessionGUID;
		FString SelectedCharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set Selected Character And Connect to Last Zone\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Selected Character And Connect to Last Zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedCharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventSetSelectedCharacterAndConnectToLastZone_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_SelectedCharacterName = { "SelectedCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventSetSelectedCharacterAndConnectToLastZone_Parms, SelectedCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_SelectedCharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "SetSelectedCharacterAndConnectToLastZone", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::OWSPlayerControllerComponent_eventSetSelectedCharacterAndConnectToLastZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::OWSPlayerControllerComponent_eventSetSelectedCharacterAndConnectToLastZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execSetSelectedCharacterAndConnectToLastZone)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedCharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedCharacterAndConnectToLastZone(Z_Param_UserSessionGUID,Z_Param_SelectedCharacterName);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function SetSelectedCharacterAndConnectToLastZone

// Begin Class UOWSPlayerControllerComponent Function TravelToMap
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics
{
	struct OWSPlayerControllerComponent_eventTravelToMap_Parms
	{
		FString URL;
		bool SeamlessTravel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Travel methods\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Travel methods" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeamlessTravel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_SeamlessTravel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SeamlessTravel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
void Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_SeamlessTravel_SetBit(void* Obj)
{
	((OWSPlayerControllerComponent_eventTravelToMap_Parms*)Obj)->SeamlessTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_SeamlessTravel = { "SeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerControllerComponent_eventTravelToMap_Parms), &Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_SeamlessTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeamlessTravel_MetaData), NewProp_SeamlessTravel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::NewProp_SeamlessTravel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "TravelToMap", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::OWSPlayerControllerComponent_eventTravelToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::OWSPlayerControllerComponent_eventTravelToMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execTravelToMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_UBOOL(Z_Param_SeamlessTravel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TravelToMap(Z_Param_URL,Z_Param_SeamlessTravel);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function TravelToMap

// Begin Class UOWSPlayerControllerComponent Function TravelToMap2
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics
{
	struct OWSPlayerControllerComponent_eventTravelToMap2_Parms
	{
		FString ServerAndPort;
		float X;
		float Y;
		float Z;
		float RX;
		float RY;
		float RZ;
		FString PlayerName;
		bool SeamlessTravel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAndPort_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RY_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RZ_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeamlessTravel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAndPort;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RZ;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static void NewProp_SeamlessTravel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SeamlessTravel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, ServerAndPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAndPort_MetaData), NewProp_ServerAndPort_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RX = { "RX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, RX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RX_MetaData), NewProp_RX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RY = { "RY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, RY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RY_MetaData), NewProp_RY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RZ = { "RZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, RZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RZ_MetaData), NewProp_RZ_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventTravelToMap2_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
void Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_SeamlessTravel_SetBit(void* Obj)
{
	((OWSPlayerControllerComponent_eventTravelToMap2_Parms*)Obj)->SeamlessTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_SeamlessTravel = { "SeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerControllerComponent_eventTravelToMap2_Parms), &Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_SeamlessTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeamlessTravel_MetaData), NewProp_SeamlessTravel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_ServerAndPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_RZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::NewProp_SeamlessTravel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "TravelToMap2", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::OWSPlayerControllerComponent_eventTravelToMap2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::OWSPlayerControllerComponent_eventTravelToMap2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execTravelToMap2)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerAndPort);
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RZ);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_UBOOL(Z_Param_SeamlessTravel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TravelToMap2(Z_Param_ServerAndPort,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RX,Z_Param_RY,Z_Param_RZ,Z_Param_PlayerName,Z_Param_SeamlessTravel);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function TravelToMap2

// Begin Class UOWSPlayerControllerComponent Function UpdateAbilityOnCharacter
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics
{
	struct OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms
	{
		FString CharName;
		FString AbilityName;
		int32 AbilityLevel;
		FString CustomJSON;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Ability On Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Ability On Character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms, CharName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms, AbilityName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_CustomJSON = { "CustomJSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms, CustomJSON), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::NewProp_CustomJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "UpdateAbilityOnCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::OWSPlayerControllerComponent_eventUpdateAbilityOnCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execUpdateAbilityOnCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbilityName);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomJSON);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAbilityOnCharacter(Z_Param_CharName,Z_Param_AbilityName,Z_Param_AbilityLevel,Z_Param_CustomJSON);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function UpdateAbilityOnCharacter

// Begin Class UOWSPlayerControllerComponent Function UpdateCharacterStats
struct Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics
{
	struct OWSPlayerControllerComponent_eventUpdateCharacterStats_Parms
	{
		FString JSONString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Character Stats\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Character Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerControllerComponent_eventUpdateCharacterStats_Parms, JSONString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::NewProp_JSONString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSPlayerControllerComponent, nullptr, "UpdateCharacterStats", nullptr, nullptr, Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::OWSPlayerControllerComponent_eventUpdateCharacterStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::OWSPlayerControllerComponent_eventUpdateCharacterStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSPlayerControllerComponent::execUpdateCharacterStats)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCharacterStats(Z_Param_JSONString);
	P_NATIVE_END;
}
// End Class UOWSPlayerControllerComponent Function UpdateCharacterStats

// Begin Class UOWSPlayerControllerComponent
void UOWSPlayerControllerComponent::StaticRegisterNativesUOWSPlayerControllerComponent()
{
	UClass* Class = UOWSPlayerControllerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAbilityToCharacter", &UOWSPlayerControllerComponent::execAddAbilityToCharacter },
		{ "AddOrUpdateCustomCharacterData", &UOWSPlayerControllerComponent::execAddOrUpdateCustomCharacterData },
		{ "CreateCharacter", &UOWSPlayerControllerComponent::execCreateCharacter },
		{ "CreateCharacterUsingDefaultCharacterValues", &UOWSPlayerControllerComponent::execCreateCharacterUsingDefaultCharacterValues },
		{ "GetAbilityBars", &UOWSPlayerControllerComponent::execGetAbilityBars },
		{ "GetAllCharacters", &UOWSPlayerControllerComponent::execGetAllCharacters },
		{ "GetCharacterAbilities", &UOWSPlayerControllerComponent::execGetCharacterAbilities },
		{ "GetCharacterDataAndCustomData", &UOWSPlayerControllerComponent::execGetCharacterDataAndCustomData },
		{ "GetCharacterStats", &UOWSPlayerControllerComponent::execGetCharacterStats },
		{ "GetCharacterStatuses", &UOWSPlayerControllerComponent::execGetCharacterStatuses },
		{ "GetChatGroupsForPlayer", &UOWSPlayerControllerComponent::execGetChatGroupsForPlayer },
		{ "GetCustomCharacterData", &UOWSPlayerControllerComponent::execGetCustomCharacterData },
		{ "GetOWSPlayerState", &UOWSPlayerControllerComponent::execGetOWSPlayerState },
		{ "GetPlayerGroupsCharacterIsIn", &UOWSPlayerControllerComponent::execGetPlayerGroupsCharacterIsIn },
		{ "GetZoneServerToTravelTo", &UOWSPlayerControllerComponent::execGetZoneServerToTravelTo },
		{ "PlayerLogout", &UOWSPlayerControllerComponent::execPlayerLogout },
		{ "RemoveAbilityFromCharacter", &UOWSPlayerControllerComponent::execRemoveAbilityFromCharacter },
		{ "RemoveCharacter", &UOWSPlayerControllerComponent::execRemoveCharacter },
		{ "SaveAllPlayerData", &UOWSPlayerControllerComponent::execSaveAllPlayerData },
		{ "SavePlayerLocation", &UOWSPlayerControllerComponent::execSavePlayerLocation },
		{ "SetSelectedCharacterAndConnectToLastZone", &UOWSPlayerControllerComponent::execSetSelectedCharacterAndConnectToLastZone },
		{ "TravelToMap", &UOWSPlayerControllerComponent::execTravelToMap },
		{ "TravelToMap2", &UOWSPlayerControllerComponent::execTravelToMap2 },
		{ "UpdateAbilityOnCharacter", &UOWSPlayerControllerComponent::execUpdateAbilityOnCharacter },
		{ "UpdateCharacterStats", &UOWSPlayerControllerComponent::execUpdateCharacterStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSPlayerControllerComponent);
UClass* Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister()
{
	return UOWSPlayerControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UOWSPlayerControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OWSPlayerControllerComponent.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSAPICustomerKey_MetaData[] = {
		{ "Category", "OWSPlayerControllerComponent" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2APIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2InstanceManagementAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2CharacterPersistenceAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSEncryptionKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerControllerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSAPICustomerKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2APIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2InstanceManagementAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2CharacterPersistenceAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSEncryptionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_AddAbilityToCharacter, "AddAbilityToCharacter" }, // 2747289655
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_AddOrUpdateCustomCharacterData, "AddOrUpdateCustomCharacterData" }, // 4138022723
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacter, "CreateCharacter" }, // 717567350
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_CreateCharacterUsingDefaultCharacterValues, "CreateCharacterUsingDefaultCharacterValues" }, // 3805030911
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAbilityBars, "GetAbilityBars" }, // 2121331758
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetAllCharacters, "GetAllCharacters" }, // 1978356983
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterAbilities, "GetCharacterAbilities" }, // 146179415
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterDataAndCustomData, "GetCharacterDataAndCustomData" }, // 1753240234
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStats, "GetCharacterStats" }, // 1353186731
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCharacterStatuses, "GetCharacterStatuses" }, // 2567316831
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetChatGroupsForPlayer, "GetChatGroupsForPlayer" }, // 3202301439
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetCustomCharacterData, "GetCustomCharacterData" }, // 29497243
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetOWSPlayerState, "GetOWSPlayerState" }, // 994868969
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetPlayerGroupsCharacterIsIn, "GetPlayerGroupsCharacterIsIn" }, // 1411027195
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_GetZoneServerToTravelTo, "GetZoneServerToTravelTo" }, // 1695723921
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_PlayerLogout, "PlayerLogout" }, // 2040757635
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveAbilityFromCharacter, "RemoveAbilityFromCharacter" }, // 3048395377
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_RemoveCharacter, "RemoveCharacter" }, // 3346371273
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_SaveAllPlayerData, "SaveAllPlayerData" }, // 2461553233
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_SavePlayerLocation, "SavePlayerLocation" }, // 973455662
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_SetSelectedCharacterAndConnectToLastZone, "SetSelectedCharacterAndConnectToLastZone" }, // 3567231854
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap, "TravelToMap" }, // 1685398281
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_TravelToMap2, "TravelToMap2" }, // 1904006098
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateAbilityOnCharacter, "UpdateAbilityOnCharacter" }, // 3268213197
		{ &Z_Construct_UFunction_UOWSPlayerControllerComponent_UpdateCharacterStats, "UpdateCharacterStats" }, // 2013118011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSPlayerControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWSAPICustomerKey = { "OWSAPICustomerKey", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSPlayerControllerComponent, OWSAPICustomerKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSAPICustomerKey_MetaData), NewProp_OWSAPICustomerKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2APIPath = { "OWS2APIPath", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSPlayerControllerComponent, OWS2APIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2APIPath_MetaData), NewProp_OWS2APIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2InstanceManagementAPIPath = { "OWS2InstanceManagementAPIPath", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSPlayerControllerComponent, OWS2InstanceManagementAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2InstanceManagementAPIPath_MetaData), NewProp_OWS2InstanceManagementAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2CharacterPersistenceAPIPath = { "OWS2CharacterPersistenceAPIPath", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSPlayerControllerComponent, OWS2CharacterPersistenceAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2CharacterPersistenceAPIPath_MetaData), NewProp_OWS2CharacterPersistenceAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWSEncryptionKey = { "OWSEncryptionKey", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSPlayerControllerComponent, OWSEncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSEncryptionKey_MetaData), NewProp_OWSEncryptionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWSAPICustomerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2APIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2InstanceManagementAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWS2CharacterPersistenceAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::NewProp_OWSEncryptionKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::ClassParams = {
	&UOWSPlayerControllerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSPlayerControllerComponent()
{
	if (!Z_Registration_Info_UClass_UOWSPlayerControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSPlayerControllerComponent.OuterSingleton, Z_Construct_UClass_UOWSPlayerControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSPlayerControllerComponent.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSPlayerControllerComponent>()
{
	return UOWSPlayerControllerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSPlayerControllerComponent);
UOWSPlayerControllerComponent::~UOWSPlayerControllerComponent() {}
// End Class UOWSPlayerControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSPlayerControllerComponent, UOWSPlayerControllerComponent::StaticClass, TEXT("UOWSPlayerControllerComponent"), &Z_Registration_Info_UClass_UOWSPlayerControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSPlayerControllerComponent), 2474038348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_1133438788(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
