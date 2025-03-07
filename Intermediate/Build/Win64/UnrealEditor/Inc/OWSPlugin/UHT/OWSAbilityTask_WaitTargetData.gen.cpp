// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_WaitTargetData.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetActor.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_WaitTargetData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FWaitTargetDataDelegate2
struct Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitTargetDataDelegate2__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::_Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::_Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitTargetDataDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitTargetDataDelegate2, FGameplayAbilityTargetDataHandle const& Data)
{
	struct _Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
	};
	_Script_OWSPlugin_eventWaitTargetDataDelegate2_Parms Parms;
	Parms.Data=Data;
	WaitTargetDataDelegate2.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitTargetDataDelegate2

// Begin Class UOWSAbilityTask_WaitTargetData Function BeginSpawningActor
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		TSubclassOf<AGameplayAbilityTargetActor> Class;
		AGameplayAbilityTargetActor* SpawnedActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_SpawnedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "BeginSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::OWSAbilityTask_WaitTargetData_eventBeginSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execBeginSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_OBJECT_REF(AGameplayAbilityTargetActor,Z_Param_Out_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_Class,P_ARG_GC_BARRIER(Z_Param_Out_SpawnedActor));
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function BeginSpawningActor

// Begin Class UOWSAbilityTask_WaitTargetData Function FinishSpawningActor
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms
	{
		UGameplayAbility* OwningAbility;
		AGameplayAbilityTargetActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "FinishSpawningActor", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::OWSAbilityTask_WaitTargetData_eventFinishSpawningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execFinishSpawningActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function FinishSpawningActor

// Begin Class UOWSAbilityTask_WaitTargetData Function OnTargetDataCancelledCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataCancelledCallback", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataCancelledCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execOnTargetDataCancelledCallback)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDataCancelledCallback(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function OnTargetDataCancelledCallback

// Begin Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReadyCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReadyCallback", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataReadyCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execOnTargetDataReadyCallback)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDataReadyCallback(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReadyCallback

// Begin Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReplicatedCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms
	{
		FGameplayAbilityTargetDataHandle Data;
		FGameplayTag ActivationTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_ActivationTag = { "ActivationTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms, ActivationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::NewProp_ActivationTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReplicatedCallback", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::OWSAbilityTask_WaitTargetData_eventOnTargetDataReplicatedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCallback)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActivationTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDataReplicatedCallback(Z_Param_Out_Data,Z_Param_ActivationTag);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReplicatedCallback

// Begin Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReplicatedCancelledCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "OnTargetDataReplicatedCancelledCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCancelledCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTargetDataReplicatedCancelledCallback();
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function OnTargetDataReplicatedCancelledCallback

// Begin Class UOWSAbilityTask_WaitTargetData Function RPGWaitTargetData
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;
		TSubclassOf<AGameplayAbilityTargetActor> Class;
		UOWSAbilityTask_WaitTargetData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawns target actor and waits for it to return valid data or to be canceled. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns target actor and waits for it to return valid data or to be canceled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfirmationType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ConfirmationType = { "ConfirmationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, ConfirmationType), Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, METADATA_PARAMS(0, nullptr) }; // 687318860
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ConfirmationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "RPGWaitTargetData", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::OWSAbilityTask_WaitTargetData_eventRPGWaitTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execRPGWaitTargetData)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FByteProperty,Z_Param_ConfirmationType);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetData(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_Class);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function RPGWaitTargetData

// Begin Class UOWSAbilityTask_WaitTargetData Function RPGWaitTargetDataUsingActor
struct Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics
{
	struct OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;
		AGameplayAbilityTargetActor* TargetActor;
		UOWSAbilityTask_WaitTargetData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Uses specified target actor and waits for it to return valid data or to be canceled. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uses specified target actor and waits for it to return valid data or to be canceled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfirmationType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ConfirmationType = { "ConfirmationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, ConfirmationType), Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, METADATA_PARAMS(0, nullptr) }; // 687318860
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ConfirmationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, nullptr, "RPGWaitTargetDataUsingActor", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::OWSAbilityTask_WaitTargetData_eventRPGWaitTargetDataUsingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitTargetData::execRPGWaitTargetDataUsingActor)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_PROPERTY(FByteProperty,Z_Param_ConfirmationType);
	P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSAbilityTask_WaitTargetData**)Z_Param__Result=UOWSAbilityTask_WaitTargetData::RPGWaitTargetDataUsingActor(Z_Param_OwningAbility,Z_Param_TaskInstanceName,EGameplayTargetingConfirmation::Type(Z_Param_ConfirmationType),Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitTargetData Function RPGWaitTargetDataUsingActor

// Begin Class UOWSAbilityTask_WaitTargetData
void UOWSAbilityTask_WaitTargetData::StaticRegisterNativesUOWSAbilityTask_WaitTargetData()
{
	UClass* Class = UOWSAbilityTask_WaitTargetData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginSpawningActor", &UOWSAbilityTask_WaitTargetData::execBeginSpawningActor },
		{ "FinishSpawningActor", &UOWSAbilityTask_WaitTargetData::execFinishSpawningActor },
		{ "OnTargetDataCancelledCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataCancelledCallback },
		{ "OnTargetDataReadyCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReadyCallback },
		{ "OnTargetDataReplicatedCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCallback },
		{ "OnTargetDataReplicatedCancelledCallback", &UOWSAbilityTask_WaitTargetData::execOnTargetDataReplicatedCancelledCallback },
		{ "RPGWaitTargetData", &UOWSAbilityTask_WaitTargetData::execRPGWaitTargetData },
		{ "RPGWaitTargetDataUsingActor", &UOWSAbilityTask_WaitTargetData::execRPGWaitTargetDataUsingActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAbilityTask_WaitTargetData);
UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_NoRegister()
{
	return UOWSAbilityTask_WaitTargetData::StaticClass();
}
struct Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait for targeting actor (spawned from parameter) to provide data. Can be set not to end upon outputting data. Can be ended by task name. */" },
#endif
		{ "IncludePath", "OWSAbilityTask_WaitTargetData.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait for targeting actor (spawned from parameter) to provide data. Can be set not to end upon outputting data. Can be ended by task name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The TargetActor that we spawned */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitTargetData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The TargetActor that we spawned" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_BeginSpawningActor, "BeginSpawningActor" }, // 4106336825
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_FinishSpawningActor, "FinishSpawningActor" }, // 3631028875
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataCancelledCallback, "OnTargetDataCancelledCallback" }, // 2464913769
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReadyCallback, "OnTargetDataReadyCallback" }, // 847089228
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback, "OnTargetDataReplicatedCallback" }, // 372106003
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback, "OnTargetDataReplicatedCancelledCallback" }, // 1361273004
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetData, "RPGWaitTargetData" }, // 2414863833
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitTargetData_RPGWaitTargetDataUsingActor, "RPGWaitTargetDataUsingActor" }, // 2583937402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_WaitTargetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData = { "ValidData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, ValidData), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidData_MetaData), NewProp_ValidData_MetaData) }; // 668776358
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, Cancelled), Z_Construct_UDelegateFunction_OWSPlugin_WaitTargetDataDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cancelled_MetaData), NewProp_Cancelled_MetaData) }; // 668776358
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitTargetData, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_ValidData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_Cancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::ClassParams = {
	&UOWSAbilityTask_WaitTargetData::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAbilityTask_WaitTargetData()
{
	if (!Z_Registration_Info_UClass_UOWSAbilityTask_WaitTargetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAbilityTask_WaitTargetData.OuterSingleton, Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAbilityTask_WaitTargetData.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_WaitTargetData>()
{
	return UOWSAbilityTask_WaitTargetData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_WaitTargetData);
UOWSAbilityTask_WaitTargetData::~UOWSAbilityTask_WaitTargetData() {}
// End Class UOWSAbilityTask_WaitTargetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAbilityTask_WaitTargetData, UOWSAbilityTask_WaitTargetData::StaticClass, TEXT("UOWSAbilityTask_WaitTargetData"), &Z_Registration_Info_UClass_UOWSAbilityTask_WaitTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAbilityTask_WaitTargetData), 3584538957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_1099741097(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
