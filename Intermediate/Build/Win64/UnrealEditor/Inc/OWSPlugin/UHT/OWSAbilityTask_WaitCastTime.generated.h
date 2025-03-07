// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilityTask_WaitCastTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UOWSAbilityTask_WaitCastTime;
#ifdef OWSPLUGIN_OWSAbilityTask_WaitCastTime_generated_h
#error "OWSAbilityTask_WaitCastTime.generated.h already included, missing '#pragma once' in OWSAbilityTask_WaitCastTime.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_WaitCastTime_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_10_DELEGATE \
OWSPLUGIN_API void FWaitDelayDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitDelayDelegate2);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_11_DELEGATE \
OWSPLUGIN_API void FWaitCancelDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitCancelDelegate2);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRPGWaitCastTime); \
	DECLARE_FUNCTION(execOnLocalCancelCallback); \
	DECLARE_FUNCTION(execOnCancelCallback);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_WaitCastTime(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_WaitCastTime, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_WaitCastTime)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_WaitCastTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_WaitCastTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_WaitCastTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_WaitCastTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAbilityTask_WaitCastTime(UOWSAbilityTask_WaitCastTime&&); \
	UOWSAbilityTask_WaitCastTime(const UOWSAbilityTask_WaitCastTime&); \
public: \
	NO_API virtual ~UOWSAbilityTask_WaitCastTime();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_15_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_WaitCastTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
