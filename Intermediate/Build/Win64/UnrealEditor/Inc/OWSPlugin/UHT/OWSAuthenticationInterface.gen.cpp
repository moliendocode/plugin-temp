// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/Authentication/OWSAuthenticationInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAuthenticationInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthenticationInterface();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FLoginDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventLoginDelegate_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate declarations\n" },
#endif
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate declarations" },
#endif
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
void Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_OWSPlugin_eventLoginDelegate_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OWSPlugin_eventLoginDelegate_Parms), &Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventLoginDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "LoginDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventLoginDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventLoginDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLoginDelegate_DelegateWrapper(const FScriptDelegate& LoginDelegate, bool bSuccess, const FString& ErrorMessage)
{
	struct _Script_OWSPlugin_eventLoginDelegate_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
	_Script_OWSPlugin_eventLoginDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	LoginDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FLoginDelegate

// Begin Delegate FRegisterDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventRegisterDelegate_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
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
void Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_OWSPlugin_eventRegisterDelegate_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OWSPlugin_eventRegisterDelegate_Parms), &Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventRegisterDelegate_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "RegisterDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventRegisterDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventRegisterDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRegisterDelegate_DelegateWrapper(const FScriptDelegate& RegisterDelegate, bool bSuccess, const FString& ErrorMessage)
{
	struct _Script_OWSPlugin_eventRegisterDelegate_Parms
	{
		bool bSuccess;
		FString ErrorMessage;
	};
	_Script_OWSPlugin_eventRegisterDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ErrorMessage=ErrorMessage;
	RegisterDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FRegisterDelegate

// Begin Interface UOWSAuthenticationInterface Function IsLoggedIn
struct OWSAuthenticationInterface_eventIsLoggedIn_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	OWSAuthenticationInterface_eventIsLoggedIn_Parms()
		: ReturnValue(false)
	{
	}
};
bool IOWSAuthenticationInterface::IsLoggedIn()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsLoggedIn instead.");
	OWSAuthenticationInterface_eventIsLoggedIn_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UOWSAuthenticationInterface_IsLoggedIn = FName(TEXT("IsLoggedIn"));
bool IOWSAuthenticationInterface::Execute_IsLoggedIn(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOWSAuthenticationInterface::StaticClass()));
	OWSAuthenticationInterface_eventIsLoggedIn_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOWSAuthenticationInterface_IsLoggedIn);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IOWSAuthenticationInterface*)(O->GetNativeInterfaceAddress(UOWSAuthenticationInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsLoggedIn_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSAuthenticationInterface_eventIsLoggedIn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSAuthenticationInterface_eventIsLoggedIn_Parms), &Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAuthenticationInterface, nullptr, "IsLoggedIn", nullptr, nullptr, Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::PropPointers), sizeof(OWSAuthenticationInterface_eventIsLoggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAuthenticationInterface_eventIsLoggedIn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOWSAuthenticationInterface::execIsLoggedIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoggedIn_Implementation();
	P_NATIVE_END;
}
// End Interface UOWSAuthenticationInterface Function IsLoggedIn

// Begin Interface UOWSAuthenticationInterface Function Login
struct OWSAuthenticationInterface_eventLogin_Parms
{
	FString Username;
	FString Password;
	FLoginDelegate Callback;
};
void IOWSAuthenticationInterface::Login(const FString& Username, const FString& Password, FLoginDelegate const& Callback)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Login instead.");
}
static FName NAME_UOWSAuthenticationInterface_Login = FName(TEXT("Login"));
void IOWSAuthenticationInterface::Execute_Login(UObject* O, const FString& Username, const FString& Password, FLoginDelegate const& Callback)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOWSAuthenticationInterface::StaticClass()));
	OWSAuthenticationInterface_eventLogin_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOWSAuthenticationInterface_Login);
	if (Func)
	{
		Parms.Username=Username;
		Parms.Password=Password;
		Parms.Callback=Callback;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IOWSAuthenticationInterface*)(O->GetNativeInterfaceAddress(UOWSAuthenticationInterface::StaticClass())))
	{
		I->Login_Implementation(Username,Password,Callback);
	}
}
struct Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaraci\xef\xbf\xbdn de funciones con BlueprintNativeEvent\n" },
#endif
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaraci\xef\xbf\xbdn de funciones con BlueprintNativeEvent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventLogin_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventLogin_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventLogin_Parms, Callback), Z_Construct_UDelegateFunction_OWSPlugin_LoginDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 828838022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAuthenticationInterface, nullptr, "Login", nullptr, nullptr, Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::PropPointers), sizeof(OWSAuthenticationInterface_eventLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAuthenticationInterface_eventLogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAuthenticationInterface_Login()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAuthenticationInterface_Login_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOWSAuthenticationInterface::execLogin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Login_Implementation(Z_Param_Username,Z_Param_Password,FLoginDelegate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Interface UOWSAuthenticationInterface Function Login

// Begin Interface UOWSAuthenticationInterface Function Logout
void IOWSAuthenticationInterface::Logout()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Logout instead.");
}
static FName NAME_UOWSAuthenticationInterface_Logout = FName(TEXT("Logout"));
void IOWSAuthenticationInterface::Execute_Logout(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOWSAuthenticationInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UOWSAuthenticationInterface_Logout);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IOWSAuthenticationInterface*)(O->GetNativeInterfaceAddress(UOWSAuthenticationInterface::StaticClass())))
	{
		I->Logout_Implementation();
	}
}
struct Z_Construct_UFunction_UOWSAuthenticationInterface_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAuthenticationInterface_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAuthenticationInterface, nullptr, "Logout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAuthenticationInterface_Logout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSAuthenticationInterface_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAuthenticationInterface_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOWSAuthenticationInterface::execLogout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout_Implementation();
	P_NATIVE_END;
}
// End Interface UOWSAuthenticationInterface Function Logout

