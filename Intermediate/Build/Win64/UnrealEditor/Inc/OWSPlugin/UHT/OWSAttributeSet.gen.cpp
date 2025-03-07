// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAttributeSet();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSAttributeSet Function OnRep_Agility
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics
{
	struct OWSAttributeSet_eventOnRep_Agility_Parms
	{
		FGameplayAttributeData OldAgility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAgility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAgility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility = { "OldAgility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Agility_Parms, OldAgility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAgility_MetaData), NewProp_OldAgility_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Agility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::OWSAttributeSet_eventOnRep_Agility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::OWSAttributeSet_eventOnRep_Agility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Agility)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAgility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Agility(Z_Param_Out_OldAgility);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Agility

// Begin Class UOWSAttributeSet Function OnRep_AttackPower
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics
{
	struct OWSAttributeSet_eventOnRep_AttackPower_Parms
	{
		FGameplayAttributeData OldAttackPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_AttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackPower_MetaData), NewProp_OldAttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::NewProp_OldAttackPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_AttackPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::OWSAttributeSet_eventOnRep_AttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::OWSAttributeSet_eventOnRep_AttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_AttackPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackPower(Z_Param_Out_OldAttackPower);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_AttackPower

// Begin Class UOWSAttributeSet Function OnRep_AttackSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics
{
	struct OWSAttributeSet_eventOnRep_AttackSpeed_Parms
	{
		FGameplayAttributeData OldAttackSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed = { "OldAttackSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_AttackSpeed_Parms, OldAttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackSpeed_MetaData), NewProp_OldAttackSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_AttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::OWSAttributeSet_eventOnRep_AttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::OWSAttributeSet_eventOnRep_AttackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_AttackSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackSpeed(Z_Param_Out_OldAttackSpeed);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_AttackSpeed

// Begin Class UOWSAttributeSet Function OnRep_Avoidance
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics
{
	struct OWSAttributeSet_eventOnRep_Avoidance_Parms
	{
		FGameplayAttributeData OldAvoidance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAvoidance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAvoidance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::NewProp_OldAvoidance = { "OldAvoidance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Avoidance_Parms, OldAvoidance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAvoidance_MetaData), NewProp_OldAvoidance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::NewProp_OldAvoidance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Avoidance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::OWSAttributeSet_eventOnRep_Avoidance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::OWSAttributeSet_eventOnRep_Avoidance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Avoidance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAvoidance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Avoidance(Z_Param_Out_OldAvoidance);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Avoidance

// Begin Class UOWSAttributeSet Function OnRep_BaseAttack
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics
{
	struct OWSAttributeSet_eventOnRep_BaseAttack_Parms
	{
		FGameplayAttributeData OldBaseAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldBaseAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldBaseAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::NewProp_OldBaseAttack = { "OldBaseAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_BaseAttack_Parms, OldBaseAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldBaseAttack_MetaData), NewProp_OldBaseAttack_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::NewProp_OldBaseAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_BaseAttack", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::OWSAttributeSet_eventOnRep_BaseAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::OWSAttributeSet_eventOnRep_BaseAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_BaseAttack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBaseAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseAttack(Z_Param_Out_OldBaseAttack);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_BaseAttack

// Begin Class UOWSAttributeSet Function OnRep_BaseAttackBonus
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics
{
	struct OWSAttributeSet_eventOnRep_BaseAttackBonus_Parms
	{
		FGameplayAttributeData OldBaseAttackBonus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldBaseAttackBonus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldBaseAttackBonus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::NewProp_OldBaseAttackBonus = { "OldBaseAttackBonus", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_BaseAttackBonus_Parms, OldBaseAttackBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldBaseAttackBonus_MetaData), NewProp_OldBaseAttackBonus_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::NewProp_OldBaseAttackBonus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_BaseAttackBonus", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::OWSAttributeSet_eventOnRep_BaseAttackBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::OWSAttributeSet_eventOnRep_BaseAttackBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_BaseAttackBonus)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBaseAttackBonus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseAttackBonus(Z_Param_Out_OldBaseAttackBonus);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_BaseAttackBonus

// Begin Class UOWSAttributeSet Function OnRep_BonusArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics
{
	struct OWSAttributeSet_eventOnRep_BonusArmor_Parms
	{
		FGameplayAttributeData OldBonusArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldBonusArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldBonusArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::NewProp_OldBonusArmor = { "OldBonusArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_BonusArmor_Parms, OldBonusArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldBonusArmor_MetaData), NewProp_OldBonusArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::NewProp_OldBonusArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_BonusArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::OWSAttributeSet_eventOnRep_BonusArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::OWSAttributeSet_eventOnRep_BonusArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_BonusArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBonusArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BonusArmor(Z_Param_Out_OldBonusArmor);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_BonusArmor

// Begin Class UOWSAttributeSet Function OnRep_Charisma
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics
{
	struct OWSAttributeSet_eventOnRep_Charisma_Parms
	{
		FGameplayAttributeData OldCharisma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCharisma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCharisma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma = { "OldCharisma", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Charisma_Parms, OldCharisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCharisma_MetaData), NewProp_OldCharisma_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Charisma", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::OWSAttributeSet_eventOnRep_Charisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::OWSAttributeSet_eventOnRep_Charisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Charisma)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCharisma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Charisma(Z_Param_Out_OldCharisma);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Charisma

// Begin Class UOWSAttributeSet Function OnRep_Constitution
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics
{
	struct OWSAttributeSet_eventOnRep_Constitution_Parms
	{
		FGameplayAttributeData OldConstitution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldConstitution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldConstitution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::NewProp_OldConstitution = { "OldConstitution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Constitution_Parms, OldConstitution), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldConstitution_MetaData), NewProp_OldConstitution_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::NewProp_OldConstitution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Constitution", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::OWSAttributeSet_eventOnRep_Constitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::OWSAttributeSet_eventOnRep_Constitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Constitution)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldConstitution);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Constitution(Z_Param_Out_OldConstitution);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Constitution

// Begin Class UOWSAttributeSet Function OnRep_CritChance
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics
{
	struct OWSAttributeSet_eventOnRep_CritChance_Parms
	{
		FGameplayAttributeData OldCritChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::NewProp_OldCritChance = { "OldCritChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_CritChance_Parms, OldCritChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritChance_MetaData), NewProp_OldCritChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::NewProp_OldCritChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_CritChance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::OWSAttributeSet_eventOnRep_CritChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::OWSAttributeSet_eventOnRep_CritChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_CritChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritChance(Z_Param_Out_OldCritChance);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_CritChance

// Begin Class UOWSAttributeSet Function OnRep_CritMultiplier
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics
{
	struct OWSAttributeSet_eventOnRep_CritMultiplier_Parms
	{
		FGameplayAttributeData OldCritMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritMultiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::NewProp_OldCritMultiplier = { "OldCritMultiplier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_CritMultiplier_Parms, OldCritMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritMultiplier_MetaData), NewProp_OldCritMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::NewProp_OldCritMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_CritMultiplier", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::OWSAttributeSet_eventOnRep_CritMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::OWSAttributeSet_eventOnRep_CritMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_CritMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritMultiplier(Z_Param_Out_OldCritMultiplier);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_CritMultiplier

// Begin Class UOWSAttributeSet Function OnRep_Defense
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics
{
	struct OWSAttributeSet_eventOnRep_Defense_Parms
	{
		FGameplayAttributeData OldDefense;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDefense_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDefense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense = { "OldDefense", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Defense_Parms, OldDefense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDefense_MetaData), NewProp_OldDefense_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::NewProp_OldDefense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Defense", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::OWSAttributeSet_eventOnRep_Defense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::OWSAttributeSet_eventOnRep_Defense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Defense)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDefense);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Defense(Z_Param_Out_OldDefense);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Defense

// Begin Class UOWSAttributeSet Function OnRep_Dexterity
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics
{
	struct OWSAttributeSet_eventOnRep_Dexterity_Parms
	{
		FGameplayAttributeData OldDexterity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDexterity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDexterity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity = { "OldDexterity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Dexterity_Parms, OldDexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDexterity_MetaData), NewProp_OldDexterity_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Dexterity", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::OWSAttributeSet_eventOnRep_Dexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::OWSAttributeSet_eventOnRep_Dexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Dexterity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDexterity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dexterity(Z_Param_Out_OldDexterity);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Dexterity

// Begin Class UOWSAttributeSet Function OnRep_Dodge
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics
{
	struct OWSAttributeSet_eventOnRep_Dodge_Parms
	{
		FGameplayAttributeData OldDodge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDodge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDodge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::NewProp_OldDodge = { "OldDodge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Dodge_Parms, OldDodge), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDodge_MetaData), NewProp_OldDodge_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::NewProp_OldDodge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Dodge", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::OWSAttributeSet_eventOnRep_Dodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::OWSAttributeSet_eventOnRep_Dodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Dodge)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDodge);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dodge(Z_Param_Out_OldDodge);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Dodge

// Begin Class UOWSAttributeSet Function OnRep_Endurance
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics
{
	struct OWSAttributeSet_eventOnRep_Endurance_Parms
	{
		FGameplayAttributeData OldEndurance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEndurance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEndurance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::NewProp_OldEndurance = { "OldEndurance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Endurance_Parms, OldEndurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEndurance_MetaData), NewProp_OldEndurance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::NewProp_OldEndurance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Endurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::OWSAttributeSet_eventOnRep_Endurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::OWSAttributeSet_eventOnRep_Endurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Endurance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEndurance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Endurance(Z_Param_Out_OldEndurance);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Endurance

// Begin Class UOWSAttributeSet Function OnRep_EnduranceRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_EnduranceRegenRate_Parms
	{
		FGameplayAttributeData OldEnduranceRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEnduranceRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnduranceRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::NewProp_OldEnduranceRegenRate = { "OldEnduranceRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_EnduranceRegenRate_Parms, OldEnduranceRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEnduranceRegenRate_MetaData), NewProp_OldEnduranceRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::NewProp_OldEnduranceRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_EnduranceRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::OWSAttributeSet_eventOnRep_EnduranceRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::OWSAttributeSet_eventOnRep_EnduranceRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_EnduranceRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnduranceRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EnduranceRegenRate(Z_Param_Out_OldEnduranceRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_EnduranceRegenRate

// Begin Class UOWSAttributeSet Function OnRep_Energy
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics
{
	struct OWSAttributeSet_eventOnRep_Energy_Parms
	{
		FGameplayAttributeData OldEnergy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy = { "OldEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Energy_Parms, OldEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEnergy_MetaData), NewProp_OldEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::NewProp_OldEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Energy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::OWSAttributeSet_eventOnRep_Energy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::OWSAttributeSet_eventOnRep_Energy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Energy)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Energy(Z_Param_Out_OldEnergy);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Energy

// Begin Class UOWSAttributeSet Function OnRep_EnergyRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_EnergyRegenRate_Parms
	{
		FGameplayAttributeData OldEnergyRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEnergyRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEnergyRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::NewProp_OldEnergyRegenRate = { "OldEnergyRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_EnergyRegenRate_Parms, OldEnergyRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEnergyRegenRate_MetaData), NewProp_OldEnergyRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::NewProp_OldEnergyRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_EnergyRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::OWSAttributeSet_eventOnRep_EnergyRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::OWSAttributeSet_eventOnRep_EnergyRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_EnergyRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEnergyRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EnergyRegenRate(Z_Param_Out_OldEnergyRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_EnergyRegenRate

// Begin Class UOWSAttributeSet Function OnRep_Fatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics
{
	struct OWSAttributeSet_eventOnRep_Fatigue_Parms
	{
		FGameplayAttributeData OldFatigue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFatigue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFatigue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::NewProp_OldFatigue = { "OldFatigue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Fatigue_Parms, OldFatigue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFatigue_MetaData), NewProp_OldFatigue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::NewProp_OldFatigue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Fatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::OWSAttributeSet_eventOnRep_Fatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::OWSAttributeSet_eventOnRep_Fatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Fatigue)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFatigue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Fatigue(Z_Param_Out_OldFatigue);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Fatigue

// Begin Class UOWSAttributeSet Function OnRep_FatigueRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_FatigueRegenRate_Parms
	{
		FGameplayAttributeData OldFatigueRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFatigueRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFatigueRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::NewProp_OldFatigueRegenRate = { "OldFatigueRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_FatigueRegenRate_Parms, OldFatigueRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFatigueRegenRate_MetaData), NewProp_OldFatigueRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::NewProp_OldFatigueRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_FatigueRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::OWSAttributeSet_eventOnRep_FatigueRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::OWSAttributeSet_eventOnRep_FatigueRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_FatigueRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFatigueRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FatigueRegenRate(Z_Param_Out_OldFatigueRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_FatigueRegenRate

// Begin Class UOWSAttributeSet Function OnRep_ForceArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics
{
	struct OWSAttributeSet_eventOnRep_ForceArmor_Parms
	{
		FGameplayAttributeData OldForceArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldForceArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldForceArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::NewProp_OldForceArmor = { "OldForceArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_ForceArmor_Parms, OldForceArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldForceArmor_MetaData), NewProp_OldForceArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::NewProp_OldForceArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_ForceArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::OWSAttributeSet_eventOnRep_ForceArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::OWSAttributeSet_eventOnRep_ForceArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_ForceArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldForceArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ForceArmor(Z_Param_Out_OldForceArmor);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_ForceArmor

// Begin Class UOWSAttributeSet Function OnRep_Fortitude
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics
{
	struct OWSAttributeSet_eventOnRep_Fortitude_Parms
	{
		FGameplayAttributeData OldFortitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFortitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFortitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::NewProp_OldFortitude = { "OldFortitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Fortitude_Parms, OldFortitude), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFortitude_MetaData), NewProp_OldFortitude_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::NewProp_OldFortitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Fortitude", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::OWSAttributeSet_eventOnRep_Fortitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::OWSAttributeSet_eventOnRep_Fortitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Fortitude)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFortitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Fortitude(Z_Param_Out_OldFortitude);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Fortitude

// Begin Class UOWSAttributeSet Function OnRep_Haste
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics
{
	struct OWSAttributeSet_eventOnRep_Haste_Parms
	{
		FGameplayAttributeData OldHaste;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHaste_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHaste;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::NewProp_OldHaste = { "OldHaste", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Haste_Parms, OldHaste), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHaste_MetaData), NewProp_OldHaste_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::NewProp_OldHaste,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Haste", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::OWSAttributeSet_eventOnRep_Haste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::OWSAttributeSet_eventOnRep_Haste_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Haste)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHaste);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Haste(Z_Param_Out_OldHaste);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Haste

// Begin Class UOWSAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics
{
	struct OWSAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::OWSAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::OWSAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Health

// Begin Class UOWSAttributeSet Function OnRep_HealthRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_HealthRegenRate_Parms
	{
		FGameplayAttributeData OldHealthRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegenRate_MetaData), NewProp_OldHealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::OWSAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::OWSAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_HealthRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_HealthRegenRate

// Begin Class UOWSAttributeSet Function OnRep_HitDie
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics
{
	struct OWSAttributeSet_eventOnRep_HitDie_Parms
	{
		FGameplayAttributeData OldHitDie;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHitDie_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHitDie;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::NewProp_OldHitDie = { "OldHitDie", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_HitDie_Parms, OldHitDie), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHitDie_MetaData), NewProp_OldHitDie_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::NewProp_OldHitDie,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_HitDie", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::OWSAttributeSet_eventOnRep_HitDie_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::OWSAttributeSet_eventOnRep_HitDie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_HitDie)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHitDie);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HitDie(Z_Param_Out_OldHitDie);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_HitDie

// Begin Class UOWSAttributeSet Function OnRep_Hunger
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics
{
	struct OWSAttributeSet_eventOnRep_Hunger_Parms
	{
		FGameplayAttributeData OldHunger;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHunger_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHunger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::NewProp_OldHunger = { "OldHunger", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Hunger_Parms, OldHunger), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHunger_MetaData), NewProp_OldHunger_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::NewProp_OldHunger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Hunger", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::OWSAttributeSet_eventOnRep_Hunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::OWSAttributeSet_eventOnRep_Hunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Hunger)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHunger);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Hunger(Z_Param_Out_OldHunger);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Hunger

// Begin Class UOWSAttributeSet Function OnRep_Initiative
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics
{
	struct OWSAttributeSet_eventOnRep_Initiative_Parms
	{
		FGameplayAttributeData OldInitiative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldInitiative_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldInitiative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::NewProp_OldInitiative = { "OldInitiative", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Initiative_Parms, OldInitiative), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldInitiative_MetaData), NewProp_OldInitiative_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::NewProp_OldInitiative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Initiative", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::OWSAttributeSet_eventOnRep_Initiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::OWSAttributeSet_eventOnRep_Initiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Initiative)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldInitiative);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Initiative(Z_Param_Out_OldInitiative);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Initiative

// Begin Class UOWSAttributeSet Function OnRep_Intellect
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics
{
	struct OWSAttributeSet_eventOnRep_Intellect_Parms
	{
		FGameplayAttributeData OldIntellect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldIntellect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntellect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::NewProp_OldIntellect = { "OldIntellect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Intellect_Parms, OldIntellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldIntellect_MetaData), NewProp_OldIntellect_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::NewProp_OldIntellect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Intellect", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::OWSAttributeSet_eventOnRep_Intellect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::OWSAttributeSet_eventOnRep_Intellect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Intellect)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntellect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intellect(Z_Param_Out_OldIntellect);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Intellect

// Begin Class UOWSAttributeSet Function OnRep_Magic
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics
{
	struct OWSAttributeSet_eventOnRep_Magic_Parms
	{
		FGameplayAttributeData OldMagic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMagic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::NewProp_OldMagic = { "OldMagic", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Magic_Parms, OldMagic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMagic_MetaData), NewProp_OldMagic_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::NewProp_OldMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Magic", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::OWSAttributeSet_eventOnRep_Magic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::OWSAttributeSet_eventOnRep_Magic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Magic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Magic(Z_Param_Out_OldMagic);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Magic

// Begin Class UOWSAttributeSet Function OnRep_MagicArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics
{
	struct OWSAttributeSet_eventOnRep_MagicArmor_Parms
	{
		FGameplayAttributeData OldMagicArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMagicArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagicArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::NewProp_OldMagicArmor = { "OldMagicArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MagicArmor_Parms, OldMagicArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMagicArmor_MetaData), NewProp_OldMagicArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::NewProp_OldMagicArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MagicArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::OWSAttributeSet_eventOnRep_MagicArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::OWSAttributeSet_eventOnRep_MagicArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MagicArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagicArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MagicArmor(Z_Param_Out_OldMagicArmor);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MagicArmor

// Begin Class UOWSAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics
{
	struct OWSAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::OWSAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::OWSAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Mana

// Begin Class UOWSAttributeSet Function OnRep_ManaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_ManaRegenRate_Parms
	{
		FGameplayAttributeData OldManaRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate = { "OldManaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_ManaRegenRate_Parms, OldManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldManaRegenRate_MetaData), NewProp_OldManaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_ManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::OWSAttributeSet_eventOnRep_ManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::OWSAttributeSet_eventOnRep_ManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_ManaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManaRegenRate(Z_Param_Out_OldManaRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_ManaRegenRate

// Begin Class UOWSAttributeSet Function OnRep_MaxEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxEndurance_Parms
	{
		FGameplayAttributeData OldMaxEndurance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxEndurance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxEndurance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::NewProp_OldMaxEndurance = { "OldMaxEndurance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxEndurance_Parms, OldMaxEndurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxEndurance_MetaData), NewProp_OldMaxEndurance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::NewProp_OldMaxEndurance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::OWSAttributeSet_eventOnRep_MaxEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::OWSAttributeSet_eventOnRep_MaxEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxEndurance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxEndurance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxEndurance(Z_Param_Out_OldMaxEndurance);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxEndurance

// Begin Class UOWSAttributeSet Function OnRep_MaxEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxEnergy_Parms
	{
		FGameplayAttributeData OldMaxEnergy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxEnergy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxEnergy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy = { "OldMaxEnergy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxEnergy_Parms, OldMaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxEnergy_MetaData), NewProp_OldMaxEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::NewProp_OldMaxEnergy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::OWSAttributeSet_eventOnRep_MaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::OWSAttributeSet_eventOnRep_MaxEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxEnergy)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxEnergy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxEnergy(Z_Param_Out_OldMaxEnergy);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxEnergy

// Begin Class UOWSAttributeSet Function OnRep_MaxFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxFatigue_Parms
	{
		FGameplayAttributeData OldMaxFatigue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxFatigue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxFatigue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::NewProp_OldMaxFatigue = { "OldMaxFatigue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxFatigue_Parms, OldMaxFatigue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxFatigue_MetaData), NewProp_OldMaxFatigue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::NewProp_OldMaxFatigue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::OWSAttributeSet_eventOnRep_MaxFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::OWSAttributeSet_eventOnRep_MaxFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxFatigue)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxFatigue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxFatigue(Z_Param_Out_OldMaxFatigue);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxFatigue

// Begin Class UOWSAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::OWSAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::OWSAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxHealth

// Begin Class UOWSAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::OWSAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::OWSAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxMana

// Begin Class UOWSAttributeSet Function OnRep_MaxStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics
{
	struct OWSAttributeSet_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::OWSAttributeSet_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::OWSAttributeSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_MaxStamina

// Begin Class UOWSAttributeSet Function OnRep_Multishot
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics
{
	struct OWSAttributeSet_eventOnRep_Multishot_Parms
	{
		FGameplayAttributeData OldMultishot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMultishot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMultishot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::NewProp_OldMultishot = { "OldMultishot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Multishot_Parms, OldMultishot), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMultishot_MetaData), NewProp_OldMultishot_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::NewProp_OldMultishot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Multishot", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::OWSAttributeSet_eventOnRep_Multishot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::OWSAttributeSet_eventOnRep_Multishot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Multishot)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMultishot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Multishot(Z_Param_Out_OldMultishot);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Multishot

// Begin Class UOWSAttributeSet Function OnRep_NaturalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics
{
	struct OWSAttributeSet_eventOnRep_NaturalArmor_Parms
	{
		FGameplayAttributeData OldNaturalArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldNaturalArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldNaturalArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::NewProp_OldNaturalArmor = { "OldNaturalArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_NaturalArmor_Parms, OldNaturalArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldNaturalArmor_MetaData), NewProp_OldNaturalArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::NewProp_OldNaturalArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_NaturalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::OWSAttributeSet_eventOnRep_NaturalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::OWSAttributeSet_eventOnRep_NaturalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_NaturalArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldNaturalArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_NaturalArmor(Z_Param_Out_OldNaturalArmor);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_NaturalArmor

// Begin Class UOWSAttributeSet Function OnRep_Parry
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics
{
	struct OWSAttributeSet_eventOnRep_Parry_Parms
	{
		FGameplayAttributeData OldParry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldParry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldParry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::NewProp_OldParry = { "OldParry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Parry_Parms, OldParry), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldParry_MetaData), NewProp_OldParry_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::NewProp_OldParry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Parry", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::OWSAttributeSet_eventOnRep_Parry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::OWSAttributeSet_eventOnRep_Parry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Parry)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldParry);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Parry(Z_Param_Out_OldParry);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Parry

// Begin Class UOWSAttributeSet Function OnRep_PhysicalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics
{
	struct OWSAttributeSet_eventOnRep_PhysicalArmor_Parms
	{
		FGameplayAttributeData OldPhysicalArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPhysicalArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPhysicalArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::NewProp_OldPhysicalArmor = { "OldPhysicalArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_PhysicalArmor_Parms, OldPhysicalArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPhysicalArmor_MetaData), NewProp_OldPhysicalArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::NewProp_OldPhysicalArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_PhysicalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::OWSAttributeSet_eventOnRep_PhysicalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::OWSAttributeSet_eventOnRep_PhysicalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_PhysicalArmor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysicalArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PhysicalArmor(Z_Param_Out_OldPhysicalArmor);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_PhysicalArmor

// Begin Class UOWSAttributeSet Function OnRep_Range
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics
{
	struct OWSAttributeSet_eventOnRep_Range_Parms
	{
		FGameplayAttributeData OldRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::NewProp_OldRange = { "OldRange", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Range_Parms, OldRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldRange_MetaData), NewProp_OldRange_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::NewProp_OldRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Range", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::OWSAttributeSet_eventOnRep_Range_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::OWSAttributeSet_eventOnRep_Range_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Range)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Range(Z_Param_Out_OldRange);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Range

// Begin Class UOWSAttributeSet Function OnRep_Reflex
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics
{
	struct OWSAttributeSet_eventOnRep_Reflex_Parms
	{
		FGameplayAttributeData OldReflex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldReflex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldReflex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::NewProp_OldReflex = { "OldReflex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Reflex_Parms, OldReflex), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldReflex_MetaData), NewProp_OldReflex_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::NewProp_OldReflex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Reflex", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::OWSAttributeSet_eventOnRep_Reflex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::OWSAttributeSet_eventOnRep_Reflex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Reflex)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldReflex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Reflex(Z_Param_Out_OldReflex);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Reflex

// Begin Class UOWSAttributeSet Function OnRep_ReloadSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics
{
	struct OWSAttributeSet_eventOnRep_ReloadSpeed_Parms
	{
		FGameplayAttributeData OldReloadSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldReloadSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldReloadSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::NewProp_OldReloadSpeed = { "OldReloadSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_ReloadSpeed_Parms, OldReloadSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldReloadSpeed_MetaData), NewProp_OldReloadSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::NewProp_OldReloadSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_ReloadSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::OWSAttributeSet_eventOnRep_ReloadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::OWSAttributeSet_eventOnRep_ReloadSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_ReloadSpeed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldReloadSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReloadSpeed(Z_Param_Out_OldReloadSpeed);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_ReloadSpeed

// Begin Class UOWSAttributeSet Function OnRep_Resistance
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics
{
	struct OWSAttributeSet_eventOnRep_Resistance_Parms
	{
		FGameplayAttributeData OldResistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldResistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::NewProp_OldResistance = { "OldResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Resistance_Parms, OldResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldResistance_MetaData), NewProp_OldResistance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::NewProp_OldResistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Resistance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::OWSAttributeSet_eventOnRep_Resistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::OWSAttributeSet_eventOnRep_Resistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Resistance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldResistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Resistance(Z_Param_Out_OldResistance);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Resistance

// Begin Class UOWSAttributeSet Function OnRep_Speed
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics
{
	struct OWSAttributeSet_eventOnRep_Speed_Parms
	{
		FGameplayAttributeData OldSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpeed_MetaData), NewProp_OldSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Speed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::OWSAttributeSet_eventOnRep_Speed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::OWSAttributeSet_eventOnRep_Speed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Speed)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Speed

// Begin Class UOWSAttributeSet Function OnRep_SpellPenetration
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics
{
	struct OWSAttributeSet_eventOnRep_SpellPenetration_Parms
	{
		FGameplayAttributeData OldSpellPenetration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpellPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpellPenetration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::NewProp_OldSpellPenetration = { "OldSpellPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_SpellPenetration_Parms, OldSpellPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpellPenetration_MetaData), NewProp_OldSpellPenetration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::NewProp_OldSpellPenetration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_SpellPenetration", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::OWSAttributeSet_eventOnRep_SpellPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::OWSAttributeSet_eventOnRep_SpellPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_SpellPenetration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpellPenetration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpellPenetration(Z_Param_Out_OldSpellPenetration);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_SpellPenetration

// Begin Class UOWSAttributeSet Function OnRep_SpellPower
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics
{
	struct OWSAttributeSet_eventOnRep_SpellPower_Parms
	{
		FGameplayAttributeData OldSpellPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpellPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpellPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::NewProp_OldSpellPower = { "OldSpellPower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_SpellPower_Parms, OldSpellPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpellPower_MetaData), NewProp_OldSpellPower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::NewProp_OldSpellPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_SpellPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::OWSAttributeSet_eventOnRep_SpellPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::OWSAttributeSet_eventOnRep_SpellPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_SpellPower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpellPower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SpellPower(Z_Param_Out_OldSpellPower);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_SpellPower

// Begin Class UOWSAttributeSet Function OnRep_Spirit
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics
{
	struct OWSAttributeSet_eventOnRep_Spirit_Parms
	{
		FGameplayAttributeData OldSpirit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldSpirit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpirit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::NewProp_OldSpirit = { "OldSpirit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Spirit_Parms, OldSpirit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldSpirit_MetaData), NewProp_OldSpirit_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::NewProp_OldSpirit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Spirit", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::OWSAttributeSet_eventOnRep_Spirit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::OWSAttributeSet_eventOnRep_Spirit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Spirit)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpirit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Spirit(Z_Param_Out_OldSpirit);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Spirit

// Begin Class UOWSAttributeSet Function OnRep_Stamina
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics
{
	struct OWSAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::OWSAttributeSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::OWSAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Stamina

// Begin Class UOWSAttributeSet Function OnRep_StaminaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics
{
	struct OWSAttributeSet_eventOnRep_StaminaRegenRate_Parms
	{
		FGameplayAttributeData OldStaminaRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStaminaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStaminaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate = { "OldStaminaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_StaminaRegenRate_Parms, OldStaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStaminaRegenRate_MetaData), NewProp_OldStaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_StaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::OWSAttributeSet_eventOnRep_StaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::OWSAttributeSet_eventOnRep_StaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_StaminaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStaminaRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaRegenRate(Z_Param_Out_OldStaminaRegenRate);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_StaminaRegenRate

// Begin Class UOWSAttributeSet Function OnRep_Strength
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics
{
	struct OWSAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData OldStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStrength_MetaData), NewProp_OldStrength_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::OWSAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::OWSAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Strength

// Begin Class UOWSAttributeSet Function OnRep_Thirst
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics
{
	struct OWSAttributeSet_eventOnRep_Thirst_Parms
	{
		FGameplayAttributeData OldThirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldThirst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldThirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::NewProp_OldThirst = { "OldThirst", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Thirst_Parms, OldThirst), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldThirst_MetaData), NewProp_OldThirst_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::NewProp_OldThirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Thirst", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::OWSAttributeSet_eventOnRep_Thirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::OWSAttributeSet_eventOnRep_Thirst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Thirst)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldThirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Thirst(Z_Param_Out_OldThirst);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Thirst

// Begin Class UOWSAttributeSet Function OnRep_Versatility
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics
{
	struct OWSAttributeSet_eventOnRep_Versatility_Parms
	{
		FGameplayAttributeData OldVersatility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldVersatility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldVersatility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::NewProp_OldVersatility = { "OldVersatility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Versatility_Parms, OldVersatility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldVersatility_MetaData), NewProp_OldVersatility_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::NewProp_OldVersatility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Versatility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::OWSAttributeSet_eventOnRep_Versatility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::OWSAttributeSet_eventOnRep_Versatility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Versatility)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldVersatility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Versatility(Z_Param_Out_OldVersatility);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Versatility

// Begin Class UOWSAttributeSet Function OnRep_Willpower
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics
{
	struct OWSAttributeSet_eventOnRep_Willpower_Parms
	{
		FGameplayAttributeData OldWillpower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWillpower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldWillpower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::NewProp_OldWillpower = { "OldWillpower", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Willpower_Parms, OldWillpower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWillpower_MetaData), NewProp_OldWillpower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::NewProp_OldWillpower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Willpower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::OWSAttributeSet_eventOnRep_Willpower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::OWSAttributeSet_eventOnRep_Willpower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Willpower)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWillpower);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Willpower(Z_Param_Out_OldWillpower);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Willpower

// Begin Class UOWSAttributeSet Function OnRep_Wisdom
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics
{
	struct OWSAttributeSet_eventOnRep_Wisdom_Parms
	{
		FGameplayAttributeData OldWisdom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWisdom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldWisdom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::NewProp_OldWisdom = { "OldWisdom", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Wisdom_Parms, OldWisdom), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWisdom_MetaData), NewProp_OldWisdom_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::NewProp_OldWisdom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Wisdom", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::OWSAttributeSet_eventOnRep_Wisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::OWSAttributeSet_eventOnRep_Wisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Wisdom)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWisdom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Wisdom(Z_Param_Out_OldWisdom);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Wisdom

// Begin Class UOWSAttributeSet Function OnRep_Wounds
struct Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics
{
	struct OWSAttributeSet_eventOnRep_Wounds_Parms
	{
		FGameplayAttributeData OldWounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldWounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::NewProp_OldWounds = { "OldWounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOnRep_Wounds_Parms, OldWounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWounds_MetaData), NewProp_OldWounds_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::NewProp_OldWounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OnRep_Wounds", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::OWSAttributeSet_eventOnRep_Wounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::OWSAttributeSet_eventOnRep_Wounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOnRep_Wounds)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Wounds(Z_Param_Out_OldWounds);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OnRep_Wounds

// Begin Class UOWSAttributeSet Function OWSGetAgility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics
{
	struct OWSAttributeSet_eventOWSGetAgility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetAgility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetAgility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::OWSAttributeSet_eventOWSGetAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::OWSAttributeSet_eventOWSGetAgility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetAgility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetAgility();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetAgility

// Begin Class UOWSAttributeSet Function OWSGetAttackPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics
{
	struct OWSAttributeSet_eventOWSGetAttackPower_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetAttackPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetAttackPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::OWSAttributeSet_eventOWSGetAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::OWSAttributeSet_eventOWSGetAttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetAttackPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetAttackPower();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetAttackPower

// Begin Class UOWSAttributeSet Function OWSGetAttackSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics
{
	struct OWSAttributeSet_eventOWSGetAttackSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetAttackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetAttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::OWSAttributeSet_eventOWSGetAttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::OWSAttributeSet_eventOWSGetAttackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetAttackSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetAttackSpeed();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetAttackSpeed

// Begin Class UOWSAttributeSet Function OWSGetAvoidance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics
{
	struct OWSAttributeSet_eventOWSGetAvoidance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetAvoidance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetAvoidance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::OWSAttributeSet_eventOWSGetAvoidance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::OWSAttributeSet_eventOWSGetAvoidance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetAvoidance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetAvoidance();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetAvoidance

// Begin Class UOWSAttributeSet Function OWSGetBaseAttack
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics
{
	struct OWSAttributeSet_eventOWSGetBaseAttack_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetBaseAttack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetBaseAttack", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::OWSAttributeSet_eventOWSGetBaseAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::OWSAttributeSet_eventOWSGetBaseAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetBaseAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttack();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetBaseAttack

// Begin Class UOWSAttributeSet Function OWSGetBaseAttackBonus
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics
{
	struct OWSAttributeSet_eventOWSGetBaseAttackBonus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetBaseAttackBonus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetBaseAttackBonus", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::OWSAttributeSet_eventOWSGetBaseAttackBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::OWSAttributeSet_eventOWSGetBaseAttackBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetBaseAttackBonus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetBaseAttackBonus();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetBaseAttackBonus

// Begin Class UOWSAttributeSet Function OWSGetBonusArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics
{
	struct OWSAttributeSet_eventOWSGetBonusArmor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetBonusArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetBonusArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::OWSAttributeSet_eventOWSGetBonusArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::OWSAttributeSet_eventOWSGetBonusArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetBonusArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetBonusArmor();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetBonusArmor

// Begin Class UOWSAttributeSet Function OWSGetCharisma
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics
{
	struct OWSAttributeSet_eventOWSGetCharisma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetCharisma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetCharisma", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::OWSAttributeSet_eventOWSGetCharisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::OWSAttributeSet_eventOWSGetCharisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetCharisma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetCharisma();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetCharisma

// Begin Class UOWSAttributeSet Function OWSGetConstitution
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics
{
	struct OWSAttributeSet_eventOWSGetConstitution_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetConstitution_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetConstitution", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::OWSAttributeSet_eventOWSGetConstitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::OWSAttributeSet_eventOWSGetConstitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetConstitution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetConstitution();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetConstitution

// Begin Class UOWSAttributeSet Function OWSGetCritChance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics
{
	struct OWSAttributeSet_eventOWSGetCritChance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetCritChance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetCritChance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::OWSAttributeSet_eventOWSGetCritChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::OWSAttributeSet_eventOWSGetCritChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetCritChance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetCritChance();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetCritChance

// Begin Class UOWSAttributeSet Function OWSGetCritMultiplier
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics
{
	struct OWSAttributeSet_eventOWSGetCritMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetCritMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetCritMultiplier", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::OWSAttributeSet_eventOWSGetCritMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::OWSAttributeSet_eventOWSGetCritMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetCritMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetCritMultiplier();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetCritMultiplier

// Begin Class UOWSAttributeSet Function OWSGetDefense
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics
{
	struct OWSAttributeSet_eventOWSGetDefense_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetDefense_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetDefense", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::OWSAttributeSet_eventOWSGetDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::OWSAttributeSet_eventOWSGetDefense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetDefense)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetDefense();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetDefense

// Begin Class UOWSAttributeSet Function OWSGetDexterity
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics
{
	struct OWSAttributeSet_eventOWSGetDexterity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetDexterity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetDexterity", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::OWSAttributeSet_eventOWSGetDexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::OWSAttributeSet_eventOWSGetDexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetDexterity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetDexterity();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetDexterity

// Begin Class UOWSAttributeSet Function OWSGetDodge
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics
{
	struct OWSAttributeSet_eventOWSGetDodge_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetDodge_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetDodge", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::OWSAttributeSet_eventOWSGetDodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::OWSAttributeSet_eventOWSGetDodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetDodge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetDodge();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetDodge

// Begin Class UOWSAttributeSet Function OWSGetEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics
{
	struct OWSAttributeSet_eventOWSGetEndurance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetEndurance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::OWSAttributeSet_eventOWSGetEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::OWSAttributeSet_eventOWSGetEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetEndurance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetEndurance();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetEndurance

// Begin Class UOWSAttributeSet Function OWSGetEnduranceRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetEnduranceRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetEnduranceRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetEnduranceRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSGetEnduranceRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSGetEnduranceRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetEnduranceRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetEnduranceRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetEnduranceRegenRate

// Begin Class UOWSAttributeSet Function OWSGetEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics
{
	struct OWSAttributeSet_eventOWSGetEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::OWSAttributeSet_eventOWSGetEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::OWSAttributeSet_eventOWSGetEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetEnergy();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetEnergy

// Begin Class UOWSAttributeSet Function OWSGetEnergyRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetEnergyRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetEnergyRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetEnergyRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::OWSAttributeSet_eventOWSGetEnergyRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::OWSAttributeSet_eventOWSGetEnergyRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetEnergyRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetEnergyRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetEnergyRegenRate

// Begin Class UOWSAttributeSet Function OWSGetFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics
{
	struct OWSAttributeSet_eventOWSGetFatigue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetFatigue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::OWSAttributeSet_eventOWSGetFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::OWSAttributeSet_eventOWSGetFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetFatigue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetFatigue();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetFatigue

// Begin Class UOWSAttributeSet Function OWSGetFatigueRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetFatigueRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetFatigueRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetFatigueRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::OWSAttributeSet_eventOWSGetFatigueRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::OWSAttributeSet_eventOWSGetFatigueRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetFatigueRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetFatigueRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetFatigueRegenRate

// Begin Class UOWSAttributeSet Function OWSGetForceArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics
{
	struct OWSAttributeSet_eventOWSGetForceArmor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetForceArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetForceArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::OWSAttributeSet_eventOWSGetForceArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::OWSAttributeSet_eventOWSGetForceArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetForceArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetForceArmor();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetForceArmor

// Begin Class UOWSAttributeSet Function OWSGetFortitude
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics
{
	struct OWSAttributeSet_eventOWSGetFortitude_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetFortitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetFortitude", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::OWSAttributeSet_eventOWSGetFortitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::OWSAttributeSet_eventOWSGetFortitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetFortitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetFortitude();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetFortitude

// Begin Class UOWSAttributeSet Function OWSGetHaste
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics
{
	struct OWSAttributeSet_eventOWSGetHaste_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetHaste_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetHaste", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::OWSAttributeSet_eventOWSGetHaste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::OWSAttributeSet_eventOWSGetHaste_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetHaste)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHaste();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetHaste

// Begin Class UOWSAttributeSet Function OWSGetHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics
{
	struct OWSAttributeSet_eventOWSGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::OWSAttributeSet_eventOWSGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::OWSAttributeSet_eventOWSGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHealth();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetHealth

// Begin Class UOWSAttributeSet Function OWSGetHealthRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetHealthRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::OWSAttributeSet_eventOWSGetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::OWSAttributeSet_eventOWSGetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetHealthRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHealthRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetHealthRegenRate

// Begin Class UOWSAttributeSet Function OWSGetHitDie
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics
{
	struct OWSAttributeSet_eventOWSGetHitDie_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetHitDie_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetHitDie", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::OWSAttributeSet_eventOWSGetHitDie_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::OWSAttributeSet_eventOWSGetHitDie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetHitDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHitDie();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetHitDie

// Begin Class UOWSAttributeSet Function OWSGetHunger
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics
{
	struct OWSAttributeSet_eventOWSGetHunger_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetHunger_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetHunger", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::OWSAttributeSet_eventOWSGetHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::OWSAttributeSet_eventOWSGetHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetHunger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetHunger();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetHunger

// Begin Class UOWSAttributeSet Function OWSGetInitiative
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics
{
	struct OWSAttributeSet_eventOWSGetInitiative_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetInitiative_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetInitiative", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::OWSAttributeSet_eventOWSGetInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::OWSAttributeSet_eventOWSGetInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetInitiative)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetInitiative();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetInitiative

// Begin Class UOWSAttributeSet Function OWSGetIntellect
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics
{
	struct OWSAttributeSet_eventOWSGetIntellect_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetIntellect_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetIntellect", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::OWSAttributeSet_eventOWSGetIntellect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::OWSAttributeSet_eventOWSGetIntellect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetIntellect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetIntellect();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetIntellect

// Begin Class UOWSAttributeSet Function OWSGetMagic
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics
{
	struct OWSAttributeSet_eventOWSGetMagic_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMagic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMagic", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::OWSAttributeSet_eventOWSGetMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::OWSAttributeSet_eventOWSGetMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMagic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMagic();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMagic

// Begin Class UOWSAttributeSet Function OWSGetMagicArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics
{
	struct OWSAttributeSet_eventOWSGetMagicArmor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMagicArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMagicArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::OWSAttributeSet_eventOWSGetMagicArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::OWSAttributeSet_eventOWSGetMagicArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMagicArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMagicArmor();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMagicArmor

// Begin Class UOWSAttributeSet Function OWSGetMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics
{
	struct OWSAttributeSet_eventOWSGetMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::OWSAttributeSet_eventOWSGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::OWSAttributeSet_eventOWSGetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMana();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMana

// Begin Class UOWSAttributeSet Function OWSGetManaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetManaRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetManaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::OWSAttributeSet_eventOWSGetManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::OWSAttributeSet_eventOWSGetManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetManaRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetManaRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetManaRegenRate

// Begin Class UOWSAttributeSet Function OWSGetMaxEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxEndurance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxEndurance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::OWSAttributeSet_eventOWSGetMaxEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::OWSAttributeSet_eventOWSGetMaxEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxEndurance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxEndurance();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxEndurance

// Begin Class UOWSAttributeSet Function OWSGetMaxEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxEnergy_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::OWSAttributeSet_eventOWSGetMaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::OWSAttributeSet_eventOWSGetMaxEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxEnergy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxEnergy();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxEnergy

// Begin Class UOWSAttributeSet Function OWSGetMaxFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxFatigue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxFatigue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::OWSAttributeSet_eventOWSGetMaxFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::OWSAttributeSet_eventOWSGetMaxFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxFatigue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxFatigue();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxFatigue

// Begin Class UOWSAttributeSet Function OWSGetMaxHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::OWSAttributeSet_eventOWSGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::OWSAttributeSet_eventOWSGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxHealth();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxHealth

// Begin Class UOWSAttributeSet Function OWSGetMaxMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::OWSAttributeSet_eventOWSGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::OWSAttributeSet_eventOWSGetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxMana();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxMana

// Begin Class UOWSAttributeSet Function OWSGetMaxStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics
{
	struct OWSAttributeSet_eventOWSGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::OWSAttributeSet_eventOWSGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::OWSAttributeSet_eventOWSGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMaxStamina();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMaxStamina

// Begin Class UOWSAttributeSet Function OWSGetMultishot
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics
{
	struct OWSAttributeSet_eventOWSGetMultishot_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetMultishot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetMultishot", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::OWSAttributeSet_eventOWSGetMultishot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::OWSAttributeSet_eventOWSGetMultishot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetMultishot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetMultishot();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetMultishot

// Begin Class UOWSAttributeSet Function OWSGetNaturalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics
{
	struct OWSAttributeSet_eventOWSGetNaturalArmor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetNaturalArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetNaturalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::OWSAttributeSet_eventOWSGetNaturalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::OWSAttributeSet_eventOWSGetNaturalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetNaturalArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetNaturalArmor();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetNaturalArmor

// Begin Class UOWSAttributeSet Function OWSGetParry
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics
{
	struct OWSAttributeSet_eventOWSGetParry_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetParry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetParry", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::OWSAttributeSet_eventOWSGetParry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::OWSAttributeSet_eventOWSGetParry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetParry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetParry();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetParry

// Begin Class UOWSAttributeSet Function OWSGetPhysicalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics
{
	struct OWSAttributeSet_eventOWSGetPhysicalArmor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetPhysicalArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetPhysicalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::OWSAttributeSet_eventOWSGetPhysicalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::OWSAttributeSet_eventOWSGetPhysicalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetPhysicalArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetPhysicalArmor();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetPhysicalArmor

// Begin Class UOWSAttributeSet Function OWSGetRange
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics
{
	struct OWSAttributeSet_eventOWSGetRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetRange", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::OWSAttributeSet_eventOWSGetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::OWSAttributeSet_eventOWSGetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetRange();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetRange

// Begin Class UOWSAttributeSet Function OWSGetReflex
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics
{
	struct OWSAttributeSet_eventOWSGetReflex_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetReflex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetReflex", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::OWSAttributeSet_eventOWSGetReflex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::OWSAttributeSet_eventOWSGetReflex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetReflex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetReflex();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetReflex

// Begin Class UOWSAttributeSet Function OWSGetReloadSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics
{
	struct OWSAttributeSet_eventOWSGetReloadSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetReloadSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetReloadSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::OWSAttributeSet_eventOWSGetReloadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::OWSAttributeSet_eventOWSGetReloadSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetReloadSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetReloadSpeed();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetReloadSpeed

// Begin Class UOWSAttributeSet Function OWSGetResistance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics
{
	struct OWSAttributeSet_eventOWSGetResistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetResistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetResistance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::OWSAttributeSet_eventOWSGetResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::OWSAttributeSet_eventOWSGetResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetResistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetResistance();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetResistance

// Begin Class UOWSAttributeSet Function OWSGetSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics
{
	struct OWSAttributeSet_eventOWSGetSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::OWSAttributeSet_eventOWSGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::OWSAttributeSet_eventOWSGetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetSpeed();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetSpeed

// Begin Class UOWSAttributeSet Function OWSGetSpellPenetration
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics
{
	struct OWSAttributeSet_eventOWSGetSpellPenetration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetSpellPenetration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetSpellPenetration", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::OWSAttributeSet_eventOWSGetSpellPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::OWSAttributeSet_eventOWSGetSpellPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetSpellPenetration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetSpellPenetration();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetSpellPenetration

// Begin Class UOWSAttributeSet Function OWSGetSpellPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics
{
	struct OWSAttributeSet_eventOWSGetSpellPower_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetSpellPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetSpellPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::OWSAttributeSet_eventOWSGetSpellPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::OWSAttributeSet_eventOWSGetSpellPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetSpellPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetSpellPower();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetSpellPower

// Begin Class UOWSAttributeSet Function OWSGetSpirit
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics
{
	struct OWSAttributeSet_eventOWSGetSpirit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetSpirit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetSpirit", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::OWSAttributeSet_eventOWSGetSpirit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::OWSAttributeSet_eventOWSGetSpirit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetSpirit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetSpirit();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetSpirit

// Begin Class UOWSAttributeSet Function OWSGetStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics
{
	struct OWSAttributeSet_eventOWSGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::OWSAttributeSet_eventOWSGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::OWSAttributeSet_eventOWSGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetStamina();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetStamina

// Begin Class UOWSAttributeSet Function OWSGetStaminaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSGetStaminaRegenRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetStaminaRegenRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::OWSAttributeSet_eventOWSGetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::OWSAttributeSet_eventOWSGetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetStaminaRegenRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetStaminaRegenRate();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetStaminaRegenRate

// Begin Class UOWSAttributeSet Function OWSGetStrength
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics
{
	struct OWSAttributeSet_eventOWSGetStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetStrength", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::OWSAttributeSet_eventOWSGetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::OWSAttributeSet_eventOWSGetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetStrength();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetStrength

// Begin Class UOWSAttributeSet Function OWSGetThirst
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics
{
	struct OWSAttributeSet_eventOWSGetThirst_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetThirst_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetThirst", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::OWSAttributeSet_eventOWSGetThirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::OWSAttributeSet_eventOWSGetThirst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetThirst)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetThirst();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetThirst

// Begin Class UOWSAttributeSet Function OWSGetVersatility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics
{
	struct OWSAttributeSet_eventOWSGetVersatility_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetVersatility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetVersatility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::OWSAttributeSet_eventOWSGetVersatility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::OWSAttributeSet_eventOWSGetVersatility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetVersatility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetVersatility();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetVersatility

// Begin Class UOWSAttributeSet Function OWSGetWillpower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics
{
	struct OWSAttributeSet_eventOWSGetWillpower_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetWillpower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetWillpower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::OWSAttributeSet_eventOWSGetWillpower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::OWSAttributeSet_eventOWSGetWillpower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetWillpower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetWillpower();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetWillpower

// Begin Class UOWSAttributeSet Function OWSGetWisdom
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics
{
	struct OWSAttributeSet_eventOWSGetWisdom_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetWisdom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetWisdom", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::OWSAttributeSet_eventOWSGetWisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::OWSAttributeSet_eventOWSGetWisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetWisdom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetWisdom();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetWisdom

// Begin Class UOWSAttributeSet Function OWSGetWounds
struct Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics
{
	struct OWSAttributeSet_eventOWSGetWounds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSGetWounds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSGetWounds", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::OWSAttributeSet_eventOWSGetWounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::OWSAttributeSet_eventOWSGetWounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSGetWounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->OWSGetWounds();
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSGetWounds

// Begin Class UOWSAttributeSet Function OWSInitAgility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics
{
	struct OWSAttributeSet_eventOWSInitAgility_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitAgility_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitAgility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::OWSAttributeSet_eventOWSInitAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::OWSAttributeSet_eventOWSInitAgility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitAgility)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitAgility(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitAgility

// Begin Class UOWSAttributeSet Function OWSInitAttackPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics
{
	struct OWSAttributeSet_eventOWSInitAttackPower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitAttackPower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitAttackPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::OWSAttributeSet_eventOWSInitAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::OWSAttributeSet_eventOWSInitAttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitAttackPower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitAttackPower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitAttackPower

// Begin Class UOWSAttributeSet Function OWSInitAttackSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics
{
	struct OWSAttributeSet_eventOWSInitAttackSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitAttackSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitAttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::OWSAttributeSet_eventOWSInitAttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::OWSAttributeSet_eventOWSInitAttackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitAttackSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitAttackSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitAttackSpeed

// Begin Class UOWSAttributeSet Function OWSInitAvoidance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics
{
	struct OWSAttributeSet_eventOWSInitAvoidance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitAvoidance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitAvoidance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::OWSAttributeSet_eventOWSInitAvoidance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::OWSAttributeSet_eventOWSInitAvoidance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitAvoidance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitAvoidance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitAvoidance

// Begin Class UOWSAttributeSet Function OWSInitBaseAttack
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics
{
	struct OWSAttributeSet_eventOWSInitBaseAttack_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitBaseAttack_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitBaseAttack", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::OWSAttributeSet_eventOWSInitBaseAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::OWSAttributeSet_eventOWSInitBaseAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitBaseAttack)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitBaseAttack(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitBaseAttack

// Begin Class UOWSAttributeSet Function OWSInitBaseAttackBonus
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics
{
	struct OWSAttributeSet_eventOWSInitBaseAttackBonus_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitBaseAttackBonus_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitBaseAttackBonus", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::OWSAttributeSet_eventOWSInitBaseAttackBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::OWSAttributeSet_eventOWSInitBaseAttackBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitBaseAttackBonus)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitBaseAttackBonus(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitBaseAttackBonus

// Begin Class UOWSAttributeSet Function OWSInitBonusArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics
{
	struct OWSAttributeSet_eventOWSInitBonusArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitBonusArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitBonusArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::OWSAttributeSet_eventOWSInitBonusArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::OWSAttributeSet_eventOWSInitBonusArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitBonusArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitBonusArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitBonusArmor

// Begin Class UOWSAttributeSet Function OWSInitCharisma
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics
{
	struct OWSAttributeSet_eventOWSInitCharisma_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitCharisma_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitCharisma", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::OWSAttributeSet_eventOWSInitCharisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::OWSAttributeSet_eventOWSInitCharisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitCharisma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitCharisma(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitCharisma

// Begin Class UOWSAttributeSet Function OWSInitConstitution
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics
{
	struct OWSAttributeSet_eventOWSInitConstitution_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitConstitution_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitConstitution", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::OWSAttributeSet_eventOWSInitConstitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::OWSAttributeSet_eventOWSInitConstitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitConstitution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitConstitution(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitConstitution

// Begin Class UOWSAttributeSet Function OWSInitCritChance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics
{
	struct OWSAttributeSet_eventOWSInitCritChance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitCritChance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitCritChance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::OWSAttributeSet_eventOWSInitCritChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::OWSAttributeSet_eventOWSInitCritChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitCritChance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitCritChance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitCritChance

// Begin Class UOWSAttributeSet Function OWSInitCritMultiplier
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics
{
	struct OWSAttributeSet_eventOWSInitCritMultiplier_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitCritMultiplier_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitCritMultiplier", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::OWSAttributeSet_eventOWSInitCritMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::OWSAttributeSet_eventOWSInitCritMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitCritMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitCritMultiplier(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitCritMultiplier

// Begin Class UOWSAttributeSet Function OWSInitDefense
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics
{
	struct OWSAttributeSet_eventOWSInitDefense_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitDefense_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitDefense", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::OWSAttributeSet_eventOWSInitDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::OWSAttributeSet_eventOWSInitDefense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitDefense)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitDefense(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitDefense

// Begin Class UOWSAttributeSet Function OWSInitDexterity
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics
{
	struct OWSAttributeSet_eventOWSInitDexterity_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitDexterity_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitDexterity", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::OWSAttributeSet_eventOWSInitDexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::OWSAttributeSet_eventOWSInitDexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitDexterity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitDexterity(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitDexterity

// Begin Class UOWSAttributeSet Function OWSInitDodge
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics
{
	struct OWSAttributeSet_eventOWSInitDodge_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitDodge_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitDodge", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::OWSAttributeSet_eventOWSInitDodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::OWSAttributeSet_eventOWSInitDodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitDodge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitDodge(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitDodge

// Begin Class UOWSAttributeSet Function OWSInitEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics
{
	struct OWSAttributeSet_eventOWSInitEndurance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitEndurance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::OWSAttributeSet_eventOWSInitEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::OWSAttributeSet_eventOWSInitEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitEndurance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitEndurance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitEndurance

// Begin Class UOWSAttributeSet Function OWSInitEnduranceRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitEnduranceRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitEnduranceRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitEnduranceRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSInitEnduranceRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSInitEnduranceRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitEnduranceRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitEnduranceRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitEnduranceRegenRate

// Begin Class UOWSAttributeSet Function OWSInitEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics
{
	struct OWSAttributeSet_eventOWSInitEnergy_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitEnergy_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::OWSAttributeSet_eventOWSInitEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::OWSAttributeSet_eventOWSInitEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitEnergy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitEnergy(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitEnergy

// Begin Class UOWSAttributeSet Function OWSInitEnergyRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitEnergyRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitEnergyRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitEnergyRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::OWSAttributeSet_eventOWSInitEnergyRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::OWSAttributeSet_eventOWSInitEnergyRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitEnergyRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitEnergyRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitEnergyRegenRate

// Begin Class UOWSAttributeSet Function OWSInitFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics
{
	struct OWSAttributeSet_eventOWSInitFatigue_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitFatigue_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::OWSAttributeSet_eventOWSInitFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::OWSAttributeSet_eventOWSInitFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitFatigue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitFatigue(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitFatigue

// Begin Class UOWSAttributeSet Function OWSInitFatigueRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitFatigueRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitFatigueRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitFatigueRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::OWSAttributeSet_eventOWSInitFatigueRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::OWSAttributeSet_eventOWSInitFatigueRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitFatigueRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitFatigueRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitFatigueRegenRate

// Begin Class UOWSAttributeSet Function OWSInitForceArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics
{
	struct OWSAttributeSet_eventOWSInitForceArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitForceArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitForceArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::OWSAttributeSet_eventOWSInitForceArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::OWSAttributeSet_eventOWSInitForceArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitForceArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitForceArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitForceArmor

// Begin Class UOWSAttributeSet Function OWSInitFortitude
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics
{
	struct OWSAttributeSet_eventOWSInitFortitude_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitFortitude_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitFortitude", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::OWSAttributeSet_eventOWSInitFortitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::OWSAttributeSet_eventOWSInitFortitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitFortitude)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitFortitude(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitFortitude

// Begin Class UOWSAttributeSet Function OWSInitHaste
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics
{
	struct OWSAttributeSet_eventOWSInitHaste_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitHaste_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitHaste", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::OWSAttributeSet_eventOWSInitHaste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::OWSAttributeSet_eventOWSInitHaste_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitHaste)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHaste(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitHaste

// Begin Class UOWSAttributeSet Function OWSInitHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics
{
	struct OWSAttributeSet_eventOWSInitHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::OWSAttributeSet_eventOWSInitHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::OWSAttributeSet_eventOWSInitHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitHealth

// Begin Class UOWSAttributeSet Function OWSInitHealthRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::OWSAttributeSet_eventOWSInitHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::OWSAttributeSet_eventOWSInitHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitHealthRegenRate

// Begin Class UOWSAttributeSet Function OWSInitHitDie
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics
{
	struct OWSAttributeSet_eventOWSInitHitDie_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitHitDie_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitHitDie", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::OWSAttributeSet_eventOWSInitHitDie_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::OWSAttributeSet_eventOWSInitHitDie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitHitDie)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHitDie(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitHitDie

// Begin Class UOWSAttributeSet Function OWSInitHunger
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics
{
	struct OWSAttributeSet_eventOWSInitHunger_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitHunger_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitHunger", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::OWSAttributeSet_eventOWSInitHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::OWSAttributeSet_eventOWSInitHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitHunger)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitHunger(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitHunger

// Begin Class UOWSAttributeSet Function OWSInitInitiative
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics
{
	struct OWSAttributeSet_eventOWSInitInitiative_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitInitiative_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitInitiative", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::OWSAttributeSet_eventOWSInitInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::OWSAttributeSet_eventOWSInitInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitInitiative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitInitiative(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitInitiative

// Begin Class UOWSAttributeSet Function OWSInitIntellect
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics
{
	struct OWSAttributeSet_eventOWSInitIntellect_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitIntellect_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitIntellect", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::OWSAttributeSet_eventOWSInitIntellect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::OWSAttributeSet_eventOWSInitIntellect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitIntellect)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitIntellect(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitIntellect

// Begin Class UOWSAttributeSet Function OWSInitMagic
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics
{
	struct OWSAttributeSet_eventOWSInitMagic_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMagic_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMagic", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::OWSAttributeSet_eventOWSInitMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::OWSAttributeSet_eventOWSInitMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMagic)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMagic(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMagic

// Begin Class UOWSAttributeSet Function OWSInitMagicArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics
{
	struct OWSAttributeSet_eventOWSInitMagicArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMagicArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMagicArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::OWSAttributeSet_eventOWSInitMagicArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::OWSAttributeSet_eventOWSInitMagicArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMagicArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMagicArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMagicArmor

// Begin Class UOWSAttributeSet Function OWSInitMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics
{
	struct OWSAttributeSet_eventOWSInitMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::OWSAttributeSet_eventOWSInitMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::OWSAttributeSet_eventOWSInitMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMana

// Begin Class UOWSAttributeSet Function OWSInitManaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitManaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitManaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::OWSAttributeSet_eventOWSInitManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::OWSAttributeSet_eventOWSInitManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitManaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitManaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitManaRegenRate

// Begin Class UOWSAttributeSet Function OWSInitMaxEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxEndurance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxEndurance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::OWSAttributeSet_eventOWSInitMaxEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::OWSAttributeSet_eventOWSInitMaxEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxEndurance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxEndurance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxEndurance

// Begin Class UOWSAttributeSet Function OWSInitMaxEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxEnergy_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxEnergy_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::OWSAttributeSet_eventOWSInitMaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::OWSAttributeSet_eventOWSInitMaxEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxEnergy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxEnergy(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxEnergy

// Begin Class UOWSAttributeSet Function OWSInitMaxFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxFatigue_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxFatigue_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::OWSAttributeSet_eventOWSInitMaxFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::OWSAttributeSet_eventOWSInitMaxFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxFatigue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxFatigue(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxFatigue

// Begin Class UOWSAttributeSet Function OWSInitMaxHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::OWSAttributeSet_eventOWSInitMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::OWSAttributeSet_eventOWSInitMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxHealth

// Begin Class UOWSAttributeSet Function OWSInitMaxMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::OWSAttributeSet_eventOWSInitMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::OWSAttributeSet_eventOWSInitMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxMana

// Begin Class UOWSAttributeSet Function OWSInitMaxStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics
{
	struct OWSAttributeSet_eventOWSInitMaxStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMaxStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::OWSAttributeSet_eventOWSInitMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::OWSAttributeSet_eventOWSInitMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMaxStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMaxStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMaxStamina

// Begin Class UOWSAttributeSet Function OWSInitMultishot
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics
{
	struct OWSAttributeSet_eventOWSInitMultishot_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitMultishot_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitMultishot", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::OWSAttributeSet_eventOWSInitMultishot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::OWSAttributeSet_eventOWSInitMultishot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitMultishot)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitMultishot(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitMultishot

// Begin Class UOWSAttributeSet Function OWSInitNaturalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics
{
	struct OWSAttributeSet_eventOWSInitNaturalArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitNaturalArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitNaturalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::OWSAttributeSet_eventOWSInitNaturalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::OWSAttributeSet_eventOWSInitNaturalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitNaturalArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitNaturalArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitNaturalArmor

// Begin Class UOWSAttributeSet Function OWSInitParry
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics
{
	struct OWSAttributeSet_eventOWSInitParry_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitParry_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitParry", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::OWSAttributeSet_eventOWSInitParry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::OWSAttributeSet_eventOWSInitParry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitParry)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitParry(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitParry

// Begin Class UOWSAttributeSet Function OWSInitPhysicalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics
{
	struct OWSAttributeSet_eventOWSInitPhysicalArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitPhysicalArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitPhysicalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::OWSAttributeSet_eventOWSInitPhysicalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::OWSAttributeSet_eventOWSInitPhysicalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitPhysicalArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitPhysicalArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitPhysicalArmor

// Begin Class UOWSAttributeSet Function OWSInitRange
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics
{
	struct OWSAttributeSet_eventOWSInitRange_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitRange_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitRange", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::OWSAttributeSet_eventOWSInitRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::OWSAttributeSet_eventOWSInitRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitRange(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitRange

// Begin Class UOWSAttributeSet Function OWSInitReflex
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics
{
	struct OWSAttributeSet_eventOWSInitReflex_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitReflex_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitReflex", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::OWSAttributeSet_eventOWSInitReflex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::OWSAttributeSet_eventOWSInitReflex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitReflex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitReflex(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitReflex

// Begin Class UOWSAttributeSet Function OWSInitReloadSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics
{
	struct OWSAttributeSet_eventOWSInitReloadSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitReloadSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitReloadSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::OWSAttributeSet_eventOWSInitReloadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::OWSAttributeSet_eventOWSInitReloadSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitReloadSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitReloadSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitReloadSpeed

// Begin Class UOWSAttributeSet Function OWSInitResistance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics
{
	struct OWSAttributeSet_eventOWSInitResistance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitResistance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitResistance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::OWSAttributeSet_eventOWSInitResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::OWSAttributeSet_eventOWSInitResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitResistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitResistance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitResistance

// Begin Class UOWSAttributeSet Function OWSInitSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics
{
	struct OWSAttributeSet_eventOWSInitSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::OWSAttributeSet_eventOWSInitSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::OWSAttributeSet_eventOWSInitSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitSpeed

// Begin Class UOWSAttributeSet Function OWSInitSpellPenetration
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics
{
	struct OWSAttributeSet_eventOWSInitSpellPenetration_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitSpellPenetration_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitSpellPenetration", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::OWSAttributeSet_eventOWSInitSpellPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::OWSAttributeSet_eventOWSInitSpellPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitSpellPenetration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitSpellPenetration(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitSpellPenetration

// Begin Class UOWSAttributeSet Function OWSInitSpellPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics
{
	struct OWSAttributeSet_eventOWSInitSpellPower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitSpellPower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitSpellPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::OWSAttributeSet_eventOWSInitSpellPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::OWSAttributeSet_eventOWSInitSpellPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitSpellPower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitSpellPower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitSpellPower

// Begin Class UOWSAttributeSet Function OWSInitSpirit
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics
{
	struct OWSAttributeSet_eventOWSInitSpirit_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitSpirit_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitSpirit", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::OWSAttributeSet_eventOWSInitSpirit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::OWSAttributeSet_eventOWSInitSpirit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitSpirit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitSpirit(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitSpirit

// Begin Class UOWSAttributeSet Function OWSInitStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics
{
	struct OWSAttributeSet_eventOWSInitStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::OWSAttributeSet_eventOWSInitStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::OWSAttributeSet_eventOWSInitStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitStamina

// Begin Class UOWSAttributeSet Function OWSInitStaminaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSInitStaminaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitStaminaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::OWSAttributeSet_eventOWSInitStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::OWSAttributeSet_eventOWSInitStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitStaminaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitStaminaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitStaminaRegenRate

// Begin Class UOWSAttributeSet Function OWSInitStrength
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics
{
	struct OWSAttributeSet_eventOWSInitStrength_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitStrength_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitStrength", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::OWSAttributeSet_eventOWSInitStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::OWSAttributeSet_eventOWSInitStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitStrength(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitStrength

// Begin Class UOWSAttributeSet Function OWSInitThirst
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics
{
	struct OWSAttributeSet_eventOWSInitThirst_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitThirst_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitThirst", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::OWSAttributeSet_eventOWSInitThirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::OWSAttributeSet_eventOWSInitThirst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitThirst)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitThirst(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitThirst

// Begin Class UOWSAttributeSet Function OWSInitVersatility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics
{
	struct OWSAttributeSet_eventOWSInitVersatility_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitVersatility_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitVersatility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::OWSAttributeSet_eventOWSInitVersatility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::OWSAttributeSet_eventOWSInitVersatility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitVersatility)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitVersatility(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitVersatility

// Begin Class UOWSAttributeSet Function OWSInitWillpower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics
{
	struct OWSAttributeSet_eventOWSInitWillpower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitWillpower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitWillpower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::OWSAttributeSet_eventOWSInitWillpower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::OWSAttributeSet_eventOWSInitWillpower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitWillpower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitWillpower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitWillpower

// Begin Class UOWSAttributeSet Function OWSInitWisdom
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics
{
	struct OWSAttributeSet_eventOWSInitWisdom_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitWisdom_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitWisdom", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::OWSAttributeSet_eventOWSInitWisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::OWSAttributeSet_eventOWSInitWisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitWisdom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitWisdom(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitWisdom

// Begin Class UOWSAttributeSet Function OWSInitWounds
struct Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics
{
	struct OWSAttributeSet_eventOWSInitWounds_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSInitWounds_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSInitWounds", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::OWSAttributeSet_eventOWSInitWounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::OWSAttributeSet_eventOWSInitWounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSInitWounds)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSInitWounds(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSInitWounds

// Begin Class UOWSAttributeSet Function OWSSetAgility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics
{
	struct OWSAttributeSet_eventOWSSetAgility_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetAgility_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetAgility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::OWSAttributeSet_eventOWSSetAgility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::OWSAttributeSet_eventOWSSetAgility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetAgility)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetAgility(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetAgility

// Begin Class UOWSAttributeSet Function OWSSetAttackPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics
{
	struct OWSAttributeSet_eventOWSSetAttackPower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetAttackPower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetAttackPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::OWSAttributeSet_eventOWSSetAttackPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::OWSAttributeSet_eventOWSSetAttackPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetAttackPower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetAttackPower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetAttackPower

// Begin Class UOWSAttributeSet Function OWSSetAttackSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics
{
	struct OWSAttributeSet_eventOWSSetAttackSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetAttackSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetAttackSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::OWSAttributeSet_eventOWSSetAttackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::OWSAttributeSet_eventOWSSetAttackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetAttackSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetAttackSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetAttackSpeed

// Begin Class UOWSAttributeSet Function OWSSetAvoidance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics
{
	struct OWSAttributeSet_eventOWSSetAvoidance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetAvoidance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetAvoidance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::OWSAttributeSet_eventOWSSetAvoidance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::OWSAttributeSet_eventOWSSetAvoidance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetAvoidance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetAvoidance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetAvoidance

// Begin Class UOWSAttributeSet Function OWSSetBaseAttack
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics
{
	struct OWSAttributeSet_eventOWSSetBaseAttack_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetBaseAttack_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetBaseAttack", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::OWSAttributeSet_eventOWSSetBaseAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::OWSAttributeSet_eventOWSSetBaseAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetBaseAttack)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetBaseAttack(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetBaseAttack

// Begin Class UOWSAttributeSet Function OWSSetBaseAttackBonus
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics
{
	struct OWSAttributeSet_eventOWSSetBaseAttackBonus_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetBaseAttackBonus_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetBaseAttackBonus", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::OWSAttributeSet_eventOWSSetBaseAttackBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::OWSAttributeSet_eventOWSSetBaseAttackBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetBaseAttackBonus)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetBaseAttackBonus(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetBaseAttackBonus

// Begin Class UOWSAttributeSet Function OWSSetBonusArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics
{
	struct OWSAttributeSet_eventOWSSetBonusArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetBonusArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetBonusArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::OWSAttributeSet_eventOWSSetBonusArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::OWSAttributeSet_eventOWSSetBonusArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetBonusArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetBonusArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetBonusArmor

// Begin Class UOWSAttributeSet Function OWSSetCharisma
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics
{
	struct OWSAttributeSet_eventOWSSetCharisma_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetCharisma_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetCharisma", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::OWSAttributeSet_eventOWSSetCharisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::OWSAttributeSet_eventOWSSetCharisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetCharisma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetCharisma(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetCharisma

// Begin Class UOWSAttributeSet Function OWSSetConstitution
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics
{
	struct OWSAttributeSet_eventOWSSetConstitution_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetConstitution_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetConstitution", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::OWSAttributeSet_eventOWSSetConstitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::OWSAttributeSet_eventOWSSetConstitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetConstitution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetConstitution(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetConstitution

// Begin Class UOWSAttributeSet Function OWSSetCritChance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics
{
	struct OWSAttributeSet_eventOWSSetCritChance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetCritChance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetCritChance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::OWSAttributeSet_eventOWSSetCritChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::OWSAttributeSet_eventOWSSetCritChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetCritChance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetCritChance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetCritChance

// Begin Class UOWSAttributeSet Function OWSSetCritMultiplier
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics
{
	struct OWSAttributeSet_eventOWSSetCritMultiplier_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetCritMultiplier_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetCritMultiplier", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::OWSAttributeSet_eventOWSSetCritMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::OWSAttributeSet_eventOWSSetCritMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetCritMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetCritMultiplier(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetCritMultiplier

// Begin Class UOWSAttributeSet Function OWSSetDefense
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics
{
	struct OWSAttributeSet_eventOWSSetDefense_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetDefense_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetDefense", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::OWSAttributeSet_eventOWSSetDefense_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::OWSAttributeSet_eventOWSSetDefense_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetDefense)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetDefense(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetDefense

// Begin Class UOWSAttributeSet Function OWSSetDexterity
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics
{
	struct OWSAttributeSet_eventOWSSetDexterity_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetDexterity_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetDexterity", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::OWSAttributeSet_eventOWSSetDexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::OWSAttributeSet_eventOWSSetDexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetDexterity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetDexterity(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetDexterity

// Begin Class UOWSAttributeSet Function OWSSetDodge
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics
{
	struct OWSAttributeSet_eventOWSSetDodge_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetDodge_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetDodge", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::OWSAttributeSet_eventOWSSetDodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::OWSAttributeSet_eventOWSSetDodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetDodge)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetDodge(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetDodge

// Begin Class UOWSAttributeSet Function OWSSetEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics
{
	struct OWSAttributeSet_eventOWSSetEndurance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetEndurance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::OWSAttributeSet_eventOWSSetEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::OWSAttributeSet_eventOWSSetEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetEndurance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetEndurance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetEndurance

// Begin Class UOWSAttributeSet Function OWSSetEnduranceRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetEnduranceRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetEnduranceRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetEnduranceRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSSetEnduranceRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::OWSAttributeSet_eventOWSSetEnduranceRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetEnduranceRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetEnduranceRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetEnduranceRegenRate

// Begin Class UOWSAttributeSet Function OWSSetEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics
{
	struct OWSAttributeSet_eventOWSSetEnergy_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetEnergy_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::OWSAttributeSet_eventOWSSetEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::OWSAttributeSet_eventOWSSetEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetEnergy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetEnergy(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetEnergy

// Begin Class UOWSAttributeSet Function OWSSetEnergyRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetEnergyRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetEnergyRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetEnergyRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::OWSAttributeSet_eventOWSSetEnergyRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::OWSAttributeSet_eventOWSSetEnergyRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetEnergyRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetEnergyRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetEnergyRegenRate

// Begin Class UOWSAttributeSet Function OWSSetFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics
{
	struct OWSAttributeSet_eventOWSSetFatigue_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetFatigue_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::OWSAttributeSet_eventOWSSetFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::OWSAttributeSet_eventOWSSetFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetFatigue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetFatigue(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetFatigue

// Begin Class UOWSAttributeSet Function OWSSetFatigueRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetFatigueRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetFatigueRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetFatigueRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::OWSAttributeSet_eventOWSSetFatigueRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::OWSAttributeSet_eventOWSSetFatigueRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetFatigueRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetFatigueRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetFatigueRegenRate

// Begin Class UOWSAttributeSet Function OWSSetForceArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics
{
	struct OWSAttributeSet_eventOWSSetForceArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetForceArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetForceArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::OWSAttributeSet_eventOWSSetForceArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::OWSAttributeSet_eventOWSSetForceArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetForceArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetForceArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetForceArmor

// Begin Class UOWSAttributeSet Function OWSSetFortitude
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics
{
	struct OWSAttributeSet_eventOWSSetFortitude_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetFortitude_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetFortitude", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::OWSAttributeSet_eventOWSSetFortitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::OWSAttributeSet_eventOWSSetFortitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetFortitude)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetFortitude(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetFortitude

// Begin Class UOWSAttributeSet Function OWSSetHaste
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics
{
	struct OWSAttributeSet_eventOWSSetHaste_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetHaste_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetHaste", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::OWSAttributeSet_eventOWSSetHaste_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::OWSAttributeSet_eventOWSSetHaste_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetHaste)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHaste(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetHaste

// Begin Class UOWSAttributeSet Function OWSSetHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics
{
	struct OWSAttributeSet_eventOWSSetHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::OWSAttributeSet_eventOWSSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::OWSAttributeSet_eventOWSSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetHealth

// Begin Class UOWSAttributeSet Function OWSSetHealthRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetHealthRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetHealthRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetHealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::OWSAttributeSet_eventOWSSetHealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::OWSAttributeSet_eventOWSSetHealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetHealthRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHealthRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetHealthRegenRate

// Begin Class UOWSAttributeSet Function OWSSetHitDie
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics
{
	struct OWSAttributeSet_eventOWSSetHitDie_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetHitDie_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetHitDie", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::OWSAttributeSet_eventOWSSetHitDie_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::OWSAttributeSet_eventOWSSetHitDie_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetHitDie)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHitDie(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetHitDie

// Begin Class UOWSAttributeSet Function OWSSetHunger
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics
{
	struct OWSAttributeSet_eventOWSSetHunger_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetHunger_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetHunger", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::OWSAttributeSet_eventOWSSetHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::OWSAttributeSet_eventOWSSetHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetHunger)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetHunger(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetHunger

// Begin Class UOWSAttributeSet Function OWSSetInitiative
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics
{
	struct OWSAttributeSet_eventOWSSetInitiative_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetInitiative_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetInitiative", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::OWSAttributeSet_eventOWSSetInitiative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::OWSAttributeSet_eventOWSSetInitiative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetInitiative)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetInitiative(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetInitiative

// Begin Class UOWSAttributeSet Function OWSSetIntellect
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics
{
	struct OWSAttributeSet_eventOWSSetIntellect_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetIntellect_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetIntellect", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::OWSAttributeSet_eventOWSSetIntellect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::OWSAttributeSet_eventOWSSetIntellect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetIntellect)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetIntellect(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetIntellect

// Begin Class UOWSAttributeSet Function OWSSetMagic
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics
{
	struct OWSAttributeSet_eventOWSSetMagic_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMagic_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMagic", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::OWSAttributeSet_eventOWSSetMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::OWSAttributeSet_eventOWSSetMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMagic)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMagic(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMagic

// Begin Class UOWSAttributeSet Function OWSSetMagicArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics
{
	struct OWSAttributeSet_eventOWSSetMagicArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMagicArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMagicArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::OWSAttributeSet_eventOWSSetMagicArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::OWSAttributeSet_eventOWSSetMagicArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMagicArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMagicArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMagicArmor

// Begin Class UOWSAttributeSet Function OWSSetMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics
{
	struct OWSAttributeSet_eventOWSSetMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::OWSAttributeSet_eventOWSSetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::OWSAttributeSet_eventOWSSetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMana

// Begin Class UOWSAttributeSet Function OWSSetManaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetManaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetManaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetManaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::OWSAttributeSet_eventOWSSetManaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::OWSAttributeSet_eventOWSSetManaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetManaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetManaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetManaRegenRate

// Begin Class UOWSAttributeSet Function OWSSetMaxEndurance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxEndurance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxEndurance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxEndurance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::OWSAttributeSet_eventOWSSetMaxEndurance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::OWSAttributeSet_eventOWSSetMaxEndurance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxEndurance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxEndurance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxEndurance

// Begin Class UOWSAttributeSet Function OWSSetMaxEnergy
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxEnergy_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxEnergy_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxEnergy", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::OWSAttributeSet_eventOWSSetMaxEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::OWSAttributeSet_eventOWSSetMaxEnergy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxEnergy)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxEnergy(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxEnergy

// Begin Class UOWSAttributeSet Function OWSSetMaxFatigue
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxFatigue_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxFatigue_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxFatigue", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::OWSAttributeSet_eventOWSSetMaxFatigue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::OWSAttributeSet_eventOWSSetMaxFatigue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxFatigue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxFatigue(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxFatigue

// Begin Class UOWSAttributeSet Function OWSSetMaxHealth
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxHealth_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxHealth_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::OWSAttributeSet_eventOWSSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::OWSAttributeSet_eventOWSSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxHealth(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxHealth

// Begin Class UOWSAttributeSet Function OWSSetMaxMana
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxMana_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxMana_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxMana", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::OWSAttributeSet_eventOWSSetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::OWSAttributeSet_eventOWSSetMaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxMana(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxMana

// Begin Class UOWSAttributeSet Function OWSSetMaxStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics
{
	struct OWSAttributeSet_eventOWSSetMaxStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMaxStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::OWSAttributeSet_eventOWSSetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::OWSAttributeSet_eventOWSSetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMaxStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMaxStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMaxStamina

// Begin Class UOWSAttributeSet Function OWSSetMultishot
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics
{
	struct OWSAttributeSet_eventOWSSetMultishot_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetMultishot_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetMultishot", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::OWSAttributeSet_eventOWSSetMultishot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::OWSAttributeSet_eventOWSSetMultishot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetMultishot)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetMultishot(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetMultishot

// Begin Class UOWSAttributeSet Function OWSSetNaturalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics
{
	struct OWSAttributeSet_eventOWSSetNaturalArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetNaturalArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetNaturalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::OWSAttributeSet_eventOWSSetNaturalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::OWSAttributeSet_eventOWSSetNaturalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetNaturalArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetNaturalArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetNaturalArmor

// Begin Class UOWSAttributeSet Function OWSSetParry
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics
{
	struct OWSAttributeSet_eventOWSSetParry_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetParry_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetParry", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::OWSAttributeSet_eventOWSSetParry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::OWSAttributeSet_eventOWSSetParry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetParry)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetParry(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetParry

// Begin Class UOWSAttributeSet Function OWSSetPhysicalArmor
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics
{
	struct OWSAttributeSet_eventOWSSetPhysicalArmor_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetPhysicalArmor_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetPhysicalArmor", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::OWSAttributeSet_eventOWSSetPhysicalArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::OWSAttributeSet_eventOWSSetPhysicalArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetPhysicalArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetPhysicalArmor(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetPhysicalArmor

// Begin Class UOWSAttributeSet Function OWSSetRange
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics
{
	struct OWSAttributeSet_eventOWSSetRange_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetRange_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetRange", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::OWSAttributeSet_eventOWSSetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::OWSAttributeSet_eventOWSSetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetRange(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetRange

// Begin Class UOWSAttributeSet Function OWSSetReflex
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics
{
	struct OWSAttributeSet_eventOWSSetReflex_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetReflex_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetReflex", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::OWSAttributeSet_eventOWSSetReflex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::OWSAttributeSet_eventOWSSetReflex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetReflex)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetReflex(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetReflex

// Begin Class UOWSAttributeSet Function OWSSetReloadSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics
{
	struct OWSAttributeSet_eventOWSSetReloadSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetReloadSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetReloadSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::OWSAttributeSet_eventOWSSetReloadSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::OWSAttributeSet_eventOWSSetReloadSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetReloadSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetReloadSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetReloadSpeed

// Begin Class UOWSAttributeSet Function OWSSetResistance
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics
{
	struct OWSAttributeSet_eventOWSSetResistance_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetResistance_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetResistance", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::OWSAttributeSet_eventOWSSetResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::OWSAttributeSet_eventOWSSetResistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetResistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetResistance(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetResistance

// Begin Class UOWSAttributeSet Function OWSSetSpeed
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics
{
	struct OWSAttributeSet_eventOWSSetSpeed_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetSpeed_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::OWSAttributeSet_eventOWSSetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::OWSAttributeSet_eventOWSSetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetSpeed(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetSpeed

// Begin Class UOWSAttributeSet Function OWSSetSpellPenetration
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics
{
	struct OWSAttributeSet_eventOWSSetSpellPenetration_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetSpellPenetration_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetSpellPenetration", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::OWSAttributeSet_eventOWSSetSpellPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::OWSAttributeSet_eventOWSSetSpellPenetration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetSpellPenetration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetSpellPenetration(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetSpellPenetration

// Begin Class UOWSAttributeSet Function OWSSetSpellPower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics
{
	struct OWSAttributeSet_eventOWSSetSpellPower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetSpellPower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetSpellPower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::OWSAttributeSet_eventOWSSetSpellPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::OWSAttributeSet_eventOWSSetSpellPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetSpellPower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetSpellPower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetSpellPower

// Begin Class UOWSAttributeSet Function OWSSetSpirit
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics
{
	struct OWSAttributeSet_eventOWSSetSpirit_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetSpirit_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetSpirit", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::OWSAttributeSet_eventOWSSetSpirit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::OWSAttributeSet_eventOWSSetSpirit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetSpirit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetSpirit(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetSpirit

// Begin Class UOWSAttributeSet Function OWSSetStamina
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics
{
	struct OWSAttributeSet_eventOWSSetStamina_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetStamina_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetStamina", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::OWSAttributeSet_eventOWSSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::OWSAttributeSet_eventOWSSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetStamina(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetStamina

// Begin Class UOWSAttributeSet Function OWSSetStaminaRegenRate
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics
{
	struct OWSAttributeSet_eventOWSSetStaminaRegenRate_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetStaminaRegenRate_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetStaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::OWSAttributeSet_eventOWSSetStaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::OWSAttributeSet_eventOWSSetStaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetStaminaRegenRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetStaminaRegenRate(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetStaminaRegenRate

// Begin Class UOWSAttributeSet Function OWSSetStrength
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics
{
	struct OWSAttributeSet_eventOWSSetStrength_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetStrength_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetStrength", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::OWSAttributeSet_eventOWSSetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::OWSAttributeSet_eventOWSSetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetStrength(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetStrength

// Begin Class UOWSAttributeSet Function OWSSetThirst
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics
{
	struct OWSAttributeSet_eventOWSSetThirst_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetThirst_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetThirst", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::OWSAttributeSet_eventOWSSetThirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::OWSAttributeSet_eventOWSSetThirst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetThirst)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetThirst(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetThirst

// Begin Class UOWSAttributeSet Function OWSSetVersatility
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics
{
	struct OWSAttributeSet_eventOWSSetVersatility_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetVersatility_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetVersatility", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::OWSAttributeSet_eventOWSSetVersatility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::OWSAttributeSet_eventOWSSetVersatility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetVersatility)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetVersatility(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetVersatility

// Begin Class UOWSAttributeSet Function OWSSetWillpower
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics
{
	struct OWSAttributeSet_eventOWSSetWillpower_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetWillpower_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetWillpower", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::OWSAttributeSet_eventOWSSetWillpower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::OWSAttributeSet_eventOWSSetWillpower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetWillpower)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetWillpower(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetWillpower

// Begin Class UOWSAttributeSet Function OWSSetWisdom
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics
{
	struct OWSAttributeSet_eventOWSSetWisdom_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetWisdom_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetWisdom", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::OWSAttributeSet_eventOWSSetWisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::OWSAttributeSet_eventOWSSetWisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetWisdom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetWisdom(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetWisdom

// Begin Class UOWSAttributeSet Function OWSSetWounds
struct Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics
{
	struct OWSAttributeSet_eventOWSSetWounds_Parms
	{
		float NewVal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGAttributes" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::NewProp_NewVal = { "NewVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAttributeSet_eventOWSSetWounds_Parms, NewVal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::NewProp_NewVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAttributeSet, nullptr, "OWSSetWounds", nullptr, nullptr, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::OWSAttributeSet_eventOWSSetWounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::OWSAttributeSet_eventOWSSetWounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAttributeSet::execOWSSetWounds)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OWSSetWounds(Z_Param_NewVal);
	P_NATIVE_END;
}
// End Class UOWSAttributeSet Function OWSSetWounds

// Begin Class UOWSAttributeSet
void UOWSAttributeSet::StaticRegisterNativesUOWSAttributeSet()
{
	UClass* Class = UOWSAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Agility", &UOWSAttributeSet::execOnRep_Agility },
		{ "OnRep_AttackPower", &UOWSAttributeSet::execOnRep_AttackPower },
		{ "OnRep_AttackSpeed", &UOWSAttributeSet::execOnRep_AttackSpeed },
		{ "OnRep_Avoidance", &UOWSAttributeSet::execOnRep_Avoidance },
		{ "OnRep_BaseAttack", &UOWSAttributeSet::execOnRep_BaseAttack },
		{ "OnRep_BaseAttackBonus", &UOWSAttributeSet::execOnRep_BaseAttackBonus },
		{ "OnRep_BonusArmor", &UOWSAttributeSet::execOnRep_BonusArmor },
		{ "OnRep_Charisma", &UOWSAttributeSet::execOnRep_Charisma },
		{ "OnRep_Constitution", &UOWSAttributeSet::execOnRep_Constitution },
		{ "OnRep_CritChance", &UOWSAttributeSet::execOnRep_CritChance },
		{ "OnRep_CritMultiplier", &UOWSAttributeSet::execOnRep_CritMultiplier },
		{ "OnRep_Defense", &UOWSAttributeSet::execOnRep_Defense },
		{ "OnRep_Dexterity", &UOWSAttributeSet::execOnRep_Dexterity },
		{ "OnRep_Dodge", &UOWSAttributeSet::execOnRep_Dodge },
		{ "OnRep_Endurance", &UOWSAttributeSet::execOnRep_Endurance },
		{ "OnRep_EnduranceRegenRate", &UOWSAttributeSet::execOnRep_EnduranceRegenRate },
		{ "OnRep_Energy", &UOWSAttributeSet::execOnRep_Energy },
		{ "OnRep_EnergyRegenRate", &UOWSAttributeSet::execOnRep_EnergyRegenRate },
		{ "OnRep_Fatigue", &UOWSAttributeSet::execOnRep_Fatigue },
		{ "OnRep_FatigueRegenRate", &UOWSAttributeSet::execOnRep_FatigueRegenRate },
		{ "OnRep_ForceArmor", &UOWSAttributeSet::execOnRep_ForceArmor },
		{ "OnRep_Fortitude", &UOWSAttributeSet::execOnRep_Fortitude },
		{ "OnRep_Haste", &UOWSAttributeSet::execOnRep_Haste },
		{ "OnRep_Health", &UOWSAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegenRate", &UOWSAttributeSet::execOnRep_HealthRegenRate },
		{ "OnRep_HitDie", &UOWSAttributeSet::execOnRep_HitDie },
		{ "OnRep_Hunger", &UOWSAttributeSet::execOnRep_Hunger },
		{ "OnRep_Initiative", &UOWSAttributeSet::execOnRep_Initiative },
		{ "OnRep_Intellect", &UOWSAttributeSet::execOnRep_Intellect },
		{ "OnRep_Magic", &UOWSAttributeSet::execOnRep_Magic },
		{ "OnRep_MagicArmor", &UOWSAttributeSet::execOnRep_MagicArmor },
		{ "OnRep_Mana", &UOWSAttributeSet::execOnRep_Mana },
		{ "OnRep_ManaRegenRate", &UOWSAttributeSet::execOnRep_ManaRegenRate },
		{ "OnRep_MaxEndurance", &UOWSAttributeSet::execOnRep_MaxEndurance },
		{ "OnRep_MaxEnergy", &UOWSAttributeSet::execOnRep_MaxEnergy },
		{ "OnRep_MaxFatigue", &UOWSAttributeSet::execOnRep_MaxFatigue },
		{ "OnRep_MaxHealth", &UOWSAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UOWSAttributeSet::execOnRep_MaxMana },
		{ "OnRep_MaxStamina", &UOWSAttributeSet::execOnRep_MaxStamina },
		{ "OnRep_Multishot", &UOWSAttributeSet::execOnRep_Multishot },
		{ "OnRep_NaturalArmor", &UOWSAttributeSet::execOnRep_NaturalArmor },
		{ "OnRep_Parry", &UOWSAttributeSet::execOnRep_Parry },
		{ "OnRep_PhysicalArmor", &UOWSAttributeSet::execOnRep_PhysicalArmor },
		{ "OnRep_Range", &UOWSAttributeSet::execOnRep_Range },
		{ "OnRep_Reflex", &UOWSAttributeSet::execOnRep_Reflex },
		{ "OnRep_ReloadSpeed", &UOWSAttributeSet::execOnRep_ReloadSpeed },
		{ "OnRep_Resistance", &UOWSAttributeSet::execOnRep_Resistance },
		{ "OnRep_Speed", &UOWSAttributeSet::execOnRep_Speed },
		{ "OnRep_SpellPenetration", &UOWSAttributeSet::execOnRep_SpellPenetration },
		{ "OnRep_SpellPower", &UOWSAttributeSet::execOnRep_SpellPower },
		{ "OnRep_Spirit", &UOWSAttributeSet::execOnRep_Spirit },
		{ "OnRep_Stamina", &UOWSAttributeSet::execOnRep_Stamina },
		{ "OnRep_StaminaRegenRate", &UOWSAttributeSet::execOnRep_StaminaRegenRate },
		{ "OnRep_Strength", &UOWSAttributeSet::execOnRep_Strength },
		{ "OnRep_Thirst", &UOWSAttributeSet::execOnRep_Thirst },
		{ "OnRep_Versatility", &UOWSAttributeSet::execOnRep_Versatility },
		{ "OnRep_Willpower", &UOWSAttributeSet::execOnRep_Willpower },
		{ "OnRep_Wisdom", &UOWSAttributeSet::execOnRep_Wisdom },
		{ "OnRep_Wounds", &UOWSAttributeSet::execOnRep_Wounds },
		{ "OWSGetAgility", &UOWSAttributeSet::execOWSGetAgility },
		{ "OWSGetAttackPower", &UOWSAttributeSet::execOWSGetAttackPower },
		{ "OWSGetAttackSpeed", &UOWSAttributeSet::execOWSGetAttackSpeed },
		{ "OWSGetAvoidance", &UOWSAttributeSet::execOWSGetAvoidance },
		{ "OWSGetBaseAttack", &UOWSAttributeSet::execOWSGetBaseAttack },
		{ "OWSGetBaseAttackBonus", &UOWSAttributeSet::execOWSGetBaseAttackBonus },
		{ "OWSGetBonusArmor", &UOWSAttributeSet::execOWSGetBonusArmor },
		{ "OWSGetCharisma", &UOWSAttributeSet::execOWSGetCharisma },
		{ "OWSGetConstitution", &UOWSAttributeSet::execOWSGetConstitution },
		{ "OWSGetCritChance", &UOWSAttributeSet::execOWSGetCritChance },
		{ "OWSGetCritMultiplier", &UOWSAttributeSet::execOWSGetCritMultiplier },
		{ "OWSGetDefense", &UOWSAttributeSet::execOWSGetDefense },
		{ "OWSGetDexterity", &UOWSAttributeSet::execOWSGetDexterity },
		{ "OWSGetDodge", &UOWSAttributeSet::execOWSGetDodge },
		{ "OWSGetEndurance", &UOWSAttributeSet::execOWSGetEndurance },
		{ "OWSGetEnduranceRegenRate", &UOWSAttributeSet::execOWSGetEnduranceRegenRate },
		{ "OWSGetEnergy", &UOWSAttributeSet::execOWSGetEnergy },
		{ "OWSGetEnergyRegenRate", &UOWSAttributeSet::execOWSGetEnergyRegenRate },
		{ "OWSGetFatigue", &UOWSAttributeSet::execOWSGetFatigue },
		{ "OWSGetFatigueRegenRate", &UOWSAttributeSet::execOWSGetFatigueRegenRate },
		{ "OWSGetForceArmor", &UOWSAttributeSet::execOWSGetForceArmor },
		{ "OWSGetFortitude", &UOWSAttributeSet::execOWSGetFortitude },
		{ "OWSGetHaste", &UOWSAttributeSet::execOWSGetHaste },
		{ "OWSGetHealth", &UOWSAttributeSet::execOWSGetHealth },
		{ "OWSGetHealthRegenRate", &UOWSAttributeSet::execOWSGetHealthRegenRate },
		{ "OWSGetHitDie", &UOWSAttributeSet::execOWSGetHitDie },
		{ "OWSGetHunger", &UOWSAttributeSet::execOWSGetHunger },
		{ "OWSGetInitiative", &UOWSAttributeSet::execOWSGetInitiative },
		{ "OWSGetIntellect", &UOWSAttributeSet::execOWSGetIntellect },
		{ "OWSGetMagic", &UOWSAttributeSet::execOWSGetMagic },
		{ "OWSGetMagicArmor", &UOWSAttributeSet::execOWSGetMagicArmor },
		{ "OWSGetMana", &UOWSAttributeSet::execOWSGetMana },
		{ "OWSGetManaRegenRate", &UOWSAttributeSet::execOWSGetManaRegenRate },
		{ "OWSGetMaxEndurance", &UOWSAttributeSet::execOWSGetMaxEndurance },
		{ "OWSGetMaxEnergy", &UOWSAttributeSet::execOWSGetMaxEnergy },
		{ "OWSGetMaxFatigue", &UOWSAttributeSet::execOWSGetMaxFatigue },
		{ "OWSGetMaxHealth", &UOWSAttributeSet::execOWSGetMaxHealth },
		{ "OWSGetMaxMana", &UOWSAttributeSet::execOWSGetMaxMana },
		{ "OWSGetMaxStamina", &UOWSAttributeSet::execOWSGetMaxStamina },
		{ "OWSGetMultishot", &UOWSAttributeSet::execOWSGetMultishot },
		{ "OWSGetNaturalArmor", &UOWSAttributeSet::execOWSGetNaturalArmor },
		{ "OWSGetParry", &UOWSAttributeSet::execOWSGetParry },
		{ "OWSGetPhysicalArmor", &UOWSAttributeSet::execOWSGetPhysicalArmor },
		{ "OWSGetRange", &UOWSAttributeSet::execOWSGetRange },
		{ "OWSGetReflex", &UOWSAttributeSet::execOWSGetReflex },
		{ "OWSGetReloadSpeed", &UOWSAttributeSet::execOWSGetReloadSpeed },
		{ "OWSGetResistance", &UOWSAttributeSet::execOWSGetResistance },
		{ "OWSGetSpeed", &UOWSAttributeSet::execOWSGetSpeed },
		{ "OWSGetSpellPenetration", &UOWSAttributeSet::execOWSGetSpellPenetration },
		{ "OWSGetSpellPower", &UOWSAttributeSet::execOWSGetSpellPower },
		{ "OWSGetSpirit", &UOWSAttributeSet::execOWSGetSpirit },
		{ "OWSGetStamina", &UOWSAttributeSet::execOWSGetStamina },
		{ "OWSGetStaminaRegenRate", &UOWSAttributeSet::execOWSGetStaminaRegenRate },
		{ "OWSGetStrength", &UOWSAttributeSet::execOWSGetStrength },
		{ "OWSGetThirst", &UOWSAttributeSet::execOWSGetThirst },
		{ "OWSGetVersatility", &UOWSAttributeSet::execOWSGetVersatility },
		{ "OWSGetWillpower", &UOWSAttributeSet::execOWSGetWillpower },
		{ "OWSGetWisdom", &UOWSAttributeSet::execOWSGetWisdom },
		{ "OWSGetWounds", &UOWSAttributeSet::execOWSGetWounds },
		{ "OWSInitAgility", &UOWSAttributeSet::execOWSInitAgility },
		{ "OWSInitAttackPower", &UOWSAttributeSet::execOWSInitAttackPower },
		{ "OWSInitAttackSpeed", &UOWSAttributeSet::execOWSInitAttackSpeed },
		{ "OWSInitAvoidance", &UOWSAttributeSet::execOWSInitAvoidance },
		{ "OWSInitBaseAttack", &UOWSAttributeSet::execOWSInitBaseAttack },
		{ "OWSInitBaseAttackBonus", &UOWSAttributeSet::execOWSInitBaseAttackBonus },
		{ "OWSInitBonusArmor", &UOWSAttributeSet::execOWSInitBonusArmor },
		{ "OWSInitCharisma", &UOWSAttributeSet::execOWSInitCharisma },
		{ "OWSInitConstitution", &UOWSAttributeSet::execOWSInitConstitution },
		{ "OWSInitCritChance", &UOWSAttributeSet::execOWSInitCritChance },
		{ "OWSInitCritMultiplier", &UOWSAttributeSet::execOWSInitCritMultiplier },
		{ "OWSInitDefense", &UOWSAttributeSet::execOWSInitDefense },
		{ "OWSInitDexterity", &UOWSAttributeSet::execOWSInitDexterity },
		{ "OWSInitDodge", &UOWSAttributeSet::execOWSInitDodge },
		{ "OWSInitEndurance", &UOWSAttributeSet::execOWSInitEndurance },
		{ "OWSInitEnduranceRegenRate", &UOWSAttributeSet::execOWSInitEnduranceRegenRate },
		{ "OWSInitEnergy", &UOWSAttributeSet::execOWSInitEnergy },
		{ "OWSInitEnergyRegenRate", &UOWSAttributeSet::execOWSInitEnergyRegenRate },
		{ "OWSInitFatigue", &UOWSAttributeSet::execOWSInitFatigue },
		{ "OWSInitFatigueRegenRate", &UOWSAttributeSet::execOWSInitFatigueRegenRate },
		{ "OWSInitForceArmor", &UOWSAttributeSet::execOWSInitForceArmor },
		{ "OWSInitFortitude", &UOWSAttributeSet::execOWSInitFortitude },
		{ "OWSInitHaste", &UOWSAttributeSet::execOWSInitHaste },
		{ "OWSInitHealth", &UOWSAttributeSet::execOWSInitHealth },
		{ "OWSInitHealthRegenRate", &UOWSAttributeSet::execOWSInitHealthRegenRate },
		{ "OWSInitHitDie", &UOWSAttributeSet::execOWSInitHitDie },
		{ "OWSInitHunger", &UOWSAttributeSet::execOWSInitHunger },
		{ "OWSInitInitiative", &UOWSAttributeSet::execOWSInitInitiative },
		{ "OWSInitIntellect", &UOWSAttributeSet::execOWSInitIntellect },
		{ "OWSInitMagic", &UOWSAttributeSet::execOWSInitMagic },
		{ "OWSInitMagicArmor", &UOWSAttributeSet::execOWSInitMagicArmor },
		{ "OWSInitMana", &UOWSAttributeSet::execOWSInitMana },
		{ "OWSInitManaRegenRate", &UOWSAttributeSet::execOWSInitManaRegenRate },
		{ "OWSInitMaxEndurance", &UOWSAttributeSet::execOWSInitMaxEndurance },
		{ "OWSInitMaxEnergy", &UOWSAttributeSet::execOWSInitMaxEnergy },
		{ "OWSInitMaxFatigue", &UOWSAttributeSet::execOWSInitMaxFatigue },
		{ "OWSInitMaxHealth", &UOWSAttributeSet::execOWSInitMaxHealth },
		{ "OWSInitMaxMana", &UOWSAttributeSet::execOWSInitMaxMana },
		{ "OWSInitMaxStamina", &UOWSAttributeSet::execOWSInitMaxStamina },
		{ "OWSInitMultishot", &UOWSAttributeSet::execOWSInitMultishot },
		{ "OWSInitNaturalArmor", &UOWSAttributeSet::execOWSInitNaturalArmor },
		{ "OWSInitParry", &UOWSAttributeSet::execOWSInitParry },
		{ "OWSInitPhysicalArmor", &UOWSAttributeSet::execOWSInitPhysicalArmor },
		{ "OWSInitRange", &UOWSAttributeSet::execOWSInitRange },
		{ "OWSInitReflex", &UOWSAttributeSet::execOWSInitReflex },
		{ "OWSInitReloadSpeed", &UOWSAttributeSet::execOWSInitReloadSpeed },
		{ "OWSInitResistance", &UOWSAttributeSet::execOWSInitResistance },
		{ "OWSInitSpeed", &UOWSAttributeSet::execOWSInitSpeed },
		{ "OWSInitSpellPenetration", &UOWSAttributeSet::execOWSInitSpellPenetration },
		{ "OWSInitSpellPower", &UOWSAttributeSet::execOWSInitSpellPower },
		{ "OWSInitSpirit", &UOWSAttributeSet::execOWSInitSpirit },
		{ "OWSInitStamina", &UOWSAttributeSet::execOWSInitStamina },
		{ "OWSInitStaminaRegenRate", &UOWSAttributeSet::execOWSInitStaminaRegenRate },
		{ "OWSInitStrength", &UOWSAttributeSet::execOWSInitStrength },
		{ "OWSInitThirst", &UOWSAttributeSet::execOWSInitThirst },
		{ "OWSInitVersatility", &UOWSAttributeSet::execOWSInitVersatility },
		{ "OWSInitWillpower", &UOWSAttributeSet::execOWSInitWillpower },
		{ "OWSInitWisdom", &UOWSAttributeSet::execOWSInitWisdom },
		{ "OWSInitWounds", &UOWSAttributeSet::execOWSInitWounds },
		{ "OWSSetAgility", &UOWSAttributeSet::execOWSSetAgility },
		{ "OWSSetAttackPower", &UOWSAttributeSet::execOWSSetAttackPower },
		{ "OWSSetAttackSpeed", &UOWSAttributeSet::execOWSSetAttackSpeed },
		{ "OWSSetAvoidance", &UOWSAttributeSet::execOWSSetAvoidance },
		{ "OWSSetBaseAttack", &UOWSAttributeSet::execOWSSetBaseAttack },
		{ "OWSSetBaseAttackBonus", &UOWSAttributeSet::execOWSSetBaseAttackBonus },
		{ "OWSSetBonusArmor", &UOWSAttributeSet::execOWSSetBonusArmor },
		{ "OWSSetCharisma", &UOWSAttributeSet::execOWSSetCharisma },
		{ "OWSSetConstitution", &UOWSAttributeSet::execOWSSetConstitution },
		{ "OWSSetCritChance", &UOWSAttributeSet::execOWSSetCritChance },
		{ "OWSSetCritMultiplier", &UOWSAttributeSet::execOWSSetCritMultiplier },
		{ "OWSSetDefense", &UOWSAttributeSet::execOWSSetDefense },
		{ "OWSSetDexterity", &UOWSAttributeSet::execOWSSetDexterity },
		{ "OWSSetDodge", &UOWSAttributeSet::execOWSSetDodge },
		{ "OWSSetEndurance", &UOWSAttributeSet::execOWSSetEndurance },
		{ "OWSSetEnduranceRegenRate", &UOWSAttributeSet::execOWSSetEnduranceRegenRate },
		{ "OWSSetEnergy", &UOWSAttributeSet::execOWSSetEnergy },
		{ "OWSSetEnergyRegenRate", &UOWSAttributeSet::execOWSSetEnergyRegenRate },
		{ "OWSSetFatigue", &UOWSAttributeSet::execOWSSetFatigue },
		{ "OWSSetFatigueRegenRate", &UOWSAttributeSet::execOWSSetFatigueRegenRate },
		{ "OWSSetForceArmor", &UOWSAttributeSet::execOWSSetForceArmor },
		{ "OWSSetFortitude", &UOWSAttributeSet::execOWSSetFortitude },
		{ "OWSSetHaste", &UOWSAttributeSet::execOWSSetHaste },
		{ "OWSSetHealth", &UOWSAttributeSet::execOWSSetHealth },
		{ "OWSSetHealthRegenRate", &UOWSAttributeSet::execOWSSetHealthRegenRate },
		{ "OWSSetHitDie", &UOWSAttributeSet::execOWSSetHitDie },
		{ "OWSSetHunger", &UOWSAttributeSet::execOWSSetHunger },
		{ "OWSSetInitiative", &UOWSAttributeSet::execOWSSetInitiative },
		{ "OWSSetIntellect", &UOWSAttributeSet::execOWSSetIntellect },
		{ "OWSSetMagic", &UOWSAttributeSet::execOWSSetMagic },
		{ "OWSSetMagicArmor", &UOWSAttributeSet::execOWSSetMagicArmor },
		{ "OWSSetMana", &UOWSAttributeSet::execOWSSetMana },
		{ "OWSSetManaRegenRate", &UOWSAttributeSet::execOWSSetManaRegenRate },
		{ "OWSSetMaxEndurance", &UOWSAttributeSet::execOWSSetMaxEndurance },
		{ "OWSSetMaxEnergy", &UOWSAttributeSet::execOWSSetMaxEnergy },
		{ "OWSSetMaxFatigue", &UOWSAttributeSet::execOWSSetMaxFatigue },
		{ "OWSSetMaxHealth", &UOWSAttributeSet::execOWSSetMaxHealth },
		{ "OWSSetMaxMana", &UOWSAttributeSet::execOWSSetMaxMana },
		{ "OWSSetMaxStamina", &UOWSAttributeSet::execOWSSetMaxStamina },
		{ "OWSSetMultishot", &UOWSAttributeSet::execOWSSetMultishot },
		{ "OWSSetNaturalArmor", &UOWSAttributeSet::execOWSSetNaturalArmor },
		{ "OWSSetParry", &UOWSAttributeSet::execOWSSetParry },
		{ "OWSSetPhysicalArmor", &UOWSAttributeSet::execOWSSetPhysicalArmor },
		{ "OWSSetRange", &UOWSAttributeSet::execOWSSetRange },
		{ "OWSSetReflex", &UOWSAttributeSet::execOWSSetReflex },
		{ "OWSSetReloadSpeed", &UOWSAttributeSet::execOWSSetReloadSpeed },
		{ "OWSSetResistance", &UOWSAttributeSet::execOWSSetResistance },
		{ "OWSSetSpeed", &UOWSAttributeSet::execOWSSetSpeed },
		{ "OWSSetSpellPenetration", &UOWSAttributeSet::execOWSSetSpellPenetration },
		{ "OWSSetSpellPower", &UOWSAttributeSet::execOWSSetSpellPower },
		{ "OWSSetSpirit", &UOWSAttributeSet::execOWSSetSpirit },
		{ "OWSSetStamina", &UOWSAttributeSet::execOWSSetStamina },
		{ "OWSSetStaminaRegenRate", &UOWSAttributeSet::execOWSSetStaminaRegenRate },
		{ "OWSSetStrength", &UOWSAttributeSet::execOWSSetStrength },
		{ "OWSSetThirst", &UOWSAttributeSet::execOWSSetThirst },
		{ "OWSSetVersatility", &UOWSAttributeSet::execOWSSetVersatility },
		{ "OWSSetWillpower", &UOWSAttributeSet::execOWSSetWillpower },
		{ "OWSSetWisdom", &UOWSAttributeSet::execOWSSetWisdom },
		{ "OWSSetWounds", &UOWSAttributeSet::execOWSSetWounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAttributeSet);
UClass* Z_Construct_UClass_UOWSAttributeSet_NoRegister()
{
	return UOWSAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UOWSAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSAttributeSet.h" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhoAttackedUsLast_MetaData[] = {
		{ "Category", "Internal" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDie_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* BEGIN AUTO GENERATED ATTRIBUTES *///HitDie\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BEGIN AUTO GENERATED ATTRIBUTES //HitDie" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wounds_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wounds\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Thirst\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thirst" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hunger\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hunger" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HealthRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HealthRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mana\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxMana\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxMana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ManaRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ManaRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Energy\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Energy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxEnergy\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxEnergy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EnergyRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EnergyRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fatigue_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fatigue\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fatigue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFatigue_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxFatigue\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxFatigue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FatigueRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FatigueRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FatigueRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stamina\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxStamina\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxStamina" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//StaminaRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StaminaRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Endurance\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Endurance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEndurance_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MaxEndurance\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxEndurance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnduranceRegenRate_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//EnduranceRegenRate\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EnduranceRegenRate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Strength\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dexterity\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dexterity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constitution_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Constitution\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constitution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intellect_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Intellect\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intellect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wisdom_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wisdom\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wisdom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Charisma\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charisma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Agility\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agility" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spirit_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spirit\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spirit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Magic\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fortitude_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fortitude\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fortitude" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflex_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reflex\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reflex" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Willpower_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Willpower\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Willpower" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttack_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BaseAttack\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaseAttack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAttackBonus_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BaseAttackBonus\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaseAttackBonus" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AttackPower\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackPower" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AttackSpeed\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AttackSpeed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CritChance\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritMultiplier_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CritMultiplier\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritMultiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Haste_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Haste\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Haste" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPower_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SpellPower\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SpellPower" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellPenetration_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SpellPenetration\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SpellPenetration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Defense\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defense" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dodge_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dodge\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parry_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Parry\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parry" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Avoidance_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Avoidance\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Avoidance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Versatility_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Versatility\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Versatility" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multishot_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Multishot\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multishot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Initiative_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initiative\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiative" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaturalArmor_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NaturalArmor\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NaturalArmor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalArmor_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//PhysicalArmor\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysicalArmor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusArmor_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BonusArmor\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BonusArmor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceArmor_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ForceArmor\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ForceArmor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicArmor_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//MagicArmor\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MagicArmor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resistance_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Resistance\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resistance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ReloadSpeed\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReloadSpeed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Range\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "RPGAttributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "AttributeTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
#endif
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
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
		{ "ModuleRelativePath", "Public/OWSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Healing is just used for applying positive health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Healing (Its transient)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoAttackedUsLast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitDie;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Thirst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Energy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxEnergy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnergyRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fatigue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxFatigue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FatigueRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Endurance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxEndurance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnduranceRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constitution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intellect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wisdom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Agility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spirit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Magic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fortitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reflex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Willpower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAttack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAttackBonus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Haste;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpellPower;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpellPenetration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Defense;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dodge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Avoidance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Versatility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multishot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Initiative;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaturalArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonusArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForceArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicArmor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Agility, "OnRep_Agility" }, // 1302056876
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 4142693194
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_AttackSpeed, "OnRep_AttackSpeed" }, // 1877002051
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Avoidance, "OnRep_Avoidance" }, // 3110349430
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttack, "OnRep_BaseAttack" }, // 3777874938
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_BaseAttackBonus, "OnRep_BaseAttackBonus" }, // 4094501845
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_BonusArmor, "OnRep_BonusArmor" }, // 375678363
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Charisma, "OnRep_Charisma" }, // 3593862266
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Constitution, "OnRep_Constitution" }, // 1545231173
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritChance, "OnRep_CritChance" }, // 3815029605
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_CritMultiplier, "OnRep_CritMultiplier" }, // 1134175282
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Defense, "OnRep_Defense" }, // 957556529
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dexterity, "OnRep_Dexterity" }, // 4198842740
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Dodge, "OnRep_Dodge" }, // 1994787447
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Endurance, "OnRep_Endurance" }, // 823509894
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnduranceRegenRate, "OnRep_EnduranceRegenRate" }, // 4282003536
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Energy, "OnRep_Energy" }, // 3116157060
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_EnergyRegenRate, "OnRep_EnergyRegenRate" }, // 3173136928
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fatigue, "OnRep_Fatigue" }, // 1316301285
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_FatigueRegenRate, "OnRep_FatigueRegenRate" }, // 4126022356
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_ForceArmor, "OnRep_ForceArmor" }, // 1315583098
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Fortitude, "OnRep_Fortitude" }, // 1346636183
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Haste, "OnRep_Haste" }, // 4131150231
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Health, "OnRep_Health" }, // 2620088845
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 2268279298
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_HitDie, "OnRep_HitDie" }, // 1513137905
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Hunger, "OnRep_Hunger" }, // 2986104676
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Initiative, "OnRep_Initiative" }, // 715042631
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Intellect, "OnRep_Intellect" }, // 3938692246
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Magic, "OnRep_Magic" }, // 2109443597
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MagicArmor, "OnRep_MagicArmor" }, // 3240353958
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1712713485
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_ManaRegenRate, "OnRep_ManaRegenRate" }, // 842176992
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEndurance, "OnRep_MaxEndurance" }, // 3167862378
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxEnergy, "OnRep_MaxEnergy" }, // 4202817058
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxFatigue, "OnRep_MaxFatigue" }, // 2035582293
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 903968443
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 1244560498
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 2491310830
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Multishot, "OnRep_Multishot" }, // 1906213867
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_NaturalArmor, "OnRep_NaturalArmor" }, // 1933398040
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Parry, "OnRep_Parry" }, // 4044365472
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_PhysicalArmor, "OnRep_PhysicalArmor" }, // 3534171666
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Range, "OnRep_Range" }, // 2714827591
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Reflex, "OnRep_Reflex" }, // 668857154
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_ReloadSpeed, "OnRep_ReloadSpeed" }, // 668034229
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Resistance, "OnRep_Resistance" }, // 657181485
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Speed, "OnRep_Speed" }, // 4235741025
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPenetration, "OnRep_SpellPenetration" }, // 3951658757
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_SpellPower, "OnRep_SpellPower" }, // 1316886585
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Spirit, "OnRep_Spirit" }, // 2972175727
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 52659952
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_StaminaRegenRate, "OnRep_StaminaRegenRate" }, // 363850287
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 406291022
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Thirst, "OnRep_Thirst" }, // 2122620790
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Versatility, "OnRep_Versatility" }, // 2156564808
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Willpower, "OnRep_Willpower" }, // 863182603
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wisdom, "OnRep_Wisdom" }, // 3455107260
		{ &Z_Construct_UFunction_UOWSAttributeSet_OnRep_Wounds, "OnRep_Wounds" }, // 3871644596
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetAgility, "OWSGetAgility" }, // 2380921187
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackPower, "OWSGetAttackPower" }, // 1844876662
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetAttackSpeed, "OWSGetAttackSpeed" }, // 1064901094
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetAvoidance, "OWSGetAvoidance" }, // 2838431517
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttack, "OWSGetBaseAttack" }, // 2846401690
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetBaseAttackBonus, "OWSGetBaseAttackBonus" }, // 1864258339
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetBonusArmor, "OWSGetBonusArmor" }, // 3985559936
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetCharisma, "OWSGetCharisma" }, // 614023748
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetConstitution, "OWSGetConstitution" }, // 276556595
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritChance, "OWSGetCritChance" }, // 2183262168
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetCritMultiplier, "OWSGetCritMultiplier" }, // 3751842224
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetDefense, "OWSGetDefense" }, // 1385576503
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetDexterity, "OWSGetDexterity" }, // 29317923
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetDodge, "OWSGetDodge" }, // 6416190
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetEndurance, "OWSGetEndurance" }, // 204746817
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnduranceRegenRate, "OWSGetEnduranceRegenRate" }, // 3199413143
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergy, "OWSGetEnergy" }, // 747901992
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetEnergyRegenRate, "OWSGetEnergyRegenRate" }, // 2708518616
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigue, "OWSGetFatigue" }, // 3118158529
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetFatigueRegenRate, "OWSGetFatigueRegenRate" }, // 4064587671
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetForceArmor, "OWSGetForceArmor" }, // 3807380158
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetFortitude, "OWSGetFortitude" }, // 1786430538
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetHaste, "OWSGetHaste" }, // 13811635
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealth, "OWSGetHealth" }, // 577473763
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetHealthRegenRate, "OWSGetHealthRegenRate" }, // 2277551530
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetHitDie, "OWSGetHitDie" }, // 258674674
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetHunger, "OWSGetHunger" }, // 514246684
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetInitiative, "OWSGetInitiative" }, // 1872084473
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetIntellect, "OWSGetIntellect" }, // 3158834860
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagic, "OWSGetMagic" }, // 41023364
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMagicArmor, "OWSGetMagicArmor" }, // 52574816
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMana, "OWSGetMana" }, // 3125084502
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetManaRegenRate, "OWSGetManaRegenRate" }, // 721885095
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEndurance, "OWSGetMaxEndurance" }, // 4135017995
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxEnergy, "OWSGetMaxEnergy" }, // 1881828079
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxFatigue, "OWSGetMaxFatigue" }, // 1558807268
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxHealth, "OWSGetMaxHealth" }, // 2897444680
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxMana, "OWSGetMaxMana" }, // 3162247318
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMaxStamina, "OWSGetMaxStamina" }, // 2312943837
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetMultishot, "OWSGetMultishot" }, // 2248483198
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetNaturalArmor, "OWSGetNaturalArmor" }, // 654737547
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetParry, "OWSGetParry" }, // 855039327
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetPhysicalArmor, "OWSGetPhysicalArmor" }, // 36671232
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetRange, "OWSGetRange" }, // 1023107936
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetReflex, "OWSGetReflex" }, // 256049961
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetReloadSpeed, "OWSGetReloadSpeed" }, // 3599278886
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetResistance, "OWSGetResistance" }, // 1828832083
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpeed, "OWSGetSpeed" }, // 3696926034
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPenetration, "OWSGetSpellPenetration" }, // 2294819983
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpellPower, "OWSGetSpellPower" }, // 3385288697
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetSpirit, "OWSGetSpirit" }, // 1004565342
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetStamina, "OWSGetStamina" }, // 4184040305
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetStaminaRegenRate, "OWSGetStaminaRegenRate" }, // 586066847
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetStrength, "OWSGetStrength" }, // 3897913823
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetThirst, "OWSGetThirst" }, // 1772245091
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetVersatility, "OWSGetVersatility" }, // 2834900481
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetWillpower, "OWSGetWillpower" }, // 588496726
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetWisdom, "OWSGetWisdom" }, // 2668176443
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSGetWounds, "OWSGetWounds" }, // 759875124
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitAgility, "OWSInitAgility" }, // 4161218487
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackPower, "OWSInitAttackPower" }, // 865031325
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitAttackSpeed, "OWSInitAttackSpeed" }, // 183892391
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitAvoidance, "OWSInitAvoidance" }, // 487572961
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttack, "OWSInitBaseAttack" }, // 4099069310
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitBaseAttackBonus, "OWSInitBaseAttackBonus" }, // 1878102966
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitBonusArmor, "OWSInitBonusArmor" }, // 3733010474
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitCharisma, "OWSInitCharisma" }, // 3734340655
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitConstitution, "OWSInitConstitution" }, // 1735102049
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritChance, "OWSInitCritChance" }, // 2313722790
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitCritMultiplier, "OWSInitCritMultiplier" }, // 3639405872
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitDefense, "OWSInitDefense" }, // 2034626665
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitDexterity, "OWSInitDexterity" }, // 3273162887
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitDodge, "OWSInitDodge" }, // 3485493036
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitEndurance, "OWSInitEndurance" }, // 2791859019
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnduranceRegenRate, "OWSInitEnduranceRegenRate" }, // 52053895
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergy, "OWSInitEnergy" }, // 2842474742
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitEnergyRegenRate, "OWSInitEnergyRegenRate" }, // 1182687019
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigue, "OWSInitFatigue" }, // 1920498211
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitFatigueRegenRate, "OWSInitFatigueRegenRate" }, // 1661253928
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitForceArmor, "OWSInitForceArmor" }, // 396247148
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitFortitude, "OWSInitFortitude" }, // 302370865
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitHaste, "OWSInitHaste" }, // 1922833303
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealth, "OWSInitHealth" }, // 485307854
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitHealthRegenRate, "OWSInitHealthRegenRate" }, // 4135874017
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitHitDie, "OWSInitHitDie" }, // 915693125
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitHunger, "OWSInitHunger" }, // 3597037933
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitInitiative, "OWSInitInitiative" }, // 1344932000
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitIntellect, "OWSInitIntellect" }, // 1881073899
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagic, "OWSInitMagic" }, // 3447900408
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMagicArmor, "OWSInitMagicArmor" }, // 4063042422
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMana, "OWSInitMana" }, // 4027084890
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitManaRegenRate, "OWSInitManaRegenRate" }, // 3648721312
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEndurance, "OWSInitMaxEndurance" }, // 982958332
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxEnergy, "OWSInitMaxEnergy" }, // 3853833485
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxFatigue, "OWSInitMaxFatigue" }, // 546885252
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxHealth, "OWSInitMaxHealth" }, // 4207555638
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxMana, "OWSInitMaxMana" }, // 2732972513
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMaxStamina, "OWSInitMaxStamina" }, // 2513268498
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitMultishot, "OWSInitMultishot" }, // 1453543572
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitNaturalArmor, "OWSInitNaturalArmor" }, // 2348742881
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitParry, "OWSInitParry" }, // 3784493012
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitPhysicalArmor, "OWSInitPhysicalArmor" }, // 856285328
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitRange, "OWSInitRange" }, // 1184101228
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitReflex, "OWSInitReflex" }, // 2821738875
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitReloadSpeed, "OWSInitReloadSpeed" }, // 2518385039
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitResistance, "OWSInitResistance" }, // 3855852282
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpeed, "OWSInitSpeed" }, // 774617217
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPenetration, "OWSInitSpellPenetration" }, // 1163701485
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpellPower, "OWSInitSpellPower" }, // 3677777062
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitSpirit, "OWSInitSpirit" }, // 2605508225
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitStamina, "OWSInitStamina" }, // 3234671764
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitStaminaRegenRate, "OWSInitStaminaRegenRate" }, // 2682378629
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitStrength, "OWSInitStrength" }, // 654631675
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitThirst, "OWSInitThirst" }, // 3698389554
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitVersatility, "OWSInitVersatility" }, // 3505257247
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitWillpower, "OWSInitWillpower" }, // 1502469285
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitWisdom, "OWSInitWisdom" }, // 3445078124
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSInitWounds, "OWSInitWounds" }, // 4228367899
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetAgility, "OWSSetAgility" }, // 129536887
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackPower, "OWSSetAttackPower" }, // 1805389199
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetAttackSpeed, "OWSSetAttackSpeed" }, // 4051275042
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetAvoidance, "OWSSetAvoidance" }, // 136487031
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttack, "OWSSetBaseAttack" }, // 845708442
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetBaseAttackBonus, "OWSSetBaseAttackBonus" }, // 1454218796
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetBonusArmor, "OWSSetBonusArmor" }, // 3737464987
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetCharisma, "OWSSetCharisma" }, // 76577146
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetConstitution, "OWSSetConstitution" }, // 3304919093
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritChance, "OWSSetCritChance" }, // 1599253402
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetCritMultiplier, "OWSSetCritMultiplier" }, // 2752574792
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetDefense, "OWSSetDefense" }, // 1435156400
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetDexterity, "OWSSetDexterity" }, // 3538069304
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetDodge, "OWSSetDodge" }, // 1457671146
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetEndurance, "OWSSetEndurance" }, // 4161853951
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnduranceRegenRate, "OWSSetEnduranceRegenRate" }, // 176935439
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergy, "OWSSetEnergy" }, // 1722382996
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetEnergyRegenRate, "OWSSetEnergyRegenRate" }, // 3976571210
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigue, "OWSSetFatigue" }, // 177820962
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetFatigueRegenRate, "OWSSetFatigueRegenRate" }, // 4287589498
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetForceArmor, "OWSSetForceArmor" }, // 1908355572
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetFortitude, "OWSSetFortitude" }, // 4031142840
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetHaste, "OWSSetHaste" }, // 4122863140
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealth, "OWSSetHealth" }, // 1085893582
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetHealthRegenRate, "OWSSetHealthRegenRate" }, // 282673708
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetHitDie, "OWSSetHitDie" }, // 1857214841
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetHunger, "OWSSetHunger" }, // 299542649
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetInitiative, "OWSSetInitiative" }, // 3903335916
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetIntellect, "OWSSetIntellect" }, // 1194213725
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagic, "OWSSetMagic" }, // 72952468
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMagicArmor, "OWSSetMagicArmor" }, // 3980939363
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMana, "OWSSetMana" }, // 2274723924
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetManaRegenRate, "OWSSetManaRegenRate" }, // 3453844482
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEndurance, "OWSSetMaxEndurance" }, // 1418186961
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxEnergy, "OWSSetMaxEnergy" }, // 2692596299
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxFatigue, "OWSSetMaxFatigue" }, // 1340696553
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxHealth, "OWSSetMaxHealth" }, // 2218330800
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxMana, "OWSSetMaxMana" }, // 2421615870
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMaxStamina, "OWSSetMaxStamina" }, // 1581435929
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetMultishot, "OWSSetMultishot" }, // 313200206
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetNaturalArmor, "OWSSetNaturalArmor" }, // 401806158
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetParry, "OWSSetParry" }, // 64146859
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetPhysicalArmor, "OWSSetPhysicalArmor" }, // 2865411220
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetRange, "OWSSetRange" }, // 1626068283
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetReflex, "OWSSetReflex" }, // 3861268472
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetReloadSpeed, "OWSSetReloadSpeed" }, // 427400785
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetResistance, "OWSSetResistance" }, // 1418575242
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpeed, "OWSSetSpeed" }, // 1904866440
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPenetration, "OWSSetSpellPenetration" }, // 2390053465
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpellPower, "OWSSetSpellPower" }, // 730701367
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetSpirit, "OWSSetSpirit" }, // 3926248336
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetStamina, "OWSSetStamina" }, // 1995382880
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetStaminaRegenRate, "OWSSetStaminaRegenRate" }, // 1486666865
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetStrength, "OWSSetStrength" }, // 2438733579
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetThirst, "OWSSetThirst" }, // 2160686929
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetVersatility, "OWSSetVersatility" }, // 126886639
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetWillpower, "OWSSetWillpower" }, // 2177344478
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetWisdom, "OWSSetWisdom" }, // 137567623
		{ &Z_Construct_UFunction_UOWSAttributeSet_OWSSetWounds, "OWSSetWounds" }, // 3387174677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_WhoAttackedUsLast = { "WhoAttackedUsLast", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, WhoAttackedUsLast), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhoAttackedUsLast_MetaData), NewProp_WhoAttackedUsLast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_HitDie = { "HitDie", "OnRep_HitDie", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, HitDie), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDie_MetaData), NewProp_HitDie_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Wounds = { "Wounds", "OnRep_Wounds", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Wounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wounds_MetaData), NewProp_Wounds_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Thirst = { "Thirst", "OnRep_Thirst", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Thirst), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thirst_MetaData), NewProp_Thirst_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Hunger = { "Hunger", "OnRep_Hunger", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Hunger), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", "OnRep_ManaRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, ManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Energy = { "Energy", "OnRep_Energy", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Energy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Energy_MetaData), NewProp_Energy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxEnergy = { "MaxEnergy", "OnRep_MaxEnergy", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxEnergy), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnergy_MetaData), NewProp_MaxEnergy_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_EnergyRegenRate = { "EnergyRegenRate", "OnRep_EnergyRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, EnergyRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnergyRegenRate_MetaData), NewProp_EnergyRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Fatigue = { "Fatigue", "OnRep_Fatigue", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Fatigue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fatigue_MetaData), NewProp_Fatigue_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxFatigue = { "MaxFatigue", "OnRep_MaxFatigue", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxFatigue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFatigue_MetaData), NewProp_MaxFatigue_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_FatigueRegenRate = { "FatigueRegenRate", "OnRep_FatigueRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, FatigueRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FatigueRegenRate_MetaData), NewProp_FatigueRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", "OnRep_StaminaRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Endurance = { "Endurance", "OnRep_Endurance", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Endurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxEndurance = { "MaxEndurance", "OnRep_MaxEndurance", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MaxEndurance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEndurance_MetaData), NewProp_MaxEndurance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_EnduranceRegenRate = { "EnduranceRegenRate", "OnRep_EnduranceRegenRate", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, EnduranceRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnduranceRegenRate_MetaData), NewProp_EnduranceRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Dexterity = { "Dexterity", "OnRep_Dexterity", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Constitution = { "Constitution", "OnRep_Constitution", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Constitution), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constitution_MetaData), NewProp_Constitution_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Intellect = { "Intellect", "OnRep_Intellect", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Intellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intellect_MetaData), NewProp_Intellect_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Wisdom = { "Wisdom", "OnRep_Wisdom", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Wisdom), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wisdom_MetaData), NewProp_Wisdom_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Charisma = { "Charisma", "OnRep_Charisma", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Charisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Agility = { "Agility", "OnRep_Agility", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Agility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agility_MetaData), NewProp_Agility_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Spirit = { "Spirit", "OnRep_Spirit", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Spirit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spirit_MetaData), NewProp_Spirit_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Magic = { "Magic", "OnRep_Magic", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Magic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_MetaData), NewProp_Magic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Fortitude = { "Fortitude", "OnRep_Fortitude", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Fortitude), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fortitude_MetaData), NewProp_Fortitude_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Reflex = { "Reflex", "OnRep_Reflex", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Reflex), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflex_MetaData), NewProp_Reflex_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Willpower = { "Willpower", "OnRep_Willpower", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Willpower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Willpower_MetaData), NewProp_Willpower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BaseAttack = { "BaseAttack", "OnRep_BaseAttack", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, BaseAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttack_MetaData), NewProp_BaseAttack_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BaseAttackBonus = { "BaseAttackBonus", "OnRep_BaseAttackBonus", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, BaseAttackBonus), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAttackBonus_MetaData), NewProp_BaseAttackBonus_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPower_MetaData), NewProp_AttackPower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_AttackSpeed = { "AttackSpeed", "OnRep_AttackSpeed", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSpeed_MetaData), NewProp_AttackSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_CritChance = { "CritChance", "OnRep_CritChance", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, CritChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritChance_MetaData), NewProp_CritChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_CritMultiplier = { "CritMultiplier", "OnRep_CritMultiplier", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, CritMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritMultiplier_MetaData), NewProp_CritMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Haste = { "Haste", "OnRep_Haste", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Haste), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Haste_MetaData), NewProp_Haste_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_SpellPower = { "SpellPower", "OnRep_SpellPower", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, SpellPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPower_MetaData), NewProp_SpellPower_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_SpellPenetration = { "SpellPenetration", "OnRep_SpellPenetration", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, SpellPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellPenetration_MetaData), NewProp_SpellPenetration_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Defense = { "Defense", "OnRep_Defense", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Defense), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Defense_MetaData), NewProp_Defense_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Dodge = { "Dodge", "OnRep_Dodge", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Dodge), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dodge_MetaData), NewProp_Dodge_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Parry = { "Parry", "OnRep_Parry", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Parry), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parry_MetaData), NewProp_Parry_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Avoidance = { "Avoidance", "OnRep_Avoidance", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Avoidance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Avoidance_MetaData), NewProp_Avoidance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Versatility = { "Versatility", "OnRep_Versatility", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Versatility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Versatility_MetaData), NewProp_Versatility_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Multishot = { "Multishot", "OnRep_Multishot", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Multishot), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multishot_MetaData), NewProp_Multishot_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Initiative = { "Initiative", "OnRep_Initiative", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Initiative), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Initiative_MetaData), NewProp_Initiative_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_NaturalArmor = { "NaturalArmor", "OnRep_NaturalArmor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, NaturalArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaturalArmor_MetaData), NewProp_NaturalArmor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_PhysicalArmor = { "PhysicalArmor", "OnRep_PhysicalArmor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, PhysicalArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalArmor_MetaData), NewProp_PhysicalArmor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BonusArmor = { "BonusArmor", "OnRep_BonusArmor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, BonusArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusArmor_MetaData), NewProp_BonusArmor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ForceArmor = { "ForceArmor", "OnRep_ForceArmor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, ForceArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceArmor_MetaData), NewProp_ForceArmor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MagicArmor = { "MagicArmor", "OnRep_MagicArmor", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, MagicArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicArmor_MetaData), NewProp_MagicArmor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Resistance = { "Resistance", "OnRep_Resistance", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Resistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resistance_MetaData), NewProp_Resistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", "OnRep_ReloadSpeed", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, ReloadSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadSpeed_MetaData), NewProp_ReloadSpeed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Range = { "Range", "OnRep_Range", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Range), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_WhoAttackedUsLast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_HitDie,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Wounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Thirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Energy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxEnergy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_EnergyRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Fatigue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxFatigue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_FatigueRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Endurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MaxEndurance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_EnduranceRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Constitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Intellect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Wisdom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Agility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Spirit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Magic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Fortitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Reflex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Willpower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BaseAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BaseAttackBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_AttackPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_AttackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_CritChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_CritMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Haste,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_SpellPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_SpellPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Defense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Dodge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Parry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Avoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Versatility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Multishot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Initiative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_NaturalArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_PhysicalArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_BonusArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ForceArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_MagicArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Resistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_ReloadSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSAttributeSet_Statics::NewProp_Healing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAttributeSet_Statics::ClassParams = {
	&UOWSAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAttributeSet_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAttributeSet()
{
	if (!Z_Registration_Info_UClass_UOWSAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAttributeSet.OuterSingleton, Z_Construct_UClass_UOWSAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAttributeSet.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAttributeSet>()
{
	return UOWSAttributeSet::StaticClass();
}
void UOWSAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_HitDie(TEXT("HitDie"));
	static const FName Name_Wounds(TEXT("Wounds"));
	static const FName Name_Thirst(TEXT("Thirst"));
	static const FName Name_Hunger(TEXT("Hunger"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_ManaRegenRate(TEXT("ManaRegenRate"));
	static const FName Name_Energy(TEXT("Energy"));
	static const FName Name_MaxEnergy(TEXT("MaxEnergy"));
	static const FName Name_EnergyRegenRate(TEXT("EnergyRegenRate"));
	static const FName Name_Fatigue(TEXT("Fatigue"));
	static const FName Name_MaxFatigue(TEXT("MaxFatigue"));
	static const FName Name_FatigueRegenRate(TEXT("FatigueRegenRate"));
	static const FName Name_Stamina(TEXT("Stamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_StaminaRegenRate(TEXT("StaminaRegenRate"));
	static const FName Name_Endurance(TEXT("Endurance"));
	static const FName Name_MaxEndurance(TEXT("MaxEndurance"));
	static const FName Name_EnduranceRegenRate(TEXT("EnduranceRegenRate"));
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Dexterity(TEXT("Dexterity"));
	static const FName Name_Constitution(TEXT("Constitution"));
	static const FName Name_Intellect(TEXT("Intellect"));
	static const FName Name_Wisdom(TEXT("Wisdom"));
	static const FName Name_Charisma(TEXT("Charisma"));
	static const FName Name_Agility(TEXT("Agility"));
	static const FName Name_Spirit(TEXT("Spirit"));
	static const FName Name_Magic(TEXT("Magic"));
	static const FName Name_Fortitude(TEXT("Fortitude"));
	static const FName Name_Reflex(TEXT("Reflex"));
	static const FName Name_Willpower(TEXT("Willpower"));
	static const FName Name_BaseAttack(TEXT("BaseAttack"));
	static const FName Name_BaseAttackBonus(TEXT("BaseAttackBonus"));
	static const FName Name_AttackPower(TEXT("AttackPower"));
	static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
	static const FName Name_CritChance(TEXT("CritChance"));
	static const FName Name_CritMultiplier(TEXT("CritMultiplier"));
	static const FName Name_Haste(TEXT("Haste"));
	static const FName Name_SpellPower(TEXT("SpellPower"));
	static const FName Name_SpellPenetration(TEXT("SpellPenetration"));
	static const FName Name_Defense(TEXT("Defense"));
	static const FName Name_Dodge(TEXT("Dodge"));
	static const FName Name_Parry(TEXT("Parry"));
	static const FName Name_Avoidance(TEXT("Avoidance"));
	static const FName Name_Versatility(TEXT("Versatility"));
	static const FName Name_Multishot(TEXT("Multishot"));
	static const FName Name_Initiative(TEXT("Initiative"));
	static const FName Name_NaturalArmor(TEXT("NaturalArmor"));
	static const FName Name_PhysicalArmor(TEXT("PhysicalArmor"));
	static const FName Name_BonusArmor(TEXT("BonusArmor"));
	static const FName Name_ForceArmor(TEXT("ForceArmor"));
	static const FName Name_MagicArmor(TEXT("MagicArmor"));
	static const FName Name_Resistance(TEXT("Resistance"));
	static const FName Name_ReloadSpeed(TEXT("ReloadSpeed"));
	static const FName Name_Range(TEXT("Range"));
	static const FName Name_Speed(TEXT("Speed"));
	const bool bIsValid = true
		&& Name_HitDie == ClassReps[(int32)ENetFields_Private::HitDie].Property->GetFName()
		&& Name_Wounds == ClassReps[(int32)ENetFields_Private::Wounds].Property->GetFName()
		&& Name_Thirst == ClassReps[(int32)ENetFields_Private::Thirst].Property->GetFName()
		&& Name_Hunger == ClassReps[(int32)ENetFields_Private::Hunger].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_ManaRegenRate == ClassReps[(int32)ENetFields_Private::ManaRegenRate].Property->GetFName()
		&& Name_Energy == ClassReps[(int32)ENetFields_Private::Energy].Property->GetFName()
		&& Name_MaxEnergy == ClassReps[(int32)ENetFields_Private::MaxEnergy].Property->GetFName()
		&& Name_EnergyRegenRate == ClassReps[(int32)ENetFields_Private::EnergyRegenRate].Property->GetFName()
		&& Name_Fatigue == ClassReps[(int32)ENetFields_Private::Fatigue].Property->GetFName()
		&& Name_MaxFatigue == ClassReps[(int32)ENetFields_Private::MaxFatigue].Property->GetFName()
		&& Name_FatigueRegenRate == ClassReps[(int32)ENetFields_Private::FatigueRegenRate].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_StaminaRegenRate == ClassReps[(int32)ENetFields_Private::StaminaRegenRate].Property->GetFName()
		&& Name_Endurance == ClassReps[(int32)ENetFields_Private::Endurance].Property->GetFName()
		&& Name_MaxEndurance == ClassReps[(int32)ENetFields_Private::MaxEndurance].Property->GetFName()
		&& Name_EnduranceRegenRate == ClassReps[(int32)ENetFields_Private::EnduranceRegenRate].Property->GetFName()
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Dexterity == ClassReps[(int32)ENetFields_Private::Dexterity].Property->GetFName()
		&& Name_Constitution == ClassReps[(int32)ENetFields_Private::Constitution].Property->GetFName()
		&& Name_Intellect == ClassReps[(int32)ENetFields_Private::Intellect].Property->GetFName()
		&& Name_Wisdom == ClassReps[(int32)ENetFields_Private::Wisdom].Property->GetFName()
		&& Name_Charisma == ClassReps[(int32)ENetFields_Private::Charisma].Property->GetFName()
		&& Name_Agility == ClassReps[(int32)ENetFields_Private::Agility].Property->GetFName()
		&& Name_Spirit == ClassReps[(int32)ENetFields_Private::Spirit].Property->GetFName()
		&& Name_Magic == ClassReps[(int32)ENetFields_Private::Magic].Property->GetFName()
		&& Name_Fortitude == ClassReps[(int32)ENetFields_Private::Fortitude].Property->GetFName()
		&& Name_Reflex == ClassReps[(int32)ENetFields_Private::Reflex].Property->GetFName()
		&& Name_Willpower == ClassReps[(int32)ENetFields_Private::Willpower].Property->GetFName()
		&& Name_BaseAttack == ClassReps[(int32)ENetFields_Private::BaseAttack].Property->GetFName()
		&& Name_BaseAttackBonus == ClassReps[(int32)ENetFields_Private::BaseAttackBonus].Property->GetFName()
		&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName()
		&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
		&& Name_CritChance == ClassReps[(int32)ENetFields_Private::CritChance].Property->GetFName()
		&& Name_CritMultiplier == ClassReps[(int32)ENetFields_Private::CritMultiplier].Property->GetFName()
		&& Name_Haste == ClassReps[(int32)ENetFields_Private::Haste].Property->GetFName()
		&& Name_SpellPower == ClassReps[(int32)ENetFields_Private::SpellPower].Property->GetFName()
		&& Name_SpellPenetration == ClassReps[(int32)ENetFields_Private::SpellPenetration].Property->GetFName()
		&& Name_Defense == ClassReps[(int32)ENetFields_Private::Defense].Property->GetFName()
		&& Name_Dodge == ClassReps[(int32)ENetFields_Private::Dodge].Property->GetFName()
		&& Name_Parry == ClassReps[(int32)ENetFields_Private::Parry].Property->GetFName()
		&& Name_Avoidance == ClassReps[(int32)ENetFields_Private::Avoidance].Property->GetFName()
		&& Name_Versatility == ClassReps[(int32)ENetFields_Private::Versatility].Property->GetFName()
		&& Name_Multishot == ClassReps[(int32)ENetFields_Private::Multishot].Property->GetFName()
		&& Name_Initiative == ClassReps[(int32)ENetFields_Private::Initiative].Property->GetFName()
		&& Name_NaturalArmor == ClassReps[(int32)ENetFields_Private::NaturalArmor].Property->GetFName()
		&& Name_PhysicalArmor == ClassReps[(int32)ENetFields_Private::PhysicalArmor].Property->GetFName()
		&& Name_BonusArmor == ClassReps[(int32)ENetFields_Private::BonusArmor].Property->GetFName()
		&& Name_ForceArmor == ClassReps[(int32)ENetFields_Private::ForceArmor].Property->GetFName()
		&& Name_MagicArmor == ClassReps[(int32)ENetFields_Private::MagicArmor].Property->GetFName()
		&& Name_Resistance == ClassReps[(int32)ENetFields_Private::Resistance].Property->GetFName()
		&& Name_ReloadSpeed == ClassReps[(int32)ENetFields_Private::ReloadSpeed].Property->GetFName()
		&& Name_Range == ClassReps[(int32)ENetFields_Private::Range].Property->GetFName()
		&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOWSAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAttributeSet);
UOWSAttributeSet::~UOWSAttributeSet() {}
// End Class UOWSAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAttributeSet, UOWSAttributeSet::StaticClass, TEXT("UOWSAttributeSet"), &Z_Registration_Info_UClass_UOWSAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAttributeSet), 367869367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_1042448072(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
