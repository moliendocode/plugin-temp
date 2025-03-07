// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSLoginWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSLoginWidget() {}

// Begin Cross Module References
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSLoginWidget();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSLoginWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSLoginWidget Function ErrorExternalLoginAndCreateSession
struct OWSLoginWidget_eventErrorExternalLoginAndCreateSession_Parms
{
	FString ErrorMsg;
};
static const FName NAME_UOWSLoginWidget_ErrorExternalLoginAndCreateSession = FName(TEXT("ErrorExternalLoginAndCreateSession"));
void UOWSLoginWidget::ErrorExternalLoginAndCreateSession(const FString& ErrorMsg)
{
	OWSLoginWidget_eventErrorExternalLoginAndCreateSession_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_ErrorExternalLoginAndCreateSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventErrorExternalLoginAndCreateSession_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "ErrorExternalLoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::PropPointers), sizeof(OWSLoginWidget_eventErrorExternalLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventErrorExternalLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function ErrorExternalLoginAndCreateSession

// Begin Class UOWSLoginWidget Function ErrorLoginAndCreateSession
struct OWSLoginWidget_eventErrorLoginAndCreateSession_Parms
{
	FString ErrorMsg;
};
static const FName NAME_UOWSLoginWidget_ErrorLoginAndCreateSession = FName(TEXT("ErrorLoginAndCreateSession"));
void UOWSLoginWidget::ErrorLoginAndCreateSession(const FString& ErrorMsg)
{
	OWSLoginWidget_eventErrorLoginAndCreateSession_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_ErrorLoginAndCreateSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventErrorLoginAndCreateSession_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "ErrorLoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::PropPointers), sizeof(OWSLoginWidget_eventErrorLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventErrorLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function ErrorLoginAndCreateSession

// Begin Class UOWSLoginWidget Function ErrorRegister
struct OWSLoginWidget_eventErrorRegister_Parms
{
	FString ErrorMsg;
};
static const FName NAME_UOWSLoginWidget_ErrorRegister = FName(TEXT("ErrorRegister"));
void UOWSLoginWidget::ErrorRegister(const FString& ErrorMsg)
{
	OWSLoginWidget_eventErrorRegister_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_ErrorRegister);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventErrorRegister_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "ErrorRegister", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::PropPointers), sizeof(OWSLoginWidget_eventErrorRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventErrorRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function ErrorRegister

// Begin Class UOWSLoginWidget Function ExternalLoginAndCreateSession
struct Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics
{
	struct OWSLoginWidget_eventExternalLoginAndCreateSession_Parms
	{
		FString Email;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ExternalLoginAndCreateSession\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ExternalLoginAndCreateSession" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventExternalLoginAndCreateSession_Parms, Email), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventExternalLoginAndCreateSession_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "ExternalLoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::OWSLoginWidget_eventExternalLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::OWSLoginWidget_eventExternalLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSLoginWidget::execExternalLoginAndCreateSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExternalLoginAndCreateSession(Z_Param_Email,Z_Param_Password);
	P_NATIVE_END;
}
// End Class UOWSLoginWidget Function ExternalLoginAndCreateSession

// Begin Class UOWSLoginWidget Function LoginAndCreateSession
struct Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics
{
	struct OWSLoginWidget_eventLoginAndCreateSession_Parms
	{
		FString Email;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//LoginAndCreateSession\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LoginAndCreateSession" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventLoginAndCreateSession_Parms, Email), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventLoginAndCreateSession_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "LoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::OWSLoginWidget_eventLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::OWSLoginWidget_eventLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSLoginWidget::execLoginAndCreateSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginAndCreateSession(Z_Param_Email,Z_Param_Password);
	P_NATIVE_END;
}
// End Class UOWSLoginWidget Function LoginAndCreateSession

// Begin Class UOWSLoginWidget Function NotifyExternalLoginAndCreateSession
struct OWSLoginWidget_eventNotifyExternalLoginAndCreateSession_Parms
{
	FString UserSessionGUID;
};
static const FName NAME_UOWSLoginWidget_NotifyExternalLoginAndCreateSession = FName(TEXT("NotifyExternalLoginAndCreateSession"));
void UOWSLoginWidget::NotifyExternalLoginAndCreateSession(const FString& UserSessionGUID)
{
	OWSLoginWidget_eventNotifyExternalLoginAndCreateSession_Parms Parms;
	Parms.UserSessionGUID=UserSessionGUID;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_NotifyExternalLoginAndCreateSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventNotifyExternalLoginAndCreateSession_Parms, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "NotifyExternalLoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::PropPointers), sizeof(OWSLoginWidget_eventNotifyExternalLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventNotifyExternalLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function NotifyExternalLoginAndCreateSession

// Begin Class UOWSLoginWidget Function NotifyLoginAndCreateSession
struct OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms
{
	FString UserSessionGUID;
};
static const FName NAME_UOWSLoginWidget_NotifyLoginAndCreateSession = FName(TEXT("NotifyLoginAndCreateSession"));
void UOWSLoginWidget::NotifyLoginAndCreateSession(const FString& UserSessionGUID)
{
	OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms Parms;
	Parms.UserSessionGUID=UserSessionGUID;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_NotifyLoginAndCreateSession);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "NotifyLoginAndCreateSession", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::PropPointers), sizeof(OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventNotifyLoginAndCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function NotifyLoginAndCreateSession

// Begin Class UOWSLoginWidget Function NotifyRegister
struct OWSLoginWidget_eventNotifyRegister_Parms
{
	FString UserSessionGUID;
};
static const FName NAME_UOWSLoginWidget_NotifyRegister = FName(TEXT("NotifyRegister"));
void UOWSLoginWidget::NotifyRegister(const FString& UserSessionGUID)
{
	OWSLoginWidget_eventNotifyRegister_Parms Parms;
	Parms.UserSessionGUID=UserSessionGUID;
	UFunction* Func = FindFunctionChecked(NAME_UOWSLoginWidget_NotifyRegister);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventNotifyRegister_Parms, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "NotifyRegister", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::PropPointers), sizeof(OWSLoginWidget_eventNotifyRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSLoginWidget_eventNotifyRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UOWSLoginWidget Function NotifyRegister

// Begin Class UOWSLoginWidget Function Register
struct Z_Construct_UFunction_UOWSLoginWidget_Register_Statics
{
	struct OWSLoginWidget_eventRegister_Parms
	{
		FString Email;
		FString Password;
		FString FirstName;
		FString LastName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Login" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventRegister_Parms, Email), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventRegister_Parms, Password), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventRegister_Parms, FirstName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSLoginWidget_eventRegister_Parms, LastName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_FirstName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::NewProp_LastName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSLoginWidget, nullptr, "Register", nullptr, nullptr, Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::OWSLoginWidget_eventRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::OWSLoginWidget_eventRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSLoginWidget_Register()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSLoginWidget_Register_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSLoginWidget::execRegister)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_FirstName);
	P_GET_PROPERTY(FStrProperty,Z_Param_LastName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Register(Z_Param_Email,Z_Param_Password,Z_Param_FirstName,Z_Param_LastName);
	P_NATIVE_END;
}
// End Class UOWSLoginWidget Function Register

// Begin Class UOWSLoginWidget
void UOWSLoginWidget::StaticRegisterNativesUOWSLoginWidget()
{
	UClass* Class = UOWSLoginWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExternalLoginAndCreateSession", &UOWSLoginWidget::execExternalLoginAndCreateSession },
		{ "LoginAndCreateSession", &UOWSLoginWidget::execLoginAndCreateSession },
		{ "Register", &UOWSLoginWidget::execRegister },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSLoginWidget);
UClass* Z_Construct_UClass_UOWSLoginWidget_NoRegister()
{
	return UOWSLoginWidget::StaticClass();
}
struct Z_Construct_UClass_UOWSLoginWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSLoginWidget.h" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSAPICustomerKey_MetaData[] = {
		{ "Category", "OWSLoginWidget" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2APIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginTimeout_MetaData[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/OWSLoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSAPICustomerKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2APIPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoginTimeout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSLoginWidget_ErrorExternalLoginAndCreateSession, "ErrorExternalLoginAndCreateSession" }, // 751842025
		{ &Z_Construct_UFunction_UOWSLoginWidget_ErrorLoginAndCreateSession, "ErrorLoginAndCreateSession" }, // 1965634791
		{ &Z_Construct_UFunction_UOWSLoginWidget_ErrorRegister, "ErrorRegister" }, // 2960452543
		{ &Z_Construct_UFunction_UOWSLoginWidget_ExternalLoginAndCreateSession, "ExternalLoginAndCreateSession" }, // 3467822260
		{ &Z_Construct_UFunction_UOWSLoginWidget_LoginAndCreateSession, "LoginAndCreateSession" }, // 1627689888
		{ &Z_Construct_UFunction_UOWSLoginWidget_NotifyExternalLoginAndCreateSession, "NotifyExternalLoginAndCreateSession" }, // 3076981599
		{ &Z_Construct_UFunction_UOWSLoginWidget_NotifyLoginAndCreateSession, "NotifyLoginAndCreateSession" }, // 1840674495
		{ &Z_Construct_UFunction_UOWSLoginWidget_NotifyRegister, "NotifyRegister" }, // 980552578
		{ &Z_Construct_UFunction_UOWSLoginWidget_Register, "Register" }, // 1508187395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSLoginWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_OWSAPICustomerKey = { "OWSAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSLoginWidget, OWSAPICustomerKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSAPICustomerKey_MetaData), NewProp_OWSAPICustomerKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_OWS2APIPath = { "OWS2APIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSLoginWidget, OWS2APIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2APIPath_MetaData), NewProp_OWS2APIPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout = { "LoginTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSLoginWidget, LoginTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginTimeout_MetaData), NewProp_LoginTimeout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_OWSAPICustomerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_OWS2APIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSLoginWidget_Statics::NewProp_LoginTimeout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSLoginWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSLoginWidget_Statics::ClassParams = {
	&UOWSLoginWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSLoginWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSLoginWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSLoginWidget()
{
	if (!Z_Registration_Info_UClass_UOWSLoginWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSLoginWidget.OuterSingleton, Z_Construct_UClass_UOWSLoginWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSLoginWidget.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSLoginWidget>()
{
	return UOWSLoginWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSLoginWidget);
UOWSLoginWidget::~UOWSLoginWidget() {}
// End Class UOWSLoginWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSLoginWidget, UOWSLoginWidget::StaticClass, TEXT("UOWSLoginWidget"), &Z_Registration_Info_UClass_UOWSLoginWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSLoginWidget), 2397542669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_1970514103(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSLoginWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
