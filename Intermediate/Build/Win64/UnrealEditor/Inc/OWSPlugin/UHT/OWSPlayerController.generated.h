// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSCharacter;
class AOWSPlayerState;
class UTexture2D;
struct FChatGroup;
struct FCreateCharacter;
struct FCustomCharacterDataStruct;
struct FPlayerGroup;
struct FUserCharacter;
#ifdef OWSPLUGIN_OWSPlayerController_generated_h
#error "OWSPlayerController.generated.h already included, missing '#pragma once' in OWSPlayerController.h"
#endif
#define OWSPLUGIN_OWSPlayerController_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_AddItemToLocalMeshItemsMap_Implementation(const FString& ItemName, const int32 ItemMeshID); \
	DECLARE_FUNCTION(execRemoveCharacter); \
	DECLARE_FUNCTION(execGetMapServerToTravelTo); \
	DECLARE_FUNCTION(execGetPlayerGroupsCharacterIsIn); \
	DECLARE_FUNCTION(execAddOrUpdateCosmeticCustomCharacterData); \
	DECLARE_FUNCTION(execGetCosmeticCustomCharacterData); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execCreateCharacterUsingDefaultCharacterValues); \
	DECLARE_FUNCTION(execCreateCharacter); \
	DECLARE_FUNCTION(execGetAllCharacters); \
	DECLARE_FUNCTION(execIsPlayerOnline); \
	DECLARE_FUNCTION(execGetChatGroupsForPlayer); \
	DECLARE_FUNCTION(execPlayerLogout); \
	DECLARE_FUNCTION(execLaunchDungeon); \
	DECLARE_FUNCTION(execRemovePlayerFromGroup); \
	DECLARE_FUNCTION(execAddPlayerToGroup); \
	DECLARE_FUNCTION(execSaveAllPlayerData); \
	DECLARE_FUNCTION(execSavePlayerLocation); \
	DECLARE_FUNCTION(execClearSelectionOnCharacter); \
	DECLARE_FUNCTION(execClearSelectedCharacter); \
	DECLARE_FUNCTION(execSetSelectedCharacter); \
	DECLARE_FUNCTION(execLoadTextureReference); \
	DECLARE_FUNCTION(execGetPredictionTime); \
	DECLARE_FUNCTION(execTravelToMap2); \
	DECLARE_FUNCTION(execTravelToMap); \
	DECLARE_FUNCTION(execGetOWSPlayerState); \
	DECLARE_FUNCTION(execClient_AddItemToLocalMeshItemsMap); \
	DECLARE_FUNCTION(execAddItemToLocalMeshItemsMap); \
	DECLARE_FUNCTION(execSynchUpLocalMeshItemsMap); \
	DECLARE_FUNCTION(execSetSelectedCharacterAndConnectToLastZone);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSPlayerController(); \
	friend struct Z_Construct_UClass_AOWSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxPredictionPing=NETFIELD_REP_START, \
		DesiredPredictionPing, \
		PredictionFudgeFactor, \
		NETFIELD_REP_END=PredictionFudgeFactor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSPlayerController(AOWSPlayerController&&); \
	AOWSPlayerController(const AOWSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSPlayerController) \
	NO_API virtual ~AOWSPlayerController();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_18_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
