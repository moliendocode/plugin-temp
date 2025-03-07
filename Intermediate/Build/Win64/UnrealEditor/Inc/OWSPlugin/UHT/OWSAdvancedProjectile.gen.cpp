// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAdvancedProjectile.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAdvancedProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRepUTProjMovement();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FRepUTProjMovement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RepUTProjMovement;
class UScriptStruct* FRepUTProjMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RepUTProjMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RepUTProjMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepUTProjMovement, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("RepUTProjMovement"));
	}
	return Z_Registration_Info_UScriptStruct_RepUTProjMovement.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FRepUTProjMovement>()
{
	return FRepUTProjMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRepUTProjMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Replicated movement data of our RootComponent.\n* More efficient than engine's FRepMovement\n*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated movement data of our RootComponent.\nMore efficient than engine's FRepMovement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepUTProjMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepUTProjMovement, LinearVelocity), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepUTProjMovement, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRepUTProjMovement, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"RepUTProjMovement",
	Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::PropPointers),
	sizeof(FRepUTProjMovement),
	alignof(FRepUTProjMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRepUTProjMovement()
{
	if (!Z_Registration_Info_UScriptStruct_RepUTProjMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RepUTProjMovement.InnerSingleton, Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RepUTProjMovement.InnerSingleton;
}
// End ScriptStruct FRepUTProjMovement

// Begin Class AOWSAdvancedProjectile Function DamageImpactedActor
struct OWSAdvancedProjectile_eventDamageImpactedActor_Parms
{
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	FHitResult Hit;
};
static const FName NAME_AOWSAdvancedProjectile_DamageImpactedActor = FName(TEXT("DamageImpactedActor"));
void AOWSAdvancedProjectile::DamageImpactedActor(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit)
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSAdvancedProjectile_DamageImpactedActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		OWSAdvancedProjectile_eventDamageImpactedActor_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.Hit=Hit;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		DamageImpactedActor_Implementation(OtherActor, OtherComp, Hit);
	}
}
struct Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** deal damage to Actor directly hit (note that this Actor will then be ignored for any radial damage) */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "deal damage to Actor directly hit (note that this Actor will then be ignored for any radial damage)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventDamageImpactedActor_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "DamageImpactedActor", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::PropPointers), sizeof(OWSAdvancedProjectile_eventDamageImpactedActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAdvancedProjectile_eventDamageImpactedActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execDamageImpactedActor)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DamageImpactedActor_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function DamageImpactedActor

// Begin Class AOWSAdvancedProjectile Function Explode
struct OWSAdvancedProjectile_eventExplode_Parms
{
	FHitResult Hit;
	UPrimitiveComponent* HitComp;
};
static const FName NAME_AOWSAdvancedProjectile_Explode = FName(TEXT("Explode"));
void AOWSAdvancedProjectile::Explode(FHitResult const& Hit, UPrimitiveComponent* HitComp)
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSAdvancedProjectile_Explode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		OWSAdvancedProjectile_eventExplode_Parms Parms;
		Parms.Hit=Hit;
		Parms.HitComp=HitComp;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Explode_Implementation(Hit, HitComp);
	}
}
struct Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "CPP_Default_HitComp", "None" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventExplode_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventExplode_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::NewProp_HitComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "Explode", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::PropPointers), sizeof(OWSAdvancedProjectile_eventExplode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAdvancedProjectile_eventExplode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execExplode)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode_Implementation(Z_Param_Out_Hit,Z_Param_HitComp);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function Explode

