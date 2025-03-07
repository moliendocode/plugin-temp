// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSInventoryItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OWSPLUGIN_OWSInventoryItem_generated_h
#error "OWSInventoryItem.generated.h already included, missing '#pragma once' in OWSInventoryItem.h"
#endif
#define OWSPLUGIN_OWSInventoryItem_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemStruct_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FInventoryItemStruct>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOWSInventoryItem(); \
	friend struct Z_Construct_UClass_AOWSInventoryItem_Statics; \
public: \
	DECLARE_CLASS(AOWSInventoryItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(AOWSInventoryItem)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_186_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AOWSInventoryItem(AOWSInventoryItem&&); \
	AOWSInventoryItem(const AOWSInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOWSInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOWSInventoryItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOWSInventoryItem) \
	NO_API virtual ~AOWSInventoryItem();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_183_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_186_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class AOWSInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventoryItem_h


#define FOREACH_ENUM_ITEMCATEGORIES(op) \
	op(Consumable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
