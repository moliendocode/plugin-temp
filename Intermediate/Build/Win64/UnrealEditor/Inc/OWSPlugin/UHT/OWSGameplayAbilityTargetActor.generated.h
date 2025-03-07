// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSGameplayAbilityTargetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSGameplayAbilityTargetActor_generated_h
#error "OWSGameplayAbilityTargetActor.generated.h already included, missing '#pragma once' in OWSGameplayAbilityTargetActor.h"
#endif
#define OWSPLUGIN_OWSGameplayAbilityTargetActor_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSGameplayAbilityTargetActor(); \
	friend struct Z_Construct_UClass_AOWSGameplayAbilityTargetActor_Statics; \
public: \
	DECLARE_CLASS(AOWSGameplayAbilityTargetActor, AGameplayAbilityTargetActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameplayAbilityTargetActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OWSFilter=NETFIELD_REP_START, \
		NETFIELD_REP_END=OWSFilter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSGameplayAbilityTargetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSGameplayAbilityTargetActor(AOWSGameplayAbilityTargetActor&&); \
	AOWSGameplayAbilityTargetActor(const AOWSGameplayAbilityTargetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameplayAbilityTargetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameplayAbilityTargetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSGameplayAbilityTargetActor) \
	NO_API virtual ~AOWSGameplayAbilityTargetActor();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_13_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSGameplayAbilityTargetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
