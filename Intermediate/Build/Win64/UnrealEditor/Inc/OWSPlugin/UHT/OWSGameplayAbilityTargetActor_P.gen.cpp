// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetActor_P.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetActor_P() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSGameplayAbilityTargetActor_P Function CancelTarget
struct Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, nullptr, "CancelTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameplayAbilityTargetActor_P::execCancelTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelTarget();
	P_NATIVE_END;
}
// End Class AOWSGameplayAbilityTargetActor_P Function CancelTarget

// Begin Class AOWSGameplayAbilityTargetActor_P Function ConfirmTarget
struct Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, nullptr, "ConfirmTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameplayAbilityTargetActor_P::execConfirmTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmTarget();
	P_NATIVE_END;
}
// End Class AOWSGameplayAbilityTargetActor_P Function ConfirmTarget

// Begin Class AOWSGameplayAbilityTargetActor_P
void AOWSGameplayAbilityTargetActor_P::StaticRegisterNativesAOWSGameplayAbilityTargetActor_P()
{
	UClass* Class = AOWSGameplayAbilityTargetActor_P::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelTarget", &AOWSGameplayAbilityTargetActor_P::execCancelTarget },
		{ "ConfirmTarget", &AOWSGameplayAbilityTargetActor_P::execConfirmTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameplayAbilityTargetActor_P);
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_NoRegister()
{
	return AOWSGameplayAbilityTargetActor_P::StaticClass();
}
struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameplayAbilityTargetActor_P.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorClass_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor we intend to place. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor we intend to place." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorMaterial_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override Material 0 on our placed actor's meshes with this material for visualization. */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override Material 0 on our placed actor's meshes with this material for visualization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumTargetingDistance_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAtMouseCursor_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetActor_P.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlacedActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacedActorMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumTargetingDistance;
	static void NewProp_AimAtMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AimAtMouseCursor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_CancelTarget, "CancelTarget" }, // 2001073077
		{ &Z_Construct_UFunction_AOWSGameplayAbilityTargetActor_P_ConfirmTarget, "ConfirmTarget" }, // 1337183150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameplayAbilityTargetActor_P>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass = { "PlacedActorClass", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, PlacedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedActorClass_MetaData), NewProp_PlacedActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial = { "PlacedActorMaterial", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, PlacedActorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacedActorMaterial_MetaData), NewProp_PlacedActorMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance = { "MinimumTargetingDistance", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameplayAbilityTargetActor_P, MinimumTargetingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumTargetingDistance_MetaData), NewProp_MinimumTargetingDistance_MetaData) };
void Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_SetBit(void* Obj)
{
	((AOWSGameplayAbilityTargetActor_P*)Obj)->AimAtMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor = { "AimAtMouseCursor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSGameplayAbilityTargetActor_P), &Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAtMouseCursor_MetaData), NewProp_AimAtMouseCursor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_PlacedActorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_MinimumTargetingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::NewProp_AimAtMouseCursor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::ClassParams = {
	&AOWSGameplayAbilityTargetActor_P::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P()
{
	if (!Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_P.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_P.OuterSingleton, Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_P.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameplayAbilityTargetActor_P>()
{
	return AOWSGameplayAbilityTargetActor_P::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameplayAbilityTargetActor_P);
AOWSGameplayAbilityTargetActor_P::~AOWSGameplayAbilityTargetActor_P() {}
// End Class AOWSGameplayAbilityTargetActor_P

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P, AOWSGameplayAbilityTargetActor_P::StaticClass, TEXT("AOWSGameplayAbilityTargetActor_P"), &Z_Registration_Info_UClass_AOWSGameplayAbilityTargetActor_P, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameplayAbilityTargetActor_P), 2520711674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_2953057786(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
