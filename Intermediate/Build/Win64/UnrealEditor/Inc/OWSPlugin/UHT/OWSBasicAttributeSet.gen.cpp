// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSBasicAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSBasicAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSBasicAttributeSet();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSBasicAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics
{
	struct OWSBasicAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::OWSBasicAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::OWSBasicAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OnRep_Health

// Begin Class UOWSBasicAttributeSet Function OnRep_HealthRegenRate
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics
{
	struct OWSBasicAttributeSet_eventOnRep_HealthRegenRate_Parms
	{
		FGameplayAttributeData OldHealthRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegenRate_MetaData), NewProp_OldHealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::OWSBasicAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::OWSBasicAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOnRep_HealthRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OnRep_HealthRegenRate

// Begin Class UOWSBasicAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics
{
	struct OWSBasicAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::OWSBasicAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::OWSBasicAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OnRep_MaxHealth

// Begin Class UOWSBasicAttributeSet Function OWSGetHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSGetHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::OWSBasicAttributeSet_eventOWSGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::OWSBasicAttributeSet_eventOWSGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHealth();
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSGetHealth

// Begin Class UOWSBasicAttributeSet Function OWSGetHealthRegenRate
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics
{
	struct OWSBasicAttributeSet_eventOWSGetHealthRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSGetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSGetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSGetHealthRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHealthRegenRate();
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSGetHealthRegenRate

// Begin Class UOWSBasicAttributeSet Function OWSGetMaxHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSGetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::OWSBasicAttributeSet_eventOWSGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::OWSBasicAttributeSet_eventOWSGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxHealth();
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSGetMaxHealth

// Begin Class UOWSBasicAttributeSet Function OWSInitHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSInitHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSInitHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSInitHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::OWSBasicAttributeSet_eventOWSInitHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::OWSBasicAttributeSet_eventOWSInitHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSInitHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSInitHealth

// Begin Class UOWSBasicAttributeSet Function OWSInitHealthRegenRate
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics
{
	struct OWSBasicAttributeSet_eventOWSInitHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSInitHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSInitHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSInitHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSInitHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSInitHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSInitHealthRegenRate

// Begin Class UOWSBasicAttributeSet Function OWSInitMaxHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSInitMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSInitMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSInitMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::OWSBasicAttributeSet_eventOWSInitMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::OWSBasicAttributeSet_eventOWSInitMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSInitMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSInitMaxHealth

// Begin Class UOWSBasicAttributeSet Function OWSSetHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSSetHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSSetHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSSetHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::OWSBasicAttributeSet_eventOWSSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::OWSBasicAttributeSet_eventOWSSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSSetHealth

// Begin Class UOWSBasicAttributeSet Function OWSSetHealthRegenRate
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics
{
	struct OWSBasicAttributeSet_eventOWSSetHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSSetHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSSetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSSetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::OWSBasicAttributeSet_eventOWSSetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSSetHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSSetHealthRegenRate

// Begin Class UOWSBasicAttributeSet Function OWSSetMaxHealth
struct Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics
{
	struct OWSBasicAttributeSet_eventOWSSetMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSBasicAttributeSet_eventOWSSetMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSBasicAttributeSet, nullptr, "OWSSetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::OWSBasicAttributeSet_eventOWSSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::OWSBasicAttributeSet_eventOWSSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSBasicAttributeSet::execOWSSetMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSBasicAttributeSet Function OWSSetMaxHealth

// Begin Class UOWSBasicAttributeSet
void UOWSBasicAttributeSet::StaticRegisterNativesUOWSBasicAttributeSet()
{
	UClass* Class = UOWSBasicAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Health", &UOWSBasicAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegenRate", &UOWSBasicAttributeSet::execOnRep_HealthRegenRate },
		{ "OnRep_MaxHealth", &UOWSBasicAttributeSet::execOnRep_MaxHealth },
		{ "OWSGetHealth", &UOWSBasicAttributeSet::execOWSGetHealth },
		{ "OWSGetHealthRegenRate", &UOWSBasicAttributeSet::execOWSGetHealthRegenRate },
		{ "OWSGetMaxHealth", &UOWSBasicAttributeSet::execOWSGetMaxHealth },
		{ "OWSInitHealth", &UOWSBasicAttributeSet::execOWSInitHealth },
		{ "OWSInitHealthRegenRate", &UOWSBasicAttributeSet::execOWSInitHealthRegenRate },
		{ "OWSInitMaxHealth", &UOWSBasicAttributeSet::execOWSInitMaxHealth },
		{ "OWSSetHealth", &UOWSBasicAttributeSet::execOWSSetHealth },
		{ "OWSSetHealthRegenRate", &UOWSBasicAttributeSet::execOWSSetHealthRegenRate },
		{ "OWSSetMaxHealth", &UOWSBasicAttributeSet::execOWSSetMaxHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSBasicAttributeSet);
UClass* Z_Construct_UClass_UOWSBasicAttributeSet_NoRegister()
{
	return UOWSBasicAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UOWSBasicAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSBasicAttributeSet.h" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HealthRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HealthRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "AttributeTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "Category", "AttributeTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Healing (Its transient)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/OWSBasicAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Healing (Its transient)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_Health, "OnRep_Health" }, // 3268728279
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 3657011472
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1518276886
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealth, "OWSGetHealth" }, // 3596830366
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetHealthRegenRate, "OWSGetHealthRegenRate" }, // 495262833
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSGetMaxHealth, "OWSGetMaxHealth" }, // 1513412249
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealth, "OWSInitHealth" }, // 2719761444
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitHealthRegenRate, "OWSInitHealthRegenRate" }, // 283797648
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSInitMaxHealth, "OWSInitMaxHealth" }, // 3838470924
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealth, "OWSSetHealth" }, // 1716936041
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetHealthRegenRate, "OWSSetHealthRegenRate" }, // 2937298797
		{ &Z_Construct_UFunction_UOWSBasicAttributeSet_OWSSetMaxHealth, "OWSSetMaxHealth" }, // 3242789944
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSBasicAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSBasicAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSBasicAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSBasicAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSBasicAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSBasicAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSBasicAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSBasicAttributeSet_Statics::NewProp_Healing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSBasicAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSBasicAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSBasicAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSBasicAttributeSet_Statics::ClassParams = {
	&UOWSBasicAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSBasicAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSBasicAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSBasicAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSBasicAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSBasicAttributeSet()
{
	if (!Z_Registration_Info_UClass_UOWSBasicAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSBasicAttributeSet.OuterSingleton, Z_Construct_UClass_UOWSBasicAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSBasicAttributeSet.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSBasicAttributeSet>()
{
	return UOWSBasicAttributeSet::StaticClass();
}
void UOWSBasicAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOWSBasicAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSBasicAttributeSet);
UOWSBasicAttributeSet::~UOWSBasicAttributeSet() {}
// End Class UOWSBasicAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSBasicAttributeSet, UOWSBasicAttributeSet::StaticClass, TEXT("UOWSBasicAttributeSet"), &Z_Registration_Info_UClass_UOWSBasicAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSBasicAttributeSet), 524408552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_2995881042(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSBasicAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
