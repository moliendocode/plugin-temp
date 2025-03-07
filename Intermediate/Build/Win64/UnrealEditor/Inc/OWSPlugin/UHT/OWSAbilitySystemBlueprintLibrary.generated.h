// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSAbilitySystemBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayAbilityTargetDataHandle;
struct FOWSGameplayTargetDataFilter;
struct FOWSGameplayTargetDataFilterHandle;
#ifdef OWSPLUGIN_OWSAbilitySystemBlueprintLibrary_generated_h
#error "OWSAbilitySystemBlueprintLibrary.generated.h already included, missing '#pragma once' in OWSAbilitySystemBlueprintLibrary.h"
#endif
#define OWSPLUGIN_OWSAbilitySystemBlueprintLibrary_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics; \
	OWSPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayAbilityTargetData Super;


template<> OWSPLUGIN_API UScriptStruct* StaticStruct<struct FGameplayAbilityCastingTargetingLocationInfo>();

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOWSChargeTimeFromTargetData); \
	DECLARE_FUNCTION(execMakeFilterHandle); \
	DECLARE_FUNCTION(execFilterTargetData);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSAbilitySystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UOWSAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSAbilitySystemBlueprintLibrary)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSAbilitySystemBlueprintLibrary(UOWSAbilitySystemBlueprintLibrary&&); \
	UOWSAbilitySystemBlueprintLibrary(const UOWSAbilitySystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSAbilitySystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSAbilitySystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSAbilitySystemBlueprintLibrary) \
	NO_API virtual ~UOWSAbilitySystemBlueprintLibrary();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_98_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSAbilitySystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
