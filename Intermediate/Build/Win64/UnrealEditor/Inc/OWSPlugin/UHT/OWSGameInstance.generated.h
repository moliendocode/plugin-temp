// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OWSGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class UMaterialInstance;
class UObject;
class USkeletalMesh;
class USkeleton;
class UStaticMesh;
class UStruct;
class UWorld;
#ifdef OWSPLUGIN_OWSGameInstance_generated_h
#error "OWSGameInstance.generated.h already included, missing '#pragma once' in OWSGameInstance.h"
#endif
#define OWSPLUGIN_OWSGameInstance_generated_h

#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecryptWithAES); \
	DECLARE_FUNCTION(execEncryptWithAES); \
	DECLARE_FUNCTION(execLoadGameplayAbilityClass); \
	DECLARE_FUNCTION(execFindGameplayAbilityClass); \
	DECLARE_FUNCTION(execFindClass); \
	DECLARE_FUNCTION(execLoadMaterialInstanceFromPath); \
	DECLARE_FUNCTION(execLoadSkeletonFromPath); \
	DECLARE_FUNCTION(execLoadSkeletalMeshFromPath); \
	DECLARE_FUNCTION(execLoadStaticMeshFromPath); \
	DECLARE_FUNCTION(execLoadWeaponActorClassFromPath); \
	DECLARE_FUNCTION(execSerializeStructToJSONString); \
	DECLARE_FUNCTION(execHideLoadingScreen); \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execBeginLoadingScreen);


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWSGameInstance(); \
	friend struct Z_Construct_UClass_UOWSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UOWSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/OWSPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOWSGameInstance)


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOWSGameInstance(UOWSGameInstance&&); \
	UOWSGameInstance(const UOWSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWSGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWSGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWSGameInstance) \
	NO_API virtual ~UOWSGameInstance();


#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_18_PROLOG
#define FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OWSPLUGIN_API UClass* StaticClass<class UOWSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
