// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventoryItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ItemCategories();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Enum ItemCategories
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ItemCategories;
static UEnum* ItemCategories_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ItemCategories.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ItemCategories.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ItemCategories, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ItemCategories"));
	}
	return Z_Registration_Info_UEnum_ItemCategories.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<ItemCategories>()
{
	return ItemCategories_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "Consumable" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Consumable", (int64)Consumable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"ItemCategories",
	"ItemCategories",
	Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_ItemCategories()
{
	if (!Z_Registration_Info_UEnum_ItemCategories.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ItemCategories.InnerSingleton, Z_Construct_UEnum_OWSPlugin_ItemCategories_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ItemCategories.InnerSingleton;
}
// End Enum ItemCategories

// Begin ScriptStruct FInventoryItemStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemStruct;
class UScriptStruct* FInventoryItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemStruct, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("InventoryItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemStruct.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FInventoryItemStruct>()
{
	return FInventoryItemStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueItemGUID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCanStack_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsUsable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsConsumedOnUse_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfUsesLeft_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeDescription_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeQuality_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserItemType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotType_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTier_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSlotNumber_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDuration_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanBeDropped_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanBeDestroyed_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PremiumCurrencyPrice_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeCurrencyPrice_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponActorClassPath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPath_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n\x09\x09TSubclassOf<class AActor> WeaponActorClass = nullptr;*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n               TSubclassOf<class AActor> WeaponActorClass = nullptr;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n\x09\x09UStaticMesh* StaticMesh = nullptr;*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n               UStaticMesh* StaticMesh = nullptr;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureToUseForIcon_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n\x09\x09USkeletalMesh* SkeletalMesh = nullptr;*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Inventory\")\n               USkeletalMesh* SkeletalMesh = nullptr;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSlotWidth_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSlotHeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIcon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InventoryName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemValue;
	static void NewProp_ItemCanStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ItemCanStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemStackSize;
	static void NewProp_IsUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUsable;
	static void NewProp_IsConsumedOnUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsConsumedOnUse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfUsesLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTypeID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemTypeDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTypeQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlotType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemTier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuality;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSlotNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemDuration;
	static void NewProp_CanBeDropped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanBeDropped;
	static void NewProp_CanBeDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanBeDestroyed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PremiumCurrencyPrice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeCurrencyPrice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeaponActorClassPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemMeshID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureToUseForIcon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerInstanceCustomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, InventoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryName_MetaData), NewProp_InventoryName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueItemGUID_MetaData), NewProp_UniqueItemGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemValue_MetaData), NewProp_ItemValue_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_SetBit(void* Obj)
{
	((FInventoryItemStruct*)Obj)->ItemCanStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack = { "ItemCanStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCanStack_MetaData), NewProp_ItemCanStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize = { "ItemStackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStackSize_MetaData), NewProp_ItemStackSize_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_SetBit(void* Obj)
{
	((FInventoryItemStruct*)Obj)->IsUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable = { "IsUsable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsUsable_MetaData), NewProp_IsUsable_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_SetBit(void* Obj)
{
	((FInventoryItemStruct*)Obj)->IsConsumedOnUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse = { "IsConsumedOnUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsConsumedOnUse_MetaData), NewProp_IsConsumedOnUse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft = { "NumberOfUsesLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, NumberOfUsesLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfUsesLeft_MetaData), NewProp_NumberOfUsesLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID = { "ItemTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypeID_MetaData), NewProp_ItemTypeID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription = { "ItemTypeDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypeDescription_MetaData), NewProp_ItemTypeDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality = { "ItemTypeQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTypeQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTypeQuality_MetaData), NewProp_ItemTypeQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType = { "UserItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, UserItemType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserItemType_MetaData), NewProp_UserItemType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, EquipmentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType = { "EquipmentSlotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, EquipmentSlotType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlotType_MetaData), NewProp_EquipmentSlotType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier = { "ItemTier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTier_MetaData), NewProp_ItemTier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuality_MetaData), NewProp_ItemQuality_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, CustomData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber = { "InSlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, InSlotNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSlotNumber_MetaData), NewProp_InSlotNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration = { "ItemDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDuration_MetaData), NewProp_ItemDuration_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_SetBit(void* Obj)
{
	((FInventoryItemStruct*)Obj)->CanBeDropped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped = { "CanBeDropped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanBeDropped_MetaData), NewProp_CanBeDropped_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_SetBit(void* Obj)
{
	((FInventoryItemStruct*)Obj)->CanBeDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed = { "CanBeDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemStruct), &Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanBeDestroyed_MetaData), NewProp_CanBeDestroyed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice = { "PremiumCurrencyPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, PremiumCurrencyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PremiumCurrencyPrice_MetaData), NewProp_PremiumCurrencyPrice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice = { "FreeCurrencyPrice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, FreeCurrencyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeCurrencyPrice_MetaData), NewProp_FreeCurrencyPrice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath = { "WeaponActorClassPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, WeaponActorClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponActorClassPath_MetaData), NewProp_WeaponActorClassPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemMeshID = { "ItemMeshID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, ItemMeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMeshID_MetaData), NewProp_ItemMeshID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath = { "StaticMeshPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, StaticMeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshPath_MetaData), NewProp_StaticMeshPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, SkeletalMeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshPath_MetaData), NewProp_SkeletalMeshPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon = { "TextureToUseForIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, TextureToUseForIcon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureToUseForIcon_MetaData), NewProp_TextureToUseForIcon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IconSlotWidth = { "IconSlotWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, IconSlotWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSlotWidth_MetaData), NewProp_IconSlotWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IconSlotHeight = { "IconSlotHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, IconSlotHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSlotHeight_MetaData), NewProp_IconSlotHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon = { "TextureIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, TextureIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIcon_MetaData), NewProp_TextureIcon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData = { "PerInstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemStruct, PerInstanceCustomData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceCustomData_MetaData), NewProp_PerInstanceCustomData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InventoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UniqueItemGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemCanStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsUsable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IsConsumedOnUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_NumberOfUsesLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTypeQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_UserItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_EquipmentSlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_InSlotNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_CanBeDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PremiumCurrencyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_FreeCurrencyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_WeaponActorClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_ItemMeshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_StaticMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_SkeletalMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureToUseForIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IconSlotWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_IconSlotHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_TextureIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewProp_PerInstanceCustomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"InventoryItemStruct",
	Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::PropPointers),
	sizeof(FInventoryItemStruct),
	alignof(FInventoryItemStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemStruct.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemStruct.InnerSingleton;
}
// End ScriptStruct FInventoryItemStruct

// Begin Class AOWSInventoryItem
void AOWSInventoryItem::StaticRegisterNativesAOWSInventoryItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSInventoryItem);
UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister()
{
	return AOWSInventoryItem::StaticClass();
}
struct Z_Construct_UClass_AOWSInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSInventoryItem.h" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanStack_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueItemGUID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfUsesLeft_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceCustomData_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshPath_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshID_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, Category = \"Inventory\")\n\x09\x09int32 ItemID;\x09\x09\x09//(for SQL)\n\x09UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n\x09\x09""FName InventoryItemName;\n\n\x09UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n\x09\x09TEnumAsByte<ItemCategories> ItemCategory;\x09//This can be used to define groups of items that work similarly\n\x09\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Inventory\")\n               int32 ItemID;                   //(for SQL)\n       UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n               FName InventoryItemName;\n\n       UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Inventory\")\n               TEnumAsByte<ItemCategories> ItemCategory;       //This can be used to define groups of items that work similarly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSlotHeight_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconSlotWidth_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_CanStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueItemGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfUsesLeft;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerInstanceCustomData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemMeshID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSInventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_SetBit(void* Obj)
{
	((AOWSInventoryItem*)Obj)->CanStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack = { "CanStack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSInventoryItem), &Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanStack_MetaData), NewProp_CanStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_UniqueItemGUID = { "UniqueItemGUID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, UniqueItemGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueItemGUID_MetaData), NewProp_UniqueItemGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_NumberOfUsesLeft = { "NumberOfUsesLeft", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, NumberOfUsesLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfUsesLeft_MetaData), NewProp_NumberOfUsesLeft_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_PerInstanceCustomData = { "PerInstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, PerInstanceCustomData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceCustomData_MetaData), NewProp_PerInstanceCustomData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_SkeletalMeshPath = { "SkeletalMeshPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, SkeletalMeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshPath_MetaData), NewProp_SkeletalMeshPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemMeshID = { "ItemMeshID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, ItemMeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMeshID_MetaData), NewProp_ItemMeshID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconTexture_MetaData), NewProp_IconTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconSlotHeight = { "IconSlotHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, IconSlotHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSlotHeight_MetaData), NewProp_IconSlotHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconSlotWidth = { "IconSlotWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSInventoryItem, IconSlotWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconSlotWidth_MetaData), NewProp_IconSlotWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_CanStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_UniqueItemGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_NumberOfUsesLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_PerInstanceCustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_SkeletalMeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_ItemMeshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconSlotHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSInventoryItem_Statics::NewProp_IconSlotWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSInventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSInventoryItem_Statics::ClassParams = {
	&AOWSInventoryItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSInventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSInventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSInventoryItem()
{
	if (!Z_Registration_Info_UClass_AOWSInventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSInventoryItem.OuterSingleton, Z_Construct_UClass_AOWSInventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSInventoryItem.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSInventoryItem>()
{
	return AOWSInventoryItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSInventoryItem);
AOWSInventoryItem::~AOWSInventoryItem() {}
// End Class AOWSInventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ItemCategories_StaticEnum, TEXT("ItemCategories"), &Z_Registration_Info_UEnum_ItemCategories, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422188869U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemStruct::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemStruct_Statics::NewStructOps, TEXT("InventoryItemStruct"), &Z_Registration_Info_UScriptStruct_InventoryItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemStruct), 3913247499U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSInventoryItem, AOWSInventoryItem::StaticClass, TEXT("AOWSInventoryItem"), &Z_Registration_Info_UClass_AOWSInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSInventoryItem), 3208324588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_3857546047(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