// Begin Interface UOWSAuthenticationInterface Function Register
struct OWSAuthenticationInterface_eventRegister_Parms
{
	FString Username;
	FString Password;
	FString Email;
	FRegisterDelegate Callback;
};
void IOWSAuthenticationInterface::Register(const FString& Username, const FString& Password, const FString& Email, FRegisterDelegate const& Callback)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Register instead.");
}
static FName NAME_UOWSAuthenticationInterface_Register = FName(TEXT("Register"));
void IOWSAuthenticationInterface::Execute_Register(UObject* O, const FString& Username, const FString& Password, const FString& Email, FRegisterDelegate const& Callback)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UOWSAuthenticationInterface::StaticClass()));
	OWSAuthenticationInterface_eventRegister_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UOWSAuthenticationInterface_Register);
	if (Func)
	{
		Parms.Username=Username;
		Parms.Password=Password;
		Parms.Email=Email;
		Parms.Callback=Callback;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IOWSAuthenticationInterface*)(O->GetNativeInterfaceAddress(UOWSAuthenticationInterface::StaticClass())))
	{
		I->Register_Implementation(Username,Password,Email,Callback);
	}
}
struct Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Authentication" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventRegister_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventRegister_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventRegister_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAuthenticationInterface_eventRegister_Parms, Callback), Z_Construct_UDelegateFunction_OWSPlugin_RegisterDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3357963611
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAuthenticationInterface, nullptr, "Register", nullptr, nullptr, Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::PropPointers), sizeof(OWSAuthenticationInterface_eventRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSAuthenticationInterface_eventRegister_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAuthenticationInterface_Register()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAuthenticationInterface_Register_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOWSAuthenticationInterface::execRegister)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Register_Implementation(Z_Param_Username,Z_Param_Password,Z_Param_Email,FRegisterDelegate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Interface UOWSAuthenticationInterface Function Register

// Begin Interface UOWSAuthenticationInterface
void UOWSAuthenticationInterface::StaticRegisterNativesUOWSAuthenticationInterface()
{
	UClass* Class = UOWSAuthenticationInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLoggedIn", &IOWSAuthenticationInterface::execIsLoggedIn },
		{ "Login", &IOWSAuthenticationInterface::execLogin },
		{ "Logout", &IOWSAuthenticationInterface::execLogout },
		{ "Register", &IOWSAuthenticationInterface::execRegister },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAuthenticationInterface);
UClass* Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister()
{
	return UOWSAuthenticationInterface::StaticClass();
}
struct Z_Construct_UClass_UOWSAuthenticationInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthenticationInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAuthenticationInterface_IsLoggedIn, "IsLoggedIn" }, // 3217614915
		{ &Z_Construct_UFunction_UOWSAuthenticationInterface_Login, "Login" }, // 2502362971
		{ &Z_Construct_UFunction_UOWSAuthenticationInterface_Logout, "Logout" }, // 3229147935
		{ &Z_Construct_UFunction_UOWSAuthenticationInterface_Register, "Register" }, // 665699942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOWSAuthenticationInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSAuthenticationInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthenticationInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAuthenticationInterface_Statics::ClassParams = {
	&UOWSAuthenticationInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthenticationInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAuthenticationInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAuthenticationInterface()
{
	if (!Z_Registration_Info_UClass_UOWSAuthenticationInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAuthenticationInterface.OuterSingleton, Z_Construct_UClass_UOWSAuthenticationInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAuthenticationInterface.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAuthenticationInterface>()
{
	return UOWSAuthenticationInterface::StaticClass();
}
UOWSAuthenticationInterface::UOWSAuthenticationInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAuthenticationInterface);
UOWSAuthenticationInterface::~UOWSAuthenticationInterface() {}
// End Interface UOWSAuthenticationInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAuthenticationInterface, UOWSAuthenticationInterface::StaticClass, TEXT("UOWSAuthenticationInterface"), &Z_Registration_Info_UClass_UOWSAuthenticationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAuthenticationInterface), 2014709366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_605449014(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthenticationInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
