// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlayerState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSPlayerState Function GetCurrentPawn
struct Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics
{
	struct OWSPlayerState_eventGetCurrentPawn_Parms
	{
		AOWSCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerState_eventGetCurrentPawn_Parms, ReturnValue), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerState, nullptr, "GetCurrentPawn", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::OWSPlayerState_eventGetCurrentPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::OWSPlayerState_eventGetCurrentPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerState::execGetCurrentPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AOWSCharacter**)Z_Param__Result=P_THIS->GetCurrentPawn();
	P_NATIVE_END;
}
// End Class AOWSPlayerState Function GetCurrentPawn

// Begin Class AOWSPlayerState Function SetCharacterName
struct Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics
{
	struct OWSPlayerState_eventSetCharacterName_Parms
	{
		FString CharacterName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerState_eventSetCharacterName_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerState, nullptr, "SetCharacterName", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::OWSPlayerState_eventSetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::OWSPlayerState_eventSetCharacterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerState_SetCharacterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerState_SetCharacterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerState::execSetCharacterName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterName(Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class AOWSPlayerState Function SetCharacterName

// Begin Class AOWSPlayerState
void AOWSPlayerState::StaticRegisterNativesAOWSPlayerState()
{
	UClass* Class = AOWSPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentPawn", &AOWSPlayerState::execGetCurrentPawn },
		{ "SetCharacterName", &AOWSPlayerState::execSetCharacterName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSPlayerState);
UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister()
{
	return AOWSPlayerState::StaticClass();
}
struct Z_Construct_UClass_AOWSPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OWSPlayerState.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartLocation_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartRotation_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantPartyID_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStartRotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPawnClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlwaysRelevantPartyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSPlayerState_GetCurrentPawn, "GetCurrentPawn" }, // 1369661918
		{ &Z_Construct_UFunction_AOWSPlayerState_SetCharacterName, "SetCharacterName" }, // 3378891793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation = { "PlayerStartLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, PlayerStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStartLocation_MetaData), NewProp_PlayerStartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation = { "PlayerStartRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, PlayerStartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStartRotation_MetaData), NewProp_PlayerStartRotation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass = { "DefaultPawnClass", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, DefaultPawnClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnClass_MetaData), NewProp_DefaultPawnClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_AlwaysRelevantPartyID = { "AlwaysRelevantPartyID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, AlwaysRelevantPartyID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysRelevantPartyID_MetaData), NewProp_AlwaysRelevantPartyID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_PlayerStartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_DefaultPawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_AlwaysRelevantPartyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSPlayerState_Statics::ClassParams = {
	&AOWSPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSPlayerState()
{
	if (!Z_Registration_Info_UClass_AOWSPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSPlayerState.OuterSingleton, Z_Construct_UClass_AOWSPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSPlayerState.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSPlayerState>()
{
	return AOWSPlayerState::StaticClass();
}
AOWSPlayerState::AOWSPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSPlayerState);
AOWSPlayerState::~AOWSPlayerState() {}
// End Class AOWSPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSPlayerState, AOWSPlayerState::StaticClass, TEXT("AOWSPlayerState"), &Z_Registration_Info_UClass_AOWSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSPlayerState), 199768327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_3583630352(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
