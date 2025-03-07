// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSGameInstanceSubsystem_generated_h
#error "OWSGameInstanceSubsystem.generated.h already included, missing '#pragma once' in OWSGameInstanceSubsystem.h"
#endif
#define OWSPLUGIN_OWSGameInstanceSubsystem_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execClearAuthToken); \
	DECLARE_FUNCTION(execGetAuthToken); \
	DECLARE_FUNCTION(execSetAuthToken);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UOWSGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSGameInstanceSubsystem)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSGameInstanceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSGameInstanceSubsystem(UOWSGameInstanceSubsystem&&); \
	UOWSGameInstanceSubsystem(const UOWSGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWSGameInstanceSubsystem) \
	NO_API virtual ~UOWSGameInstanceSubsystem();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_12_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
