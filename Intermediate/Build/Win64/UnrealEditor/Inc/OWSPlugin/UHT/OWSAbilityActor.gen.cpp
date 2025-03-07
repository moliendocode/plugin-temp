// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAbilityActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAbilityActor_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSAbilityActor
void AOWSAbilityActor::StaticRegisterNativesAOWSAbilityActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSAbilityActor);
UClass* Z_Construct_UClass_AOWSAbilityActor_NoRegister()
{
	return AOWSAbilityActor::StaticClass();
}
struct Z_Construct_UClass_AOWSAbilityActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSAbilityActor.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSBasicAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilityActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OWSBasicAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAbilityActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAbilityActor, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes = { "OWSBasicAttributes", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAbilityActor, OWSBasicAttributes), Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSBasicAttributes_MetaData), NewProp_OWSBasicAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAbilityActor_Statics::NewProp_OWSBasicAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSAbilityActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSAbilityActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSAbilityActor, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSAbilityActor_Statics::ClassParams = {
	&AOWSAbilityActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAbilityActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSAbilityActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSAbilityActor()
{
	if (!Z_Registration_Info_UClass_AOWSAbilityActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSAbilityActor.OuterSingleton, Z_Construct_UClass_AOWSAbilityActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSAbilityActor.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSAbilityActor>()
{
	return AOWSAbilityActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAbilityActor);
AOWSAbilityActor::~AOWSAbilityActor() {}
// End Class AOWSAbilityActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSAbilityActor, AOWSAbilityActor::StaticClass, TEXT("AOWSAbilityActor"), &Z_Registration_Info_UClass_AOWSAbilityActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSAbilityActor), 3647261520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_3404944869(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
