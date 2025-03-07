// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSProjectileMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSProjectileMovementComponent_generated_h
#error "OWSProjectileMovementComponent.generated.h already included, missing '#pragma once' in OWSProjectileMovementComponent.h"
#endif
#define OWSPLUGIN_OWSProjectileMovementComponent_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(FVector ); \
	virtual void ServerUpdateState_Implementation(FVector InAcceleration); \
	DECLARE_FUNCTION(execServerUpdateState);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOWSProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSProjectileMovementComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedAcceleration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSProjectileMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSProjectileMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSProjectileMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSProjectileMovementComponent(UOWSProjectileMovementComponent&&); \
	UOWSProjectileMovementComponent(const UOWSProjectileMovementComponent&); \
public: \
	NO_API virtual ~UOWSProjectileMovementComponent();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_22_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSProjectileMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
