// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventory.h"
#include "OWSPlugin/Public/OWSInventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSInventory Function AddItemsFromInventoryItemStruct
struct Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics
{
	struct OWSInventory_eventAddItemsFromInventoryItemStruct_Parms
	{
		TArray<FInventoryItemStruct> ItemsToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToAdd_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::NewProp_ItemsToAdd_Inner = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(0, nullptr) }; // 3913247499
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::NewProp_ItemsToAdd = { "ItemsToAdd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddItemsFromInventoryItemStruct_Parms, ItemsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToAdd_MetaData), NewProp_ItemsToAdd_MetaData) }; // 3913247499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::NewProp_ItemsToAdd_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::NewProp_ItemsToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddItemsFromInventoryItemStruct", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::OWSInventory_eventAddItemsFromInventoryItemStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::OWSInventory_eventAddItemsFromInventoryItemStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execAddItemsFromInventoryItemStruct)
{
	P_GET_TARRAY_REF(FInventoryItemStruct,Z_Param_Out_ItemsToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemsFromInventoryItemStruct(Z_Param_Out_ItemsToAdd);
	P_NATIVE_END;
}
// End Class UOWSInventory Function AddItemsFromInventoryItemStruct

// Begin Class UOWSInventory Function AddItemToInventory
struct Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics
{
	struct OWSInventory_eventAddItemToInventory_Parms
	{
		AOWSInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToInventory_Parms, Item), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSInventory_eventAddItemToInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSInventory_eventAddItemToInventory_Parms), &Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::OWSInventory_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::OWSInventory_eventAddItemToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddItemToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execAddItemToInventory)
{
	P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UOWSInventory Function AddItemToInventory

// Begin Class UOWSInventory Function AddItemToSlot
struct Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics
{
	struct OWSInventory_eventAddItemToSlot_Parms
	{
		AOWSInventoryItem* Item;
		int32 Slot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToSlot_Parms, Item), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddItemToSlot_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddItemToSlot", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::OWSInventory_eventAddItemToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::OWSInventory_eventAddItemToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_AddItemToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddItemToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execAddItemToSlot)
{
	P_GET_OBJECT(AOWSInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToSlot(Z_Param_Item,Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UOWSInventory Function AddItemToSlot

// Begin Class UOWSInventory Function AddStackToSlot
struct Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics
{
	struct OWSInventory_eventAddStackToSlot_Parms
	{
		UOWSInventoryItemStack* ItemStack;
		int32 Slot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_ItemStack = { "ItemStack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddStackToSlot_Parms, ItemStack), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventAddStackToSlot_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_ItemStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "AddStackToSlot", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::OWSInventory_eventAddStackToSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::OWSInventory_eventAddStackToSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_AddStackToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_AddStackToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execAddStackToSlot)
{
	P_GET_OBJECT(UOWSInventoryItemStack,Z_Param_ItemStack);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStackToSlot(Z_Param_ItemStack,Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UOWSInventory Function AddStackToSlot

// Begin Class UOWSInventory Function FindFirstEmptySlotToFitItemOfSize
struct Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics
{
	struct OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms
	{
		int32 IconSlotWidth;
		int32 IconSlotHeight;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IconSlotHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_IconSlotWidth = { "IconSlotWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms, IconSlotWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_IconSlotHeight = { "IconSlotHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms, IconSlotHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_IconSlotWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_IconSlotHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "FindFirstEmptySlotToFitItemOfSize", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::OWSInventory_eventFindFirstEmptySlotToFitItemOfSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execFindFirstEmptySlotToFitItemOfSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IconSlotWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_IconSlotHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindFirstEmptySlotToFitItemOfSize(Z_Param_IconSlotWidth,Z_Param_IconSlotHeight);
	P_NATIVE_END;
}
// End Class UOWSInventory Function FindFirstEmptySlotToFitItemOfSize

// Begin Class UOWSInventory Function FindItemIndex
struct Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics
{
	struct OWSInventory_eventFindItemIndex_Parms
	{
		FString ItemName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventFindItemIndex_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventFindItemIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "FindItemIndex", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::OWSInventory_eventFindItemIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::OWSInventory_eventFindItemIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_FindItemIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_FindItemIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execFindItemIndex)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FindItemIndex(Z_Param_ItemName);
	P_NATIVE_END;
}
// End Class UOWSInventory Function FindItemIndex

// Begin Class UOWSInventory Function GetStackInSlot
struct Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics
{
	struct OWSInventory_eventGetStackInSlot_Parms
	{
		int32 Slot;
		UOWSInventoryItemStack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventGetStackInSlot_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventGetStackInSlot_Parms, ReturnValue), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "GetStackInSlot", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::OWSInventory_eventGetStackInSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::OWSInventory_eventGetStackInSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_GetStackInSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_GetStackInSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execGetStackInSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSInventoryItemStack**)Z_Param__Result=P_THIS->GetStackInSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UOWSInventory Function GetStackInSlot

// Begin Class UOWSInventory Function IsSlotFilled
struct Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics
{
	struct OWSInventory_eventIsSlotFilled_Parms
	{
		int32 SlotNumber;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNumber;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventIsSlotFilled_Parms, SlotNumber), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSInventory_eventIsSlotFilled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSInventory_eventIsSlotFilled_Parms), &Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_SlotNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "IsSlotFilled", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::OWSInventory_eventIsSlotFilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::OWSInventory_eventIsSlotFilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_IsSlotFilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_IsSlotFilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execIsSlotFilled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlotFilled(Z_Param_SlotNumber);
	P_NATIVE_END;
}
// End Class UOWSInventory Function IsSlotFilled

// Begin Class UOWSInventory Function RemoveOneItemFromSlot
struct Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics
{
	struct OWSInventory_eventRemoveOneItemFromSlot_Parms
	{
		int32 Slot;
		AOWSInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventRemoveOneItemFromSlot_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventRemoveOneItemFromSlot_Parms, ReturnValue), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "RemoveOneItemFromSlot", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::OWSInventory_eventRemoveOneItemFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::OWSInventory_eventRemoveOneItemFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execRemoveOneItemFromSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSInventoryItem**)Z_Param__Result=P_THIS->RemoveOneItemFromSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UOWSInventory Function RemoveOneItemFromSlot

// Begin Class UOWSInventory Function RemoveStackFromSlot
struct Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics
{
	struct OWSInventory_eventRemoveStackFromSlot_Parms
	{
		int32 Slot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventRemoveStackFromSlot_Parms, Slot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "RemoveStackFromSlot", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::OWSInventory_eventRemoveStackFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::OWSInventory_eventRemoveStackFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execRemoveStackFromSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStackFromSlot(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UOWSInventory Function RemoveStackFromSlot

// Begin Class UOWSInventory Function SetInventoryName
struct Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics
{
	struct OWSInventory_eventSetInventoryName_Parms
	{
		FName inInventoryName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_inInventoryName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::NewProp_inInventoryName = { "inInventoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSetInventoryName_Parms, inInventoryName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::NewProp_inInventoryName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SetInventoryName", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::OWSInventory_eventSetInventoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::OWSInventory_eventSetInventoryName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_SetInventoryName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_SetInventoryName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execSetInventoryName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_inInventoryName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventoryName(Z_Param_inInventoryName);
	P_NATIVE_END;
}
// End Class UOWSInventory Function SetInventoryName

// Begin Class UOWSInventory Function SetInventorySize
struct Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics
{
	struct OWSInventory_eventSetInventorySize_Parms
	{
		int32 Size;
		int32 inNumberOfColumns;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FIntPropertyParams NewProp_inNumberOfColumns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSetInventorySize_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::NewProp_inNumberOfColumns = { "inNumberOfColumns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSetInventorySize_Parms, inNumberOfColumns), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::NewProp_inNumberOfColumns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SetInventorySize", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::OWSInventory_eventSetInventorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::OWSInventory_eventSetInventorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_SetInventorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_SetInventorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execSetInventorySize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Size);
	P_GET_PROPERTY(FIntProperty,Z_Param_inNumberOfColumns);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventorySize(Z_Param_Size,Z_Param_inNumberOfColumns);
	P_NATIVE_END;
}
// End Class UOWSInventory Function SetInventorySize

// Begin Class UOWSInventory Function SetOwningPlayerCharacter
struct Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics
{
	struct OWSInventory_eventSetOwningPlayerCharacter_Parms
	{
		AOWSCharacter* inOwningPlayerCharacter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inOwningPlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::NewProp_inOwningPlayerCharacter = { "inOwningPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSetOwningPlayerCharacter_Parms, inOwningPlayerCharacter), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::NewProp_inOwningPlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SetOwningPlayerCharacter", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::OWSInventory_eventSetOwningPlayerCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::OWSInventory_eventSetOwningPlayerCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execSetOwningPlayerCharacter)
{
	P_GET_OBJECT(AOWSCharacter,Z_Param_inOwningPlayerCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningPlayerCharacter(Z_Param_inOwningPlayerCharacter);
	P_NATIVE_END;
}
// End Class UOWSInventory Function SetOwningPlayerCharacter

// Begin Class UOWSInventory Function SwapSlots
struct Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics
{
	struct OWSInventory_eventSwapSlots_Parms
	{
		int32 SlotA;
		int32 SlotB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotA = { "SlotA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSwapSlots_Parms, SlotA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotB = { "SlotB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventory_eventSwapSlots_Parms, SlotB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::NewProp_SlotB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventory, nullptr, "SwapSlots", nullptr, nullptr, Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::OWSInventory_eventSwapSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::OWSInventory_eventSwapSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventory_SwapSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventory_SwapSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventory::execSwapSlots)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotA);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapSlots(Z_Param_SlotA,Z_Param_SlotB);
	P_NATIVE_END;
}
// End Class UOWSInventory Function SwapSlots

// Begin Class UOWSInventory
void UOWSInventory::StaticRegisterNativesUOWSInventory()
{
	UClass* Class = UOWSInventory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemsFromInventoryItemStruct", &UOWSInventory::execAddItemsFromInventoryItemStruct },
		{ "AddItemToInventory", &UOWSInventory::execAddItemToInventory },
		{ "AddItemToSlot", &UOWSInventory::execAddItemToSlot },
		{ "AddStackToSlot", &UOWSInventory::execAddStackToSlot },
		{ "FindFirstEmptySlotToFitItemOfSize", &UOWSInventory::execFindFirstEmptySlotToFitItemOfSize },
		{ "FindItemIndex", &UOWSInventory::execFindItemIndex },
		{ "GetStackInSlot", &UOWSInventory::execGetStackInSlot },
		{ "IsSlotFilled", &UOWSInventory::execIsSlotFilled },
		{ "RemoveOneItemFromSlot", &UOWSInventory::execRemoveOneItemFromSlot },
		{ "RemoveStackFromSlot", &UOWSInventory::execRemoveStackFromSlot },
		{ "SetInventoryName", &UOWSInventory::execSetInventoryName },
		{ "SetInventorySize", &UOWSInventory::execSetInventorySize },
		{ "SetOwningPlayerCharacter", &UOWSInventory::execSetOwningPlayerCharacter },
		{ "SwapSlots", &UOWSInventory::execSwapSlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSInventory);
UClass* Z_Construct_UClass_UOWSInventory_NoRegister()
{
	return UOWSInventory::StaticClass();
}
struct Z_Construct_UClass_UOWSInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSInventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItemStacks_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfGroupsUnlocked_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsPerGroup_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfColumns_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItemStacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryItemStacks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InventoryName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfGroupsUnlocked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotsPerGroup;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfColumns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSInventory_AddItemsFromInventoryItemStruct, "AddItemsFromInventoryItemStruct" }, // 1558286740
		{ &Z_Construct_UFunction_UOWSInventory_AddItemToInventory, "AddItemToInventory" }, // 1201185425
		{ &Z_Construct_UFunction_UOWSInventory_AddItemToSlot, "AddItemToSlot" }, // 3631931245
		{ &Z_Construct_UFunction_UOWSInventory_AddStackToSlot, "AddStackToSlot" }, // 2776078788
		{ &Z_Construct_UFunction_UOWSInventory_FindFirstEmptySlotToFitItemOfSize, "FindFirstEmptySlotToFitItemOfSize" }, // 3720539804
		{ &Z_Construct_UFunction_UOWSInventory_FindItemIndex, "FindItemIndex" }, // 2477484545
		{ &Z_Construct_UFunction_UOWSInventory_GetStackInSlot, "GetStackInSlot" }, // 1083201717
		{ &Z_Construct_UFunction_UOWSInventory_IsSlotFilled, "IsSlotFilled" }, // 206564751
		{ &Z_Construct_UFunction_UOWSInventory_RemoveOneItemFromSlot, "RemoveOneItemFromSlot" }, // 79871036
		{ &Z_Construct_UFunction_UOWSInventory_RemoveStackFromSlot, "RemoveStackFromSlot" }, // 2104037616
		{ &Z_Construct_UFunction_UOWSInventory_SetInventoryName, "SetInventoryName" }, // 2673839432
		{ &Z_Construct_UFunction_UOWSInventory_SetInventorySize, "SetInventorySize" }, // 1046776478
		{ &Z_Construct_UFunction_UOWSInventory_SetOwningPlayerCharacter, "SetOwningPlayerCharacter" }, // 2542718135
		{ &Z_Construct_UFunction_UOWSInventory_SwapSlots, "SwapSlots" }, // 4092848725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_Inner = { "InventoryItemStacks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks = { "InventoryItemStacks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, InventoryItemStacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItemStacks_MetaData), NewProp_InventoryItemStacks_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName = { "InventoryName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, InventoryName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryName_MetaData), NewProp_InventoryName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked = { "NumberOfGroupsUnlocked", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, NumberOfGroupsUnlocked), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfGroupsUnlocked_MetaData), NewProp_NumberOfGroupsUnlocked_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup = { "SlotsPerGroup", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, SlotsPerGroup), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsPerGroup_MetaData), NewProp_SlotsPerGroup_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfSlots = { "NumberOfSlots", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, NumberOfSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSlots_MetaData), NewProp_NumberOfSlots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfColumns = { "NumberOfColumns", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventory, NumberOfColumns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfColumns_MetaData), NewProp_NumberOfColumns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryItemStacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_InventoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfGroupsUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_SlotsPerGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventory_Statics::NewProp_NumberOfColumns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSInventory_Statics::ClassParams = {
	&UOWSInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSInventory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSInventory()
{
	if (!Z_Registration_Info_UClass_UOWSInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSInventory.OuterSingleton, Z_Construct_UClass_UOWSInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSInventory.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSInventory>()
{
	return UOWSInventory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSInventory);
UOWSInventory::~UOWSInventory() {}
// End Class UOWSInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSInventory, UOWSInventory::StaticClass, TEXT("UOWSInventory"), &Z_Registration_Info_UClass_UOWSInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSInventory), 804529127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_3389189091(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
