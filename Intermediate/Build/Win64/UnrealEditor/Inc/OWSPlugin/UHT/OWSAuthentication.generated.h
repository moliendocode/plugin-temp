// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authentication/OWSAuthentication.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSAuthentication_generated_h
#error "OWSAuthentication.generated.h already included, missing '#pragma once' in OWSAuthentication.h"
#endif
#define OWSPLUGIN_OWSAuthentication_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAuthentication(); \
	friend struct Z_Construct_UClass_UOWSAuthentication_Statics; \
public: \
	DECLARE_CLASS(UOWSAuthentication, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAuthentication) \
	virtual UObject* _getUObject() const override { return const_cast<UOWSAuthentication*>(this); }


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAuthentication(UOWSAuthentication&&); \
	UOWSAuthentication(const UOWSAuthentication&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAuthentication); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAuthentication); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAuthentication) \
	NO_API virtual ~UOWSAuthentication();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_8_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAuthentication>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
