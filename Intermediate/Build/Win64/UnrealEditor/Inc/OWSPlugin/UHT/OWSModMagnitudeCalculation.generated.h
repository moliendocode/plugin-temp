// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSModMagnitudeCalculation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayEffectSpec;
#ifdef OWSPLUGIN_OWSModMagnitudeCalculation_generated_h
#error "OWSModMagnitudeCalculation.generated.h already included, missing '#pragma once' in OWSModMagnitudeCalculation.h"
#endif
#define OWSPLUGIN_OWSModMagnitudeCalculation_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetAttributeCapture);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOWSModMagnitudeCalculation(); \
	friend struct Z_Construct_UClass_UOWSModMagnitudeCalculation_Statics; \
public: \
	DECLARE_CLASS(UOWSModMagnitudeCalculation, UGameplayModMagnitudeCalculation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSModMagnitudeCalculation)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSModMagnitudeCalculation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSModMagnitudeCalculation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSModMagnitudeCalculation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSModMagnitudeCalculation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSModMagnitudeCalculation(UOWSModMagnitudeCalculation&&); \
	UOWSModMagnitudeCalculation(const UOWSModMagnitudeCalculation&); \
public: \
	NO_API virtual ~UOWSModMagnitudeCalculation();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_12_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSModMagnitudeCalculation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSModMagnitudeCalculation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
