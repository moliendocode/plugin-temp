// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef OWSPLUGIN_OWSPlayerController_generated_h
#error "OWSPlayerController.generated.h already included, missing '#pragma once' in OWSPlayerController.h"
#endif
#define OWSPLUGIN_OWSPlayerController_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_21_DELEGATE \
OWSPLUGIN_API void FOnLoginSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoginSuccessDelegate);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_22_DELEGATE \
OWSPLUGIN_API void FOnLoginFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoginFailDelegate, const FString& ErrorMessage);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_23_DELEGATE \
OWSPLUGIN_API void FOnRegisterSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterSuccessDelegate);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_24_DELEGATE \
OWSPLUGIN_API void FOnRegisterFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterFailDelegate, const FString& ErrorMessage);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RegisterUser_Implementation(const FString& Username, const FString& Password, const FString& Email); \
	virtual void Server_LoginUser_Implementation(const FString& Username, const FString& Password); \
	DECLARE_FUNCTION(execServer_Move); \
	DECLARE_FUNCTION(execServer_GetCharacterData); \
	DECLARE_FUNCTION(execClient_OnRegisterComplete); \
	DECLARE_FUNCTION(execServer_RegisterUser); \
	DECLARE_FUNCTION(execRegisterUser); \
	DECLARE_FUNCTION(execClient_OnLoginComplete); \
	DECLARE_FUNCTION(execServer_LoginUser); \
	DECLARE_FUNCTION(execLoginUser);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSPlayerController(); \
	friend struct Z_Construct_UClass_AOWSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AOWSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSPlayerController)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSPlayerController(AOWSPlayerController&&); \
	AOWSPlayerController(const AOWSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSPlayerController) \
	NO_API virtual ~AOWSPlayerController();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_31_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