// Begin Class AOWSAdvancedProjectile Function OnOverlapBegin
struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics
{
	struct OWSAdvancedProjectile_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OWSAdvancedProjectile_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::OWSAdvancedProjectile_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::OWSAdvancedProjectile_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function OnOverlapBegin

// Begin Class AOWSAdvancedProjectile Function OnPawnSphereOverlapBegin
struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics
{
	struct OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnPawnSphereOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::OWSAdvancedProjectile_eventOnPawnSphereOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execOnPawnSphereOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnSphereOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function OnPawnSphereOverlapBegin

// Begin Class AOWSAdvancedProjectile Function OnRep_UTProjReplicatedMovement
struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UTProjReplicatedMovement struct replication event */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UTProjReplicatedMovement struct replication event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnRep_UTProjReplicatedMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execOnRep_UTProjReplicatedMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_UTProjReplicatedMovement();
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function OnRep_UTProjReplicatedMovement

// Begin Class AOWSAdvancedProjectile Function OnShutdown
static const FName NAME_AOWSAdvancedProjectile_OnShutdown = FName(TEXT("OnShutdown"));
void AOWSAdvancedProjectile::OnShutdown()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSAdvancedProjectile_OnShutdown);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** blueprint hook for shutdown in case any blueprint-created effects need to be turned off */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blueprint hook for shutdown in case any blueprint-created effects need to be turned off" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnShutdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSAdvancedProjectile Function OnShutdown

// Begin Class AOWSAdvancedProjectile Function OnStop
struct Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics
{
	struct OWSAdvancedProjectile_eventOnStop_Parms
	{
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventOnStop_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "OnStop", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::OWSAdvancedProjectile_eventOnStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::OWSAdvancedProjectile_eventOnStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execOnStop)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStop(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function OnStop

// Begin Class AOWSAdvancedProjectile Function ProcessHit
struct OWSAdvancedProjectile_eventProcessHit_Parms
{
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	FHitResult Hit;
};
static const FName NAME_AOWSAdvancedProjectile_ProcessHit = FName(TEXT("ProcessHit"));
void AOWSAdvancedProjectile::ProcessHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit)
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSAdvancedProjectile_ProcessHit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		OWSAdvancedProjectile_eventProcessHit_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.Hit=Hit;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ProcessHit_Implementation(OtherActor, OtherComp, Hit);
	}
}
struct Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when projectile hits something */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when projectile hits something" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventProcessHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ProcessHit", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::PropPointers), sizeof(OWSAdvancedProjectile_eventProcessHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAdvancedProjectile_eventProcessHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execProcessHit)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function ProcessHit

