// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSInventoryItemStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSInventoryItemStack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSInventoryItem_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSInventoryItemStack Function AddToStack
struct Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics
{
	struct OWSInventoryItemStack_eventAddToStack_Parms
	{
		AOWSInventoryItem* InventoryItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventoryItemStack_eventAddToStack_Parms, InventoryItem), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::NewProp_InventoryItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventoryItemStack, nullptr, "AddToStack", nullptr, nullptr, Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::OWSInventoryItemStack_eventAddToStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::OWSInventoryItemStack_eventAddToStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventoryItemStack::execAddToStack)
{
	P_GET_OBJECT(AOWSInventoryItem,Z_Param_InventoryItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToStack(Z_Param_InventoryItem);
	P_NATIVE_END;
}
// End Class UOWSInventoryItemStack Function AddToStack

// Begin Class UOWSInventoryItemStack Function GetTopItemFromStack
struct Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics
{
	struct OWSInventoryItemStack_eventGetTopItemFromStack_Parms
	{
		AOWSInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryStack" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSInventoryItemStack_eventGetTopItemFromStack_Parms, ReturnValue), Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSInventoryItemStack, nullptr, "GetTopItemFromStack", nullptr, nullptr, Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::OWSInventoryItemStack_eventGetTopItemFromStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::OWSInventoryItemStack_eventGetTopItemFromStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSInventoryItemStack::execGetTopItemFromStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSInventoryItem**)Z_Param__Result=P_THIS->GetTopItemFromStack();
	P_NATIVE_END;
}
// End Class UOWSInventoryItemStack Function GetTopItemFromStack

// Begin Class UOWSInventoryItemStack
void UOWSInventoryItemStack::StaticRegisterNativesUOWSInventoryItemStack()
{
	UClass* Class = UOWSInventoryItemStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToStack", &UOWSInventoryItemStack::execAddToStack },
		{ "GetTopItemFromStack", &UOWSInventoryItemStack::execGetTopItemFromStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSInventoryItemStack);
UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister()
{
	return UOWSInventoryItemStack::StaticClass();
}
struct Z_Construct_UClass_UOWSInventoryItemStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSInventoryItemStack.h" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryItems_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotNumber_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSInventoryItemStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSInventoryItemStack_AddToStack, "AddToStack" }, // 1271484997
		{ &Z_Construct_UFunction_UOWSInventoryItemStack_GetTopItemFromStack, "GetTopItemFromStack" }, // 193817466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSInventoryItemStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_Inner = { "InventoryItems", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AOWSInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems = { "InventoryItems", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventoryItemStack, InventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryItems_MetaData), NewProp_InventoryItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_SlotNumber = { "SlotNumber", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSInventoryItemStack, SlotNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotNumber_MetaData), NewProp_SlotNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_InventoryItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSInventoryItemStack_Statics::NewProp_SlotNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSInventoryItemStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSInventoryItemStack_Statics::ClassParams = {
	&UOWSInventoryItemStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSInventoryItemStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSInventoryItemStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSInventoryItemStack()
{
	if (!Z_Registration_Info_UClass_UOWSInventoryItemStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSInventoryItemStack.OuterSingleton, Z_Construct_UClass_UOWSInventoryItemStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSInventoryItemStack.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSInventoryItemStack>()
{
	return UOWSInventoryItemStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSInventoryItemStack);
UOWSInventoryItemStack::~UOWSInventoryItemStack() {}
// End Class UOWSInventoryItemStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSInventoryItemStack, UOWSInventoryItemStack::StaticClass, TEXT("UOWSInventoryItemStack"), &Z_Registration_Info_UClass_UOWSInventoryItemStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSInventoryItemStack), 1207474021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_3599643580(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
