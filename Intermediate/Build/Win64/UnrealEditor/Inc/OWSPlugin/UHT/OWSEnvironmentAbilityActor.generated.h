// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSEnvironmentAbilityActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSEnvironmentAbilityActor_generated_h
#error "OWSEnvironmentAbilityActor.generated.h already included, missing '#pragma once' in OWSEnvironmentAbilityActor.h"
#endif
#define OWSPLUGIN_OWSEnvironmentAbilityActor_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayPeriodicParticleFX_Implementation(); \
	DECLARE_FUNCTION(execMulticast_PlayPeriodicParticleFX); \
	DECLARE_FUNCTION(execActivatePeriodicAbility);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSEnvironmentAbilityActor(); \
	friend struct Z_Construct_UClass_AOWSEnvironmentAbilityActor_Statics; \
public: \
	DECLARE_CLASS(AOWSEnvironmentAbilityActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSEnvironmentAbilityActor)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSEnvironmentAbilityActor(AOWSEnvironmentAbilityActor&&); \
	AOWSEnvironmentAbilityActor(const AOWSEnvironmentAbilityActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSEnvironmentAbilityActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSEnvironmentAbilityActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSEnvironmentAbilityActor) \
	NO_API virtual ~AOWSEnvironmentAbilityActor();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_12_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSEnvironmentAbilityActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSEnvironmentAbilityActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
