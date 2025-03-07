// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSGameplayAbilityTargetActor
void AOWSGameplayAbilityTargetActor::StaticRegisterNativesAOWSGameplayAbilityTargetActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameplayAbilityTargetActor);
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_NoRegister()
{
	return AOWSGameplayAbilityTargetActor::StaticClass();
}
struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameplayAbilityTargetActor.h" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSFilter_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OWSFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter = { "OWSFilter", nullptr, (EPropertyFlags)0x0011000000000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor, OWSFilter), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSFilter_MetaData), NewProp_OWSFilter_MetaData) }; // 2797804798
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::NewProp_OWSFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::ClassParams = {
	&AOWSGameplayAbilityTargetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor()
{
	if (!Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor.OuterSingleton, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor>()
{
	return AOWSGameplayAbilityTargetActor::StaticClass();
}
void AOWSGameplayAbilityTargetActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_OWSFilter(TEXT("OWSFilter"));
	const bool bIsValid = true
		&& Name_OWSFilter == ClassReps[(int32)ENetFields_Private::OWSFilter].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSGameplayAbilityTargetActor"));
}
AOWSGameplayAbilityTargetActor::AOWSGameplayAbilityTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor);
AOWSGameplayAbilityTargetActor::~AOWSGameplayAbilityTargetActor() {}
// End Class AOWSGameplayAbilityTargetActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameplayAbilityTargetActor, AOWSGameplayAbilityTargetActor::StaticClass, TEXT("AOWSGameplayAbilityTargetActor"), &Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameplayAbilityTargetActor), 4135138021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_2389136121(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
