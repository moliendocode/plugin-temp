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
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSPlayerState Function GetCharacterName
struct Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics
{
	struct OWSPlayerState_eventGetCharacterName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|PlayerState" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerState_eventGetCharacterName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerState, nullptr, "GetCharacterName", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::OWSPlayerState_eventGetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::OWSPlayerState_eventGetCharacterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerState_GetCharacterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerState_GetCharacterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerState::execGetCharacterName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCharacterName();
	P_NATIVE_END;
}
// End Class AOWSPlayerState Function GetCharacterName

// Begin Class AOWSPlayerState
void AOWSPlayerState::StaticRegisterNativesAOWSPlayerState()
{
	UClass* Class = AOWSPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterName", &AOWSPlayerState::execGetCharacterName },
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
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OWSPlayerState.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "OWS|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replicated Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSPlayerState_GetCharacterName, "GetCharacterName" }, // 1568185253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0040000000020021, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerState, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerState_Statics::NewProp_CharacterName,
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
void AOWSPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CharacterName(TEXT("CharacterName"));
	const bool bIsValid = true
		&& Name_CharacterName == ClassReps[(int32)ENetFields_Private::CharacterName].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSPlayerState);
AOWSPlayerState::~AOWSPlayerState() {}
// End Class AOWSPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSPlayerState, AOWSPlayerState::StaticClass, TEXT("AOWSPlayerState"), &Z_Registration_Info_UClass_AOWSPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSPlayerState), 2876239115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_1172254970(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
