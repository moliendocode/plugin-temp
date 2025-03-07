// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilityTask_WaitTargetData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
class UGameplayAbility;
class UOWSAbilityTask_WaitTargetData;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayTag;
#ifdef OWSPLUGIN_OWSAbilityTask_WaitTargetData_generated_h
#error "OWSAbilityTask_WaitTargetData.generated.h already included, missing '#pragma once' in OWSAbilityTask_WaitTargetData.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_WaitTargetData_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_13_DELEGATE \
OWSPLUGIN_API void FWaitTargetDataDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitTargetDataDelegate2, FGameplayAbilityTargetDataHandle const& Data);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execRPGWaitTargetDataUsingActor); \
	DECLARE_FUNCTION(execRPGWaitTargetData); \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitTargetData)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitTargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitTargetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitTargetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAbilityTask_WaitTargetData(UOWSAbilityTask_WaitTargetData&&); \
	UOWSAbilityTask_WaitTargetData(const UOWSAbilityTask_WaitTargetData&); \
public: \
	NO_API virtual ~UOWSAbilityTask_WaitTargetData();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_16_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_WaitTargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitTargetData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
