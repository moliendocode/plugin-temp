// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSModMagnitudeCalculation.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSModMagnitudeCalculation() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSModMagnitudeCalculation Function GetAttributeCapture
struct Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics
{
	struct OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms
	{
		FGameplayEffectSpec Spec;
		FGameplayAttribute Attribute;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "ModuleRelativePath", "Public/OWSModMagnitudeCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1577102320
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 2792951819
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Spec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSModMagnitudeCalculation, nullptr, "GetAttributeCapture", nullptr, nullptr, Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::OWSModMagnitudeCalculation_eventGetAttributeCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSModMagnitudeCalculation::execGetAttributeCapture)
{
	P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
	P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAttributeCapture(Z_Param_Out_Spec,Z_Param_Attribute);
	P_NATIVE_END;
}
// End Class UOWSModMagnitudeCalculation Function GetAttributeCapture

// Begin Class UOWSModMagnitudeCalculation
void UOWSModMagnitudeCalculation::StaticRegisterNativesUOWSModMagnitudeCalculation()
{
	UClass* Class = UOWSModMagnitudeCalculation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttributeCapture", &UOWSModMagnitudeCalculation::execGetAttributeCapture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSModMagnitudeCalculation);
UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation_NoRegister()
{
	return UOWSModMagnitudeCalculation::StaticClass();
}
struct Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSModMagnitudeCalculation.h" },
		{ "ModuleRelativePath", "Public/OWSModMagnitudeCalculation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSModMagnitudeCalculation_GetAttributeCapture, "GetAttributeCapture" }, // 1816836935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSModMagnitudeCalculation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::ClassParams = {
	&UOWSModMagnitudeCalculation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSModMagnitudeCalculation()
{
	if (!Z_Registration_Info_UClass_UOWSModMagnitudeCalculation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSModMagnitudeCalculation.OuterSingleton, Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSModMagnitudeCalculation.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSModMagnitudeCalculation>()
{
	return UOWSModMagnitudeCalculation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSModMagnitudeCalculation);
UOWSModMagnitudeCalculation::~UOWSModMagnitudeCalculation() {}
// End Class UOWSModMagnitudeCalculation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSModMagnitudeCalculation, UOWSModMagnitudeCalculation::StaticClass, TEXT("UOWSModMagnitudeCalculation"), &Z_Registration_Info_UClass_UOWSModMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSModMagnitudeCalculation), 558254038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_3532978303(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
