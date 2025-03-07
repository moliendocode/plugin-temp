// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbility.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerController_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameplayAbility();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSGameplayAbility Function GetOWSAvatarActor
struct Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics
{
	struct OWSGameplayAbility_eventGetOWSAvatarActor_Parms
	{
		AOWSCharacterWithAbilities* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|OWS" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameplayAbility_eventGetOWSAvatarActor_Parms, ReturnValue), Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameplayAbility, nullptr, "GetOWSAvatarActor", nullptr, nullptr, Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::OWSGameplayAbility_eventGetOWSAvatarActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::OWSGameplayAbility_eventGetOWSAvatarActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameplayAbility::execGetOWSAvatarActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSCharacterWithAbilities**)Z_Param__Result=P_THIS->GetOWSAvatarActor();
	P_NATIVE_END;
}
// End Class UOWSGameplayAbility Function GetOWSAvatarActor

// Begin Class UOWSGameplayAbility Function GetOWSPlayerController
struct Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics
{
	struct OWSGameplayAbility_eventGetOWSPlayerController_Parms
	{
		AOWSPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|OWS" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameplayAbility_eventGetOWSPlayerController_Parms, ReturnValue), Z_Construct_UClass_AOWSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameplayAbility, nullptr, "GetOWSPlayerController", nullptr, nullptr, Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::OWSGameplayAbility_eventGetOWSPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::OWSGameplayAbility_eventGetOWSPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameplayAbility::execGetOWSPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSPlayerController**)Z_Param__Result=P_THIS->GetOWSPlayerController();
	P_NATIVE_END;
}
// End Class UOWSGameplayAbility Function GetOWSPlayerController

// Begin Class UOWSGameplayAbility Function MakeTargetLocationInfoFromCamera
struct Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics
{
	struct OWSGameplayAbility_eventMakeTargetLocationInfoFromCamera_Parms
	{
		const UCameraComponent* FollowCamera;
		FGameplayAbilityTargetingLocationInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|OWS" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameplayAbility_eventMakeTargetLocationInfoFromCamera_Parms, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameplayAbility_eventMakeTargetLocationInfoFromCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(0, nullptr) }; // 1311887580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameplayAbility, nullptr, "MakeTargetLocationInfoFromCamera", nullptr, nullptr, Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::OWSGameplayAbility_eventMakeTargetLocationInfoFromCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::OWSGameplayAbility_eventMakeTargetLocationInfoFromCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameplayAbility::execMakeTargetLocationInfoFromCamera)
{
	P_GET_OBJECT(UCameraComponent,Z_Param_FollowCamera);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityTargetingLocationInfo*)Z_Param__Result=P_THIS->MakeTargetLocationInfoFromCamera(Z_Param_FollowCamera);
	P_NATIVE_END;
}
// End Class UOWSGameplayAbility Function MakeTargetLocationInfoFromCamera

// Begin Class UOWSGameplayAbility Function OnlyEndAbilityOnServer
struct Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|OWS" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameplayAbility, nullptr, "OnlyEndAbilityOnServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameplayAbility::execOnlyEndAbilityOnServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnlyEndAbilityOnServer();
	P_NATIVE_END;
}
// End Class UOWSGameplayAbility Function OnlyEndAbilityOnServer

// Begin Class UOWSGameplayAbility
void UOWSGameplayAbility::StaticRegisterNativesUOWSGameplayAbility()
{
	UClass* Class = UOWSGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOWSAvatarActor", &UOWSGameplayAbility::execGetOWSAvatarActor },
		{ "GetOWSPlayerController", &UOWSGameplayAbility::execGetOWSPlayerController },
		{ "MakeTargetLocationInfoFromCamera", &UOWSGameplayAbility::execMakeTargetLocationInfoFromCamera },
		{ "OnlyEndAbilityOnServer", &UOWSGameplayAbility::execOnlyEndAbilityOnServer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSGameplayAbility);
UClass* Z_Construct_UClass_UOWSGameplayAbility_NoRegister()
{
	return UOWSGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UOWSGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSGameplayAbility_GetOWSAvatarActor, "GetOWSAvatarActor" }, // 3014321125
		{ &Z_Construct_UFunction_UOWSGameplayAbility_GetOWSPlayerController, "GetOWSPlayerController" }, // 1030287785
		{ &Z_Construct_UFunction_UOWSGameplayAbility_MakeTargetLocationInfoFromCamera, "MakeTargetLocationInfoFromCamera" }, // 166184407
		{ &Z_Construct_UFunction_UOWSGameplayAbility_OnlyEndAbilityOnServer, "OnlyEndAbilityOnServer" }, // 3959277572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSGameplayAbility_Statics::ClassParams = {
	&UOWSGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UOWSGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSGameplayAbility.OuterSingleton, Z_Construct_UClass_UOWSGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSGameplayAbility.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSGameplayAbility>()
{
	return UOWSGameplayAbility::StaticClass();
}
UOWSGameplayAbility::UOWSGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSGameplayAbility);
UOWSGameplayAbility::~UOWSGameplayAbility() {}
// End Class UOWSGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSGameplayAbility, UOWSGameplayAbility::StaticClass, TEXT("UOWSGameplayAbility"), &Z_Registration_Info_UClass_UOWSGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSGameplayAbility), 1913824131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbility_h_3509833318(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
