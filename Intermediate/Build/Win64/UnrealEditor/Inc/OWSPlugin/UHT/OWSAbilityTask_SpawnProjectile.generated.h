// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilityTask_SpawnProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class UOWSAbilityTask_SpawnProjectile;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTag;
#ifdef OWSPLUGIN_OWSAbilityTask_SpawnProjectile_generated_h
#error "OWSAbilityTask_SpawnProjectile.generated.h already included, missing '#pragma once' in OWSAbilityTask_SpawnProjectile.h"
#endif
#define OWSPLUGIN_OWSAbilityTask_SpawnProjectile_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_14_DELEGATE \
OWSPLUGIN_API void FSpawnProjectileDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnProjectileDelegate, AActor* SpawnedActor);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelayedProjectileInfo_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FDelayedProjectileInfo>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUOWSAbilityTask_SpawnProjectile(); \
	friend struct Z_Construct_UClass_UOWSAbilityTask_SpawnProjectile_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilityTask_SpawnProjectile, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilityTask_SpawnProjectile)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilityTask_SpawnProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilityTask_SpawnProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilityTask_SpawnProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilityTask_SpawnProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAbilityTask_SpawnProjectile(UOWSAbilityTask_SpawnProjectile&&); \
	UOWSAbilityTask_SpawnProjectile(const UOWSAbilityTask_SpawnProjectile&); \
public: \
	NO_API virtual ~UOWSAbilityTask_SpawnProjectile();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_38_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilityTask_SpawnProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_SpawnProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
