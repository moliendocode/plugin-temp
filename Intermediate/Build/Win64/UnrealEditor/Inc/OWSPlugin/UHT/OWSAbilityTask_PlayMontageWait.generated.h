// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilityTask_PlayMontageWait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGameplayAbility;
class UOWSAbilityTask_PlayMontageWait;
class USkeletalMeshComponent;
struct FBranchingPointNotifyPayload;
#ifdef OWSPLUGIN_OWSAbilityTask_PlayMontageWait_generated_h
#error "OWSAbilityTask_PlayMontageWait.generated.h already included, missing '#pragma once' in OWSAbilityTask_PlayMontageWait.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_PlayMontageWait_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_11_DELEGATE \
OWSPLUGIN_API void FMontageWaitSimpleDelegate2_DelegateWrapper(const FMulticastScriptDelegate& MontageWaitSimpleDelegate2);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreatePlayMontageAndWaitProxy); \
	DECLARE_FUNCTION(execOnOWSNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageBlendingOut);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_PlayMontageWait(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_PlayMontageWait_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_PlayMontageWait, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_PlayMontageWait)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_PlayMontageWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_PlayMontageWait) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_PlayMontageWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_PlayMontageWait); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAbilityTask_PlayMontageWait(UOWSAbilityTask_PlayMontageWait&&); \
	UOWSAbilityTask_PlayMontageWait(const UOWSAbilityTask_PlayMontageWait&); \
public: \
	NO_API virtual ~UOWSAbilityTask_PlayMontageWait();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_16_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_PlayMontageWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_PlayMontageWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
