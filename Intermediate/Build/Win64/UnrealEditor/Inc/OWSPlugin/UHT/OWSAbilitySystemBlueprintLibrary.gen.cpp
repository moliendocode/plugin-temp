// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAbilitySystemBlueprintLibrary.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAbilitySystemBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetData();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FGameplayAbilityCastingTargetingLocationInfo
static_assert(std::is_polymorphic<FGameplayAbilityCastingTargetingLocationInfo>() == std::is_polymorphic<FGameplayAbilityTargetData>(), "USTRUCT FGameplayAbilityCastingTargetingLocationInfo cannot be polymorphic unless super FGameplayAbilityTargetData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo;
class UScriptStruct* FGameplayAbilityCastingTargetingLocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GameplayAbilityCastingTargetingLocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGameplayAbilityCastingTargetingLocationInfo>()
{
	return FGameplayAbilityCastingTargetingLocationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeTime_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Amount of time the ability has been charged */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of time the ability has been charged" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The ID of the Ability that is performing targeting */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the Ability that is performing targeting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic location data for source */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic location data for source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic location data for target */" },
#endif
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic location data for target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeTime;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UniqueID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityCastingTargetingLocationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime = { "ChargeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, ChargeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeTime_MetaData), NewProp_ChargeTime_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, SourceLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLocation_MetaData), NewProp_SourceLocation_MetaData) }; // 1311887580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayAbilityCastingTargetingLocationInfo, TargetLocation), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) }; // 1311887580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_ChargeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_SourceLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	Z_Construct_UScriptStruct_FGameplayAbilityTargetData,
	&NewStructOps,
	"GameplayAbilityCastingTargetingLocationInfo",
	Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::PropPointers),
	sizeof(FGameplayAbilityCastingTargetingLocationInfo),
	alignof(FGameplayAbilityCastingTargetingLocationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo.InnerSingleton;
}
// End ScriptStruct FGameplayAbilityCastingTargetingLocationInfo

// Begin Class UOWSAbilitySystemBlueprintLibrary Function FilterTargetData
struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics
{
	struct OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms
	{
		FGameplayAbilityTargetDataHandle TargetDataHandle;
		FOWSGameplayTargetDataFilterHandle FilterHandle;
		FGameplayAbilityTargetDataHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|TargetData" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDataHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle = { "TargetDataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, TargetDataHandle), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDataHandle_MetaData), NewProp_TargetDataHandle_MetaData) }; // 2741862775
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_FilterHandle = { "FilterHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, FilterHandle), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(0, nullptr) }; // 2797804798
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(0, nullptr) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_TargetDataHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_FilterHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "FilterTargetData", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::OWSAbilitySystemBlueprintLibrary_eventFilterTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilitySystemBlueprintLibrary::execFilterTargetData)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetDataHandle);
	P_GET_STRUCT(FOWSGameplayTargetDataFilterHandle,Z_Param_FilterHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityTargetDataHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::FilterTargetData(Z_Param_Out_TargetDataHandle,Z_Param_FilterHandle);
	P_NATIVE_END;
}
// End Class UOWSAbilitySystemBlueprintLibrary Function FilterTargetData

// Begin Class UOWSAbilitySystemBlueprintLibrary Function GetOWSChargeTimeFromTargetData
struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics
{
	struct OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms
	{
		FGameplayAbilityTargetDataHandle TargetData;
		int32 Index;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|TargetData" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "GetOWSChargeTimeFromTargetData", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::OWSAbilitySystemBlueprintLibrary_eventGetOWSChargeTimeFromTargetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilitySystemBlueprintLibrary::execGetOWSChargeTimeFromTargetData)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::GetOWSChargeTimeFromTargetData(Z_Param_Out_TargetData,Z_Param_Index);
	P_NATIVE_END;
}
// End Class UOWSAbilitySystemBlueprintLibrary Function GetOWSChargeTimeFromTargetData

// Begin Class UOWSAbilitySystemBlueprintLibrary Function MakeFilterHandle
struct Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics
{
	struct OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms
	{
		FOWSGameplayTargetDataFilter Filter;
		AActor* FilterActor;
		FOWSGameplayTargetDataFilterHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilterActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, Filter), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter, METADATA_PARAMS(0, nullptr) }; // 611740392
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_FilterActor = { "FilterActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, FilterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, METADATA_PARAMS(0, nullptr) }; // 2797804798
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_FilterActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, nullptr, "MakeFilterHandle", nullptr, nullptr, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::OWSAbilitySystemBlueprintLibrary_eventMakeFilterHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAbilitySystemBlueprintLibrary::execMakeFilterHandle)
{
	P_GET_STRUCT(FOWSGameplayTargetDataFilter,Z_Param_Filter);
	P_GET_OBJECT(AActor,Z_Param_FilterActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOWSGameplayTargetDataFilterHandle*)Z_Param__Result=UOWSAbilitySystemBlueprintLibrary::MakeFilterHandle(Z_Param_Filter,Z_Param_FilterActor);
	P_NATIVE_END;
}
// End Class UOWSAbilitySystemBlueprintLibrary Function MakeFilterHandle

// Begin Class UOWSAbilitySystemBlueprintLibrary
void UOWSAbilitySystemBlueprintLibrary::StaticRegisterNativesUOWSAbilitySystemBlueprintLibrary()
{
	UClass* Class = UOWSAbilitySystemBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FilterTargetData", &UOWSAbilitySystemBlueprintLibrary::execFilterTargetData },
		{ "GetOWSChargeTimeFromTargetData", &UOWSAbilitySystemBlueprintLibrary::execGetOWSChargeTimeFromTargetData },
		{ "MakeFilterHandle", &UOWSAbilitySystemBlueprintLibrary::execMakeFilterHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAbilitySystemBlueprintLibrary);
UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_NoRegister()
{
	return UOWSAbilitySystemBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSAbilitySystemBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OWSAbilitySystemBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_FilterTargetData, "FilterTargetData" }, // 3119098129
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_GetOWSChargeTimeFromTargetData, "GetOWSChargeTimeFromTargetData" }, // 1658100904
		{ &Z_Construct_UFunction_UOWSAbilitySystemBlueprintLibrary_MakeFilterHandle, "MakeFilterHandle" }, // 1398678486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAbilitySystemBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::ClassParams = {
	&UOWSAbilitySystemBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOWSAbilitySystemBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAbilitySystemBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAbilitySystemBlueprintLibrary.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAbilitySystemBlueprintLibrary>()
{
	return UOWSAbilitySystemBlueprintLibrary::StaticClass();
}
UOWSAbilitySystemBlueprintLibrary::UOWSAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAbilitySystemBlueprintLibrary);
UOWSAbilitySystemBlueprintLibrary::~UOWSAbilitySystemBlueprintLibrary() {}
// End Class UOWSAbilitySystemBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayAbilityCastingTargetingLocationInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityCastingTargetingLocationInfo_Statics::NewStructOps, TEXT("GameplayAbilityCastingTargetingLocationInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityCastingTargetingLocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityCastingTargetingLocationInfo), 175031449U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAbilitySystemBlueprintLibrary, UOWSAbilitySystemBlueprintLibrary::StaticClass, TEXT("UOWSAbilitySystemBlueprintLibrary"), &Z_Registration_Info_UClass_UOWSAbilitySystemBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAbilitySystemBlueprintLibrary), 3791154190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_3160278617(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAbilitySystemBlueprintLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
