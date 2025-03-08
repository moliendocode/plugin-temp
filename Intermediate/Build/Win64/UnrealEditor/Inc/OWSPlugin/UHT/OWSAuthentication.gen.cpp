// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/Authentication/OWSAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAuthentication() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthentication();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthentication_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSAuthentication Function Init
struct Z_Construct_UFunction_UOWSAuthentication_Init_Statics
{
	struct OWSAuthentication_eventInit_Parms
	{
		FString InCustomerGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthentication.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCustomerGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCustomerGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthentication_Init_Statics::NewProp_InCustomerGUID = { "InCustomerGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthentication_eventInit_Parms, InCustomerGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCustomerGUID_MetaData), NewProp_InCustomerGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAuthentication_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthentication_Init_Statics::NewProp_InCustomerGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthentication_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAuthentication_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAuthentication, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_UOWSAuthentication_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthentication_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAuthentication_Init_Statics::OWSAuthentication_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthentication_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAuthentication_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAuthentication_Init_Statics::OWSAuthentication_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAuthentication_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAuthentication_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAuthentication::execInit)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InCustomerGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InCustomerGUID);
	P_NATIVE_END;
}
// End Class UOWSAuthentication Function Init

// Begin Class UOWSAuthentication
void UOWSAuthentication::StaticRegisterNativesUOWSAuthentication()
{
	UClass* Class = UOWSAuthentication::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Init", &UOWSAuthentication::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAuthentication);
UClass* Z_Construct_UClass_UOWSAuthentication_NoRegister()
{
	return UOWSAuthentication::StaticClass();
}
struct Z_Construct_UClass_UOWSAuthentication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Authentication/OWSAuthentication.h" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthentication.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAuthentication_Init, "Init" }, // 2792046218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAuthentication>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSAuthentication_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthentication_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOWSAuthentication_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister, (int32)VTABLE_OFFSET(UOWSAuthentication, IOWSAuthenticationInterface), false },  // 3841418255
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAuthentication_Statics::ClassParams = {
	&UOWSAuthentication::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthentication_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAuthentication_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAuthentication()
{
	if (!Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton, Z_Construct_UClass_UOWSAuthentication_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAuthentication>()
{
	return UOWSAuthentication::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAuthentication);
UOWSAuthentication::~UOWSAuthentication() {}
// End Class UOWSAuthentication

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAuthentication, UOWSAuthentication::StaticClass, TEXT("UOWSAuthentication"), &Z_Registration_Info_UClass_UOWSAuthentication, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAuthentication), 1963971117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_3604392923(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
