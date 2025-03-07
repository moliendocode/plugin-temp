// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAdvancedProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FGameplayEffectSpecHandle;
struct FHitResult;
#ifdef OWSPLUGIN_OWSAdvancedProjectile_generated_h
#error "OWSAdvancedProjectile.generated.h already included, missing '#pragma once' in OWSAdvancedProjectile.h"
#endif
#define OWSPLUGIN_OWSAdvancedProjectile_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepUTProjMovement_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FRepUTProjMovement>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_RPC_WRAPPERS \
	virtual void Explode_Implementation(FHitResult const& Hit, UPrimitiveComponent* HitComp); \
	virtual void DamageImpactedActor_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual void ProcessHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& Hit); \
	virtual bool ShouldIgnoreHit_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp); \
	DECLARE_FUNCTION(execSetAoEDamageEffectOnExplosion); \
	DECLARE_FUNCTION(execSetDamageEffectOnHit); \
	DECLARE_FUNCTION(execShutDown); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnStop); \
	DECLARE_FUNCTION(execDamageImpactedActor); \
	DECLARE_FUNCTION(execProcessHit); \
	DECLARE_FUNCTION(execShouldIgnoreHit); \
	DECLARE_FUNCTION(execOnPawnSphereOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnRep_UTProjReplicatedMovement);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_INCLASS \
private: \
	static void StaticRegisterNativesAOWSAdvancedProjectile(); \
	friend struct Z_Construct_UClass_AOWSAdvancedProjectile_Statics; \
public: \
	DECLARE_CLASS(AOWSAdvancedProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSAdvancedProjectile) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		UTProjReplicatedMovement=NETFIELD_REP_START, \
		NETFIELD_REP_END=UTProjReplicatedMovement	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOWSAdvancedProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSAdvancedProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSAdvancedProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSAdvancedProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSAdvancedProjectile(AOWSAdvancedProjectile&&); \
	AOWSAdvancedProjectile(const AOWSAdvancedProjectile&); \
public: \
	NO_API virtual ~AOWSAdvancedProjectile();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_79_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSAdvancedProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAdvancedProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
