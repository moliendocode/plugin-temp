// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSChatManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChatMessage;
#ifdef OWSPLUGIN_OWSChatManager_generated_h
#error "OWSChatManager.generated.h already included, missing '#pragma once' in OWSChatManager.h"
#endif
#define OWSPLUGIN_OWSChatManager_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatMessage_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FChatMessage>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLeaveChatGroup); \
	DECLARE_FUNCTION(execAddOrJoinChatGroup); \
	DECLARE_FUNCTION(execGetNewChatMessages); \
	DECLARE_FUNCTION(execSendPrivateChatMessage); \
	DECLARE_FUNCTION(execSendChatToChannel); \
	DECLARE_FUNCTION(execSendGlobalChat);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSChatManager(); \
	friend struct Z_Construct_UClass_AOWSChatManager_Statics; \
public: \
	DECLARE_CLASS(AOWSChatManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSChatManager)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSChatManager(AOWSChatManager&&); \
	AOWSChatManager(const AOWSChatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSChatManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSChatManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSChatManager) \
	NO_API virtual ~AOWSChatManager();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_44_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSChatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
