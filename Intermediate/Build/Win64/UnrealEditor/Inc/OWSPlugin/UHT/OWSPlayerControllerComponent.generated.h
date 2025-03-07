// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSPlayerControllerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSPlayerState;
#ifdef OWSPLUGIN_OWSPlayerControllerComponent_generated_h
#error "OWSPlayerControllerComponent.generated.h already included, missing '#pragma once' in OWSPlayerControllerComponent.h"
#endif
#define OWSPLUGIN_OWSPlayerControllerComponent_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerGroupsCharacterIsIn); \
	DECLARE_FUNCTION(execRemoveCharacter); \
	DECLARE_FUNCTION(execCreateCharacterUsingDefaultCharacterValues); \
	DECLARE_FUNCTION(execCreateCharacter); \
	DECLARE_FUNCTION(execPlayerLogout); \
	DECLARE_FUNCTION(execRemoveAbilityFromCharacter); \
	DECLARE_FUNCTION(execUpdateAbilityOnCharacter); \
	DECLARE_FUNCTION(execGetAbilityBars); \
	DECLARE_FUNCTION(execGetCharacterAbilities); \
	DECLARE_FUNCTION(execAddAbilityToCharacter); \
	DECLARE_FUNCTION(execGetCharacterStatuses); \
	DECLARE_FUNCTION(execGetChatGroupsForPlayer); \
	DECLARE_FUNCTION(execAddOrUpdateCustomCharacterData); \
	DECLARE_FUNCTION(execGetCustomCharacterData); \
	DECLARE_FUNCTION(execUpdateCharacterStats); \
	DECLARE_FUNCTION(execGetCharacterDataAndCustomData); \
	DECLARE_FUNCTION(execGetCharacterStats); \
	DECLARE_FUNCTION(execGetAllCharacters); \
	DECLARE_FUNCTION(execSaveAllPlayerData); \
	DECLARE_FUNCTION(execSavePlayerLocation); \
	DECLARE_FUNCTION(execGetZoneServerToTravelTo); \
	DECLARE_FUNCTION(execSetSelectedCharacterAndConnectToLastZone); \
	DECLARE_FUNCTION(execTravelToMap2); \
	DECLARE_FUNCTION(execTravelToMap); \
	DECLARE_FUNCTION(execGetOWSPlayerState);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSPlayerControllerComponent(); \
	friend struct Z_Construct_UClass_UOWSPlayerControllerComponent_Statics; \
public: \
	DECLARE_CLASS(UOWSPlayerControllerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSPlayerControllerComponent)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSPlayerControllerComponent(UOWSPlayerControllerComponent&&); \
	UOWSPlayerControllerComponent(const UOWSPlayerControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSPlayerControllerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSPlayerControllerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWSPlayerControllerComponent) \
	NO_API virtual ~UOWSPlayerControllerComponent();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_99_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSPlayerControllerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
