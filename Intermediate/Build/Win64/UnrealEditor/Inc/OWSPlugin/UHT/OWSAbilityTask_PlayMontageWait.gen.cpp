// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_PlayMontageWait.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_PlayMontageWait() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FMontageWaitSimpleDelegate2
struct Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "MontageWaitSimpleDelegate2__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMontageWaitSimpleDelegate2_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate2)
{
	MontageWaitSimpleDelegate2.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FMontageWaitSimpleDelegate2

// Begin Class UOWSAbilityTask_PlayMontageWait Function CreatePlayMontageAndWaitProxy
struct Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics
{
	struct OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms
	{
		UGameplayAbility* OwningAbility;
		FName TaskInstanceName;
		UAnimMontage* MontageToPlay;
		USkeletalMeshComponent* UseAlternateSKMC;
		float Rate;
		FName StartSection;
		bool bStopWhenAbilityEnds;
		float AnimRootMotionTranslationScale;
		FName AnimNotifyName;
		UOWSAbilityTask_PlayMontageWait* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_AnimNotifyName", "None" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "OWSPlayMontageAndWait" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAlternateSKMC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseAlternateSKMC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimNotifyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, TaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_UseAlternateSKMC = { "UseAlternateSKMC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, UseAlternateSKMC), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAlternateSKMC_MetaData), NewProp_UseAlternateSKMC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, Rate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms), &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimNotifyName = { "AnimNotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, AnimNotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_TaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_UseAlternateSKMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_AnimNotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, nullptr, "CreatePlayMontageAndWaitProxy", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::OWSAbilityTask_PlayMontageWait_eventCreatePlayMontageAndWaitProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_PlayMontageWait::execCreatePlayMontageAndWaitProxy)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_UseAlternateSKMC);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
	P_GET_PROPERTY(FNameProperty,Z_Param_AnimNotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSAbilityTask_PlayMontageWait**)Z_Param__Result=UOWSAbilityTask_PlayMontageWait::CreatePlayMontageAndWaitProxy(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_UseAlternateSKMC,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale,Z_Param_AnimNotifyName);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_PlayMontageWait Function CreatePlayMontageAndWaitProxy

// Begin Class UOWSAbilityTask_PlayMontageWait Function OnMontageBlendingOut
struct Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics
{
	struct OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, nullptr, "OnMontageBlendingOut", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::OWSAbilityTask_PlayMontageWait_eventOnMontageBlendingOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_PlayMontageWait::execOnMontageBlendingOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_PlayMontageWait Function OnMontageBlendingOut

// Begin Class UOWSAbilityTask_PlayMontageWait Function OnMontageEnded
struct Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics
{
	struct OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::OWSAbilityTask_PlayMontageWait_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_PlayMontageWait::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_PlayMontageWait Function OnMontageEnded

// Begin Class UOWSAbilityTask_PlayMontageWait Function OnMontageInterrupted
struct Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, nullptr, "OnMontageInterrupted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_PlayMontageWait::execOnMontageInterrupted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageInterrupted();
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_PlayMontageWait Function OnMontageInterrupted

// Begin Class UOWSAbilityTask_PlayMontageWait Function OnOWSNotifyBeginReceived
struct Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics
{
	struct OWSAbilityTask_PlayMontageWait_eventOnOWSNotifyBeginReceived_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventOnOWSNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_PlayMontageWait_eventOnOWSNotifyBeginReceived_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointPayload_MetaData), NewProp_BranchingPointPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::NewProp_BranchingPointPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, nullptr, "OnOWSNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::OWSAbilityTask_PlayMontageWait_eventOnOWSNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::OWSAbilityTask_PlayMontageWait_eventOnOWSNotifyBeginReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_PlayMontageWait::execOnOWSNotifyBeginReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOWSNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_PlayMontageWait Function OnOWSNotifyBeginReceived

// Begin Class UOWSAbilityTask_PlayMontageWait
void UOWSAbilityTask_PlayMontageWait::StaticRegisterNativesUOWSAbilityTask_PlayMontageWait()
{
	UClass* Class = UOWSAbilityTask_PlayMontageWait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayMontageAndWaitProxy", &UOWSAbilityTask_PlayMontageWait::execCreatePlayMontageAndWaitProxy },
		{ "OnMontageBlendingOut", &UOWSAbilityTask_PlayMontageWait::execOnMontageBlendingOut },
		{ "OnMontageEnded", &UOWSAbilityTask_PlayMontageWait::execOnMontageEnded },
		{ "OnMontageInterrupted", &UOWSAbilityTask_PlayMontageWait::execOnMontageInterrupted },
		{ "OnOWSNotifyBeginReceived", &UOWSAbilityTask_PlayMontageWait::execOnOWSNotifyBeginReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAbilityTask_PlayMontageWait);
UClass* Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_NoRegister()
{
	return UOWSAbilityTask_PlayMontageWait::StaticClass();
}
struct Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSAbilityTask_PlayMontageWait.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimNotify_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseAlternateSKMC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitForAnimNotifyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_PlayMontageWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimNotify;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseAlternateSKMC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
	static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WaitForAnimNotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_CreatePlayMontageAndWaitProxy, "CreatePlayMontageAndWaitProxy" }, // 2801829315
		{ &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3975392767
		{ &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageEnded, "OnMontageEnded" }, // 3885140393
		{ &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnMontageInterrupted, "OnMontageInterrupted" }, // 195323370
		{ &Z_Construct_UFunction_UOWSAbilityTask_PlayMontageWait_OnOWSNotifyBeginReceived, "OnOWSNotifyBeginReceived" }, // 804765986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_PlayMontageWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, OnCompleted), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1289750517
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, OnBlendOut), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_MetaData), NewProp_OnBlendOut_MetaData) }; // 1289750517
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, OnInterrupted), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterrupted_MetaData), NewProp_OnInterrupted_MetaData) }; // 1289750517
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, OnCancelled), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 1289750517
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnAnimNotify = { "OnAnimNotify", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, OnAnimNotify), Z_Construct_UDelegateFunction_OWSPlugin_MontageWaitSimpleDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnimNotify_MetaData), NewProp_OnAnimNotify_MetaData) }; // 1289750517
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_UseAlternateSKMC = { "UseAlternateSKMC", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, UseAlternateSKMC), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseAlternateSKMC_MetaData), NewProp_UseAlternateSKMC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, Rate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rate_MetaData), NewProp_Rate_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, StartSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSection_MetaData), NewProp_StartSection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, AnimRootMotionTranslationScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimRootMotionTranslationScale_MetaData), NewProp_AnimRootMotionTranslationScale_MetaData) };
void Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
{
	((UOWSAbilityTask_PlayMontageWait*)Obj)->bStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSAbilityTask_PlayMontageWait), &Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenAbilityEnds_MetaData), NewProp_bStopWhenAbilityEnds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_WaitForAnimNotifyName = { "WaitForAnimNotifyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_PlayMontageWait, WaitForAnimNotifyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitForAnimNotifyName_MetaData), NewProp_WaitForAnimNotifyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_OnAnimNotify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_UseAlternateSKMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_Rate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_AnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_bStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::NewProp_WaitForAnimNotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::ClassParams = {
	&UOWSAbilityTask_PlayMontageWait::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait()
{
	if (!Z_Registration_Info_UClass_UOWSAbilityTask_PlayMontageWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAbilityTask_PlayMontageWait.OuterSingleton, Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAbilityTask_PlayMontageWait.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_PlayMontageWait>()
{
	return UOWSAbilityTask_PlayMontageWait::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_PlayMontageWait);
UOWSAbilityTask_PlayMontageWait::~UOWSAbilityTask_PlayMontageWait() {}
// End Class UOWSAbilityTask_PlayMontageWait

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait, UOWSAbilityTask_PlayMontageWait::StaticClass, TEXT("UOWSAbilityTask_PlayMontageWait"), &Z_Registration_Info_UClass_UOWSAbilityTask_PlayMontageWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAbilityTask_PlayMontageWait), 3840494570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_1415273244(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
