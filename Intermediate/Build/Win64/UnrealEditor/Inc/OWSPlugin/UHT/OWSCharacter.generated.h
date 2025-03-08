// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterData;
struct FCharacterStats;
struct FInventoryData;
struct FVector_NetQuantize;
#ifdef OWSPLUGIN_OWSCharacter_generated_h
#error "OWSCharacter.generated.h already included, missing '#pragma once' in OWSCharacter.h"
#endif
#define OWSPLUGIN_OWSCharacter_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_10_DELEGATE \
OWSPLUGIN_API void FOnCharacterDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDataReceivedDelegate, FCharacterData const& CharacterData);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_11_DELEGATE \
OWSPLUGIN_API void FOnInventoryDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryDataReceivedDelegate, TArray<FInventoryData> const& InventoryData);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_12_DELEGATE \
OWSPLUGIN_API void FOnCharacterStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterStatsReceivedDelegate, FCharacterStats const& CharacterStats);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_Move_Validate(FVector_NetQuantize ); \
	DECLARE_FUNCTION(execUpdateCharacterData); \
	DECLARE_FUNCTION(execOnRep_CharacterStats); \
	DECLARE_FUNCTION(execOnRep_InventoryData); \
	DECLARE_FUNCTION(execOnRep_CharacterData); \
	DECLARE_FUNCTION(execGetCharacterStats); \
	DECLARE_FUNCTION(execGetInventoryData); \
	DECLARE_FUNCTION(execGetCharacterData); \
	DECLARE_FUNCTION(execServer_Jump); \
	DECLARE_FUNCTION(execClient_RejectMove); \
	DECLARE_FUNCTION(execServer_Move);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CharacterData=NETFIELD_REP_START, \
		InventoryData, \
		CharacterStats, \
		NETFIELD_REP_END=CharacterStats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSCharacter(AOWSCharacter&&); \
	AOWSCharacter(const AOWSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSCharacter) \
	NO_API virtual ~AOWSCharacter();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_14_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
