// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSInventory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AOWSCharacter;
class AOWSInventoryItem;
class UOWSInventoryItemStack;
struct FInventoryItemStruct;
#ifdef OWSPLUGIN_OWSInventory_generated_h
#error "OWSInventory.generated.h already included, missing '#pragma once' in OWSInventory.h"
#endif
#define OWSPLUGIN_OWSInventory_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsSlotFilled); \
	DECLARE_FUNCTION(execFindItemIndex); \
	DECLARE_FUNCTION(execFindFirstEmptySlotToFitItemOfSize); \
	DECLARE_FUNCTION(execGetStackInSlot); \
	DECLARE_FUNCTION(execSwapSlots); \
	DECLARE_FUNCTION(execRemoveOneItemFromSlot); \
	DECLARE_FUNCTION(execAddItemsFromInventoryItemStruct); \
	DECLARE_FUNCTION(execAddItemToSlot); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execRemoveStackFromSlot); \
	DECLARE_FUNCTION(execAddStackToSlot); \
	DECLARE_FUNCTION(execSetInventoryName); \
	DECLARE_FUNCTION(execSetInventorySize); \
	DECLARE_FUNCTION(execSetOwningPlayerCharacter);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOWSInventory(); \
	friend struct Z_Construct_UClass_UOWSInventory_Statics; \
public: \
	DECLARE_CLASS(UOWSInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSInventory)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSInventory(UOWSInventory&&); \
	UOWSInventory(const UOWSInventory&); \
public: \
	NO_API virtual ~UOWSInventory();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_18_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_RPC_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_INCLASS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
