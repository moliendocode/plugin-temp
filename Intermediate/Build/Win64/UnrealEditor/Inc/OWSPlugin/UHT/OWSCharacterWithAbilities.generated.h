// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSCharacterWithAbilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSCharacter;
class UGameplayAbility;
class UOWSAttributeSet;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef OWSPLUGIN_OWSCharacterWithAbilities_generated_h
#error "OWSCharacterWithAbilities.generated.h already included, missing '#pragma once' in OWSCharacterWithAbilities.h"
#endif
#define OWSPLUGIN_OWSCharacterWithAbilities_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGrantAbilityKeyBind); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execChangeWeapon); \
	DECLARE_FUNCTION(execChangeSpell); \
	DECLARE_FUNCTION(execUpdateCharacterStats); \
	DECLARE_FUNCTION(execGetCharacterStats); \
	DECLARE_FUNCTION(execOnGameplayEffectTagCountChanged);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSCharacterWithAbilities(); \
	friend struct Z_Construct_UClass_AOWSCharacterWithAbilities_Statics; \
public: \
	DECLARE_CLASS(AOWSCharacterWithAbilities, AOWSCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSCharacterWithAbilities) \
	virtual UObject* _getUObject() const override { return const_cast<AOWSCharacterWithAbilities*>(this); }


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSCharacterWithAbilities(AOWSCharacterWithAbilities&&); \
	AOWSCharacterWithAbilities(const AOWSCharacterWithAbilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSCharacterWithAbilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSCharacterWithAbilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOWSCharacterWithAbilities) \
	NO_API virtual ~AOWSCharacterWithAbilities();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_47_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSCharacterWithAbilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h


#define FOREACH_ENUM_ABILITYINPUT(op) \
	op(AbilityInput::UseAbility1) \
	op(AbilityInput::UseAbility2) \
	op(AbilityInput::UseAbility3) \
	op(AbilityInput::UseAbility4) \
	op(AbilityInput::UseAbility5) \
	op(AbilityInput::UseAbility6) \
	op(AbilityInput::UseAbility7) \
	op(AbilityInput::UseAbility8) \
	op(AbilityInput::UseAbility9) \
	op(AbilityInput::UseAbility10) \
	op(AbilityInput::UseAbility11) \
	op(AbilityInput::UseAbility12) \
	op(AbilityInput::UseAbility13) \
	op(AbilityInput::UseAbility14) \
	op(AbilityInput::UseAbility15) \
	op(AbilityInput::UseAbility16) \
	op(AbilityInput::UseAbility17) \
	op(AbilityInput::UseAbility18) \
	op(AbilityInput::UseAbility19) \
	op(AbilityInput::UseAbility20) \
	op(AbilityInput::UseAbility21) \
	op(AbilityInput::UseAbility22) \
	op(AbilityInput::UseWeapon1) \
	op(AbilityInput::UseWeapon2) 

enum class AbilityInput : uint8;
template<> struct TIsUEnumClass<AbilityInput> { enum { Value = true }; };
template<> OWSPLUGIN_API UEnum* StaticEnum<AbilityInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
