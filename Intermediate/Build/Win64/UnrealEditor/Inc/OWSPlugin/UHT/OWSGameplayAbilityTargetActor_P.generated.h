// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSGameplayAbilityTargetActor_P.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSGameplayAbilityTargetActor_P_generated_h
#error "OWSGameplayAbilityTargetActor_P.generated.h already included, missing '#pragma once' in OWSGameplayAbilityTargetActor_P.h"
#endif
#define OWSPLUGIN_OWSGameplayAbilityTargetActor_P_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCancelTarget); \
	DECLARE_FUNCTION(execConfirmTarget);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAOWSGameplayAbilityTargetActor_P(); \
	friend struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_P_Statics; \
public: \
	DECLARE_CLASS(AOWSGameplayAbilityTargetActor_P, AGameplayAbilityTargetActor_GroundTrace, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameplayAbilityTargetActor_P)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSGameplayAbilityTargetActor_P(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSGameplayAbilityTargetActor_P) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameplayAbilityTargetActor_P); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameplayAbilityTargetActor_P); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSGameplayAbilityTargetActor_P(AOWSGameplayAbilityTargetActor_P&&); \
	AOWSGameplayAbilityTargetActor_P(const AOWSGameplayAbilityTargetActor_P&); \
public: \
	NO_API virtual ~AOWSGameplayAbilityTargetActor_P();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_17_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSGameplayAbilityTargetActor_P>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_P_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
