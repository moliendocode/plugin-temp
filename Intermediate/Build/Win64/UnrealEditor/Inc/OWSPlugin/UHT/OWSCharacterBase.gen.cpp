// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSCharacterBase Function GetOWSMovementComponent
struct Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics
{
	struct OWSCharacterBase_eventGetOWSMovementComponent_Parms
	{
		UOWSCharacterMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterBase_eventGetOWSMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterBase, nullptr, "GetOWSMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::OWSCharacterBase_eventGetOWSMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::OWSCharacterBase_eventGetOWSMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterBase::execGetOWSMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSCharacterMovementComponent**)Z_Param__Result=P_THIS->GetOWSMovementComponent();
	P_NATIVE_END;
}
// End Class AOWSCharacterBase Function GetOWSMovementComponent

// Begin Class AOWSCharacterBase
void AOWSCharacterBase::StaticRegisterNativesAOWSCharacterBase()
{
	UClass* Class = AOWSCharacterBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOWSMovementComponent", &AOWSCharacterBase::execGetOWSMovementComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSCharacterBase);
UClass* Z_Construct_UClass_AOWSCharacterBase_NoRegister()
{
	return AOWSCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AOWSCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OWSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTransferringBetweenMaps_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWSCharacterBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTransferringBetweenMaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTransferringBetweenMaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacterBase_GetOWSMovementComponent, "GetOWSMovementComponent" }, // 2450144721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_SetBit(void* Obj)
{
	((AOWSCharacterBase*)Obj)->IsTransferringBetweenMaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps = { "IsTransferringBetweenMaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSCharacterBase), &Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTransferringBetweenMaps_MetaData), NewProp_IsTransferringBetweenMaps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterBase_Statics::NewProp_IsTransferringBetweenMaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacterBase_Statics::ClassParams = {
	&AOWSCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSCharacterBase()
{
	if (!Z_Registration_Info_UClass_AOWSCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSCharacterBase.OuterSingleton, Z_Construct_UClass_AOWSCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSCharacterBase.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacterBase>()
{
	return AOWSCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacterBase);
AOWSCharacterBase::~AOWSCharacterBase() {}
// End Class AOWSCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSCharacterBase, AOWSCharacterBase::StaticClass, TEXT("AOWSCharacterBase"), &Z_Registration_Info_UClass_AOWSCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSCharacterBase), 2814534905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterBase_h_4142042613(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
