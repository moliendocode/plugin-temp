// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSCharacterMovementComponent_generated_h
#error "OWSCharacterMovementComponent.generated.h already included, missing '#pragma once' in OWSCharacterMovementComponent.h"
#endif
#define OWSPLUGIN_OWSCharacterMovementComponent_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_RPC_WRAPPERS \
	virtual bool Server_SetMaxWalkSpeed_Validate(const float ); \
	virtual void Server_SetMaxWalkSpeed_Implementation(const float NewMaxWalkSpeed); \
	DECLARE_FUNCTION(execResetDashCooldownState); \
	DECLARE_FUNCTION(execResetDashState); \
	DECLARE_FUNCTION(execDoDash); \
	DECLARE_FUNCTION(execSetMaxWalkSpeed); \
	DECLARE_FUNCTION(execServer_SetMaxWalkSpeed); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execStartSprinting); \
	DECLARE_FUNCTION(execIsMovingForward);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOWSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UOWSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSCharacterMovementComponent)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSCharacterMovementComponent(UOWSCharacterMovementComponent&&); \
	UOWSCharacterMovementComponent(const UOWSCharacterMovementComponent&); \
public: \
	NO_API virtual ~UOWSCharacterMovementComponent();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_18_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(TESTMOVE_Climbing) \
	op(TESTMOVE_Walking) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
