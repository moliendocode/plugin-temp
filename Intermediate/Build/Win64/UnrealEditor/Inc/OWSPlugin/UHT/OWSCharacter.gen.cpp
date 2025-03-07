// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacter.h"
#include "OWSPlugin/Public/DataTypes/OWSDataTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryData();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Delegate FOnCharacterDataReceivedDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms
	{
		FCharacterData CharacterData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterData_MetaData), NewProp_CharacterData_MetaData) }; // 2676746057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::NewProp_CharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnCharacterDataReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCharacterDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterDataReceivedDelegate, FCharacterData const& CharacterData)
{
	struct _Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms
	{
		FCharacterData CharacterData;
	};
	_Script_OWSPlugin_eventOnCharacterDataReceivedDelegate_Parms Parms;
	Parms.CharacterData=CharacterData;
	OnCharacterDataReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCharacterDataReceivedDelegate

// Begin Delegate FOnInventoryDataReceivedDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms
	{
		TArray<FInventoryData> InventoryData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::NewProp_InventoryData_Inner = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(0, nullptr) }; // 2983649378
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms, InventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryData_MetaData), NewProp_InventoryData_MetaData) }; // 2983649378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::NewProp_InventoryData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::NewProp_InventoryData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnInventoryDataReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryDataReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryDataReceivedDelegate, TArray<FInventoryData> const& InventoryData)
{
	struct _Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms
	{
		TArray<FInventoryData> InventoryData;
	};
	_Script_OWSPlugin_eventOnInventoryDataReceivedDelegate_Parms Parms;
	Parms.InventoryData=InventoryData;
	OnInventoryDataReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInventoryDataReceivedDelegate

// Begin Delegate FOnCharacterStatsReceivedDelegate
struct Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms
	{
		FCharacterStats CharacterStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStats_MetaData), NewProp_CharacterStats_MetaData) }; // 3500993001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::NewProp_CharacterStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "OnCharacterStatsReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::_Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCharacterStatsReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCharacterStatsReceivedDelegate, FCharacterStats const& CharacterStats)
{
	struct _Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms
	{
		FCharacterStats CharacterStats;
	};
	_Script_OWSPlugin_eventOnCharacterStatsReceivedDelegate_Parms Parms;
	Parms.CharacterStats=CharacterStats;
	OnCharacterStatsReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCharacterStatsReceivedDelegate

// Begin Class AOWSCharacter Function Client_RejectMove
struct OWSCharacter_eventClient_RejectMove_Parms
{
	FVector_NetQuantize CorrectLocation;
};
static const FName NAME_AOWSCharacter_Client_RejectMove = FName(TEXT("Client_RejectMove"));
void AOWSCharacter::Client_RejectMove(FVector_NetQuantize CorrectLocation)
{
	OWSCharacter_eventClient_RejectMove_Parms Parms;
	Parms.CorrectLocation=CorrectLocation;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacter_Client_RejectMove);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CorrectLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::NewProp_CorrectLocation = { "CorrectLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventClient_RejectMove_Parms, CorrectLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::NewProp_CorrectLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "Client_RejectMove", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::PropPointers), sizeof(OWSCharacter_eventClient_RejectMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacter_eventClient_RejectMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_Client_RejectMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_Client_RejectMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execClient_RejectMove)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_CorrectLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_RejectMove_Implementation(Z_Param_CorrectLocation);
	P_NATIVE_END;
}
// End Class AOWSCharacter Function Client_RejectMove

// Begin Class AOWSCharacter Function GetCharacterData
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics
{
	struct OWSCharacter_eventGetCharacterData_Parms
	{
		FCharacterData OutCharacterData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getters\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::NewProp_OutCharacterData = { "OutCharacterData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterData_Parms, OutCharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(0, nullptr) }; // 2676746057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::NewProp_OutCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::OWSCharacter_eventGetCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::OWSCharacter_eventGetCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterData)
{
	P_GET_STRUCT_REF(FCharacterData,Z_Param_Out_OutCharacterData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterData(Z_Param_Out_OutCharacterData);
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterData

// Begin Class AOWSCharacter Function GetCharacterStats
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics
{
	struct OWSCharacter_eventGetCharacterStats_Parms
	{
		FCharacterStats OutCharacterStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCharacterStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::NewProp_OutCharacterStats = { "OutCharacterStats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterStats_Parms, OutCharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(0, nullptr) }; // 3500993001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::NewProp_OutCharacterStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterStats", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::OWSCharacter_eventGetCharacterStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::OWSCharacter_eventGetCharacterStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterStats)
{
	P_GET_STRUCT_REF(FCharacterStats,Z_Param_Out_OutCharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterStats(Z_Param_Out_OutCharacterStats);
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterStats

// Begin Class AOWSCharacter Function GetInventoryData
struct Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics
{
	struct OWSCharacter_eventGetInventoryData_Parms
	{
		TArray<FInventoryData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(0, nullptr) }; // 2983649378
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetInventoryData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2983649378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetInventoryData", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::OWSCharacter_eventGetInventoryData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::OWSCharacter_eventGetInventoryData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetInventoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetInventoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetInventoryData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryData>*)Z_Param__Result=P_THIS->GetInventoryData();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetInventoryData

// Begin Class AOWSCharacter Function OnRep_CharacterData
struct Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OnRep Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnRep Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "OnRep_CharacterData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execOnRep_CharacterData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CharacterData();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function OnRep_CharacterData

// Begin Class AOWSCharacter Function OnRep_CharacterStats
struct Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "OnRep_CharacterStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execOnRep_CharacterStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CharacterStats();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function OnRep_CharacterStats

// Begin Class AOWSCharacter Function OnRep_InventoryData
struct Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "OnRep_InventoryData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execOnRep_InventoryData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_InventoryData();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function OnRep_InventoryData

// Begin Class AOWSCharacter Function Server_Jump
static const FName NAME_AOWSCharacter_Server_Jump = FName(TEXT("Server_Jump"));
void AOWSCharacter::Server_Jump()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacter_Server_Jump);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSCharacter_Server_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_Server_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "Server_Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Server_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_Server_Jump_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacter_Server_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_Server_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execServer_Jump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_Jump_Validate())
	{
		RPC_ValidateFailed(TEXT("Server_Jump_Validate"));
		return;
	}
	P_THIS->Server_Jump_Implementation();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function Server_Jump

// Begin Class AOWSCharacter Function Server_Move
struct OWSCharacter_eventServer_Move_Parms
{
	FVector_NetQuantize NewLocation;
};
static const FName NAME_AOWSCharacter_Server_Move = FName(TEXT("Server_Move"));
void AOWSCharacter::Server_Move(FVector_NetQuantize NewLocation)
{
	OWSCharacter_eventServer_Move_Parms Parms;
	Parms.NewLocation=NewLocation;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacter_Server_Move);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RPC function to move the player on the server\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC function to move the player on the server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventServer_Move_Parms, NewLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "Server_Move", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::PropPointers), sizeof(OWSCharacter_eventServer_Move_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacter_eventServer_Move_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_Server_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_Server_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execServer_Move)
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
// End Class AOWSCharacter Function Server_Move

// Begin Class AOWSCharacter Function UpdateCharacterData
struct OWSCharacter_eventUpdateCharacterData_Parms
{
	FCharacterData InCharacterData;
	TArray<FInventoryData> InInventoryData;
	FCharacterStats InCharacterStats;
};
static const FName NAME_AOWSCharacter_UpdateCharacterData = FName(TEXT("UpdateCharacterData"));
void AOWSCharacter::UpdateCharacterData(FCharacterData const& InCharacterData, TArray<FInventoryData> const& InInventoryData, FCharacterStats const& InCharacterStats)
{
	OWSCharacter_eventUpdateCharacterData_Parms Parms;
	Parms.InCharacterData=InCharacterData;
	Parms.InInventoryData=InInventoryData;
	Parms.InCharacterStats=InCharacterStats;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacter_UpdateCharacterData);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Main function to update character values - Server Side Only\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main function to update character values - Server Side Only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInventoryData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InInventoryData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InInventoryData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCharacterStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InCharacterData = { "InCharacterData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventUpdateCharacterData_Parms, InCharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCharacterData_MetaData), NewProp_InCharacterData_MetaData) }; // 2676746057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InInventoryData_Inner = { "InInventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(0, nullptr) }; // 2983649378
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InInventoryData = { "InInventoryData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventUpdateCharacterData_Parms, InInventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInventoryData_MetaData), NewProp_InInventoryData_MetaData) }; // 2983649378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InCharacterStats = { "InCharacterStats", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventUpdateCharacterData_Parms, InCharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCharacterStats_MetaData), NewProp_InCharacterStats_MetaData) }; // 3500993001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InInventoryData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InInventoryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::NewProp_InCharacterStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "UpdateCharacterData", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::PropPointers), sizeof(OWSCharacter_eventUpdateCharacterData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacter_eventUpdateCharacterData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execUpdateCharacterData)
{
	P_GET_STRUCT(FCharacterData,Z_Param_InCharacterData);
	P_GET_TARRAY(FInventoryData,Z_Param_InInventoryData);
	P_GET_STRUCT(FCharacterStats,Z_Param_InCharacterStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->UpdateCharacterData_Validate(Z_Param_InCharacterData,Z_Param_InInventoryData,Z_Param_InCharacterStats))
	{
		RPC_ValidateFailed(TEXT("UpdateCharacterData_Validate"));
		return;
	}
	P_THIS->UpdateCharacterData_Implementation(Z_Param_InCharacterData,Z_Param_InInventoryData,Z_Param_InCharacterStats);
	P_NATIVE_END;
}
// End Class AOWSCharacter Function UpdateCharacterData

// Begin Class AOWSCharacter
void AOWSCharacter::StaticRegisterNativesAOWSCharacter()
{
	UClass* Class = AOWSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_RejectMove", &AOWSCharacter::execClient_RejectMove },
		{ "GetCharacterData", &AOWSCharacter::execGetCharacterData },
		{ "GetCharacterStats", &AOWSCharacter::execGetCharacterStats },
		{ "GetInventoryData", &AOWSCharacter::execGetInventoryData },
		{ "OnRep_CharacterData", &AOWSCharacter::execOnRep_CharacterData },
		{ "OnRep_CharacterStats", &AOWSCharacter::execOnRep_CharacterStats },
		{ "OnRep_InventoryData", &AOWSCharacter::execOnRep_InventoryData },
		{ "Server_Jump", &AOWSCharacter::execServer_Jump },
		{ "Server_Move", &AOWSCharacter::execServer_Move },
		{ "UpdateCharacterData", &AOWSCharacter::execUpdateCharacterData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSCharacter);
UClass* Z_Construct_UClass_AOWSCharacter_NoRegister()
{
	return AOWSCharacter::StaticClass();
}
struct Z_Construct_UClass_AOWSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OWSCharacter.h" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[] = {
		{ "Category", "OWS|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replicated Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStats_MetaData[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDataReceived_MetaData[] = {
		{ "Category", "OWS|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates - Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates - Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryDataReceived_MetaData[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCharacterStatsReceived_MetaData[] = {
		{ "Category", "OWS|Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventoryData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDataReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryDataReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterStatsReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacter_Client_RejectMove, "Client_RejectMove" }, // 140356667
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterData, "GetCharacterData" }, // 347406624
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterStats, "GetCharacterStats" }, // 1620191961
		{ &Z_Construct_UFunction_AOWSCharacter_GetInventoryData, "GetInventoryData" }, // 736995159
		{ &Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterData, "OnRep_CharacterData" }, // 974547810
		{ &Z_Construct_UFunction_AOWSCharacter_OnRep_CharacterStats, "OnRep_CharacterStats" }, // 2747375158
		{ &Z_Construct_UFunction_AOWSCharacter_OnRep_InventoryData, "OnRep_InventoryData" }, // 1198312294
		{ &Z_Construct_UFunction_AOWSCharacter_Server_Jump, "Server_Jump" }, // 2109768420
		{ &Z_Construct_UFunction_AOWSCharacter_Server_Move, "Server_Move" }, // 402022509
		{ &Z_Construct_UFunction_AOWSCharacter_UpdateCharacterData, "UpdateCharacterData" }, // 2575419406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterData = { "CharacterData", "OnRep_CharacterData", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, CharacterData), Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterData_MetaData), NewProp_CharacterData_MetaData) }; // 2676746057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoryData_Inner = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryData, METADATA_PARAMS(0, nullptr) }; // 2983649378
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoryData = { "InventoryData", "OnRep_InventoryData", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, InventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryData_MetaData), NewProp_InventoryData_MetaData) }; // 2983649378
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterStats = { "CharacterStats", "OnRep_CharacterStats", (EPropertyFlags)0x0010000100020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStats_MetaData), NewProp_CharacterStats_MetaData) }; // 3500993001
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnCharacterDataReceived = { "OnCharacterDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, OnCharacterDataReceived), Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterDataReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterDataReceived_MetaData), NewProp_OnCharacterDataReceived_MetaData) }; // 2819759044
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnInventoryDataReceived = { "OnInventoryDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, OnInventoryDataReceived), Z_Construct_UDelegateFunction_OWSPlugin_OnInventoryDataReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryDataReceived_MetaData), NewProp_OnInventoryDataReceived_MetaData) }; // 1677698801
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnCharacterStatsReceived = { "OnCharacterStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, OnCharacterStatsReceived), Z_Construct_UDelegateFunction_OWSPlugin_OnCharacterStatsReceivedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCharacterStatsReceived_MetaData), NewProp_OnCharacterStatsReceived_MetaData) }; // 3598862271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoryData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_InventoryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnCharacterDataReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnInventoryDataReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_OnCharacterStatsReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacter_Statics::ClassParams = {
	&AOWSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSCharacter()
{
	if (!Z_Registration_Info_UClass_AOWSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSCharacter.OuterSingleton, Z_Construct_UClass_AOWSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSCharacter.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacter>()
{
	return AOWSCharacter::StaticClass();
}
void AOWSCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CharacterData(TEXT("CharacterData"));
	static const FName Name_InventoryData(TEXT("InventoryData"));
	static const FName Name_CharacterStats(TEXT("CharacterStats"));
	const bool bIsValid = true
		&& Name_CharacterData == ClassReps[(int32)ENetFields_Private::CharacterData].Property->GetFName()
		&& Name_InventoryData == ClassReps[(int32)ENetFields_Private::InventoryData].Property->GetFName()
		&& Name_CharacterStats == ClassReps[(int32)ENetFields_Private::CharacterStats].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacter);
AOWSCharacter::~AOWSCharacter() {}
// End Class AOWSCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSCharacter, AOWSCharacter::StaticClass, TEXT("AOWSCharacter"), &Z_Registration_Info_UClass_AOWSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSCharacter), 1672400880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_1359109024(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
