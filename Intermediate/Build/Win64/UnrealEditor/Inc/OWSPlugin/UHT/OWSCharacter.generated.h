// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UTexture2D;
#ifdef OWSPLUGIN_OWSCharacter_generated_h
#error "OWSCharacter.generated.h already included, missing '#pragma once' in OWSCharacter.h"
#endif
#define OWSPLUGIN_OWSCharacter_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCustomCharacterDataStruct>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterStats_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCharacterStats>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FGameplayTagsToUse>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLuck); \
	DECLARE_FUNCTION(execGetWisdom); \
	DECLARE_FUNCTION(execGetIntelligence); \
	DECLARE_FUNCTION(execGetDexterity); \
	DECLARE_FUNCTION(execGetStrength); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCharacterMesh); \
	DECLARE_FUNCTION(execGetCharacterTexture); \
	DECLARE_FUNCTION(execGetCharacterID); \
	DECLARE_FUNCTION(execGetCharacterName);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacter(); \
	friend struct Z_Construct_UClass_AOWSCharacter_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacter, AOWSCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacter*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CustomCharacterData=NETFIELD_REP_START, \
		NETFIELD_REP_END=CustomCharacterData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSCharacter(AOWSCharacter&&); \
	AOWSCharacter(const AOWSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacter) \
	NO_API virtual ~AOWSCharacter();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_107_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
