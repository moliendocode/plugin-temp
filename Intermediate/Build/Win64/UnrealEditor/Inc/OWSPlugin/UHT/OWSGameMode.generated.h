// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItemStruct;
struct FZoneInstance;
#ifdef OWSPLUGIN_OWSGameMode_generated_h
#error "OWSGameMode.generated.h already included, missing '#pragma once' in OWSGameMode.h"
#endif
#define OWSPLUGIN_OWSGameMode_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FCharactersOnlineStruct>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_96_DELEGATE \
OWSPLUGIN_API void FItemLibraryLoadedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemLibraryLoadedSignature);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddZone); \
	DECLARE_FUNCTION(execGetCurrentWorldTime); \
	DECLARE_FUNCTION(execGetAddressURLAndPort); \
	DECLARE_FUNCTION(execUpdateNumberOfPlayers); \
	DECLARE_FUNCTION(execGetZoneInstanceFromZoneInstanceID); \
	DECLARE_FUNCTION(execGetZoneInstancesForZone); \
	DECLARE_FUNCTION(execIsPlayerOnline); \
	DECLARE_FUNCTION(execGetAllCharactersOnline); \
	DECLARE_FUNCTION(execSaveAllPlayerLocations); \
	DECLARE_FUNCTION(execAddOrUpdateGlobalDataItem); \
	DECLARE_FUNCTION(execGetGlobalDataItem); \
	DECLARE_FUNCTION(execGetAllInventoryItems); \
	DECLARE_FUNCTION(execFindItemDefinition); \
	DECLARE_FUNCTION(execAddItemMeshToAllPlayers);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSGameMode(); \
	friend struct Z_Construct_UClass_AOWSGameMode_Statics; \
public: \
	DECLARE_CLASS(AOWSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSGameMode)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSGameMode(AOWSGameMode&&); \
	AOWSGameMode(const AOWSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSGameMode) \
	NO_API virtual ~AOWSGameMode();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_100_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
