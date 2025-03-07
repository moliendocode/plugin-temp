// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSTask_ApplyRootMotion_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSTask_ApplyRootMotion_Base_generated_h
#error "OWSTask_ApplyRootMotion_Base.generated.h already included, missing '#pragma once' in OWSTask_ApplyRootMotion_Base.h"
#endif
#define OWSPLUGIN_OWSTask_ApplyRootMotion_Base_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUOWSTask_ApplyRootMotion_Base(); \
	friend struct Z_Construct_UClass_UOWSTask_ApplyRootMotion_Base_Statics; \
public: \
	DECLARE_CLASS(UOWSTask_ApplyRootMotion_Base, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), OWSPLUGIN_API) \
	DECLARE_SERIALIZER(UOWSTask_ApplyRootMotion_Base) \
	OWSPLUGIN_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ForceName=NETFIELD_REP_START, \
		FinishVelocityMode, \
		FinishSetVelocity, \
		FinishClampVelocity, \
		NETFIELD_REP_END=FinishClampVelocity	}; \
	OWSPLUGIN_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOWSTask_ApplyRootMotion_Base) \
public:


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OWSPLUGIN_API UOWSTask_ApplyRootMotion_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSTask_ApplyRootMotion_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OWSPLUGIN_API, UOWSTask_ApplyRootMotion_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSTask_ApplyRootMotion_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSTask_ApplyRootMotion_Base(UOWSTask_ApplyRootMotion_Base&&); \
	UOWSTask_ApplyRootMotion_Base(const UOWSTask_ApplyRootMotion_Base&); \
public: \
	OWSPLUGIN_API virtual ~UOWSTask_ApplyRootMotion_Base();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_14_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_17_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSTask_ApplyRootMotion_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTask_ApplyRootMotion_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
