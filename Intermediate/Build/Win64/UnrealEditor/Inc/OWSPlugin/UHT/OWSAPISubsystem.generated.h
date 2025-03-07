// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAPISubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSAPISubsystem_generated_h
#error "OWSAPISubsystem.generated.h already included, missing '#pragma once' in OWSAPISubsystem.h"
#endif
#define OWSPLUGIN_OWSAPISubsystem_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execCreateCharacterUsingDefaultCharacterValues); \
	DECLARE_FUNCTION(execAddOrUpdateGlobalDataItem); \
	DECLARE_FUNCTION(execGetGlobalDataItem);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAPISubsystem(); \
	friend struct Z_Construct_UClass_UOWSAPISubsystem_Statics; \
public: \
	DECLARE_CLASS(UOWSAPISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAPISubsystem)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAPISubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAPISubsystem(UOWSAPISubsystem&&); \
	UOWSAPISubsystem(const UOWSAPISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAPISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAPISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOWSAPISubsystem) \
	NO_API virtual ~UOWSAPISubsystem();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_33_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAPISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAPISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
