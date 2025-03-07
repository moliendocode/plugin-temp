// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSInventoryItemStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSInventoryItem;
#ifdef OWSPLUGIN_OWSInventoryItemStack_generated_h
#error "OWSInventoryItemStack.generated.h already included, missing '#pragma once' in OWSInventoryItemStack.h"
#endif
#define OWSPLUGIN_OWSInventoryItemStack_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetTopItemFromStack); \
	DECLARE_FUNCTION(execAddToStack);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOWSInventoryItemStack(); \
	friend struct Z_Construct_UClass_UOWSInventoryItemStack_Statics; \
public: \
	DECLARE_CLASS(UOWSInventoryItemStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventoryItemStack)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventoryItemStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventoryItemStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventoryItemStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventoryItemStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSInventoryItemStack(UOWSInventoryItemStack&&); \
	UOWSInventoryItemStack(const UOWSInventoryItemStack&); \
public: \
	NO_API virtual ~UOWSInventoryItemStack();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_13_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSInventoryItemStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItemStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
