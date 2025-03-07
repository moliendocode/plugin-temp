// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityWorldReticle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityWorldReticle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSGameplayAbilityWorldReticle
void AOWSGameplayAbilityWorldReticle::StaticRegisterNativesAOWSGameplayAbilityWorldReticle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameplayAbilityWorldReticle);
UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_NoRegister()
{
	return AOWSGameplayAbilityWorldReticle::StaticClass();
}
struct Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameplayAbilityWorldReticle.h" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hardcoded collision component, so other objects don't think they can collide with the visualization actor *///DEPRECATED_FORGAME(4.6, \"CollisionComponent should not be accessed directly, please use GetCollisionComponent() function instead. CollisionComponent will soon be private and your code will not compile.\")\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hardcoded collision component, so other objects don't think they can collide with the visualization actor //DEPRECATED_FORGAME(4.6, \"CollisionComponent should not be accessed directly, please use GetCollisionComponent() function instead. CollisionComponent will soon be private and your code will not compile.\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityWorldReticle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualizationComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualizationComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityWorldReticle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityWorldReticle, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_Inner = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityWorldReticle, VisualizationComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizationComponents_MetaData), NewProp_VisualizationComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::NewProp_VisualizationComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityWorldReticle,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::ClassParams = {
	&AOWSGameplayAbilityWorldReticle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameplayAbilityWorldReticle()
{
	if (!Z_Registration_Info_UClass_AOWSGameplayAbilityWorldReticle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameplayAbilityWorldReticle.OuterSingleton, Z_Construct_UClass_AOWSGameplayAbilityWorldReticle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameplayAbilityWorldReticle.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityWorldReticle>()
{
	return AOWSGameplayAbilityWorldReticle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityWorldReticle);
AOWSGameplayAbilityWorldReticle::~AOWSGameplayAbilityWorldReticle() {}
// End Class AOWSGameplayAbilityWorldReticle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityWorldReticle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameplayAbilityWorldReticle, AOWSGameplayAbilityWorldReticle::StaticClass, TEXT("AOWSGameplayAbilityWorldReticle"), &Z_Registration_Info_UClass_AOWSGameplayAbilityWorldReticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameplayAbilityWorldReticle), 3705850764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityWorldReticle_h_4116967176(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityWorldReticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityWorldReticle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
