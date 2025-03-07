// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSFogVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSFogVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSFogVolume();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSFogVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSFogVolume
void AOWSFogVolume::StaticRegisterNativesAOWSFogVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSFogVolume);
UClass* Z_Construct_UClass_AOWSFogVolume_NoRegister()
{
	return AOWSFogVolume::StaticClass();
}
struct Z_Construct_UClass_AOWSFogVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "OWSFogVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSFogVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFogExtinction_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/OWSFogVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFogExtinction_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/OWSFogVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRange_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/OWSFogVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFog_MetaData[] = {
		{ "Category", "Fog" },
		{ "ModuleRelativePath", "Public/OWSFogVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFogExtinction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFogExtinction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExponentialHeightFog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSFogVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_MaxFogExtinction = { "MaxFogExtinction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFogVolume, MaxFogExtinction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFogExtinction_MetaData), NewProp_MaxFogExtinction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_MinFogExtinction = { "MinFogExtinction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFogVolume, MinFogExtinction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFogExtinction_MetaData), NewProp_MinFogExtinction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_TransitionRange = { "TransitionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFogVolume, TransitionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionRange_MetaData), NewProp_TransitionRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_ExponentialHeightFog = { "ExponentialHeightFog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFogVolume, ExponentialHeightFog), Z_Construct_UClass_AExponentialHeightFog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExponentialHeightFog_MetaData), NewProp_ExponentialHeightFog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSFogVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_MaxFogExtinction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_MinFogExtinction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_TransitionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFogVolume_Statics::NewProp_ExponentialHeightFog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFogVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSFogVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFogVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSFogVolume_Statics::ClassParams = {
	&AOWSFogVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSFogVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFogVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFogVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSFogVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSFogVolume()
{
	if (!Z_Registration_Info_UClass_AOWSFogVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSFogVolume.OuterSingleton, Z_Construct_UClass_AOWSFogVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSFogVolume.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSFogVolume>()
{
	return AOWSFogVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSFogVolume);
AOWSFogVolume::~AOWSFogVolume() {}
// End Class AOWSFogVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFogVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSFogVolume, AOWSFogVolume::StaticClass, TEXT("AOWSFogVolume"), &Z_Registration_Info_UClass_AOWSFogVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSFogVolume), 3831917503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFogVolume_h_960180337(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFogVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFogVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
