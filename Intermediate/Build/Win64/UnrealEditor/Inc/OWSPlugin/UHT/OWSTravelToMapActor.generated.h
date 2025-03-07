// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSTravelToMapActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef OWSPLUGIN_OWSTravelToMapActor_generated_h
#error "OWSTravelToMapActor.generated.h already included, missing '#pragma once' in OWSTravelToMapActor.h"
#endif
#define OWSPLUGIN_OWSTravelToMapActor_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCartesianFromSpherical); \
	DECLARE_FUNCTION(execGetSphericalFromCartesian); \
	DECLARE_FUNCTION(execGetMapServerToTravelTo);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSTravelToMapActor(); \
	friend struct Z_Construct_UClass_AOWSTravelToMapActor_Statics; \
public: \
	DECLARE_CLASS(AOWSTravelToMapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSTravelToMapActor)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSTravelToMapActor(AOWSTravelToMapActor&&); \
	AOWSTravelToMapActor(const AOWSTravelToMapActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSTravelToMapActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSTravelToMapActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSTravelToMapActor) \
	NO_API virtual ~AOWSTravelToMapActor();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_17_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSTravelToMapActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h


#define FOREACH_ENUM_DYNAMICAXISTYPE(op) \
	op(XAxis) \
	op(YAxis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
