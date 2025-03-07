// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AOWSCharacter;
class UOWSInventory;
class UTexture;
struct FDialogueChoice;
#ifdef OWSPLUGIN_OWSHUD_generated_h
#error "OWSHUD.generated.h already included, missing '#pragma once' in OWSHUD.h"
#endif
#define OWSPLUGIN_OWSHUD_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatingDamage_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FFloatingDamage>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueChoice_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FDialogueChoice>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterSpeaking_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCharacterSpeaking>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSplitDialogTexture); \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGridUsingLockedSlotGroups); \
	DECLARE_FUNCTION(execRenderInteractiveInventoryGrid); \
	DECLARE_FUNCTION(execRenderDialogueBox); \
	DECLARE_FUNCTION(execRenderInteractiveDialogueChoices); \
	DECLARE_FUNCTION(execRenderInteractiveDialogueChoicesInternal); \
	DECLARE_FUNCTION(execDrawWindow); \
	DECLARE_FUNCTION(execCalculateScreenPosition); \
	DECLARE_FUNCTION(execRenderFloatingDamage); \
	DECLARE_FUNCTION(execGetEstimatedDialogueNumberOfLines); \
	DECLARE_FUNCTION(execAddDialogueChoice); \
	DECLARE_FUNCTION(execClearDialogueChoices); \
	DECLARE_FUNCTION(execCleanUpFloatingDamageItems); \
	DECLARE_FUNCTION(execAddFloatingDamageItem);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSHUD(); \
	friend struct Z_Construct_UClass_AOWSHUD_Statics; \
public: \
	DECLARE_CLASS(AOWSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSHUD)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSHUD(AOWSHUD&&); \
	AOWSHUD(const AOWSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSHUD) \
	NO_API virtual ~AOWSHUD();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_139_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h


#define FOREACH_ENUM_EANCHORPOINT(op) \
	op(TopLeft) \
	op(TopCenter) \
	op(TopRight) \
	op(MiddleLeft) \
	op(MiddleCenter) \
	op(MiddleRight) \
	op(BottomLeft) \
	op(BottomCenter) \
	op(BottomRight) 
#define FOREACH_ENUM_ESPEECHBALLOONSTYLE(op) \
	op(Speech) \
	op(Thought) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