// Begin Class AOWSAdvancedProjectile Function SetAoEDamageEffectOnExplosion
struct Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics
{
	struct OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms
	{
		FGameplayEffectSpecHandle DamageEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms, DamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::NewProp_DamageEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "SetAoEDamageEffectOnExplosion", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::OWSAdvancedProjectile_eventSetAoEDamageEffectOnExplosion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execSetAoEDamageEffectOnExplosion)
{
	P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAoEDamageEffectOnExplosion(Z_Param_DamageEffect);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function SetAoEDamageEffectOnExplosion

// Begin Class AOWSAdvancedProjectile Function SetDamageEffectOnHit
struct Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics
{
	struct OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms
	{
		FGameplayEffectSpecHandle DamageEffect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::NewProp_DamageEffect = { "DamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms, DamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::NewProp_DamageEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "SetDamageEffectOnHit", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::OWSAdvancedProjectile_eventSetDamageEffectOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execSetDamageEffectOnHit)
{
	P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DamageEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamageEffectOnHit(Z_Param_DamageEffect);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function SetDamageEffectOnHit

// Begin Class AOWSAdvancedProjectile Function ShouldIgnoreHit
struct OWSAdvancedProjectile_eventShouldIgnoreHit_Parms
{
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OWSAdvancedProjectile_eventShouldIgnoreHit_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AOWSAdvancedProjectile_ShouldIgnoreHit = FName(TEXT("ShouldIgnoreHit"));
bool AOWSAdvancedProjectile::ShouldIgnoreHit(AActor* OtherActor, UPrimitiveComponent* OtherComp)
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSAdvancedProjectile_ShouldIgnoreHit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		OWSAdvancedProjectile_eventShouldIgnoreHit_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ShouldIgnoreHit_Implementation(OtherActor, OtherComp);
	}
}
struct Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** returns whether the projectile should ignore a potential overlap hit and keep going\n\x09 * split from ProcessHit() as some projectiles want custom hit behavior but the same exclusions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "returns whether the projectile should ignore a potential overlap hit and keep going\nsplit from ProcessHit() as some projectiles want custom hit behavior but the same exclusions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
void Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSAdvancedProjectile_eventShouldIgnoreHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms), &Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ShouldIgnoreHit", nullptr, nullptr, Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::PropPointers), sizeof(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAdvancedProjectile_eventShouldIgnoreHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execShouldIgnoreHit)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldIgnoreHit_Implementation(Z_Param_OtherActor,Z_Param_OtherComp);
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function ShouldIgnoreHit

// Begin Class AOWSAdvancedProjectile Function ShutDown
struct Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** turns off projectile ambient effects, collision, physics, etc\n\x09 * needed because we need a delay between explosion and actor destruction for replication purposes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "turns off projectile ambient effects, collision, physics, etc\nneeded because we need a delay between explosion and actor destruction for replication purposes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAdvancedProjectile, nullptr, "ShutDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAdvancedProjectile::execShutDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShutDown();
	P_NATIVE_END;
}
// End Class AOWSAdvancedProjectile Function ShutDown

// Begin Class AOWSAdvancedProjectile
void AOWSAdvancedProjectile::StaticRegisterNativesAOWSAdvancedProjectile()
{
	UClass* Class = AOWSAdvancedProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DamageImpactedActor", &AOWSAdvancedProjectile::execDamageImpactedActor },
		{ "Explode", &AOWSAdvancedProjectile::execExplode },
		{ "OnOverlapBegin", &AOWSAdvancedProjectile::execOnOverlapBegin },
		{ "OnPawnSphereOverlapBegin", &AOWSAdvancedProjectile::execOnPawnSphereOverlapBegin },
		{ "OnRep_UTProjReplicatedMovement", &AOWSAdvancedProjectile::execOnRep_UTProjReplicatedMovement },
		{ "OnStop", &AOWSAdvancedProjectile::execOnStop },
		{ "ProcessHit", &AOWSAdvancedProjectile::execProcessHit },
		{ "SetAoEDamageEffectOnExplosion", &AOWSAdvancedProjectile::execSetAoEDamageEffectOnExplosion },
		{ "SetDamageEffectOnHit", &AOWSAdvancedProjectile::execSetDamageEffectOnHit },
		{ "ShouldIgnoreHit", &AOWSAdvancedProjectile::execShouldIgnoreHit },
		{ "ShutDown", &AOWSAdvancedProjectile::execShutDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSAdvancedProjectile);
UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister()
{
	return AOWSAdvancedProjectile::StaticClass();
}
struct Z_Construct_UClass_AOWSAdvancedProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "IncludePath", "OWSAdvancedProjectile.h" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UTProjReplicatedMovement_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used for replication of our RootComponent's position and velocity */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for replication of our RootComponent's position and velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyFakeProjectile_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fake projectile on this client providing visuals for me */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fake projectile on this client providing visuals for me" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveFakeToReplicatedPos_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true (usually), move fake to server replicated position. */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true (usually), move fake to server replicated position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterProjectile_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Real projectile for which this projectile is providing visuals */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Real projectile for which this projectile is providing visuals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnOverlapSphere_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Overlap sphere for hitting pawns\n\x09 * NOTE: intentionally hidden from defaults editor so users don't mistakenly modify this when they meant to touch OverlapRadius\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overlap sphere for hitting pawns\nNOTE: intentionally hidden from defaults editor so users don't mistakenly modify this when they meant to touch OverlapRadius" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorController_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactedActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** actor we hit directly and already applied damage to */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "actor we hit directly and already applied damage to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedFully_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True once fully spawned, to avoid destroying replicated projectiles during spawn on client */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True once fully spawned, to avoid destroying replicated projectiles during spawn on client" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateUTMovement_MetaData[] = {
		{ "Category", "Replication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** enables UT optimized movement replication; USE THIS INSTEAD OF bReplicateMovement */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "enables UT optimized movement replication; USE THIS INSTEAD OF bReplicateMovement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRadius_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile size for hitting pawns\n\x09 * if set to zero, the extra component used for this feature will not be attached (perf improvement) but means you can't go from 0 at spawn -> 1+ after spawn\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile size for hitting pawns\nif set to zero, the extra component used for this feature will not be attached (perf improvement) but means you can't go from 0 at spawn -> 1+ after spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamageScale_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectOnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AoEDamageEffectOnHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionGameplayCueTag_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityTagOnImpact_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/OWSAdvancedProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UTProjReplicatedMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyFakeProjectile;
	static void NewProp_bMoveFakeToReplicatedPos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveFakeToReplicatedPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterProjectile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnOverlapSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactedActor;
	static void NewProp_bHasSpawnedFully_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedFully;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static void NewProp_bReplicateUTMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateUTMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamageRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamageScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEffectOnHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AoEDamageEffectOnHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosionGameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateAbilityTagOnImpact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_DamageImpactedActor, "DamageImpactedActor" }, // 1059859636
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_Explode, "Explode" }, // 1962374614
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnOverlapBegin, "OnOverlapBegin" }, // 3646658551
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnPawnSphereOverlapBegin, "OnPawnSphereOverlapBegin" }, // 395589080
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnRep_UTProjReplicatedMovement, "OnRep_UTProjReplicatedMovement" }, // 3229316730
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnShutdown, "OnShutdown" }, // 736973126
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_OnStop, "OnStop" }, // 281301985
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ProcessHit, "ProcessHit" }, // 1065014914
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_SetAoEDamageEffectOnExplosion, "SetAoEDamageEffectOnExplosion" }, // 2570813993
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_SetDamageEffectOnHit, "SetDamageEffectOnHit" }, // 3989586593
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ShouldIgnoreHit, "ShouldIgnoreHit" }, // 4205442461
		{ &Z_Construct_UFunction_AOWSAdvancedProjectile_ShutDown, "ShutDown" }, // 87904940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAdvancedProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement = { "UTProjReplicatedMovement", "OnRep_UTProjReplicatedMovement", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, UTProjReplicatedMovement), Z_Construct_UScriptStruct_FRepUTProjMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UTProjReplicatedMovement_MetaData), NewProp_UTProjReplicatedMovement_MetaData) }; // 2504698273
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile = { "MyFakeProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, MyFakeProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyFakeProjectile_MetaData), NewProp_MyFakeProjectile_MetaData) };
void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_SetBit(void* Obj)
{
	((AOWSAdvancedProjectile*)Obj)->bMoveFakeToReplicatedPos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos = { "bMoveFakeToReplicatedPos", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveFakeToReplicatedPos_MetaData), NewProp_bMoveFakeToReplicatedPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile = { "MasterProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, MasterProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterProjectile_MetaData), NewProp_MasterProjectile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere = { "PawnOverlapSphere", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, PawnOverlapSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnOverlapSphere_MetaData), NewProp_PawnOverlapSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController = { "InstigatorController", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, InstigatorController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorController_MetaData), NewProp_InstigatorController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor = { "ImpactedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ImpactedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactedActor_MetaData), NewProp_ImpactedActor_MetaData) };
