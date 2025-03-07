// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSPlayerController.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerController();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSPlayerController_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FOnLoginSuccessDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnLoginSuccessDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoginSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoginSuccessDelegate)
{
	OnLoginSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnLoginSuccessDelegate

// Begin Delegate FOnLoginFailDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventOnLoginFailDelegate_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventOnLoginFailDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnLoginFailDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnLoginFailDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnLoginFailDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoginFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnLoginFailDelegate, const FString& ErrorMessage)
{
	struct _Script_OWSPlugin_eventOnLoginFailDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_OWSPlugin_eventOnLoginFailDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnLoginFailDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLoginFailDelegate

// Begin Delegate FOnRegisterSuccessDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnRegisterSuccessDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRegisterSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterSuccessDelegate)
{
	OnRegisterSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRegisterSuccessDelegate

// Begin Delegate FOnRegisterFailDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventOnRegisterFailDelegate_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventOnRegisterFailDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnRegisterFailDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnRegisterFailDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnRegisterFailDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRegisterFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRegisterFailDelegate, const FString& ErrorMessage)
{
	struct _Script_OWSPlugin_eventOnRegisterFailDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_OWSPlugin_eventOnRegisterFailDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnRegisterFailDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRegisterFailDelegate

// Begin Class AOWSPlayerController Function Client_OnLoginComplete
struct OWSPlayerController_eventClient_OnLoginComplete_Parms
{
	bool bSuccess;
	FString ErrorMessage;
};
static const FName NAME_AOWSPlayerController_Client_OnLoginComplete = FName(TEXT("Client_OnLoginComplete"));
void AOWSPlayerController::Client_OnLoginComplete(bool bSuccess, const FString& ErrorMessage)
{
	OWSPlayerController_eventClient_OnLoginComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Client_OnLoginComplete);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((OWSPlayerController_eventClient_OnLoginComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerController_eventClient_OnLoginComplete_Parms), &Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventClient_OnLoginComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Client_OnLoginComplete", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::PropPointers), sizeof(OWSPlayerController_eventClient_OnLoginComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventClient_OnLoginComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execClient_OnLoginComplete)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_OnLoginComplete_Implementation(Z_Param_bSuccess,Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Client_OnLoginComplete

// Begin Class AOWSPlayerController Function Client_OnRegisterComplete
struct OWSPlayerController_eventClient_OnRegisterComplete_Parms
{
	bool bSuccess;
	FString ErrorMessage;
};
static const FName NAME_AOWSPlayerController_Client_OnRegisterComplete = FName(TEXT("Client_OnRegisterComplete"));
void AOWSPlayerController::Client_OnRegisterComplete(bool bSuccess, const FString& ErrorMessage)
{
	OWSPlayerController_eventClient_OnRegisterComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Client_OnRegisterComplete);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((OWSPlayerController_eventClient_OnRegisterComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSPlayerController_eventClient_OnRegisterComplete_Parms), &Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventClient_OnRegisterComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Client_OnRegisterComplete", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::PropPointers), sizeof(OWSPlayerController_eventClient_OnRegisterComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventClient_OnRegisterComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execClient_OnRegisterComplete)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_OnRegisterComplete_Implementation(Z_Param_bSuccess,Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Client_OnRegisterComplete

// Begin Class AOWSPlayerController Function LoginUser
struct Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics
{
	struct OWSPlayerController_eventLoginUser_Parms
	{
		FString Username;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Login\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Login" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLoginUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventLoginUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "LoginUser", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::OWSPlayerController_eventLoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::OWSPlayerController_eventLoginUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_LoginUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_LoginUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execLoginUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginUser(Z_Param_Username,Z_Param_Password);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function LoginUser

// Begin Class AOWSPlayerController Function RegisterUser
struct Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics
{
	struct OWSPlayerController_eventRegisterUser_Parms
	{
		FString Username;
		FString Password;
		FString Email;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Register\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRegisterUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRegisterUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventRegisterUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::NewProp_Email,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "RegisterUser", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::OWSPlayerController_eventRegisterUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::OWSPlayerController_eventRegisterUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_RegisterUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_RegisterUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execRegisterUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUser(Z_Param_Username,Z_Param_Password,Z_Param_Email);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function RegisterUser

// Begin Class AOWSPlayerController Function Server_GetCharacterData
struct OWSPlayerController_eventServer_GetCharacterData_Parms
{
	FString CharacterName;
};
static const FName NAME_AOWSPlayerController_Server_GetCharacterData = FName(TEXT("Server_GetCharacterData"));
void AOWSPlayerController::Server_GetCharacterData(const FString& CharacterName)
{
	OWSPlayerController_eventServer_GetCharacterData_Parms Parms;
	Parms.CharacterName=CharacterName;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Server_GetCharacterData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character Data\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_GetCharacterData_Parms, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Server_GetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::PropPointers), sizeof(OWSPlayerController_eventServer_GetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventServer_GetCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execServer_GetCharacterData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_GetCharacterData_Implementation(Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Server_GetCharacterData

// Begin Class AOWSPlayerController Function Server_LoginUser
struct OWSPlayerController_eventServer_LoginUser_Parms
{
	FString Username;
	FString Password;
};
static const FName NAME_AOWSPlayerController_Server_LoginUser = FName(TEXT("Server_LoginUser"));
void AOWSPlayerController::Server_LoginUser(const FString& Username, const FString& Password)
{
	OWSPlayerController_eventServer_LoginUser_Parms Parms;
	Parms.Username=Username;
	Parms.Password=Password;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Server_LoginUser);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_LoginUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_LoginUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Server_LoginUser", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::PropPointers), sizeof(OWSPlayerController_eventServer_LoginUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventServer_LoginUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execServer_LoginUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_LoginUser_Validate(Z_Param_Username,Z_Param_Password))
	{
		RPC_ValidateFailed(TEXT("Server_LoginUser_Validate"));
		return;
	}
	P_THIS->Server_LoginUser_Implementation(Z_Param_Username,Z_Param_Password);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Server_LoginUser

// Begin Class AOWSPlayerController Function Server_Move
struct OWSPlayerController_eventServer_Move_Parms
{
	FVector_NetQuantize NewLocation;
};
static const FName NAME_AOWSPlayerController_Server_Move = FName(TEXT("Server_Move"));
void AOWSPlayerController::Server_Move(FVector_NetQuantize NewLocation)
{
	OWSPlayerController_eventServer_Move_Parms Parms;
	Parms.NewLocation=NewLocation;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Server_Move);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_Move_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Server_Move", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::PropPointers), sizeof(OWSPlayerController_eventServer_Move_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventServer_Move_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Server_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Server_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execServer_Move)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_NewLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Move_Validate(Z_Param_NewLocation))
	{
		RPC_ValidateFailed(TEXT("Server_Move_Validate"));
		return;
	}
	P_THIS->Server_Move_Implementation(Z_Param_NewLocation);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Server_Move

// Begin Class AOWSPlayerController Function Server_RegisterUser
struct OWSPlayerController_eventServer_RegisterUser_Parms
{
	FString Username;
	FString Password;
	FString Email;
};
static const FName NAME_AOWSPlayerController_Server_RegisterUser = FName(TEXT("Server_RegisterUser"));
void AOWSPlayerController::Server_RegisterUser(const FString& Username, const FString& Password, const FString& Email)
{
	OWSPlayerController_eventServer_RegisterUser_Parms Parms;
	Parms.Username=Username;
	Parms.Password=Password;
	Parms.Email=Email;
	UFunction* Func = FindFunctionChecked(NAME_AOWSPlayerController_Server_RegisterUser);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_RegisterUser_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_RegisterUser_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSPlayerController_eventServer_RegisterUser_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::NewProp_Email,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSPlayerController, nullptr, "Server_RegisterUser", nullptr, nullptr, Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::PropPointers), sizeof(OWSPlayerController_eventServer_RegisterUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSPlayerController_eventServer_RegisterUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSPlayerController::execServer_RegisterUser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_RegisterUser_Validate(Z_Param_Username,Z_Param_Password,Z_Param_Email))
	{
		RPC_ValidateFailed(TEXT("Server_RegisterUser_Validate"));
		return;
	}
	P_THIS->Server_RegisterUser_Implementation(Z_Param_Username,Z_Param_Password,Z_Param_Email);
	P_NATIVE_END;
}
// End Class AOWSPlayerController Function Server_RegisterUser

// Begin Class AOWSPlayerController
void AOWSPlayerController::StaticRegisterNativesAOWSPlayerController()
{
	UClass* Class = AOWSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_OnLoginComplete", &AOWSPlayerController::execClient_OnLoginComplete },
		{ "Client_OnRegisterComplete", &AOWSPlayerController::execClient_OnRegisterComplete },
		{ "LoginUser", &AOWSPlayerController::execLoginUser },
		{ "RegisterUser", &AOWSPlayerController::execRegisterUser },
		{ "Server_GetCharacterData", &AOWSPlayerController::execServer_GetCharacterData },
		{ "Server_LoginUser", &AOWSPlayerController::execServer_LoginUser },
		{ "Server_Move", &AOWSPlayerController::execServer_Move },
		{ "Server_RegisterUser", &AOWSPlayerController::execServer_RegisterUser },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSPlayerController);
UClass* Z_Construct_UClass_AOWSPlayerController_NoRegister()
{
	return AOWSPlayerController::StaticClass();
}
struct Z_Construct_UClass_AOWSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "OWSPlayerController.h" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginSuccess_MetaData[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoginFail_MetaData[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRegisterSuccess_MetaData[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRegisterFail_MetaData[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWS|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWS|Input" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWS|Input" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookInputAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWS|Input" },
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "OWS|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character Class para spawnear\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Class para spawnear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginFail;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRegisterSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRegisterFail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookInputAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSPlayerController_Client_OnLoginComplete, "Client_OnLoginComplete" }, // 348781693
		{ &Z_Construct_UFunction_AOWSPlayerController_Client_OnRegisterComplete, "Client_OnRegisterComplete" }, // 3198146258
		{ &Z_Construct_UFunction_AOWSPlayerController_LoginUser, "LoginUser" }, // 1121337411
		{ &Z_Construct_UFunction_AOWSPlayerController_RegisterUser, "RegisterUser" }, // 903181226
		{ &Z_Construct_UFunction_AOWSPlayerController_Server_GetCharacterData, "Server_GetCharacterData" }, // 581337964
		{ &Z_Construct_UFunction_AOWSPlayerController_Server_LoginUser, "Server_LoginUser" }, // 1710436485
		{ &Z_Construct_UFunction_AOWSPlayerController_Server_Move, "Server_Move" }, // 3068782495
		{ &Z_Construct_UFunction_AOWSPlayerController_Server_RegisterUser, "Server_RegisterUser" }, // 2543613947
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnLoginSuccess = { "OnLoginSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OnLoginSuccess), Z_Construct_UDelegateFunction_OWSPlugin_OnLoginSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoginSuccess_MetaData), NewProp_OnLoginSuccess_MetaData) }; // 3685018180
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnLoginFail = { "OnLoginFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OnLoginFail), Z_Construct_UDelegateFunction_OWSPlugin_OnLoginFailDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoginFail_MetaData), NewProp_OnLoginFail_MetaData) }; // 4057346545
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnRegisterSuccess = { "OnRegisterSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OnRegisterSuccess), Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRegisterSuccess_MetaData), NewProp_OnRegisterSuccess_MetaData) }; // 2888380724
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnRegisterFail = { "OnRegisterFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, OnRegisterFail), Z_Construct_UDelegateFunction_OWSPlugin_OnRegisterFailDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRegisterFail_MetaData), NewProp_OnRegisterFail_MetaData) }; // 3084847207
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_DefaultInputMappingContext = { "DefaultInputMappingContext", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, DefaultInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappingContext_MetaData), NewProp_DefaultInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_MoveInputAction = { "MoveInputAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, MoveInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInputAction_MetaData), NewProp_MoveInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_JumpInputAction = { "JumpInputAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, JumpInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpInputAction_MetaData), NewProp_JumpInputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LookInputAction = { "LookInputAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, LookInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookInputAction_MetaData), NewProp_LookInputAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSPlayerController, CharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass_MetaData), NewProp_CharacterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnLoginSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnLoginFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnRegisterSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_OnRegisterFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_DefaultInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_MoveInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_JumpInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_LookInputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSPlayerController_Statics::NewProp_CharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSPlayerController_Statics::ClassParams = {
	&AOWSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSPlayerController()
{
	if (!Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton, Z_Construct_UClass_AOWSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSPlayerController.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSPlayerController>()
{
	return AOWSPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSPlayerController);
AOWSPlayerController::~AOWSPlayerController() {}
// End Class AOWSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSPlayerController, AOWSPlayerController::StaticClass, TEXT("AOWSPlayerController"), &Z_Registration_Info_UClass_AOWSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSPlayerController), 4071779217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_2853175089(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
