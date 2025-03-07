// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authentication/OWSAuthenticationInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSAuthenticationInterface_generated_h
#error "OWSAuthenticationInterface.generated.h already included, missing '#pragma once' in OWSAuthenticationInterface.h"
#endif
#define OWSPLUGIN_OWSAuthenticationInterface_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_10_DELEGATE \
OWSPLUGIN_API void FLoginDelegate_DelegateWrapper(const FScriptDelegate& LoginDelegate, bool bSuccess, const FString& ErrorMessage);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_11_DELEGATE \
OWSPLUGIN_API void FRegisterDelegate_DelegateWrapper(const FScriptDelegate& RegisterDelegate, bool bSuccess, const FString& ErrorMessage);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execRegister); \
	DECLARE_FUNCTION(execLogin);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OWSPLUGIN_API UOWSAuthenticationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAuthenticationInterface(UOWSAuthenticationInterface&&); \
	UOWSAuthenticationInterface(const UOWSAuthenticationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OWSPLUGIN_API, UOWSAuthenticationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAuthenticationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAuthenticationInterface) \
	OWSPLUGIN_API virtual ~UOWSAuthenticationInterface();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOWSAuthenticationInterface(); \
	friend struct Z_Construct_UClass_UOWSAuthenticationInterface_Statics; \
public: \
	DECLARE_CLASS(UOWSAuthenticationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OWSPlugin"), OWSPLUGIN_API) \
	DECLARE_SERIALIZER(UOWSAuthenticationInterface)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOWSAuthenticationInterface() {} \
public: \
	typedef UOWSAuthenticationInterface UClassType; \
	typedef IOWSAuthenticationInterface ThisClass; \
	static bool Execute_IsLoggedIn(UObject* O); \
	static void Execute_Login(UObject* O, const FString& Username, const FString& Password, const FLoginDelegate& Callback); \
	static void Execute_Logout(UObject* O); \
	static void Execute_Register(UObject* O, const FString& Username, const FString& Password, const FString& Email, const FRegisterDelegate& Callback); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_13_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAuthenticationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