void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_SetBit(void* Obj)
{
	((AOWSAdvancedProjectile*)Obj)->bHasSpawnedFully = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully = { "bHasSpawnedFully", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSpawnedFully_MetaData), NewProp_bHasSpawnedFully_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
void Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_SetBit(void* Obj)
{
	((AOWSAdvancedProjectile*)Obj)->bReplicateUTMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement = { "bReplicateUTMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSAdvancedProjectile), &Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplicateUTMovement_MetaData), NewProp_bReplicateUTMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius = { "OverlapRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, OverlapRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRadius_MetaData), NewProp_OverlapRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius = { "ExplosionDamageRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionDamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamageRadius_MetaData), NewProp_ExplosionDamageRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale = { "ExplosionDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionDamageScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamageScale_MetaData), NewProp_ExplosionDamageScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit = { "DamageEffectOnHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, DamageEffectOnHit), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectOnHit_MetaData), NewProp_DamageEffectOnHit_MetaData) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit = { "AoEDamageEffectOnHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, AoEDamageEffectOnHit), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AoEDamageEffectOnHit_MetaData), NewProp_AoEDamageEffectOnHit_MetaData) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag = { "ExplosionGameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ExplosionGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionGameplayCueTag_MetaData), NewProp_ExplosionGameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ActivateAbilityTagOnImpact = { "ActivateAbilityTagOnImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSAdvancedProjectile, ActivateAbilityTagOnImpact), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateAbilityTagOnImpact_MetaData), NewProp_ActivateAbilityTagOnImpact_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_UTProjReplicatedMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MyFakeProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bMoveFakeToReplicatedPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_MasterProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_PawnOverlapSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_InstigatorController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ImpactedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bHasSpawnedFully,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_bReplicateUTMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_OverlapRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionDamageScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_DamageEffectOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_AoEDamageEffectOnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ExplosionGameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSAdvancedProjectile_Statics::NewProp_ActivateAbilityTagOnImpact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSAdvancedProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSAdvancedProjectile_Statics::ClassParams = {
	&AOWSAdvancedProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAdvancedProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSAdvancedProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSAdvancedProjectile()
{
	if (!Z_Registration_Info_UClass_AOWSAdvancedProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSAdvancedProjectile.OuterSingleton, Z_Construct_UClass_AOWSAdvancedProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSAdvancedProjectile.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSAdvancedProjectile>()
{
	return AOWSAdvancedProjectile::StaticClass();
}
void AOWSAdvancedProjectile::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_UTProjReplicatedMovement(TEXT("UTProjReplicatedMovement"));
	const bool bIsValid = true
		&& Name_UTProjReplicatedMovement == ClassReps[(int32)ENetFields_Private::UTProjReplicatedMovement].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSAdvancedProjectile"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAdvancedProjectile);
AOWSAdvancedProjectile::~AOWSAdvancedProjectile() {}
// End Class AOWSAdvancedProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRepUTProjMovement::StaticStruct, Z_Construct_UScriptStruct_FRepUTProjMovement_Statics::NewStructOps, TEXT("RepUTProjMovement"), &Z_Registration_Info_UScriptStruct_RepUTProjMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRepUTProjMovement), 2504698273U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSAdvancedProjectile, AOWSAdvancedProjectile::StaticClass, TEXT("AOWSAdvancedProjectile"), &Z_Registration_Info_UClass_AOWSAdvancedProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSAdvancedProjectile), 2220361341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_1110132219(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
