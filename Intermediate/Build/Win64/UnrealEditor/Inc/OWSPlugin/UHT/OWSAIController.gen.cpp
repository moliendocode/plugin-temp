// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAIController();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSAIController Function SetTeamNumber
struct Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics
{
	struct OWSAIController_eventSetTeamNumber_Parms
	{
		int32 TeamNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/OWSAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAIController_eventSetTeamNumber_Parms, TeamNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNumber_MetaData), NewProp_TeamNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::NewProp_TeamNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSAIController, nullptr, "SetTeamNumber", nullptr, nullptr, Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::OWSAIController_eventSetTeamNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::OWSAIController_eventSetTeamNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSAIController_SetTeamNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSAIController_SetTeamNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSAIController::execSetTeamNumber)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TeamNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTeamNumber(Z_Param_TeamNumber);
	P_NATIVE_END;
}
// End Class AOWSAIController Function SetTeamNumber

// Begin Class AOWSAIController
void AOWSAIController::StaticRegisterNativesAOWSAIController()
{
	UClass* Class = AOWSAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetTeamNumber", &AOWSAIController::execSetTeamNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSAIController);
UClass* Z_Construct_UClass_AOWSAIController_NoRegister()
{
	return AOWSAIController::StaticClass();
}
struct Z_Construct_UClass_AOWSAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OWSAIController.h" },
		{ "ModuleRelativePath", "Public/OWSAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSAIController_SetTeamNumber, "SetTeamNumber" }, // 3705589969
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOWSAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSAIController_Statics::ClassParams = {
	&AOWSAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSAIController()
{
	if (!Z_Registration_Info_UClass_AOWSAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSAIController.OuterSingleton, Z_Construct_UClass_AOWSAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSAIController.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSAIController>()
{
	return AOWSAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSAIController);
AOWSAIController::~AOWSAIController() {}
// End Class AOWSAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSAIController, AOWSAIController::StaticClass, TEXT("AOWSAIController"), &Z_Registration_Info_UClass_AOWSAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSAIController), 3698641831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAIController_h_355000810(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
