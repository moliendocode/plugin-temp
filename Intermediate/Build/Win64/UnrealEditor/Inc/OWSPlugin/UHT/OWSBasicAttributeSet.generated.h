// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSBasicAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef OWSPLUGIN_OWSBasicAttributeSet_generated_h
#error "OWSBasicAttributeSet.generated.h already included, missing '#pragma once' in OWSBasicAttributeSet.h"
#endif
#define OWSPLUGIN_OWSBasicAttributeSet_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOWSInitHealthRegenRate); \
	DECLARE_FUNCTION(execOWSSetHealthRegenRate); \
	DECLARE_FUNCTION(execOWSGetHealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOWSInitMaxHealth); \
	DECLARE_FUNCTION(execOWSSetMaxHealth); \
	DECLARE_FUNCTION(execOWSGetMaxHealth); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOWSInitHealth); \
	DECLARE_FUNCTION(execOWSSetHealth); \
	DECLARE_FUNCTION(execOWSGetHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUOWSBasicAttributeSet(); \
	friend struct Z_Construct_UClass_UOWSBasicAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UOWSBasicAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSBasicAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		NETFIELD_REP_END=HealthRegenRate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOWSBasicAttributeSet) \
public:


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSBasicAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSBasicAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSBasicAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSBasicAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSBasicAttributeSet(UOWSBasicAttributeSet&&); \
	UOWSBasicAttributeSet(const UOWSBasicAttributeSet&); \
public: \
	NO_API virtual ~UOWSBasicAttributeSet();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_44_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSBasicAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
