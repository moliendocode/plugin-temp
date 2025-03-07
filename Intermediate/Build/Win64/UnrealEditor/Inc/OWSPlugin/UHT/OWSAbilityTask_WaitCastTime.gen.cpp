// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilityTask_WaitCastTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilityTask_WaitCastTime() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FWaitDelayDelegate2
struct Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitDelayDelegate2__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitDelayDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitDelayDelegate2)
{
	WaitDelayDelegate2.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitDelayDelegate2

// Begin Delegate FWaitCancelDelegate2
struct Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "WaitCancelDelegate2__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWaitCancelDelegate2_DelegateWrapper(const FMulticastScriptDelegate& WaitCancelDelegate2)
{
	WaitCancelDelegate2.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWaitCancelDelegate2

// Begin Class UOWSAbilityTask_WaitCastTime Function OnCancelCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "OnCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitCastTime::execOnCancelCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCancelCallback();
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitCastTime Function OnCancelCallback

// Begin Class UOWSAbilityTask_WaitCastTime Function OnLocalCancelCallback
struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "OnLocalCancelCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitCastTime::execOnLocalCancelCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLocalCancelCallback();
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitCastTime Function OnLocalCancelCallback

// Begin Class UOWSAbilityTask_WaitCastTime Function RPGWaitCastTime
struct Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics
{
	struct OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms
	{
		UGameplayAbility* OwningAbility;
		float CastTime;
		UOWSAbilityTask_WaitCastTime* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wait specified time. This is functionally the same as a standard Delay node. */" },
#endif
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CastTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_CastTime = { "CastTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, CastTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms, ReturnValue), Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_CastTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, nullptr, "RPGWaitCastTime", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::OWSAbilityTask_WaitCastTime_eventRPGWaitCastTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilityTask_WaitCastTime::execRPGWaitCastTime)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CastTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOWSAbilityTask_WaitCastTime**)Z_Param__Result=UOWSAbilityTask_WaitCastTime::RPGWaitCastTime(Z_Param_OwningAbility,Z_Param_CastTime);
	P_NATIVE_END;
}
// End Class UOWSAbilityTask_WaitCastTime Function RPGWaitCastTime

// Begin Class UOWSAbilityTask_WaitCastTime
void UOWSAbilityTask_WaitCastTime::StaticRegisterNativesUOWSAbilityTask_WaitCastTime()
{
	UClass* Class = UOWSAbilityTask_WaitCastTime::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCancelCallback", &UOWSAbilityTask_WaitCastTime::execOnCancelCallback },
		{ "OnLocalCancelCallback", &UOWSAbilityTask_WaitCastTime::execOnLocalCancelCallback },
		{ "RPGWaitCastTime", &UOWSAbilityTask_WaitCastTime::execRPGWaitCastTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAbilityTask_WaitCastTime);
UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_NoRegister()
{
	return UOWSAbilityTask_WaitCastTime::StaticClass();
}
struct Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSAbilityTask_WaitCastTime.h" },
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClientFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSAbilityTask_WaitCastTime.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientFinish;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnCancelCallback, "OnCancelCallback" }, // 1901665644
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_OnLocalCancelCallback, "OnLocalCancelCallback" }, // 2390529209
		{ &Z_Construct_UFunction_UOWSAbilityTask_WaitCastTime_RPGWaitCastTime, "RPGWaitCastTime" }, // 3238263737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilityTask_WaitCastTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, OnFinish), Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinish_MetaData), NewProp_OnFinish_MetaData) }; // 673713284
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish = { "OnClientFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, OnClientFinish), Z_Construct_UDelegateFunction_OWSPlugin_WaitDelayDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClientFinish_MetaData), NewProp_OnClientFinish_MetaData) }; // 673713284
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAbilityTask_WaitCastTime, Cancelled), Z_Construct_UDelegateFunction_OWSPlugin_WaitCancelDelegate2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cancelled_MetaData), NewProp_Cancelled_MetaData) }; // 2028259862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_OnClientFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::NewProp_Cancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::ClassParams = {
	&UOWSAbilityTask_WaitCastTime::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAbilityTask_WaitCastTime()
{
	if (!Z_Registration_Info_UClass_UOWSAbilityTask_WaitCastTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAbilityTask_WaitCastTime.OuterSingleton, Z_Construct_UClass_UOWSAbilityTask_WaitCastTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAbilityTask_WaitCastTime.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilityTask_WaitCastTime>()
{
	return UOWSAbilityTask_WaitCastTime::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilityTask_WaitCastTime);
UOWSAbilityTask_WaitCastTime::~UOWSAbilityTask_WaitCastTime() {}
// End Class UOWSAbilityTask_WaitCastTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAbilityTask_WaitCastTime, UOWSAbilityTask_WaitCastTime::StaticClass, TEXT("UOWSAbilityTask_WaitCastTime"), &Z_Registration_Info_UClass_UOWSAbilityTask_WaitCastTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAbilityTask_WaitCastTime), 770940325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_2019707896(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilityTask_WaitCastTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
