// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor_Tr.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor_Tr() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSGameplayAbilityTargetActor_Tr
void AOWSGameplayAbilityTargetActor_Tr::StaticRegisterNativesAOWSGameplayAbilityTargetActor_Tr()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameplayAbilityTargetActor_Tr);
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_NoRegister()
{
	return AOWSGameplayAbilityTargetActor_Tr::StaticClass();
}
struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intermediate base class for all line-trace type targeting actors. */" },
#endif
		{ "IncludePath", "OWSGameplayAbilityTargetActor_Tr.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intermediate base class for all line-trace type targeting actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceProfile_MetaData[] = {
		{ "Category", "Trace" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceAffectsAimPitch_MetaData[] = {
		{ "Category", "Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does the trace affect the aiming pitch\n" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_Tr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does the trace affect the aiming pitch" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceProfile;
	static void NewProp_bTraceAffectsAimPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceAffectsAimPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor_Tr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_Tr, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile = { "TraceProfile", nullptr, (EPropertyFlags)0x0011000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_Tr, TraceProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceProfile_MetaData), NewProp_TraceProfile_MetaData) }; // 3816324900
void Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_SetBit(void* Obj)
{
	((AOWSGameplayAbilityTargetActor_Tr*)Obj)->bTraceAffectsAimPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch = { "bTraceAffectsAimPitch", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSGameplayAbilityTargetActor_Tr), &Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceAffectsAimPitch_MetaData), NewProp_bTraceAffectsAimPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_TraceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::NewProp_bTraceAffectsAimPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::ClassParams = {
	&AOWSGameplayAbilityTargetActor_Tr::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr()
{
	if (!Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_Tr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_Tr.OuterSingleton, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_Tr.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor_Tr>()
{
	return AOWSGameplayAbilityTargetActor_Tr::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor_Tr);
AOWSGameplayAbilityTargetActor_Tr::~AOWSGameplayAbilityTargetActor_Tr() {}
// End Class AOWSGameplayAbilityTargetActor_Tr

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_Tr_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Tr, AOWSGameplayAbilityTargetActor_Tr::StaticClass, TEXT("AOWSGameplayAbilityTargetActor_Tr"), &Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_Tr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameplayAbilityTargetActor_Tr), 963392480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_Tr_h_388216285(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_Tr_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_Tr_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
