// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSPlayerController.h"
#include "OWSPlugin/Public/OWS2API.h"
#include "OWSPlugin/Public/OWSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerController();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerController_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChatGroup();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterDataStruct();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerGroup();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUserCharacter();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSPlayerController Function AddItemToLocalMeshItemsMap
struct Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics
{
	struct OWSPlayerController_eventAddItemToLocalMeshItemsMap_Parms
	{
		FString ItemName;
		int32 ItemMeshID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemMeshID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddItemToLocalMeshItemsMap_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemMeshID = { "ItemMeshID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddItemToLocalMeshItemsMap_Parms, ItemMeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMeshID_MetaData), NewProp_ItemMeshID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemMeshID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "AddItemToLocalMeshItemsMap", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::OWSPlayerController_eventAddItemToLocalMeshItemsMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::OWSPlayerController_eventAddItemToLocalMeshItemsMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execAddItemToLocalMeshItemsMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemMeshID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToLocalMeshItemsMap(Z_Param_ItemName,Z_Param_ItemMeshID);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function AddItemToLocalMeshItemsMap

// Begin Class AOWSPlayerController Function AddOrUpdateCosmeticCustomCharacterData
struct Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics
{
	struct OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString CustomFieldName;
		FString CustomValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add Cosmetic Character Custom Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Cosmetic Character Custom Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms, CustomFieldName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CustomValue = { "CustomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms, CustomValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CustomFieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::NewProp_CustomValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "AddOrUpdateCosmeticCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::OWSPlayerController_eventAddOrUpdateCosmeticCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execAddOrUpdateCosmeticCustomCharacterData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomFieldName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_CustomFieldName,Z_Param_CustomValue);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function AddOrUpdateCosmeticCustomCharacterData

// Begin Class AOWSPlayerController Function AddPlayerToGroup
struct Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics
{
	struct OWSPlayerController_eventAddPlayerToGroup_Parms
	{
		FString PlayerGroupName;
		TEnumAsByte<ERPGPlayerGroupType::PlayerGroupType> GroupType;
		FString CharacterNameToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add Player to Group\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Player to Group" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerGroupName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_PlayerGroupName = { "PlayerGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddPlayerToGroup_Parms, PlayerGroupName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_GroupType = { "GroupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddPlayerToGroup_Parms, GroupType), Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType, METADATA_PARAMS(0, nullptr) }; // 3882137785
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_CharacterNameToAdd = { "CharacterNameToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventAddPlayerToGroup_Parms, CharacterNameToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_PlayerGroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_GroupType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::NewProp_CharacterNameToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "AddPlayerToGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::OWSPlayerController_eventAddPlayerToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::OWSPlayerController_eventAddPlayerToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execAddPlayerToGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerGroupName);
	P_GET_PROPERTY(FByteProperty,Z_Param_GroupType);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterNameToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerToGroup(Z_Param_PlayerGroupName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType),Z_Param_CharacterNameToAdd);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function AddPlayerToGroup

// Begin Class AOWSPlayerController Function ClearSelectedCharacter
struct Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ClearSelectedCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execClearSelectedCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSelectedCharacter();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function ClearSelectedCharacter

// Begin Class AOWSPlayerController Function ClearSelectionOnCharacter
struct Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics
{
	struct OWSPlayerController_eventClearSelectionOnCharacter_Parms
	{
		AOWSCharacter* RPGCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::NewProp_RPGCharacter = { "RPGCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventClearSelectionOnCharacter_Parms, RPGCharacter), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::NewProp_RPGCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ClearSelectionOnCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::OWSPlayerController_eventClearSelectionOnCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::OWSPlayerController_eventClearSelectionOnCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execClearSelectionOnCharacter)
{
	P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSelectionOnCharacter(Z_Param_RPGCharacter);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function ClearSelectionOnCharacter

// Begin Class AOWSPlayerController Function Client_AddItemToLocalMeshItemsMap
struct OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms
{
	FString ItemName;
	int32 ItemMeshID;
};
static const FName NAME_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap = FName(TEXT("Client_AddItemToLocalMeshItemsMap"));
void AOWSPlayerController::Client_AddItemToLocalMeshItemsMap(const FString& ItemName, const int32 ItemMeshID)
{
	OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms Parms;
	Parms.ItemName=ItemName;
	Parms.ItemMeshID=ItemMeshID;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemMeshID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemMeshID = { "ItemMeshID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms, ItemMeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMeshID_MetaData), NewProp_ItemMeshID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::NewProp_ItemMeshID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Client_AddItemToLocalMeshItemsMap", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::PropPointers), sizeof(OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventClient_AddItemToLocalMeshItemsMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execClient_AddItemToLocalMeshItemsMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemMeshID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_AddItemToLocalMeshItemsMap_Implementation(Z_Param_ItemName,Z_Param_ItemMeshID);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Client_AddItemToLocalMeshItemsMap

// Begin Class AOWSPlayerController Function CreateCharacter
struct Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics
{
	struct OWSPlayerController_eventCreateCharacter_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString ClassName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Character\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacter_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacter_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacter_Parms, ClassName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::NewProp_ClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "CreateCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::OWSPlayerController_eventCreateCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::OWSPlayerController_eventCreateCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_CreateCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_CreateCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execCreateCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ClassName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_ClassName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function CreateCharacter

// Begin Class AOWSPlayerController Function CreateCharacterUsingDefaultCharacterValues
struct Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics
{
	struct OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		FString DefaultSetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Create Character Using Default Character Values\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName = { "DefaultSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms, DefaultSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "CreateCharacterUsingDefaultCharacterValues", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::OWSPlayerController_eventCreateCharacterUsingDefaultCharacterValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execCreateCharacterUsingDefaultCharacterValues)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateCharacterUsingDefaultCharacterValues(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_DefaultSetName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function CreateCharacterUsingDefaultCharacterValues

// Begin Class AOWSPlayerController Function ErrorAddAbilityToCharacter
struct OWSPlayerController_eventErrorAddAbilityToCharacter_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorAddAbilityToCharacter = FName(TEXT("ErrorAddAbilityToCharacter"));
void AOWSPlayerController::ErrorAddAbilityToCharacter(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorAddAbilityToCharacter_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorAddAbilityToCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorAddAbilityToCharacter_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorAddAbilityToCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorAddAbilityToCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorAddAbilityToCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorAddAbilityToCharacter

// Begin Class AOWSPlayerController Function ErrorCreateCharacter
struct OWSPlayerController_eventErrorCreateCharacter_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorCreateCharacter = FName(TEXT("ErrorCreateCharacter"));
void AOWSPlayerController::ErrorCreateCharacter(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorCreateCharacter_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorCreateCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorCreateCharacter_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorCreateCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorCreateCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorCreateCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorCreateCharacter

// Begin Class AOWSPlayerController Function ErrorCreateCharacterUsingDefaultCharacterValues
struct OWSPlayerController_eventErrorCreateCharacterUsingDefaultCharacterValues_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues = FName(TEXT("ErrorCreateCharacterUsingDefaultCharacterValues"));
void AOWSPlayerController::ErrorCreateCharacterUsingDefaultCharacterValues(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorCreateCharacterUsingDefaultCharacterValues_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorCreateCharacterUsingDefaultCharacterValues_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorCreateCharacterUsingDefaultCharacterValues", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorCreateCharacterUsingDefaultCharacterValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorCreateCharacterUsingDefaultCharacterValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorCreateCharacterUsingDefaultCharacterValues

// Begin Class AOWSPlayerController Function ErrorGetAllCharacters
struct OWSPlayerController_eventErrorGetAllCharacters_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorGetAllCharacters = FName(TEXT("ErrorGetAllCharacters"));
void AOWSPlayerController::ErrorGetAllCharacters(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorGetAllCharacters_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorGetAllCharacters);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorGetAllCharacters_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorGetAllCharacters", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorGetAllCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorGetAllCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorGetAllCharacters

// Begin Class AOWSPlayerController Function ErrorGetCharacterDataAndCustomData
struct OWSPlayerController_eventErrorGetCharacterDataAndCustomData_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorGetCharacterDataAndCustomData = FName(TEXT("ErrorGetCharacterDataAndCustomData"));
void AOWSPlayerController::ErrorGetCharacterDataAndCustomData(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorGetCharacterDataAndCustomData_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorGetCharacterDataAndCustomData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorGetCharacterDataAndCustomData_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorGetCharacterDataAndCustomData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorGetCharacterDataAndCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorGetCharacterDataAndCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorGetCharacterDataAndCustomData

// Begin Class AOWSPlayerController Function ErrorGetChatGroupsForPlayer
struct OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorGetChatGroupsForPlayer = FName(TEXT("ErrorGetChatGroupsForPlayer"));
void AOWSPlayerController::ErrorGetChatGroupsForPlayer(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorGetChatGroupsForPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorGetChatGroupsForPlayer", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorGetChatGroupsForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorGetChatGroupsForPlayer

// Begin Class AOWSPlayerController Function ErrorGetCosmeticCustomCharacterData
struct OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData = FName(TEXT("ErrorGetCosmeticCustomCharacterData"));
void AOWSPlayerController::ErrorGetCosmeticCustomCharacterData(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorGetCosmeticCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorGetCosmeticCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorGetCosmeticCustomCharacterData

// Begin Class AOWSPlayerController Function ErrorGetPlayerGroupsCharacterIsIn
struct OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn = FName(TEXT("ErrorGetPlayerGroupsCharacterIsIn"));
void AOWSPlayerController::ErrorGetPlayerGroupsCharacterIsIn(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Groups" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorGetPlayerGroupsCharacterIsIn", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorGetPlayerGroupsCharacterIsIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorGetPlayerGroupsCharacterIsIn

// Begin Class AOWSPlayerController Function ErrorIsPlayerOnline
struct OWSPlayerController_eventErrorIsPlayerOnline_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorIsPlayerOnline = FName(TEXT("ErrorIsPlayerOnline"));
void AOWSPlayerController::ErrorIsPlayerOnline(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorIsPlayerOnline_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorIsPlayerOnline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorIsPlayerOnline_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorIsPlayerOnline", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorIsPlayerOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorIsPlayerOnline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorIsPlayerOnline

// Begin Class AOWSPlayerController Function ErrorLaunchDungeon
struct OWSPlayerController_eventErrorLaunchDungeon_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorLaunchDungeon = FName(TEXT("ErrorLaunchDungeon"));
void AOWSPlayerController::ErrorLaunchDungeon(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorLaunchDungeon_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorLaunchDungeon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorLaunchDungeon_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorLaunchDungeon", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorLaunchDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorLaunchDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorLaunchDungeon

// Begin Class AOWSPlayerController Function ErrorLogout
struct OWSPlayerController_eventErrorLogout_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorLogout = FName(TEXT("ErrorLogout"));
void AOWSPlayerController::ErrorLogout(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorLogout_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorLogout);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorLogout_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorLogout", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorLogout

// Begin Class AOWSPlayerController Function ErrorMapServerToTravelTo
struct OWSPlayerController_eventErrorMapServerToTravelTo_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorMapServerToTravelTo = FName(TEXT("ErrorMapServerToTravelTo"));
void AOWSPlayerController::ErrorMapServerToTravelTo(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorMapServerToTravelTo_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorMapServerToTravelTo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorMapServerToTravelTo_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorMapServerToTravelTo

// Begin Class AOWSPlayerController Function ErrorPlayerLogout
struct OWSPlayerController_eventErrorPlayerLogout_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorPlayerLogout = FName(TEXT("ErrorPlayerLogout"));
void AOWSPlayerController::ErrorPlayerLogout(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorPlayerLogout_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorPlayerLogout);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorPlayerLogout_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorPlayerLogout", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorPlayerLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorPlayerLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorPlayerLogout

// Begin Class AOWSPlayerController Function ErrorRemoveAbilityFromCharacter
struct OWSPlayerController_eventErrorRemoveAbilityFromCharacter_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorRemoveAbilityFromCharacter = FName(TEXT("ErrorRemoveAbilityFromCharacter"));
void AOWSPlayerController::ErrorRemoveAbilityFromCharacter(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorRemoveAbilityFromCharacter_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorRemoveAbilityFromCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorRemoveAbilityFromCharacter_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorRemoveAbilityFromCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorRemoveAbilityFromCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorRemoveAbilityFromCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorRemoveAbilityFromCharacter

// Begin Class AOWSPlayerController Function ErrorRemoveCharacter
struct OWSPlayerController_eventErrorRemoveCharacter_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorRemoveCharacter = FName(TEXT("ErrorRemoveCharacter"));
void AOWSPlayerController::ErrorRemoveCharacter(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorRemoveCharacter_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorRemoveCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorRemoveCharacter_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorRemoveCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorRemoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorRemoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorRemoveCharacter

// Begin Class AOWSPlayerController Function ErrorUpdateAbilityOnCharacter
struct OWSPlayerController_eventErrorUpdateAbilityOnCharacter_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSPlayerController_ErrorUpdateAbilityOnCharacter = FName(TEXT("ErrorUpdateAbilityOnCharacter"));
void AOWSPlayerController::ErrorUpdateAbilityOnCharacter(const FString& ErrorMsg)
{
	OWSPlayerController_eventErrorUpdateAbilityOnCharacter_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_ErrorUpdateAbilityOnCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventErrorUpdateAbilityOnCharacter_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "ErrorUpdateAbilityOnCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventErrorUpdateAbilityOnCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventErrorUpdateAbilityOnCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function ErrorUpdateAbilityOnCharacter

// Begin Class AOWSPlayerController Function GetAllCharacters
struct Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics
{
	struct OWSPlayerController_eventGetAllCharacters_Parms
	{
		FString UserSessionGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get All Characters for UserSessionGUID\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All Characters for UserSessionGUID" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetAllCharacters_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetAllCharacters", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::OWSPlayerController_eventGetAllCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::OWSPlayerController_eventGetAllCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetAllCharacters)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllCharacters(Z_Param_UserSessionGUID);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetAllCharacters

// Begin Class AOWSPlayerController Function GetChatGroupsForPlayer
struct Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Chat Groups for Player\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Chat Groups for Player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetChatGroupsForPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetChatGroupsForPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetChatGroupsForPlayer();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetChatGroupsForPlayer

// Begin Class AOWSPlayerController Function GetCosmeticCustomCharacterData
struct Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics
{
	struct OWSPlayerController_eventGetCosmeticCustomCharacterData_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Cosmetic Character Custom Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Cosmetic Character Custom Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetCosmeticCustomCharacterData_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetCosmeticCustomCharacterData_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetCosmeticCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::OWSPlayerController_eventGetCosmeticCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::OWSPlayerController_eventGetCosmeticCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetCosmeticCustomCharacterData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCosmeticCustomCharacterData(Z_Param_UserSessionGUID,Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetCosmeticCustomCharacterData

// Begin Class AOWSPlayerController Function GetMapServerToTravelTo
struct Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics
{
	struct OWSPlayerController_eventGetMapServerToTravelTo_Parms
	{
		FString ZoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Map Server to Travel To\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Map Server to Travel To" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetMapServerToTravelTo_Parms, ZoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::OWSPlayerController_eventGetMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::OWSPlayerController_eventGetMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetMapServerToTravelTo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ZoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMapServerToTravelTo(Z_Param_ZoneName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetMapServerToTravelTo

// Begin Class AOWSPlayerController Function GetOWSPlayerState
struct Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics
{
	struct OWSPlayerController_eventGetOWSPlayerState_Parms
	{
		AOWSPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player State" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetOWSPlayerState_Parms, ReturnValue), Z_Construct_UClass_AOWSPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetOWSPlayerState", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::OWSPlayerController_eventGetOWSPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::OWSPlayerController_eventGetOWSPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetOWSPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSPlayerState**)Z_Param__Result=P_THIS->GetOWSPlayerState();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetOWSPlayerState

// Begin Class AOWSPlayerController Function GetPlayerGroupsCharacterIsIn
struct Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics
{
	struct OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
		int32 PlayerGroupTypeID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Player Groups Character Is In\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Player Groups Character Is In" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroupTypeID = { "PlayerGroupTypeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms, PlayerGroupTypeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroupTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetPlayerGroupsCharacterIsIn", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::OWSPlayerController_eventGetPlayerGroupsCharacterIsIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetPlayerGroupsCharacterIsIn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerGroupTypeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPlayerGroupsCharacterIsIn(Z_Param_UserSessionGUID,Z_Param_CharacterName,Z_Param_PlayerGroupTypeID);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetPlayerGroupsCharacterIsIn

// Begin Class AOWSPlayerController Function GetPredictionTime
struct Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics
{
	struct OWSPlayerController_eventGetPredictionTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Prediction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return amount of time to tick or simulate to make up for network lag */" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return amount of time to tick or simulate to make up for network lag" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventGetPredictionTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "GetPredictionTime", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::OWSPlayerController_eventGetPredictionTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::OWSPlayerController_eventGetPredictionTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execGetPredictionTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPredictionTime();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function GetPredictionTime

// Begin Class AOWSPlayerController Function IsPlayerOnline
struct Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics
{
	struct OWSPlayerController_eventIsPlayerOnline_Parms
	{
		FString PlayerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is Player Online?\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Player Online?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventIsPlayerOnline_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "IsPlayerOnline", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::OWSPlayerController_eventIsPlayerOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::OWSPlayerController_eventIsPlayerOnline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execIsPlayerOnline)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IsPlayerOnline(Z_Param_PlayerName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function IsPlayerOnline

// Begin Class AOWSPlayerController Function LaunchDungeon
struct Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics
{
	struct OWSPlayerController_eventLaunchDungeon_Parms
	{
		FString MapName;
		TEnumAsByte<ERPGPlayerGroupType::PlayerGroupType> GroupType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Launch Dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Launch Dungeon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLaunchDungeon_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::NewProp_GroupType = { "GroupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLaunchDungeon_Parms, GroupType), Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType, METADATA_PARAMS(0, nullptr) }; // 3882137785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::NewProp_GroupType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "LaunchDungeon", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::OWSPlayerController_eventLaunchDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::OWSPlayerController_eventLaunchDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execLaunchDungeon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_GET_PROPERTY(FByteProperty,Z_Param_GroupType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchDungeon(Z_Param_MapName,ERPGPlayerGroupType::PlayerGroupType(Z_Param_GroupType));
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function LaunchDungeon

// Begin Class AOWSPlayerController Function LoadTextureReference
struct Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics
{
	struct OWSPlayerController_eventLoadTextureReference_Parms
	{
		FString TexturePath;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TexturePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLoadTextureReference_Parms, TexturePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePath_MetaData), NewProp_TexturePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLoadTextureReference_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::NewProp_TexturePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "LoadTextureReference", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::OWSPlayerController_eventLoadTextureReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::OWSPlayerController_eventLoadTextureReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execLoadTextureReference)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TexturePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->LoadTextureReference(Z_Param_TexturePath);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function LoadTextureReference

// Begin Class AOWSPlayerController Function Logout
struct Z_Construct_UFunction_AOWSPlayerController_Logout_Statics
{
	struct OWSPlayerController_eventLogout_Parms
	{
		FString UserSessionGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Logout\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Logout" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLogout_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Logout", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::OWSPlayerController_eventLogout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::OWSPlayerController_eventLogout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execLogout)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout(Z_Param_UserSessionGUID);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Logout

// Begin Class AOWSPlayerController Function NotifyAddAbilityToCharacter
static const FName NAME_AOWSPlayerController_NotifyAddAbilityToCharacter = FName(TEXT("NotifyAddAbilityToCharacter"));
void AOWSPlayerController::NotifyAddAbilityToCharacter()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyAddAbilityToCharacter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add Ability to Character Events\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Ability to Character Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyAddAbilityToCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyAddAbilityToCharacter

// Begin Class AOWSPlayerController Function NotifyAddPlayerToGroup
struct OWSPlayerController_eventNotifyAddPlayerToGroup_Parms
{
	FString CharacterNameAddedToGroup;
};
static const FName NAME_AOWSPlayerController_NotifyAddPlayerToGroup = FName(TEXT("NotifyAddPlayerToGroup"));
void AOWSPlayerController::NotifyAddPlayerToGroup(const FString& CharacterNameAddedToGroup)
{
	OWSPlayerController_eventNotifyAddPlayerToGroup_Parms Parms;
	Parms.CharacterNameAddedToGroup=CharacterNameAddedToGroup;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyAddPlayerToGroup);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groups" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameAddedToGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameAddedToGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::NewProp_CharacterNameAddedToGroup = { "CharacterNameAddedToGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyAddPlayerToGroup_Parms, CharacterNameAddedToGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameAddedToGroup_MetaData), NewProp_CharacterNameAddedToGroup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::NewProp_CharacterNameAddedToGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyAddPlayerToGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyAddPlayerToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyAddPlayerToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyAddPlayerToGroup

// Begin Class AOWSPlayerController Function NotifyCreateCharacter
struct OWSPlayerController_eventNotifyCreateCharacter_Parms
{
	FCreateCharacter CreateCharacterData;
};
static const FName NAME_AOWSPlayerController_NotifyCreateCharacter = FName(TEXT("NotifyCreateCharacter"));
void AOWSPlayerController::NotifyCreateCharacter(FCreateCharacter const& CreateCharacterData)
{
	OWSPlayerController_eventNotifyCreateCharacter_Parms Parms;
	Parms.CreateCharacterData=CreateCharacterData;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyCreateCharacter);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateCharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::NewProp_CreateCharacterData = { "CreateCharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyCreateCharacter_Parms, CreateCharacterData), Z_Construct_UScriptStruct_FCreateCharacter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateCharacterData_MetaData), NewProp_CreateCharacterData_MetaData) }; // 4183928516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::NewProp_CreateCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyCreateCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyCreateCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyCreateCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyCreateCharacter

// Begin Class AOWSPlayerController Function NotifyCreateCharacterUsingDefaultCharacterValues
static const FName NAME_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues = FName(TEXT("NotifyCreateCharacterUsingDefaultCharacterValues"));
void AOWSPlayerController::NotifyCreateCharacterUsingDefaultCharacterValues()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyCreateCharacterUsingDefaultCharacterValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyCreateCharacterUsingDefaultCharacterValues

// Begin Class AOWSPlayerController Function NotifyGetAllCharacters
struct OWSPlayerController_eventNotifyGetAllCharacters_Parms
{
	TArray<FUserCharacter> UserCharacters;
};
static const FName NAME_AOWSPlayerController_NotifyGetAllCharacters = FName(TEXT("NotifyGetAllCharacters"));
void AOWSPlayerController::NotifyGetAllCharacters(TArray<FUserCharacter> const& UserCharacters)
{
	OWSPlayerController_eventNotifyGetAllCharacters_Parms Parms;
	Parms.UserCharacters=UserCharacters;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyGetAllCharacters);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserCharacters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::NewProp_UserCharacters_Inner = { "UserCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserCharacter, METADATA_PARAMS(0, nullptr) }; // 3175432417
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::NewProp_UserCharacters = { "UserCharacters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyGetAllCharacters_Parms, UserCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserCharacters_MetaData), NewProp_UserCharacters_MetaData) }; // 3175432417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::NewProp_UserCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::NewProp_UserCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyGetAllCharacters", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyGetAllCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyGetAllCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyGetAllCharacters

// Begin Class AOWSPlayerController Function NotifyGetCharacterDataAndCustomData
struct OWSPlayerController_eventNotifyGetCharacterDataAndCustomData_Parms
{
	TArray<FCustomCharacterDataStruct> CustomData;
};
static const FName NAME_AOWSPlayerController_NotifyGetCharacterDataAndCustomData = FName(TEXT("NotifyGetCharacterDataAndCustomData"));
void AOWSPlayerController::NotifyGetCharacterDataAndCustomData(TArray<FCustomCharacterDataStruct> const& CustomData)
{
	OWSPlayerController_eventNotifyGetCharacterDataAndCustomData_Parms Parms;
	Parms.CustomData=CustomData;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyGetCharacterDataAndCustomData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Custom Character Data And Custom Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Custom Character Data And Custom Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomCharacterDataStruct, METADATA_PARAMS(0, nullptr) }; // 2876975285
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyGetCharacterDataAndCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) }; // 2876975285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::NewProp_CustomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyGetCharacterDataAndCustomData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyGetCharacterDataAndCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyGetCharacterDataAndCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyGetCharacterDataAndCustomData

// Begin Class AOWSPlayerController Function NotifyGetChatGroupsForPlayer
struct OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms
{
	TArray<FChatGroup> ChatGroups;
};
static const FName NAME_AOWSPlayerController_NotifyGetChatGroupsForPlayer = FName(TEXT("NotifyGetChatGroupsForPlayer"));
void AOWSPlayerController::NotifyGetChatGroupsForPlayer(TArray<FChatGroup> const& ChatGroups)
{
	OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms Parms;
	Parms.ChatGroups=ChatGroups;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyGetChatGroupsForPlayer);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::NewProp_ChatGroups_Inner = { "ChatGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChatGroup, METADATA_PARAMS(0, nullptr) }; // 2084555656
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::NewProp_ChatGroups = { "ChatGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms, ChatGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGroups_MetaData), NewProp_ChatGroups_MetaData) }; // 2084555656
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::NewProp_ChatGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::NewProp_ChatGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyGetChatGroupsForPlayer", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyGetChatGroupsForPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyGetChatGroupsForPlayer

// Begin Class AOWSPlayerController Function NotifyGetCosmeticCustomCharacterData
struct OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms
{
	TArray<FCustomCharacterDataStruct> CustomCharacterData;
};
static const FName NAME_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData = FName(TEXT("NotifyGetCosmeticCustomCharacterData"));
void AOWSPlayerController::NotifyGetCosmeticCustomCharacterData(TArray<FCustomCharacterDataStruct> const& CustomCharacterData)
{
	OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms Parms;
	Parms.CustomCharacterData=CustomCharacterData;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCharacterData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomCharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::NewProp_CustomCharacterData_Inner = { "CustomCharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomCharacterDataStruct, METADATA_PARAMS(0, nullptr) }; // 2876975285
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::NewProp_CustomCharacterData = { "CustomCharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms, CustomCharacterData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterData_MetaData), NewProp_CustomCharacterData_MetaData) }; // 2876975285
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::NewProp_CustomCharacterData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::NewProp_CustomCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyGetCosmeticCustomCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyGetCosmeticCustomCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyGetCosmeticCustomCharacterData

// Begin Class AOWSPlayerController Function NotifyGetPlayerGroupsCharacterIsIn
struct OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms
{
	TArray<FPlayerGroup> PlayerGroups;
};
static const FName NAME_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn = FName(TEXT("NotifyGetPlayerGroupsCharacterIsIn"));
void AOWSPlayerController::NotifyGetPlayerGroupsCharacterIsIn(TArray<FPlayerGroup> const& PlayerGroups)
{
	OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms Parms;
	Parms.PlayerGroups=PlayerGroups;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player Groups" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroups_Inner = { "PlayerGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerGroup, METADATA_PARAMS(0, nullptr) }; // 3053493591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroups = { "PlayerGroups", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms, PlayerGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroups_MetaData), NewProp_PlayerGroups_MetaData) }; // 3053493591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::NewProp_PlayerGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyGetPlayerGroupsCharacterIsIn", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyGetPlayerGroupsCharacterIsIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyGetPlayerGroupsCharacterIsIn

// Begin Class AOWSPlayerController Function NotifyIsPlayerOnline
struct OWSPlayerController_eventNotifyIsPlayerOnline_Parms
{
	bool PlayerIsOnline;
};
static const FName NAME_AOWSPlayerController_NotifyIsPlayerOnline = FName(TEXT("NotifyIsPlayerOnline"));
void AOWSPlayerController::NotifyIsPlayerOnline(bool PlayerIsOnline)
{
	OWSPlayerController_eventNotifyIsPlayerOnline_Parms Parms;
	Parms.PlayerIsOnline=PlayerIsOnline ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyIsPlayerOnline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIsOnline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_PlayerIsOnline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerIsOnline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::NewProp_PlayerIsOnline_SetBit(void* Obj)
{
	((OWSPlayerController_eventNotifyIsPlayerOnline_Parms*)Obj)->PlayerIsOnline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::NewProp_PlayerIsOnline = { "PlayerIsOnline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerController_eventNotifyIsPlayerOnline_Parms), &Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::NewProp_PlayerIsOnline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIsOnline_MetaData), NewProp_PlayerIsOnline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::NewProp_PlayerIsOnline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyIsPlayerOnline", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyIsPlayerOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyIsPlayerOnline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyIsPlayerOnline

// Begin Class AOWSPlayerController Function NotifyLaunchDungeon
struct OWSPlayerController_eventNotifyLaunchDungeon_Parms
{
	FString ServerAndPort;
};
static const FName NAME_AOWSPlayerController_NotifyLaunchDungeon = FName(TEXT("NotifyLaunchDungeon"));
void AOWSPlayerController::NotifyLaunchDungeon(const FString& ServerAndPort)
{
	OWSPlayerController_eventNotifyLaunchDungeon_Parms Parms;
	Parms.ServerAndPort=ServerAndPort;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyLaunchDungeon);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAndPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAndPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyLaunchDungeon_Parms, ServerAndPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAndPort_MetaData), NewProp_ServerAndPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::NewProp_ServerAndPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyLaunchDungeon", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyLaunchDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyLaunchDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyLaunchDungeon

// Begin Class AOWSPlayerController Function NotifyLogout
static const FName NAME_AOWSPlayerController_NotifyLogout = FName(TEXT("NotifyLogout"));
void AOWSPlayerController::NotifyLogout()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyLogout);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyLogout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyLogout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyLogout

// Begin Class AOWSPlayerController Function NotifyMapServerToTravelTo
struct OWSPlayerController_eventNotifyMapServerToTravelTo_Parms
{
	FString ServerAndPort;
};
static const FName NAME_AOWSPlayerController_NotifyMapServerToTravelTo = FName(TEXT("NotifyMapServerToTravelTo"));
void AOWSPlayerController::NotifyMapServerToTravelTo(const FString& ServerAndPort)
{
	OWSPlayerController_eventNotifyMapServerToTravelTo_Parms Parms;
	Parms.ServerAndPort=ServerAndPort;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyMapServerToTravelTo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAndPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAndPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyMapServerToTravelTo_Parms, ServerAndPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAndPort_MetaData), NewProp_ServerAndPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyMapServerToTravelTo

// Begin Class AOWSPlayerController Function NotifyPawnLeavingGame
struct OWSPlayerController_eventNotifyPawnLeavingGame_Parms
{
	const AOWSCharacter* RPGCharacter;
};
static const FName NAME_AOWSPlayerController_NotifyPawnLeavingGame = FName(TEXT("NotifyPawnLeavingGame"));
void AOWSPlayerController::NotifyPawnLeavingGame(const AOWSCharacter* RPGCharacter)
{
	OWSPlayerController_eventNotifyPawnLeavingGame_Parms Parms;
	Parms.RPGCharacter=RPGCharacter;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyPawnLeavingGame);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGCharacter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::NewProp_RPGCharacter = { "RPGCharacter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyPawnLeavingGame_Parms, RPGCharacter), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGCharacter_MetaData), NewProp_RPGCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::NewProp_RPGCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyPawnLeavingGame", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyPawnLeavingGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyPawnLeavingGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyPawnLeavingGame

// Begin Class AOWSPlayerController Function NotifyPlayerLogout
static const FName NAME_AOWSPlayerController_NotifyPlayerLogout = FName(TEXT("NotifyPlayerLogout"));
void AOWSPlayerController::NotifyPlayerLogout()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyPlayerLogout);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyPlayerLogout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyPlayerLogout

// Begin Class AOWSPlayerController Function NotifyRemoveAbilityFromCharacter
static const FName NAME_AOWSPlayerController_NotifyRemoveAbilityFromCharacter = FName(TEXT("NotifyRemoveAbilityFromCharacter"));
void AOWSPlayerController::NotifyRemoveAbilityFromCharacter()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyRemoveAbilityFromCharacter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove Ability from Character Events\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Ability from Character Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyRemoveAbilityFromCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyRemoveAbilityFromCharacter

// Begin Class AOWSPlayerController Function NotifyRemoveCharacter
static const FName NAME_AOWSPlayerController_NotifyRemoveCharacter = FName(TEXT("NotifyRemoveCharacter"));
void AOWSPlayerController::NotifyRemoveCharacter()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyRemoveCharacter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyRemoveCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyRemoveCharacter

// Begin Class AOWSPlayerController Function NotifyRemovePlayerFromGroup
struct OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms
{
	FString CharacterNameAddedToGroup;
};
static const FName NAME_AOWSPlayerController_NotifyRemovePlayerFromGroup = FName(TEXT("NotifyRemovePlayerFromGroup"));
void AOWSPlayerController::NotifyRemovePlayerFromGroup(const FString& CharacterNameAddedToGroup)
{
	OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms Parms;
	Parms.CharacterNameAddedToGroup=CharacterNameAddedToGroup;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyRemovePlayerFromGroup);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groups" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterNameAddedToGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameAddedToGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::NewProp_CharacterNameAddedToGroup = { "CharacterNameAddedToGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms, CharacterNameAddedToGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterNameAddedToGroup_MetaData), NewProp_CharacterNameAddedToGroup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::NewProp_CharacterNameAddedToGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyRemovePlayerFromGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::PropPointers), sizeof(OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventNotifyRemovePlayerFromGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyRemovePlayerFromGroup

// Begin Class AOWSPlayerController Function NotifyUpdateAbilityOnCharacter
static const FName NAME_AOWSPlayerController_NotifyUpdateAbilityOnCharacter = FName(TEXT("NotifyUpdateAbilityOnCharacter"));
void AOWSPlayerController::NotifyUpdateAbilityOnCharacter()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_NotifyUpdateAbilityOnCharacter);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Ability on Character Events\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Ability on Character Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "NotifyUpdateAbilityOnCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSPlayerController Function NotifyUpdateAbilityOnCharacter

// Begin Class AOWSPlayerController Function PlayerLogout
struct Z_Construct_UFunction_AOWSPlayerController_PlayerLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Player Logout\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Logout" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_PlayerLogout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "PlayerLogout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_PlayerLogout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_PlayerLogout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_PlayerLogout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_PlayerLogout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execPlayerLogout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerLogout();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function PlayerLogout

// Begin Class AOWSPlayerController Function RemoveCharacter
struct Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics
{
	struct OWSPlayerController_eventRemoveCharacter_Parms
	{
		FString UserSessionGUID;
		FString CharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//RemoveCharacter\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RemoveCharacter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRemoveCharacter_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRemoveCharacter_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "RemoveCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::OWSPlayerController_eventRemoveCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::OWSPlayerController_eventRemoveCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execRemoveCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCharacter(Z_Param_UserSessionGUID,Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function RemoveCharacter

// Begin Class AOWSPlayerController Function RemovePlayerFromGroup
struct Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics
{
	struct OWSPlayerController_eventRemovePlayerFromGroup_Parms
	{
		FString PlayerGroupName;
		FString CharacterNameToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Groups" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Remove Player from Group\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove Player from Group" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerGroupName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::NewProp_PlayerGroupName = { "PlayerGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRemovePlayerFromGroup_Parms, PlayerGroupName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::NewProp_CharacterNameToRemove = { "CharacterNameToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRemovePlayerFromGroup_Parms, CharacterNameToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::NewProp_PlayerGroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::NewProp_CharacterNameToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "RemovePlayerFromGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::OWSPlayerController_eventRemovePlayerFromGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::OWSPlayerController_eventRemovePlayerFromGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execRemovePlayerFromGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerGroupName);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterNameToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePlayerFromGroup(Z_Param_PlayerGroupName,Z_Param_CharacterNameToRemove);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function RemovePlayerFromGroup

// Begin Class AOWSPlayerController Function SaveAllPlayerData
struct Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "SaveAllPlayerData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execSaveAllPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAllPlayerData();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function SaveAllPlayerData

// Begin Class AOWSPlayerController Function SavePlayerLocation
struct Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "SavePlayerLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execSavePlayerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePlayerLocation();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function SavePlayerLocation

// Begin Class AOWSPlayerController Function SetSelectedCharacter
struct Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics
{
	struct OWSPlayerController_eventSetSelectedCharacter_Parms
	{
		AOWSCharacter* RPGCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RPGCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::NewProp_RPGCharacter = { "RPGCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventSetSelectedCharacter_Parms, RPGCharacter), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::NewProp_RPGCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "SetSelectedCharacter", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::OWSPlayerController_eventSetSelectedCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::OWSPlayerController_eventSetSelectedCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execSetSelectedCharacter)
{
	P_GET_OBJECT(AOWSCharacter,Z_Param_RPGCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedCharacter(Z_Param_RPGCharacter);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function SetSelectedCharacter

// Begin Class AOWSPlayerController Function SetSelectedCharacterAndConnectToLastZone
struct Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics
{
	struct OWSPlayerController_eventSetSelectedCharacterAndConnectToLastZone_Parms
	{
		FString UserSessionGUID;
		FString SelectedCharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedCharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventSetSelectedCharacterAndConnectToLastZone_Parms, UserSessionGUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_SelectedCharacterName = { "SelectedCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventSetSelectedCharacterAndConnectToLastZone_Parms, SelectedCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::NewProp_SelectedCharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "SetSelectedCharacterAndConnectToLastZone", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::OWSPlayerController_eventSetSelectedCharacterAndConnectToLastZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::OWSPlayerController_eventSetSelectedCharacterAndConnectToLastZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execSetSelectedCharacterAndConnectToLastZone)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSessionGUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedCharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedCharacterAndConnectToLastZone(Z_Param_UserSessionGUID,Z_Param_SelectedCharacterName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function SetSelectedCharacterAndConnectToLastZone

// Begin Class AOWSPlayerController Function SynchUpLocalMeshItemsMap
struct Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "SynchUpLocalMeshItemsMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execSynchUpLocalMeshItemsMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchUpLocalMeshItemsMap();
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function SynchUpLocalMeshItemsMap

// Begin Class AOWSPlayerController Function TravelToMap
struct Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics
{
	struct OWSPlayerController_eventTravelToMap_Parms
	{
		FString URL;
		bool SeamlessTravel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
void Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_SeamlessTravel_SetBit(void* Obj)
{
	((OWSPlayerController_eventTravelToMap_Parms*)Obj)->SeamlessTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_SeamlessTravel = { "SeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerController_eventTravelToMap_Parms), &Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_SeamlessTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeamlessTravel_MetaData), NewProp_SeamlessTravel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::NewProp_SeamlessTravel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "TravelToMap", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::OWSPlayerController_eventTravelToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::OWSPlayerController_eventTravelToMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_TravelToMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_TravelToMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execTravelToMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_UBOOL(Z_Param_SeamlessTravel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TravelToMap(Z_Param_URL,Z_Param_SeamlessTravel);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function TravelToMap

// Begin Class AOWSPlayerController Function TravelToMap2
struct Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics
{
	struct OWSPlayerController_eventTravelToMap2_Parms
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
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, ServerAndPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAndPort_MetaData), NewProp_ServerAndPort_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RX = { "RX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, RX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RX_MetaData), NewProp_RX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RY = { "RY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, RY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RY_MetaData), NewProp_RY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RZ = { "RZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, RZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RZ_MetaData), NewProp_RZ_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventTravelToMap2_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
void Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_SeamlessTravel_SetBit(void* Obj)
{
	((OWSPlayerController_eventTravelToMap2_Parms*)Obj)->SeamlessTravel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_SeamlessTravel = { "SeamlessTravel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerController_eventTravelToMap2_Parms), &Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_SeamlessTravel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeamlessTravel_MetaData), NewProp_SeamlessTravel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_ServerAndPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_RZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::NewProp_SeamlessTravel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "TravelToMap2", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::OWSPlayerController_eventTravelToMap2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::OWSPlayerController_eventTravelToMap2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_TravelToMap2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_TravelToMap2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execTravelToMap2)
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
// End Class AOWSPlayerController Function TravelToMap2

// Begin Class AOWSPlayerController
void AOWSPlayerController::StaticRegisterNativesAOWSPlayerController()
{
	UClass* Class = AOWSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToLocalMeshItemsMap", &AOWSPlayerController::execAddItemToLocalMeshItemsMap },
		{ "AddOrUpdateCosmeticCustomCharacterData", &AOWSPlayerController::execAddOrUpdateCosmeticCustomCharacterData },
		{ "AddPlayerToGroup", &AOWSPlayerController::execAddPlayerToGroup },
		{ "ClearSelectedCharacter", &AOWSPlayerController::execClearSelectedCharacter },
		{ "ClearSelectionOnCharacter", &AOWSPlayerController::execClearSelectionOnCharacter },
		{ "Client_AddItemToLocalMeshItemsMap", &AOWSPlayerController::execClient_AddItemToLocalMeshItemsMap },
		{ "CreateCharacter", &AOWSPlayerController::execCreateCharacter },
		{ "CreateCharacterUsingDefaultCharacterValues", &AOWSPlayerController::execCreateCharacterUsingDefaultCharacterValues },
		{ "GetAllCharacters", &AOWSPlayerController::execGetAllCharacters },
		{ "GetChatGroupsForPlayer", &AOWSPlayerController::execGetChatGroupsForPlayer },
		{ "GetCosmeticCustomCharacterData", &AOWSPlayerController::execGetCosmeticCustomCharacterData },
		{ "GetMapServerToTravelTo", &AOWSPlayerController::execGetMapServerToTravelTo },
		{ "GetOWSPlayerState", &AOWSPlayerController::execGetOWSPlayerState },
		{ "GetPlayerGroupsCharacterIsIn", &AOWSPlayerController::execGetPlayerGroupsCharacterIsIn },
		{ "GetPredictionTime", &AOWSPlayerController::execGetPredictionTime },
		{ "IsPlayerOnline", &AOWSPlayerController::execIsPlayerOnline },
		{ "LaunchDungeon", &AOWSPlayerController::execLaunchDungeon },
		{ "LoadTextureReference", &AOWSPlayerController::execLoadTextureReference },
		{ "Logout", &AOWSPlayerController::execLogout },
		{ "PlayerLogout", &AOWSPlayerController::execPlayerLogout },
		{ "RemoveCharacter", &AOWSPlayerController::execRemoveCharacter },
		{ "RemovePlayerFromGroup", &AOWSPlayerController::execRemovePlayerFromGroup },
		{ "SaveAllPlayerData", &AOWSPlayerController::execSaveAllPlayerData },
		{ "SavePlayerLocation", &AOWSPlayerController::execSavePlayerLocation },
		{ "SetSelectedCharacter", &AOWSPlayerController::execSetSelectedCharacter },
		{ "SetSelectedCharacterAndConnectToLastZone", &AOWSPlayerController::execSetSelectedCharacterAndConnectToLastZone },
		{ "SynchUpLocalMeshItemsMap", &AOWSPlayerController::execSynchUpLocalMeshItemsMap },
		{ "TravelToMap", &AOWSPlayerController::execTravelToMap },
		{ "TravelToMap2", &AOWSPlayerController::execTravelToMap2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSPlayerController);
UClass* Z_Construct_UClass_AOWSPlayerController_NoRegister()
{
	return AOWSPlayerController::StaticClass();
}
struct Z_Construct_UClass_AOWSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OWSPlayerController.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSPlayerControllerComponent_MetaData[] = {
		{ "Category", "OWSPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGAPICustomerKey_MetaData[] = {
		{ "Category", "OWSPlayerController" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2APIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSEncryptionKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalMeshItemsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacter_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupsPlayerIsIn_MetaData[] = {
		{ "Category", "Groups" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeProjectiles_MetaData[] = {
		{ "Category", "Projectiles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Predicted projectiles\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Predicted projectiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPredictionPing_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPredictionPing_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionFudgeFactor_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDebuggingProjectiles_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OWSPlayerControllerComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RPGAPICustomerKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2APIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSEncryptionKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalMeshItemsMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalMeshItemsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LocalMeshItemsMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerGroupsPlayerIsIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerGroupsPlayerIsIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeProjectiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FakeProjectiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPredictionPing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredPredictionPing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionFudgeFactor;
	static void NewProp_bIsDebuggingProjectiles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDebuggingProjectiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSPlayerController_AddItemToLocalMeshItemsMap, "AddItemToLocalMeshItemsMap" }, // 566987544
		{ &Z_Construct_UFunction_AOWSPlayerController_AddOrUpdateCosmeticCustomCharacterData, "AddOrUpdateCosmeticCustomCharacterData" }, // 748200937
		{ &Z_Construct_UFunction_AOWSPlayerController_AddPlayerToGroup, "AddPlayerToGroup" }, // 2708039469
		{ &Z_Construct_UFunction_AOWSPlayerController_ClearSelectedCharacter, "ClearSelectedCharacter" }, // 3734621909
		{ &Z_Construct_UFunction_AOWSPlayerController_ClearSelectionOnCharacter, "ClearSelectionOnCharacter" }, // 2838736006
		{ &Z_Construct_UFunction_AOWSPlayerController_Client_AddItemToLocalMeshItemsMap, "Client_AddItemToLocalMeshItemsMap" }, // 2944455890
		{ &Z_Construct_UFunction_AOWSPlayerController_CreateCharacter, "CreateCharacter" }, // 87229259
		{ &Z_Construct_UFunction_AOWSPlayerController_CreateCharacterUsingDefaultCharacterValues, "CreateCharacterUsingDefaultCharacterValues" }, // 708733841
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorAddAbilityToCharacter, "ErrorAddAbilityToCharacter" }, // 1739768388
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacter, "ErrorCreateCharacter" }, // 392823744
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorCreateCharacterUsingDefaultCharacterValues, "ErrorCreateCharacterUsingDefaultCharacterValues" }, // 2365008377
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorGetAllCharacters, "ErrorGetAllCharacters" }, // 1129806108
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorGetCharacterDataAndCustomData, "ErrorGetCharacterDataAndCustomData" }, // 1803163315
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorGetChatGroupsForPlayer, "ErrorGetChatGroupsForPlayer" }, // 2616930795
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorGetCosmeticCustomCharacterData, "ErrorGetCosmeticCustomCharacterData" }, // 831378376
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorGetPlayerGroupsCharacterIsIn, "ErrorGetPlayerGroupsCharacterIsIn" }, // 3314479033
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorIsPlayerOnline, "ErrorIsPlayerOnline" }, // 2043222927
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorLaunchDungeon, "ErrorLaunchDungeon" }, // 2794217531
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorLogout, "ErrorLogout" }, // 366271911
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorMapServerToTravelTo, "ErrorMapServerToTravelTo" }, // 3676482569
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorPlayerLogout, "ErrorPlayerLogout" }, // 621377280
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveAbilityFromCharacter, "ErrorRemoveAbilityFromCharacter" }, // 2969692771
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorRemoveCharacter, "ErrorRemoveCharacter" }, // 412084674
		{ &Z_Construct_UFunction_AOWSPlayerController_ErrorUpdateAbilityOnCharacter, "ErrorUpdateAbilityOnCharacter" }, // 2720460929
		{ &Z_Construct_UFunction_AOWSPlayerController_GetAllCharacters, "GetAllCharacters" }, // 2882162316
		{ &Z_Construct_UFunction_AOWSPlayerController_GetChatGroupsForPlayer, "GetChatGroupsForPlayer" }, // 2153220270
		{ &Z_Construct_UFunction_AOWSPlayerController_GetCosmeticCustomCharacterData, "GetCosmeticCustomCharacterData" }, // 1435053651
		{ &Z_Construct_UFunction_AOWSPlayerController_GetMapServerToTravelTo, "GetMapServerToTravelTo" }, // 3363601808
		{ &Z_Construct_UFunction_AOWSPlayerController_GetOWSPlayerState, "GetOWSPlayerState" }, // 4155903838
		{ &Z_Construct_UFunction_AOWSPlayerController_GetPlayerGroupsCharacterIsIn, "GetPlayerGroupsCharacterIsIn" }, // 1553391731
		{ &Z_Construct_UFunction_AOWSPlayerController_GetPredictionTime, "GetPredictionTime" }, // 1080447072
		{ &Z_Construct_UFunction_AOWSPlayerController_IsPlayerOnline, "IsPlayerOnline" }, // 1640009460
		{ &Z_Construct_UFunction_AOWSPlayerController_LaunchDungeon, "LaunchDungeon" }, // 2794053155
		{ &Z_Construct_UFunction_AOWSPlayerController_LoadTextureReference, "LoadTextureReference" }, // 474281976
		{ &Z_Construct_UFunction_AOWSPlayerController_Logout, "Logout" }, // 3864337748
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyAddAbilityToCharacter, "NotifyAddAbilityToCharacter" }, // 1470487333
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyAddPlayerToGroup, "NotifyAddPlayerToGroup" }, // 3551998769
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacter, "NotifyCreateCharacter" }, // 3020807103
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyCreateCharacterUsingDefaultCharacterValues, "NotifyCreateCharacterUsingDefaultCharacterValues" }, // 2836459851
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyGetAllCharacters, "NotifyGetAllCharacters" }, // 2119515908
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyGetCharacterDataAndCustomData, "NotifyGetCharacterDataAndCustomData" }, // 700770344
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyGetChatGroupsForPlayer, "NotifyGetChatGroupsForPlayer" }, // 1717071363
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyGetCosmeticCustomCharacterData, "NotifyGetCosmeticCustomCharacterData" }, // 2363619088
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyGetPlayerGroupsCharacterIsIn, "NotifyGetPlayerGroupsCharacterIsIn" }, // 1512257975
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyIsPlayerOnline, "NotifyIsPlayerOnline" }, // 1816395596
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyLaunchDungeon, "NotifyLaunchDungeon" }, // 4052545097
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyLogout, "NotifyLogout" }, // 1562680658
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyMapServerToTravelTo, "NotifyMapServerToTravelTo" }, // 2168988826
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyPawnLeavingGame, "NotifyPawnLeavingGame" }, // 589720628
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyPlayerLogout, "NotifyPlayerLogout" }, // 319064630
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveAbilityFromCharacter, "NotifyRemoveAbilityFromCharacter" }, // 1095643455
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyRemoveCharacter, "NotifyRemoveCharacter" }, // 3777875494
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyRemovePlayerFromGroup, "NotifyRemovePlayerFromGroup" }, // 4012736924
		{ &Z_Construct_UFunction_AOWSPlayerController_NotifyUpdateAbilityOnCharacter, "NotifyUpdateAbilityOnCharacter" }, // 1875260011
		{ &Z_Construct_UFunction_AOWSPlayerController_PlayerLogout, "PlayerLogout" }, // 2208583933
		{ &Z_Construct_UFunction_AOWSPlayerController_RemoveCharacter, "RemoveCharacter" }, // 2508775968
		{ &Z_Construct_UFunction_AOWSPlayerController_RemovePlayerFromGroup, "RemovePlayerFromGroup" }, // 3485524004
		{ &Z_Construct_UFunction_AOWSPlayerController_SaveAllPlayerData, "SaveAllPlayerData" }, // 1951612917
		{ &Z_Construct_UFunction_AOWSPlayerController_SavePlayerLocation, "SavePlayerLocation" }, // 3577581620
		{ &Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacter, "SetSelectedCharacter" }, // 2830277751
		{ &Z_Construct_UFunction_AOWSPlayerController_SetSelectedCharacterAndConnectToLastZone, "SetSelectedCharacterAndConnectToLastZone" }, // 2961078461
		{ &Z_Construct_UFunction_AOWSPlayerController_SynchUpLocalMeshItemsMap, "SynchUpLocalMeshItemsMap" }, // 1449745516
		{ &Z_Construct_UFunction_AOWSPlayerController_TravelToMap, "TravelToMap" }, // 1856039298
		{ &Z_Construct_UFunction_AOWSPlayerController_TravelToMap2, "TravelToMap2" }, // 4146030796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWSPlayerControllerComponent = { "OWSPlayerControllerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OWSPlayerControllerComponent), Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSPlayerControllerComponent_MetaData), NewProp_OWSPlayerControllerComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_RPGAPICustomerKey = { "RPGAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, RPGAPICustomerKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGAPICustomerKey_MetaData), NewProp_RPGAPICustomerKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWS2APIPath = { "OWS2APIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OWS2APIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2APIPath_MetaData), NewProp_OWS2APIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWSEncryptionKey = { "OWSEncryptionKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OWSEncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSEncryptionKey_MetaData), NewProp_OWSEncryptionKey_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap_ValueProp = { "LocalMeshItemsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap_Key_KeyProp = { "LocalMeshItemsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap = { "LocalMeshItemsMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, LocalMeshItemsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalMeshItemsMap_MetaData), NewProp_LocalMeshItemsMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_SelectedCharacter = { "SelectedCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, SelectedCharacter), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCharacter_MetaData), NewProp_SelectedCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PlayerGroupsPlayerIsIn_Inner = { "PlayerGroupsPlayerIsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerGroup, METADATA_PARAMS(0, nullptr) }; // 3053493591
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PlayerGroupsPlayerIsIn = { "PlayerGroupsPlayerIsIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, PlayerGroupsPlayerIsIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupsPlayerIsIn_MetaData), NewProp_PlayerGroupsPlayerIsIn_MetaData) }; // 3053493591
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_FakeProjectiles_Inner = { "FakeProjectiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_FakeProjectiles = { "FakeProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, FakeProjectiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeProjectiles_MetaData), NewProp_FakeProjectiles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_MaxPredictionPing = { "MaxPredictionPing", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, MaxPredictionPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPredictionPing_MetaData), NewProp_MaxPredictionPing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_DesiredPredictionPing = { "DesiredPredictionPing", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, DesiredPredictionPing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredPredictionPing_MetaData), NewProp_DesiredPredictionPing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PredictionFudgeFactor = { "PredictionFudgeFactor", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, PredictionFudgeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionFudgeFactor_MetaData), NewProp_PredictionFudgeFactor_MetaData) };
void Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_bIsDebuggingProjectiles_SetBit(void* Obj)
{
	((AOWSPlayerController*)Obj)->bIsDebuggingProjectiles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_bIsDebuggingProjectiles = { "bIsDebuggingProjectiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSPlayerController), &Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_bIsDebuggingProjectiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDebuggingProjectiles_MetaData), NewProp_bIsDebuggingProjectiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWSPlayerControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_RPGAPICustomerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWS2APIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OWSEncryptionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LocalMeshItemsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_SelectedCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PlayerGroupsPlayerIsIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PlayerGroupsPlayerIsIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_FakeProjectiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_FakeProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_MaxPredictionPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_DesiredPredictionPing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_PredictionFudgeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_bIsDebuggingProjectiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSPlayerController_Statics::ClassParams = {
	&AOWSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSPlayerController()
{
	if (!Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton, Z_Construct_UClass_AOWSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSPlayerController>()
{
	return AOWSPlayerController::StaticClass();
}
void AOWSPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MaxPredictionPing(TEXT("MaxPredictionPing"));
	static const FName Name_DesiredPredictionPing(TEXT("DesiredPredictionPing"));
	static const FName Name_PredictionFudgeFactor(TEXT("PredictionFudgeFactor"));
	const bool bIsValid = true
		&& Name_MaxPredictionPing == ClassReps[(int32)ENetFields_Private::MaxPredictionPing].Property->GetFName()
		&& Name_DesiredPredictionPing == ClassReps[(int32)ENetFields_Private::DesiredPredictionPing].Property->GetFName()
		&& Name_PredictionFudgeFactor == ClassReps[(int32)ENetFields_Private::PredictionFudgeFactor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSPlayerController);
AOWSPlayerController::~AOWSPlayerController() {}
// End Class AOWSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSPlayerController, AOWSPlayerController::StaticClass, TEXT("AOWSPlayerController"), &Z_Registration_Info_UClass_AOWSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSPlayerController), 2866426185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_2999428054(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
