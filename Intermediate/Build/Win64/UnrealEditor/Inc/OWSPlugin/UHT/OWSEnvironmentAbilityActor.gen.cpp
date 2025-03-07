// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSEnvironmentAbilityActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSEnvironmentAbilityActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSEnvironmentAbilityActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSEnvironmentAbilityActor_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSEnvironmentAbilityActor Function ActivatePeriodicAbility
struct Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|OWS" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSEnvironmentAbilityActor, nullptr, "ActivatePeriodicAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSEnvironmentAbilityActor::execActivatePeriodicAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePeriodicAbility();
	P_NATIVE_END;
}
// End Class AOWSEnvironmentAbilityActor Function ActivatePeriodicAbility

// Begin Class AOWSEnvironmentAbilityActor Function Multicast_PlayPeriodicParticleFX
static const FName NAME_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX = FName(TEXT("Multicast_PlayPeriodicParticleFX"));
void AOWSEnvironmentAbilityActor::Multicast_PlayPeriodicParticleFX()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSEnvironmentAbilityActor, nullptr, "Multicast_PlayPeriodicParticleFX", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSEnvironmentAbilityActor::execMulticast_PlayPeriodicParticleFX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_PlayPeriodicParticleFX_Implementation();
	P_NATIVE_END;
}
// End Class AOWSEnvironmentAbilityActor Function Multicast_PlayPeriodicParticleFX

// Begin Class AOWSEnvironmentAbilityActor
void AOWSEnvironmentAbilityActor::StaticRegisterNativesAOWSEnvironmentAbilityActor()
{
	UClass* Class = AOWSEnvironmentAbilityActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePeriodicAbility", &AOWSEnvironmentAbilityActor::execActivatePeriodicAbility },
		{ "Multicast_PlayPeriodicParticleFX", &AOWSEnvironmentAbilityActor::execMulticast_PlayPeriodicParticleFX },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSEnvironmentAbilityActor);
UClass* Z_Construct_UClass_AOWSEnvironmentAbilityActor_NoRegister()
{
	return AOWSEnvironmentAbilityActor::StaticClass();
}
struct Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSEnvironmentAbilityActor.h" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXOnPeriodicActivation_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClassFilter_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This is the class we will activating the abilities on */" },
#endif
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the class we will activating the abilities on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToActivatePeriodically_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Activate this Ability each Period Length (seconds).  Must be a Server Initiated Ability as this only fires on the server side. */" },
#endif
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Activate this Ability each Period Length (seconds).  Must be a Server Initiated Ability as this only fires on the server side." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEffectToPlayOnPeriodicActivaion_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodLength_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Be careful not to set this value too low and activate too many abilities in a short period of time!*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Be careful not to set this value too low and activate too many abilities in a short period of time!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfPeriodicActivations_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Despawns when the limit is met. Zero is an unlimited number of activations */" },
#endif
		{ "ModuleRelativePath", "Public/OWSEnvironmentAbilityActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Despawns when the limit is met. Zero is an unlimited number of activations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXOnPeriodicActivation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClassFilter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToActivatePeriodically;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffectToPlayOnPeriodicActivaion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeriodLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxNumberOfPeriodicActivations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSEnvironmentAbilityActor_ActivatePeriodicAbility, "ActivatePeriodicAbility" }, // 3590183226
		{ &Z_Construct_UFunction_AOWSEnvironmentAbilityActor_Multicast_PlayPeriodicParticleFX, "Multicast_PlayPeriodicParticleFX" }, // 2862272641
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSEnvironmentAbilityActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_FXOnPeriodicActivation = { "FXOnPeriodicActivation", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, FXOnPeriodicActivation), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXOnPeriodicActivation_MetaData), NewProp_FXOnPeriodicActivation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_ActorClassFilter = { "ActorClassFilter", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, ActorClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClassFilter_MetaData), NewProp_ActorClassFilter_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_AbilityToActivatePeriodically = { "AbilityToActivatePeriodically", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, AbilityToActivatePeriodically), Z_Construct_UClass_UClass, Z_Construct_UClass_UOWSGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToActivatePeriodically_MetaData), NewProp_AbilityToActivatePeriodically_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_ParticleEffectToPlayOnPeriodicActivaion = { "ParticleEffectToPlayOnPeriodicActivaion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, ParticleEffectToPlayOnPeriodicActivaion), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleEffectToPlayOnPeriodicActivaion_MetaData), NewProp_ParticleEffectToPlayOnPeriodicActivaion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_PeriodLength = { "PeriodLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, PeriodLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodLength_MetaData), NewProp_PeriodLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_MaxNumberOfPeriodicActivations = { "MaxNumberOfPeriodicActivations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSEnvironmentAbilityActor, MaxNumberOfPeriodicActivations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfPeriodicActivations_MetaData), NewProp_MaxNumberOfPeriodicActivations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_CollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_FXOnPeriodicActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_ActorClassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_AbilityToActivatePeriodically,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_ParticleEffectToPlayOnPeriodicActivaion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_PeriodLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::NewProp_MaxNumberOfPeriodicActivations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::ClassParams = {
	&AOWSEnvironmentAbilityActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSEnvironmentAbilityActor()
{
	if (!Z_Registration_Info_UClass_AOWSEnvironmentAbilityActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSEnvironmentAbilityActor.OuterSingleton, Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSEnvironmentAbilityActor.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSEnvironmentAbilityActor>()
{
	return AOWSEnvironmentAbilityActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSEnvironmentAbilityActor);
AOWSEnvironmentAbilityActor::~AOWSEnvironmentAbilityActor() {}
// End Class AOWSEnvironmentAbilityActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSEnvironmentAbilityActor, AOWSEnvironmentAbilityActor::StaticClass, TEXT("AOWSEnvironmentAbilityActor"), &Z_Registration_Info_UClass_AOWSEnvironmentAbilityActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSEnvironmentAbilityActor), 2576926634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_2397996823(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
