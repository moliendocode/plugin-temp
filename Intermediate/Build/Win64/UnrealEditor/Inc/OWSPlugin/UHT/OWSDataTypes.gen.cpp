// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/DataTypes/OWSDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSDataTypes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterClass();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMapData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneMap();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FCharacterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RX_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RY_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RZ_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassName_MetaData[] = {
		{ "Category", "Character Data" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RZ;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Team;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Alignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RX = { "RX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, RX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RX_MetaData), NewProp_RX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RY = { "RY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, RY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RY_MetaData), NewProp_RY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RZ = { "RZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, RZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RZ_MetaData), NewProp_RZ_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Team), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Team_MetaData), NewProp_Team_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterClassName = { "CharacterClassName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassName_MetaData), NewProp_CharacterClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_RZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Team,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterData",
	Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
	sizeof(FCharacterData),
	alignof(FCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton;
}
// End ScriptStruct FCharacterData

// Begin ScriptStruct FCharacterClass
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterClass;
class UScriptStruct* FCharacterClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterClass, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterClass"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterClass.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterClass>()
{
	return FCharacterClass::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassName_MetaData[] = {
		{ "Category", "Character Class" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Character Class" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassIcon_MetaData[] = {
		{ "Category", "Character Class" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterClassName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClassIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterClass>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_CharacterClassName = { "CharacterClassName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClass, CharacterClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassName_MetaData), NewProp_CharacterClassName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClass, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_ClassIcon = { "ClassIcon", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterClass, ClassIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassIcon_MetaData), NewProp_ClassIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_CharacterClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterClass_Statics::NewProp_ClassIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterClass_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterClass",
	Z_Construct_UScriptStruct_FCharacterClass_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClass_Statics::PropPointers),
	sizeof(FCharacterClass),
	alignof(FCharacterClass),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterClass_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterClass_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterClass()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterClass.InnerSingleton, Z_Construct_UScriptStruct_FCharacterClass_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterClass.InnerSingleton;
}
// End ScriptStruct FCharacterClass

// Begin ScriptStruct FInventoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryData;
class UScriptStruct* FInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("InventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FInventoryData>()
{
	return FInventoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoldValue_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStackCount_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "InventoryData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoldValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStackCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_GoldValue = { "GoldValue", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, GoldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoldValue_MetaData), NewProp_GoldValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_CurrentStackCount = { "CurrentStackCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, CurrentStackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStackCount_MetaData), NewProp_CurrentStackCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_GoldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_CurrentStackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryData_Statics::NewProp_ItemIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"InventoryData",
	Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::PropPointers),
	sizeof(FInventoryData),
	alignof(FInventoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryData()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton, Z_Construct_UScriptStruct_FInventoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryData.InnerSingleton;
}
// End ScriptStruct FInventoryData

// Begin ScriptStruct FItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoldValue_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GoldValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_GoldValue = { "GoldValue", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, GoldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoldValue_MetaData), NewProp_GoldValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_GoldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin ScriptStruct FMapData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapData;
class UScriptStruct* FMapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("MapData"));
	}
	return Z_Registration_Info_UScriptStruct_MapData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FMapData>()
{
	return FMapData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
		{ "Category", "MapData" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, FriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyName_MetaData), NewProp_FriendlyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MapID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MinX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinX_MetaData), NewProp_MinX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MaxX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxX_MetaData), NewProp_MaxX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MinY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinY_MetaData), NewProp_MinY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapData, MaxY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxY_MetaData), NewProp_MaxY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_FriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MaxY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"MapData",
	Z_Construct_UScriptStruct_FMapData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers),
	sizeof(FMapData),
	alignof(FMapData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapData()
{
	if (!Z_Registration_Info_UScriptStruct_MapData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapData.InnerSingleton, Z_Construct_UScriptStruct_FMapData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapData.InnerSingleton;
}
// End ScriptStruct FMapData

// Begin ScriptStruct FZoneMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneMap;
class UScriptStruct* FZoneMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneMap, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ZoneMap"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneMap.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FZoneMap>()
{
	return FZoneMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FZoneMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "ZoneMap" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneID_MetaData[] = {
		{ "Category", "ZoneMap" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "ZoneMap" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[] = {
		{ "Category", "ZoneMap" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneMap, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ZoneID = { "ZoneID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneMap, ZoneID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneID_MetaData), NewProp_ZoneID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneMap, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneMap, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ZoneID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneMap_Statics::NewProp_ServerIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ZoneMap",
	Z_Construct_UScriptStruct_FZoneMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneMap_Statics::PropPointers),
	sizeof(FZoneMap),
	alignof(FZoneMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneMap()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneMap.InnerSingleton, Z_Construct_UScriptStruct_FZoneMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ZoneMap.InnerSingleton;
}
// End ScriptStruct FZoneMap

// Begin ScriptStruct FCharacterStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStats;
class UScriptStruct* FCharacterStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterStats"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constitution_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wisdom_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spirit_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnergy_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataTypes/OWSDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Constitution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Wisdom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Spirit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Luck;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnergy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Constitution = { "Constitution", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Constitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constitution_MetaData), NewProp_Constitution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Wisdom = { "Wisdom", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Wisdom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wisdom_MetaData), NewProp_Wisdom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Charisma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Spirit = { "Spirit", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Spirit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spirit_MetaData), NewProp_Spirit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, MaxEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnergy_MetaData), NewProp_MaxEnergy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentEnergy = { "CurrentEnergy", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, CurrentEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEnergy_MetaData), NewProp_CurrentEnergy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Constitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Wisdom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Spirit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_MaxEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_CurrentEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterStats",
	Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
	sizeof(FCharacterStats),
	alignof(FCharacterStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton;
}
// End ScriptStruct FCharacterStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_DataTypes_OWSDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_CharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 2676746057U) },
		{ FCharacterClass::StaticStruct, Z_Construct_UScriptStruct_FCharacterClass_Statics::NewStructOps, TEXT("CharacterClass"), &Z_Registration_Info_UScriptStruct_CharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterClass), 2779422342U) },
		{ FInventoryData::StaticStruct, Z_Construct_UScriptStruct_FInventoryData_Statics::NewStructOps, TEXT("InventoryData"), &Z_Registration_Info_UScriptStruct_InventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryData), 2983649378U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 59530262U) },
		{ FMapData::StaticStruct, Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps, TEXT("MapData"), &Z_Registration_Info_UScriptStruct_MapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapData), 2727163079U) },
		{ FZoneMap::StaticStruct, Z_Construct_UScriptStruct_FZoneMap_Statics::NewStructOps, TEXT("ZoneMap"), &Z_Registration_Info_UScriptStruct_ZoneMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneMap), 2637844829U) },
		{ FCharacterStats::StaticStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps, TEXT("CharacterStats"), &Z_Registration_Info_UScriptStruct_CharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStats), 3500993001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_DataTypes_OWSDataTypes_h_1168566926(TEXT("/Script/OWSPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_DataTypes_OWSDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_DataTypes_OWSDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
