// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameInstanceSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameInstanceSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstanceSubsystem();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameInstanceSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSGameInstanceSubsystem Function ClearAuthToken
struct Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clears the authentication token (logout).\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the authentication token (logout)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstanceSubsystem, nullptr, "ClearAuthToken", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstanceSubsystem::execClearAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAuthToken();
	P_NATIVE_END;
}
// End Class UOWSGameInstanceSubsystem Function ClearAuthToken

// Begin Class UOWSGameInstanceSubsystem Function GetAuthToken
struct Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics
{
	struct OWSGameInstanceSubsystem_eventGetAuthToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the authentication token.\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the authentication token." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstanceSubsystem_eventGetAuthToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstanceSubsystem, nullptr, "GetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::OWSGameInstanceSubsystem_eventGetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::OWSGameInstanceSubsystem_eventGetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstanceSubsystem::execGetAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAuthToken();
	P_NATIVE_END;
}
// End Class UOWSGameInstanceSubsystem Function GetAuthToken

// Begin Class UOWSGameInstanceSubsystem Function IsLoggedIn
struct Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics
{
	struct OWSGameInstanceSubsystem_eventIsLoggedIn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSGameInstanceSubsystem_eventIsLoggedIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSGameInstanceSubsystem_eventIsLoggedIn_Parms), &Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstanceSubsystem, nullptr, "IsLoggedIn", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::OWSGameInstanceSubsystem_eventIsLoggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::OWSGameInstanceSubsystem_eventIsLoggedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstanceSubsystem::execIsLoggedIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoggedIn();
	P_NATIVE_END;
}
// End Class UOWSGameInstanceSubsystem Function IsLoggedIn

// Begin Class UOWSGameInstanceSubsystem Function SetAuthToken
struct Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics
{
	struct OWSGameInstanceSubsystem_eventSetAuthToken_Parms
	{
		FString NewToken;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the authentication token.\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the authentication token." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::NewProp_NewToken = { "NewToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameInstanceSubsystem_eventSetAuthToken_Parms, NewToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewToken_MetaData), NewProp_NewToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::NewProp_NewToken,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSGameInstanceSubsystem, nullptr, "SetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::OWSGameInstanceSubsystem_eventSetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::OWSGameInstanceSubsystem_eventSetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSGameInstanceSubsystem::execSetAuthToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewToken);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAuthToken(Z_Param_NewToken);
	P_NATIVE_END;
}
// End Class UOWSGameInstanceSubsystem Function SetAuthToken

// Begin Class UOWSGameInstanceSubsystem
void UOWSGameInstanceSubsystem::StaticRegisterNativesUOWSGameInstanceSubsystem()
{
	UClass* Class = UOWSGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAuthToken", &UOWSGameInstanceSubsystem::execClearAuthToken },
		{ "GetAuthToken", &UOWSGameInstanceSubsystem::execGetAuthToken },
		{ "IsLoggedIn", &UOWSGameInstanceSubsystem::execIsLoggedIn },
		{ "SetAuthToken", &UOWSGameInstanceSubsystem::execSetAuthToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSGameInstanceSubsystem);
UClass* Z_Construct_UClass_UOWSGameInstanceSubsystem_NoRegister()
{
	return UOWSGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem to store the authentication token for the current session.\n * This is a temporary solution for development.  For a production game,\n * a more secure method of storing credentials should be used.\n */" },
#endif
		{ "IncludePath", "OWSGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem to store the authentication token for the current session.\nThis is a temporary solution for development.  For a production game,\na more secure method of storing credentials should be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The authentication token.\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The authentication token." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The name of the character.\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the character." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AuthToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSGameInstanceSubsystem_ClearAuthToken, "ClearAuthToken" }, // 3642415364
		{ &Z_Construct_UFunction_UOWSGameInstanceSubsystem_GetAuthToken, "GetAuthToken" }, // 828692656
		{ &Z_Construct_UFunction_UOWSGameInstanceSubsystem_IsLoggedIn, "IsLoggedIn" }, // 1088255308
		{ &Z_Construct_UFunction_UOWSGameInstanceSubsystem_SetAuthToken, "SetAuthToken" }, // 3708818547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSGameInstanceSubsystem, AuthToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthToken_MetaData), NewProp_AuthToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSGameInstanceSubsystem, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::NewProp_AuthToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::ClassParams = {
	&UOWSGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UOWSGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UOWSGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSGameInstanceSubsystem.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSGameInstanceSubsystem>()
{
	return UOWSGameInstanceSubsystem::StaticClass();
}
UOWSGameInstanceSubsystem::UOWSGameInstanceSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSGameInstanceSubsystem);
UOWSGameInstanceSubsystem::~UOWSGameInstanceSubsystem() {}
// End Class UOWSGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSGameInstanceSubsystem, UOWSGameInstanceSubsystem::StaticClass, TEXT("UOWSGameInstanceSubsystem"), &Z_Registration_Info_UClass_UOWSGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSGameInstanceSubsystem), 2976541791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_3773790972(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
