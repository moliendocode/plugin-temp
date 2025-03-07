// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_SpawnProjectile.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_SpawnProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDelayedProjectileInfo();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FSpawnProjectileDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventSpawnProjectileDelegate_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "SpawnProjectileDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpawnProjectileDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnProjectileDelegate, AActor* SpawnedActor)
{
	struct _Script_OWSPlugin_eventSpawnProjectileDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_OWSPlugin_eventSpawnProjectileDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	SpawnProjectileDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSpawnProjectileDelegate

// Begin ScriptStruct FDelayedProjectileInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelayedProjectileInfo;
class UScriptStruct* FDelayedProjectileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelayedProjectileInfo, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("DelayedProjectileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FDelayedProjectileInfo>()
{
	return FDelayedProjectileInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelayedProjectileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelayedProjectileInfo, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelayedProjectileInfo, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDelayedProjectileInfo, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation_MetaData), NewProp_SpawnRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewProp_SpawnRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"DelayedProjectileInfo",
	Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::PropPointers),
	sizeof(FDelayedProjectileInfo),
	alignof(FDelayedProjectileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDelayedProjectileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.InnerSingleton, Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DelayedProjectileInfo.InnerSingleton;
}
// End ScriptStruct FDelayedProjectileInfo

// Begin Class UOWSAbilityTask_SpawnProjectile Function BeginSpawningActor
struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics
{
	struct OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		TSubclassOf<AActor> Class;
		AActor* SpawnedActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "BeginSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::OWSAbilityTask_SpawnProjectile_eventBeginSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_SpawnProjectile::execBeginSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,P_ARG_GC_BARRIER(Z_Param_Out_SpawnedActor));
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_SpawnProjectile Function BeginSpawningActor

// Begin Class UOWSAbilityTask_SpawnProjectile Function FinishSpawningActor
struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics
{
	struct OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "FinishSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::OWSAbilityTask_SpawnProjectile_eventFinishSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_SpawnProjectile::execFinishSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_SpawnProjectile Function FinishSpawningActor

// Begin Class UOWSAbilityTask_SpawnProjectile Function SpawnProjectile
struct Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics
{
	struct OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms
	{
		UGameplayAbility* OwningAbility;
		FGameplayAbilityTargetDataHandle TargetData;
		TSubclassOf<AActor> Class;
		bool UseAimCamera;
		bool IgnoreAimCameraPitch;
		FName StartingSocketName;
		float ForwardOffsetFromSocket;
		bool UseFixedStartingLocationRotation;
		FVector StartingLocation;
		FRotator StartingRotation;
		FGameplayEffectSpecHandle DirectDamageEffect;
		FGameplayEffectSpecHandle AOEDamageEffect;
		FGameplayTag ActivateAbilityTagOnImpact;
		UOWSAbilityTask_SpawnProjectile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn new Actor on the network authority (server) */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn new Actor on the network authority (server)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_UseAimCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAimCamera;
	static void NewProp_IgnoreAimCameraPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreAimCameraPitch;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartingSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetFromSocket;
	static void NewProp_UseFixedStartingLocationRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFixedStartingLocationRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectDamageEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AOEDamageEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateAbilityTagOnImpact;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera_SetBit(void* Obj)
{
	((OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms*)Obj)->UseAimCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera = { "UseAimCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch_SetBit(void* Obj)
{
	((OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms*)Obj)->IgnoreAimCameraPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch = { "IgnoreAimCameraPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingSocketName = { "StartingSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, StartingSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ForwardOffsetFromSocket = { "ForwardOffsetFromSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ForwardOffsetFromSocket), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseFixedStartingLocationRotation_SetBit(void* Obj)
{
	((OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms*)Obj)->UseFixedStartingLocationRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseFixedStartingLocationRotation = { "UseFixedStartingLocationRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseFixedStartingLocationRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingRotation = { "StartingRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, StartingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_DirectDamageEffect = { "DirectDamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, DirectDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_AOEDamageEffect = { "AOEDamageEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, AOEDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ActivateAbilityTagOnImpact = { "ActivateAbilityTagOnImpact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ActivateAbilityTagOnImpact), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseAimCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_IgnoreAimCameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ForwardOffsetFromSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_UseFixedStartingLocationRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_StartingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_DirectDamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_AOEDamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ActivateAbilityTagOnImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, nullptr, "SpawnProjectile", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::OWSAbilityTask_SpawnProjectile_eventSpawnProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_SpawnProjectile::execSpawnProjectile)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_UBOOL(Z_Param_UseAimCamera);
	P_GET_UBOOL(Z_Param_IgnoreAimCameraPitch);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartingSocketName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardOffsetFromSocket);
	P_GET_UBOOL(Z_Param_UseFixedStartingLocationRotation);
	P_GET_STRUCT(FVector,Z_Param_StartingLocation);
	P_GET_STRUCT(FRotator,Z_Param_StartingRotation);
	P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_DirectDamageEffect);
	P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_AOEDamageEffect);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActivateAbilityTagOnImpact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSAbilityTask_SpawnProjectile**)Z_Param__Result=UOWSAbilityTask_SpawnProjectile::SpawnProjectile(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_UseAimCamera,Z_Param_IgnoreAimCameraPitch,Z_Param_StartingSocketName,Z_Param_ForwardOffsetFromSocket,Z_Param_UseFixedStartingLocationRotation,Z_Param_StartingLocation,Z_Param_StartingRotation,Z_Param_DirectDamageEffect,Z_Param_AOEDamageEffect,Z_Param_ActivateAbilityTagOnImpact);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_SpawnProjectile Function SpawnProjectile

// Begin Class UOWSAbilityTask_SpawnProjectile
void UOWSAbilityTask_SpawnProjectile::StaticRegisterNativesUOWSAbilityTask_SpawnProjectile()
{
	UClass* Class = UOWSAbilityTask_SpawnProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSpawningActor", &UOWSAbilityTask_SpawnProjectile::execBeginSpawningActor },
		{ "FinishSpawningActor", &UOWSAbilityTask_SpawnProjectile::execFinishSpawningActor },
		{ "SpawnProjectile", &UOWSAbilityTask_SpawnProjectile::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAbilityTask_SpawnProjectile);
UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_NoRegister()
{
	return UOWSAbilityTask_SpawnProjectile::StaticClass();
}
struct Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Spawn a projectile\n */" },
#endif
		{ "IncludePath", "OWSAbilityTask_SpawnProjectile.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn a projectile" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAimCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAimCameraPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nameStartingSocketName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fForwardOffsetFromSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedStartingLocationRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoesAOEDamge_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fAOEDamageRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_geshDirectDamageEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_geshAOEDamageEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tagActivateAbilityTagOnImpact_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayedProjectile_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delayed projectile information */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilityTask_SpawnProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delayed projectile information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static void NewProp_bUseAimCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAimCamera;
	static void NewProp_bIgnoreAimCameraPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAimCameraPitch;
	static const UECodeGen_Private::FNamePropertyParams NewProp_nameStartingSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fForwardOffsetFromSocket;
	static void NewProp_bUseFixedStartingLocationRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedStartingLocationRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingRotation;
	static void NewProp_bDoesAOEDamge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoesAOEDamge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fAOEDamageRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_geshDirectDamageEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_geshAOEDamageEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_tagActivateAbilityTagOnImpact;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayedProjectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_BeginSpawningActor, "BeginSpawningActor" }, // 584663056
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_FinishSpawningActor, "FinishSpawningActor" }, // 2249520602
		{ &Z_Construct_UFunction_UOWSAbilityTask_SpawnProjectile_SpawnProjectile, "SpawnProjectile" }, // 3441439490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_SpawnProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, Success), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2805659413
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, DidNotSpawn), Z_Construct_UDelegateFunction_OWSPlugin_SpawnProjectileDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DidNotSpawn_MetaData), NewProp_DidNotSpawn_MetaData) }; // 2805659413
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_SetBit(void* Obj)
{
	((UOWSAbilityTask_SpawnProjectile*)Obj)->bUseAimCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera = { "bUseAimCamera", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAimCamera_MetaData), NewProp_bUseAimCamera_MetaData) };
void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_SetBit(void* Obj)
{
	((UOWSAbilityTask_SpawnProjectile*)Obj)->bIgnoreAimCameraPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch = { "bIgnoreAimCameraPitch", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreAimCameraPitch_MetaData), NewProp_bIgnoreAimCameraPitch_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName = { "nameStartingSocketName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, nameStartingSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nameStartingSocketName_MetaData), NewProp_nameStartingSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket = { "fForwardOffsetFromSocket", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fForwardOffsetFromSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fForwardOffsetFromSocket_MetaData), NewProp_fForwardOffsetFromSocket_MetaData) };
void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseFixedStartingLocationRotation_SetBit(void* Obj)
{
	((UOWSAbilityTask_SpawnProjectile*)Obj)->bUseFixedStartingLocationRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseFixedStartingLocationRotation = { "bUseFixedStartingLocationRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseFixedStartingLocationRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedStartingLocationRotation_MetaData), NewProp_bUseFixedStartingLocationRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingLocation_MetaData), NewProp_StartingLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_StartingRotation = { "StartingRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, StartingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingRotation_MetaData), NewProp_StartingRotation_MetaData) };
void Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_SetBit(void* Obj)
{
	((UOWSAbilityTask_SpawnProjectile*)Obj)->bDoesAOEDamge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge = { "bDoesAOEDamge", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSAbilityTask_SpawnProjectile), &Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoesAOEDamge_MetaData), NewProp_bDoesAOEDamge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius = { "fAOEDamageRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, fAOEDamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fAOEDamageRadius_MetaData), NewProp_fAOEDamageRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect = { "geshDirectDamageEffect", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshDirectDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_geshDirectDamageEffect_MetaData), NewProp_geshDirectDamageEffect_MetaData) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect = { "geshAOEDamageEffect", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, geshAOEDamageEffect), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_geshAOEDamageEffect_MetaData), NewProp_geshAOEDamageEffect_MetaData) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_tagActivateAbilityTagOnImpact = { "tagActivateAbilityTagOnImpact", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, tagActivateAbilityTagOnImpact), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tagActivateAbilityTagOnImpact_MetaData), NewProp_tagActivateAbilityTagOnImpact_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile = { "DelayedProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_SpawnProjectile, DelayedProjectile), Z_Construct_UScriptStruct_FDelayedProjectileInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayedProjectile_MetaData), NewProp_DelayedProjectile_MetaData) }; // 1963254441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DidNotSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseAimCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bIgnoreAimCameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_nameStartingSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fForwardOffsetFromSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bUseFixedStartingLocationRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_StartingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_StartingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_bDoesAOEDamge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_fAOEDamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshDirectDamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_geshAOEDamageEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_tagActivateAbilityTagOnImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::NewProp_DelayedProjectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::ClassParams = {
	&UOWSAbilityTask_SpawnProjectile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile()
{
	if (!Z_Registration_Info_UClass_UOWSAbilityTask_SpawnProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAbilityTask_SpawnProjectile.OuterSingleton, Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAbilityTask_SpawnProjectile.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_SpawnProjectile>()
{
	return UOWSAbilityTask_SpawnProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_SpawnProjectile);
UOWSAbilityTask_SpawnProjectile::~UOWSAbilityTask_SpawnProjectile() {}
// End Class UOWSAbilityTask_SpawnProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDelayedProjectileInfo::StaticStruct, Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics::NewStructOps, TEXT("DelayedProjectileInfo"), &Z_Registration_Info_UScriptStruct_DelayedProjectileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelayedProjectileInfo), 1963254441U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile, UOWSAbilityTask_SpawnProjectile::StaticClass, TEXT("UOWSAbilityTask_SpawnProjectile"), &Z_Registration_Info_UClass_UOWSAbilityTask_SpawnProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAbilityTask_SpawnProjectile), 3862869299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_3803399445(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
