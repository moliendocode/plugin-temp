// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilityActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSAbilityActor_generated_h
#error "OWSAbilityActor.generated.h already included, missing '#pragma once' in OWSAbilityActor.h"
#endif
#define OWSPLUGIN_OWSAbilityActor_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSAbilityActor(); \
	friend struct Z_Construct_UClass_AOWSAbilityActor_Statics; \
public: \
	DECLARE_CLASS(AOWSAbilityActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSAbilityActor) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSAbilityActor*>(this); }


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSAbilityActor(AOWSAbilityActor&&); \
	AOWSAbilityActor(const AOWSAbilityActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSAbilityActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSAbilityActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSAbilityActor) \
	NO_API virtual ~AOWSAbilityActor();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_11_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSAbilityActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
