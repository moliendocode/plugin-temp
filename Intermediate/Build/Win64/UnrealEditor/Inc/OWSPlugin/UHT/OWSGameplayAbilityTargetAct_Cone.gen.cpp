// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetAct_Cone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetAct_Cone() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSGameplayAbilityTargetAct_Cone
void AOWSGameplayAbilityTargetAct_Cone::StaticRegisterNativesAOWSGameplayAbilityTargetAct_Cone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameplayAbilityTargetAct_Cone);
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_NoRegister()
{
	return AOWSGameplayAbilityTargetAct_Cone::StaticClass();
}
struct Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameplayAbilityTargetAct_Cone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Radius" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of target acquisition around the ability's start location. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of target acquisition around the ability's start location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetAct_Cone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetAct_Cone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle = { "HalfAngle", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, HalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfAngle_MetaData), NewProp_HalfAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetAct_Cone, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardVector_MetaData), NewProp_ForwardVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_HalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::NewProp_ForwardVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::ClassParams = {
	&AOWSGameplayAbilityTargetAct_Cone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone()
{
	if (!Z_Registration_Info_UClass_AOWSGameplayAbilityTargetAct_Cone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameplayAbilityTargetAct_Cone.OuterSingleton, Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameplayAbilityTargetAct_Cone.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetAct_Cone>()
{
	return AOWSGameplayAbilityTargetAct_Cone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetAct_Cone);
AOWSGameplayAbilityTargetAct_Cone::~AOWSGameplayAbilityTargetAct_Cone() {}
// End Class AOWSGameplayAbilityTargetAct_Cone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetAct_Cone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameplayAbilityTargetAct_Cone, AOWSGameplayAbilityTargetAct_Cone::StaticClass, TEXT("AOWSGameplayAbilityTargetAct_Cone"), &Z_Registration_Info_UClass_AOWSGameplayAbilityTargetAct_Cone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameplayAbilityTargetAct_Cone), 3400186523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetAct_Cone_h_3037410082(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetAct_Cone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetAct_Cone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
