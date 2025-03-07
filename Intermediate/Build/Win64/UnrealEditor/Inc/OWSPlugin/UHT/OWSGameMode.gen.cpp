// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameMode.h"
#include "OWSPlugin/Public/OWS2API.h"
#include "OWSPlugin/Public/OWSInventoryItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameMode();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSGameMode_NoRegister();
OWSPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharactersOnlineStruct();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemStruct();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneInstance();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FCharactersOnlineStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharactersOnlineStruct;
class UScriptStruct* FCharactersOnlineStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharactersOnlineStruct, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharactersOnlineStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharactersOnlineStruct>()
{
	return FCharactersOnlineStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fame_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserGUID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginDate_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapInstanceID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldServerID_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "Characters Online Struct" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Fame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CreateDate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoginDate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapInstanceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharactersOnlineStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharName_MetaData), NewProp_CharName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Alignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame = { "Fame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Fame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fame_MetaData), NewProp_Fame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, TeamNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNumber_MetaData), NewProp_TeamNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID = { "UserGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, UserGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserGUID_MetaData), NewProp_UserGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, CreateDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDate_MetaData), NewProp_CreateDate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate = { "LoginDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, LoginDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginDate_MetaData), NewProp_LoginDate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, UserSessionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID = { "MapInstanceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapInstanceID_MetaData), NewProp_MapInstanceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, WorldServerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldServerID_MetaData), NewProp_WorldServerID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, ServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIP_MetaData), NewProp_ServerIP_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharactersOnlineStruct, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Fame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_TeamNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_CreateDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_LoginDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_WorldServerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharactersOnlineStruct",
	Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::PropPointers),
	sizeof(FCharactersOnlineStruct),
	alignof(FCharactersOnlineStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharactersOnlineStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.InnerSingleton, Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharactersOnlineStruct.InnerSingleton;
}
// End ScriptStruct FCharactersOnlineStruct

// Begin Delegate FItemLibraryLoadedSignature
struct Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin, nullptr, "ItemLibraryLoadedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FItemLibraryLoadedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemLibraryLoadedSignature)
{
	ItemLibraryLoadedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FItemLibraryLoadedSignature

// Begin Class AOWSGameMode Function AddItemMeshToAllPlayers
struct Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics
{
	struct OWSGameMode_eventAddItemMeshToAllPlayers_Parms
	{
		FString ItemName;
		int32 ItemMeshID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMeshID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemMeshID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddItemMeshToAllPlayers_Parms, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::NewProp_ItemMeshID = { "ItemMeshID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddItemMeshToAllPlayers_Parms, ItemMeshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMeshID_MetaData), NewProp_ItemMeshID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::NewProp_ItemMeshID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "AddItemMeshToAllPlayers", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::OWSGameMode_eventAddItemMeshToAllPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::OWSGameMode_eventAddItemMeshToAllPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execAddItemMeshToAllPlayers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemMeshID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemMeshToAllPlayers(Z_Param_ItemName,Z_Param_ItemMeshID);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function AddItemMeshToAllPlayers

// Begin Class AOWSGameMode Function AddOrUpdateGlobalDataItem
struct Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics
{
	struct OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms
	{
		FString GlobalDataKey;
		FString GlobalDataValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add or Update Global Data Item\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or Update Global Data Item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue = { "GlobalDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms, GlobalDataValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::NewProp_GlobalDataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "AddOrUpdateGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::OWSGameMode_eventAddOrUpdateGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execAddOrUpdateGlobalDataItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateGlobalDataItem(Z_Param_GlobalDataKey,Z_Param_GlobalDataValue);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function AddOrUpdateGlobalDataItem

// Begin Class AOWSGameMode Function AddZone
struct Z_Construct_UFunction_AOWSGameMode_AddZone_Statics
{
	struct OWSGameMode_eventAddZone_Parms
	{
		FString ZoneName;
		FString MapName;
		int32 SoftPlayerCap;
		int32 HardPlayerCap;
		int32 MapMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add Zone\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add Zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddZone_Parms, ZoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddZone_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_SoftPlayerCap = { "SoftPlayerCap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddZone_Parms, SoftPlayerCap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_HardPlayerCap = { "HardPlayerCap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddZone_Parms, HardPlayerCap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_MapMode = { "MapMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventAddZone_Parms, MapMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_SoftPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_HardPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::NewProp_MapMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "AddZone", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::OWSGameMode_eventAddZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::OWSGameMode_eventAddZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_AddZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_AddZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execAddZone)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ZoneName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_GET_PROPERTY(FIntProperty,Z_Param_SoftPlayerCap);
	P_GET_PROPERTY(FIntProperty,Z_Param_HardPlayerCap);
	P_GET_PROPERTY(FIntProperty,Z_Param_MapMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddZone(Z_Param_ZoneName,Z_Param_MapName,Z_Param_SoftPlayerCap,Z_Param_HardPlayerCap,Z_Param_MapMode);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function AddZone

// Begin Class AOWSGameMode Function ErrorAddOrUpdateGlobalDataItem
struct OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem = FName(TEXT("ErrorAddOrUpdateGlobalDataItem"));
void AOWSGameMode::ErrorAddOrUpdateGlobalDataItem(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorAddOrUpdateGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::PropPointers), sizeof(OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorAddOrUpdateGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorAddOrUpdateGlobalDataItem

// Begin Class AOWSGameMode Function ErrorAddZone
struct OWSGameMode_eventErrorAddZone_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorAddZone = FName(TEXT("ErrorAddZone"));
void AOWSGameMode::ErrorAddZone(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorAddZone_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorAddZone);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorAddZone_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorAddZone", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::PropPointers), sizeof(OWSGameMode_eventErrorAddZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorAddZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorAddZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorAddZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorAddZone

// Begin Class AOWSGameMode Function ErrorGetAllCharactersOnline
struct OWSGameMode_eventErrorGetAllCharactersOnline_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetAllCharactersOnline = FName(TEXT("ErrorGetAllCharactersOnline"));
void AOWSGameMode::ErrorGetAllCharactersOnline(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetAllCharactersOnline_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetAllCharactersOnline);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UFUNCTION(BlueprintImplementableEvent, Category = \"Character\")\n\x09\x09void NotifyGetAllCharactersOnline(const TArray<FCharactersOnlineStruct> &CharactersOnline);*/" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, Category = \"Character\")\n               void NotifyGetAllCharactersOnline(const TArray<FCharactersOnlineStruct> &CharactersOnline);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetAllCharactersOnline_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetAllCharactersOnline", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetAllCharactersOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetAllCharactersOnline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetAllCharactersOnline

// Begin Class AOWSGameMode Function ErrorGetAllInventoryItems
struct OWSGameMode_eventErrorGetAllInventoryItems_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetAllInventoryItems = FName(TEXT("ErrorGetAllInventoryItems"));
void AOWSGameMode::ErrorGetAllInventoryItems(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetAllInventoryItems_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetAllInventoryItems);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetAllInventoryItems_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetAllInventoryItems", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetAllInventoryItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetAllInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetAllInventoryItems

// Begin Class AOWSGameMode Function ErrorGetCurrentWorldTime
struct OWSGameMode_eventErrorGetCurrentWorldTime_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetCurrentWorldTime = FName(TEXT("ErrorGetCurrentWorldTime"));
void AOWSGameMode::ErrorGetCurrentWorldTime(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetCurrentWorldTime_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetCurrentWorldTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetCurrentWorldTime_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetCurrentWorldTime", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetCurrentWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetCurrentWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetCurrentWorldTime

// Begin Class AOWSGameMode Function ErrorGetGlobalDataItem
struct OWSGameMode_eventErrorGetGlobalDataItem_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetGlobalDataItem = FName(TEXT("ErrorGetGlobalDataItem"));
void AOWSGameMode::ErrorGetGlobalDataItem(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetGlobalDataItem_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetGlobalDataItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetGlobalDataItem_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetGlobalDataItem

// Begin Class AOWSGameMode Function ErrorGetZoneInstanceFromZoneInstanceID
struct OWSGameMode_eventErrorGetZoneInstanceFromZoneInstanceID_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID = FName(TEXT("ErrorGetZoneInstanceFromZoneInstanceID"));
void AOWSGameMode::ErrorGetZoneInstanceFromZoneInstanceID(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetZoneInstanceFromZoneInstanceID_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetZoneInstanceFromZoneInstanceID_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetZoneInstanceFromZoneInstanceID", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetZoneInstanceFromZoneInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetZoneInstanceFromZoneInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetZoneInstanceFromZoneInstanceID

// Begin Class AOWSGameMode Function ErrorGetZoneInstancesForZone
struct OWSGameMode_eventErrorGetZoneInstancesForZone_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSGameMode_ErrorGetZoneInstancesForZone = FName(TEXT("ErrorGetZoneInstancesForZone"));
void AOWSGameMode::ErrorGetZoneInstancesForZone(const FString& ErrorMsg)
{
	OWSGameMode_eventErrorGetZoneInstancesForZone_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_ErrorGetZoneInstancesForZone);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventErrorGetZoneInstancesForZone_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "ErrorGetZoneInstancesForZone", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::PropPointers), sizeof(OWSGameMode_eventErrorGetZoneInstancesForZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventErrorGetZoneInstancesForZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function ErrorGetZoneInstancesForZone

// Begin Class AOWSGameMode Function FindItemDefinition
struct Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics
{
	struct OWSGameMode_eventFindItemDefinition_Parms
	{
		FString ItemName;
		FInventoryItemStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventFindItemDefinition_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventFindItemDefinition_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(0, nullptr) }; // 3913247499
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "FindItemDefinition", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::OWSGameMode_eventFindItemDefinition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::OWSGameMode_eventFindItemDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_FindItemDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_FindItemDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execFindItemDefinition)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemStruct*)Z_Param__Result=P_THIS->FindItemDefinition(Z_Param_ItemName);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function FindItemDefinition

// Begin Class AOWSGameMode Function GetAddressURLAndPort
struct Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics
{
	struct OWSGameMode_eventGetAddressURLAndPort_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventGetAddressURLAndPort_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAddressURLAndPort", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::OWSGameMode_eventGetAddressURLAndPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::OWSGameMode_eventGetAddressURLAndPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetAddressURLAndPort)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAddressURLAndPort();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetAddressURLAndPort

// Begin Class AOWSGameMode Function GetAllCharactersOnline
struct Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get all players online\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all players online" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAllCharactersOnline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetAllCharactersOnline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllCharactersOnline();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetAllCharactersOnline

// Begin Class AOWSGameMode Function GetAllInventoryItems
struct Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get All Inventory Items\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get All Inventory Items" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetAllInventoryItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetAllInventoryItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllInventoryItems();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetAllInventoryItems

// Begin Class AOWSGameMode Function GetCurrentWorldTime
struct Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Current World Time\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Current World Time" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetCurrentWorldTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetCurrentWorldTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurrentWorldTime();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetCurrentWorldTime

// Begin Class AOWSGameMode Function GetGlobalDataItem
struct Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics
{
	struct OWSGameMode_eventGetGlobalDataItem_Parms
	{
		FString GlobalDataKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Global Data Item\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Global Data Item" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventGetGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::NewProp_GlobalDataKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::OWSGameMode_eventGetGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::OWSGameMode_eventGetGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetGlobalDataItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GlobalDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetGlobalDataItem(Z_Param_GlobalDataKey);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetGlobalDataItem

// Begin Class AOWSGameMode Function GetZoneInstanceFromZoneInstanceID
struct Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics
{
	struct OWSGameMode_eventGetZoneInstanceFromZoneInstanceID_Parms
	{
		int32 LookupZoneInstanceID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Lookup a zone instance from a given port\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lookup a zone instance from a given port" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LookupZoneInstanceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::NewProp_LookupZoneInstanceID = { "LookupZoneInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventGetZoneInstanceFromZoneInstanceID_Parms, LookupZoneInstanceID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::NewProp_LookupZoneInstanceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetZoneInstanceFromZoneInstanceID", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::OWSGameMode_eventGetZoneInstanceFromZoneInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::OWSGameMode_eventGetZoneInstanceFromZoneInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetZoneInstanceFromZoneInstanceID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LookupZoneInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetZoneInstanceFromZoneInstanceID(Z_Param_LookupZoneInstanceID);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetZoneInstanceFromZoneInstanceID

// Begin Class AOWSGameMode Function GetZoneInstancesForZone
struct Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics
{
	struct OWSGameMode_eventGetZoneInstancesForZone_Parms
	{
		FString ZoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get all running zone instances for a Zone\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all running zone instances for a Zone" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventGetZoneInstancesForZone_Parms, ZoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "GetZoneInstancesForZone", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::OWSGameMode_eventGetZoneInstancesForZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::OWSGameMode_eventGetZoneInstancesForZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execGetZoneInstancesForZone)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ZoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetZoneInstancesForZone(Z_Param_ZoneName);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function GetZoneInstancesForZone

// Begin Class AOWSGameMode Function IsPlayerOnline
struct Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics
{
	struct OWSGameMode_eventIsPlayerOnline_Parms
	{
		FString CharacterName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is player online\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is player online" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventIsPlayerOnline_Parms, CharacterName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSGameMode_eventIsPlayerOnline_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSGameMode_eventIsPlayerOnline_Parms), &Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "IsPlayerOnline", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::OWSGameMode_eventIsPlayerOnline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::OWSGameMode_eventIsPlayerOnline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execIsPlayerOnline)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerOnline(Z_Param_CharacterName);
	P_NATIVE_END;
}
// End Class AOWSGameMode Function IsPlayerOnline

// Begin Class AOWSGameMode Function NotifyAddOrUpdateGlobalDataItem
static const FName NAME_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem = FName(TEXT("NotifyAddOrUpdateGlobalDataItem"));
void AOWSGameMode::NotifyAddOrUpdateGlobalDataItem()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyAddOrUpdateGlobalDataItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyAddOrUpdateGlobalDataItem

// Begin Class AOWSGameMode Function NotifyAddZone
static const FName NAME_AOWSGameMode_NotifyAddZone = FName(TEXT("NotifyAddZone"));
void AOWSGameMode::NotifyAddZone()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyAddZone);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyAddZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyAddZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyAddZone", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyAddZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyAddZone_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyAddZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyAddZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyAddZone

// Begin Class AOWSGameMode Function NotifyGetAllInventoryItems
static const FName NAME_AOWSGameMode_NotifyGetAllInventoryItems = FName(TEXT("NotifyGetAllInventoryItems"));
void AOWSGameMode::NotifyGetAllInventoryItems()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyGetAllInventoryItems);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetAllInventoryItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyGetAllInventoryItems

// Begin Class AOWSGameMode Function NotifyGetCurrentWorldTime
struct OWSGameMode_eventNotifyGetCurrentWorldTime_Parms
{
	float CurrentWorldTime;
};
static const FName NAME_AOWSGameMode_NotifyGetCurrentWorldTime = FName(TEXT("NotifyGetCurrentWorldTime"));
void AOWSGameMode::NotifyGetCurrentWorldTime(const float CurrentWorldTime)
{
	OWSGameMode_eventNotifyGetCurrentWorldTime_Parms Parms;
	Parms.CurrentWorldTime=CurrentWorldTime;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyGetCurrentWorldTime);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWorldTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentWorldTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime = { "CurrentWorldTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetCurrentWorldTime_Parms, CurrentWorldTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWorldTime_MetaData), NewProp_CurrentWorldTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::NewProp_CurrentWorldTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetCurrentWorldTime", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::PropPointers), sizeof(OWSGameMode_eventNotifyGetCurrentWorldTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventNotifyGetCurrentWorldTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyGetCurrentWorldTime

// Begin Class AOWSGameMode Function NotifyGetGlobalDataItem
struct OWSGameMode_eventNotifyGetGlobalDataItem_Parms
{
	FString GlobalDataKey;
	FString GlobalDataValue;
};
static const FName NAME_AOWSGameMode_NotifyGetGlobalDataItem = FName(TEXT("NotifyGetGlobalDataItem"));
void AOWSGameMode::NotifyGetGlobalDataItem(const FString& GlobalDataKey, const FString& GlobalDataValue)
{
	OWSGameMode_eventNotifyGetGlobalDataItem_Parms Parms;
	Parms.GlobalDataKey=GlobalDataKey;
	Parms.GlobalDataValue=GlobalDataValue;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyGetGlobalDataItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Global Data" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDataKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDataValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetGlobalDataItem_Parms, GlobalDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDataKey_MetaData), NewProp_GlobalDataKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataValue = { "GlobalDataValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetGlobalDataItem_Parms, GlobalDataValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDataValue_MetaData), NewProp_GlobalDataValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::NewProp_GlobalDataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetGlobalDataItem", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::PropPointers), sizeof(OWSGameMode_eventNotifyGetGlobalDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventNotifyGetGlobalDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyGetGlobalDataItem

// Begin Class AOWSGameMode Function NotifyGetZoneInstanceFromZoneInstanceID
struct OWSGameMode_eventNotifyGetZoneInstanceFromZoneInstanceID_Parms
{
	FString ZoneName;
};
static const FName NAME_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID = FName(TEXT("NotifyGetZoneInstanceFromZoneInstanceID"));
void AOWSGameMode::NotifyGetZoneInstanceFromZoneInstanceID(const FString& ZoneName)
{
	OWSGameMode_eventNotifyGetZoneInstanceFromZoneInstanceID_Parms Parms;
	Parms.ZoneName=ZoneName;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetZoneInstanceFromZoneInstanceID_Parms, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetZoneInstanceFromZoneInstanceID", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::PropPointers), sizeof(OWSGameMode_eventNotifyGetZoneInstanceFromZoneInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventNotifyGetZoneInstanceFromZoneInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyGetZoneInstanceFromZoneInstanceID

// Begin Class AOWSGameMode Function NotifyGetZoneInstancesForZone
struct OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms
{
	TArray<FZoneInstance> ZoneInstances;
};
static const FName NAME_AOWSGameMode_NotifyGetZoneInstancesForZone = FName(TEXT("NotifyGetZoneInstancesForZone"));
void AOWSGameMode::NotifyGetZoneInstancesForZone(TArray<FZoneInstance> const& ZoneInstances)
{
	OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms Parms;
	Parms.ZoneInstances=ZoneInstances;
	UFunction* Func = FindFunctionChecked(NAME_AOWSGameMode_NotifyGetZoneInstancesForZone);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoneInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_Inner = { "ZoneInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FZoneInstance, METADATA_PARAMS(0, nullptr) }; // 763714394
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances = { "ZoneInstances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms, ZoneInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneInstances_MetaData), NewProp_ZoneInstances_MetaData) }; // 763714394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::NewProp_ZoneInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "NotifyGetZoneInstancesForZone", nullptr, nullptr, Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::PropPointers), sizeof(OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSGameMode_eventNotifyGetZoneInstancesForZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSGameMode Function NotifyGetZoneInstancesForZone

// Begin Class AOWSGameMode Function SaveAllPlayerLocations
struct Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Save all player locations\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save all player locations" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "SaveAllPlayerLocations", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execSaveAllPlayerLocations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAllPlayerLocations();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function SaveAllPlayerLocations

// Begin Class AOWSGameMode Function UpdateNumberOfPlayers
struct Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Zones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Number of Players\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Number of Players" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSGameMode, nullptr, "UpdateNumberOfPlayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSGameMode::execUpdateNumberOfPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNumberOfPlayers();
	P_NATIVE_END;
}
// End Class AOWSGameMode Function UpdateNumberOfPlayers

// Begin Class AOWSGameMode
void AOWSGameMode::StaticRegisterNativesAOWSGameMode()
{
	UClass* Class = AOWSGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemMeshToAllPlayers", &AOWSGameMode::execAddItemMeshToAllPlayers },
		{ "AddOrUpdateGlobalDataItem", &AOWSGameMode::execAddOrUpdateGlobalDataItem },
		{ "AddZone", &AOWSGameMode::execAddZone },
		{ "FindItemDefinition", &AOWSGameMode::execFindItemDefinition },
		{ "GetAddressURLAndPort", &AOWSGameMode::execGetAddressURLAndPort },
		{ "GetAllCharactersOnline", &AOWSGameMode::execGetAllCharactersOnline },
		{ "GetAllInventoryItems", &AOWSGameMode::execGetAllInventoryItems },
		{ "GetCurrentWorldTime", &AOWSGameMode::execGetCurrentWorldTime },
		{ "GetGlobalDataItem", &AOWSGameMode::execGetGlobalDataItem },
		{ "GetZoneInstanceFromZoneInstanceID", &AOWSGameMode::execGetZoneInstanceFromZoneInstanceID },
		{ "GetZoneInstancesForZone", &AOWSGameMode::execGetZoneInstancesForZone },
		{ "IsPlayerOnline", &AOWSGameMode::execIsPlayerOnline },
		{ "SaveAllPlayerLocations", &AOWSGameMode::execSaveAllPlayerLocations },
		{ "UpdateNumberOfPlayers", &AOWSGameMode::execUpdateNumberOfPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSGameMode);
UClass* Z_Construct_UClass_AOWSGameMode_NoRegister()
{
	return AOWSGameMode::StaticClass();
}
struct Z_Construct_UClass_AOWSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OWSGameMode.h" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemLibraryLoadedEvent_MetaData[] = {
		{ "Category", "Item Library Loaded" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugStartLocation_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugCharacterName_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllInventoryItems_MetaData[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshItemsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersOnline_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IAmZoneName_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneInstanceID_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetCharactersOnlineIntervalInSeconds_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateServerStatusEveryXSeconds_MetaData[] = {
		{ "Category", "Zones" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveIntervalInSeconds_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//SaveAllPlayerLocations Batch Saving Process\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SaveAllPlayerLocations Batch Saving Process" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitSaveIntoHowManyGroups_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalSecondsOffset_MetaData[] = {
		{ "Category", "TimeOfDay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time of Day\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time of Day" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLengthInSeconds_MetaData[] = {
		{ "Category", "TimeOfDay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The time offset when this instance started\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time offset when this instance started" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DaysPerLunarCycle_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DaysPerSolarCycle_MetaData[] = {
		{ "Category", "TimeOfDay" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSAPICustomerKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2APIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2InstanceManagementAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWS2CharacterPersistenceAPIPath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSEncryptionKey_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/OWSGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemLibraryLoadedEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugStartLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugCharacterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllInventoryItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllInventoryItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshItemsMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshItemsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshItemsMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharactersOnline_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersOnline;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IAmZoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneInstanceID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GetCharactersOnlineIntervalInSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateServerStatusEveryXSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SaveIntervalInSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitSaveIntoHowManyGroups;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalSecondsOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLengthInSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DaysPerLunarCycle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DaysPerSolarCycle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSAPICustomerKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2APIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2InstanceManagementAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWS2CharacterPersistenceAPIPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OWSEncryptionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSGameMode_AddItemMeshToAllPlayers, "AddItemMeshToAllPlayers" }, // 1931404391
		{ &Z_Construct_UFunction_AOWSGameMode_AddOrUpdateGlobalDataItem, "AddOrUpdateGlobalDataItem" }, // 1588984260
		{ &Z_Construct_UFunction_AOWSGameMode_AddZone, "AddZone" }, // 3031543851
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorAddOrUpdateGlobalDataItem, "ErrorAddOrUpdateGlobalDataItem" }, // 1827622087
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorAddZone, "ErrorAddZone" }, // 2491437033
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetAllCharactersOnline, "ErrorGetAllCharactersOnline" }, // 794053076
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetAllInventoryItems, "ErrorGetAllInventoryItems" }, // 1869727309
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetCurrentWorldTime, "ErrorGetCurrentWorldTime" }, // 1890096309
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetGlobalDataItem, "ErrorGetGlobalDataItem" }, // 1750038617
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstanceFromZoneInstanceID, "ErrorGetZoneInstanceFromZoneInstanceID" }, // 878123687
		{ &Z_Construct_UFunction_AOWSGameMode_ErrorGetZoneInstancesForZone, "ErrorGetZoneInstancesForZone" }, // 720154242
		{ &Z_Construct_UFunction_AOWSGameMode_FindItemDefinition, "FindItemDefinition" }, // 3881816683
		{ &Z_Construct_UFunction_AOWSGameMode_GetAddressURLAndPort, "GetAddressURLAndPort" }, // 155472444
		{ &Z_Construct_UFunction_AOWSGameMode_GetAllCharactersOnline, "GetAllCharactersOnline" }, // 2138525808
		{ &Z_Construct_UFunction_AOWSGameMode_GetAllInventoryItems, "GetAllInventoryItems" }, // 250462925
		{ &Z_Construct_UFunction_AOWSGameMode_GetCurrentWorldTime, "GetCurrentWorldTime" }, // 1450341703
		{ &Z_Construct_UFunction_AOWSGameMode_GetGlobalDataItem, "GetGlobalDataItem" }, // 4077709093
		{ &Z_Construct_UFunction_AOWSGameMode_GetZoneInstanceFromZoneInstanceID, "GetZoneInstanceFromZoneInstanceID" }, // 2137859526
		{ &Z_Construct_UFunction_AOWSGameMode_GetZoneInstancesForZone, "GetZoneInstancesForZone" }, // 1813007515
		{ &Z_Construct_UFunction_AOWSGameMode_IsPlayerOnline, "IsPlayerOnline" }, // 278396564
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyAddOrUpdateGlobalDataItem, "NotifyAddOrUpdateGlobalDataItem" }, // 1830967352
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyAddZone, "NotifyAddZone" }, // 994469621
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetAllInventoryItems, "NotifyGetAllInventoryItems" }, // 2184540943
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetCurrentWorldTime, "NotifyGetCurrentWorldTime" }, // 3975747799
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetGlobalDataItem, "NotifyGetGlobalDataItem" }, // 953808703
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstanceFromZoneInstanceID, "NotifyGetZoneInstanceFromZoneInstanceID" }, // 4118233283
		{ &Z_Construct_UFunction_AOWSGameMode_NotifyGetZoneInstancesForZone, "NotifyGetZoneInstancesForZone" }, // 3670170797
		{ &Z_Construct_UFunction_AOWSGameMode_SaveAllPlayerLocations, "SaveAllPlayerLocations" }, // 3972250756
		{ &Z_Construct_UFunction_AOWSGameMode_UpdateNumberOfPlayers, "UpdateNumberOfPlayers" }, // 3834172997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent = { "ItemLibraryLoadedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, ItemLibraryLoadedEvent), Z_Construct_UDelegateFunction_OWSPlugin_ItemLibraryLoadedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemLibraryLoadedEvent_MetaData), NewProp_ItemLibraryLoadedEvent_MetaData) }; // 1518052057
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation = { "DebugStartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, DebugStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugStartLocation_MetaData), NewProp_DebugStartLocation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName = { "DebugCharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, DebugCharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugCharacterName_MetaData), NewProp_DebugCharacterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_Inner = { "AllInventoryItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItemStruct, METADATA_PARAMS(0, nullptr) }; // 3913247499
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems = { "AllInventoryItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, AllInventoryItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllInventoryItems_MetaData), NewProp_AllInventoryItems_MetaData) }; // 3913247499
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap_ValueProp = { "MeshItemsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap_Key_KeyProp = { "MeshItemsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap = { "MeshItemsMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, MeshItemsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshItemsMap_MetaData), NewProp_MeshItemsMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_Inner = { "CharactersOnline", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharactersOnlineStruct, METADATA_PARAMS(0, nullptr) }; // 16337275
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline = { "CharactersOnline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, CharactersOnline), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersOnline_MetaData), NewProp_CharactersOnline_MetaData) }; // 16337275
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName = { "IAmZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, IAmZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IAmZoneName_MetaData), NewProp_IAmZoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ZoneInstanceID = { "ZoneInstanceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, ZoneInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneInstanceID_MetaData), NewProp_ZoneInstanceID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds = { "GetCharactersOnlineIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, GetCharactersOnlineIntervalInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetCharactersOnlineIntervalInSeconds_MetaData), NewProp_GetCharactersOnlineIntervalInSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds = { "UpdateServerStatusEveryXSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, UpdateServerStatusEveryXSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateServerStatusEveryXSeconds_MetaData), NewProp_UpdateServerStatusEveryXSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds = { "SaveIntervalInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, SaveIntervalInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveIntervalInSeconds_MetaData), NewProp_SaveIntervalInSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups = { "SplitSaveIntoHowManyGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, SplitSaveIntoHowManyGroups), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitSaveIntoHowManyGroups_MetaData), NewProp_SplitSaveIntoHowManyGroups_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset = { "LocalSecondsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, LocalSecondsOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalSecondsOffset_MetaData), NewProp_LocalSecondsOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds = { "DayLengthInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, DayLengthInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLengthInSeconds_MetaData), NewProp_DayLengthInSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle = { "DaysPerLunarCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, DaysPerLunarCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DaysPerLunarCycle_MetaData), NewProp_DaysPerLunarCycle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle = { "DaysPerSolarCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, DaysPerSolarCycle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DaysPerSolarCycle_MetaData), NewProp_DaysPerSolarCycle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWSAPICustomerKey = { "OWSAPICustomerKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, OWSAPICustomerKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSAPICustomerKey_MetaData), NewProp_OWSAPICustomerKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2APIPath = { "OWS2APIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, OWS2APIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2APIPath_MetaData), NewProp_OWS2APIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2InstanceManagementAPIPath = { "OWS2InstanceManagementAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, OWS2InstanceManagementAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2InstanceManagementAPIPath_MetaData), NewProp_OWS2InstanceManagementAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2CharacterPersistenceAPIPath = { "OWS2CharacterPersistenceAPIPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, OWS2CharacterPersistenceAPIPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWS2CharacterPersistenceAPIPath_MetaData), NewProp_OWS2CharacterPersistenceAPIPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWSEncryptionKey = { "OWSEncryptionKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSGameMode, OWSEncryptionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSEncryptionKey_MetaData), NewProp_OWSEncryptionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ItemLibraryLoadedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DebugCharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_AllInventoryItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_MeshItemsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_CharactersOnline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_IAmZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_ZoneInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_GetCharactersOnlineIntervalInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_UpdateServerStatusEveryXSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SaveIntervalInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_SplitSaveIntoHowManyGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_LocalSecondsOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DayLengthInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerLunarCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_DaysPerSolarCycle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWSAPICustomerKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2APIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2InstanceManagementAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWS2CharacterPersistenceAPIPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSGameMode_Statics::NewProp_OWSEncryptionKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSGameMode_Statics::ClassParams = {
	&AOWSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSGameMode()
{
	if (!Z_Registration_Info_UClass_AOWSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSGameMode.OuterSingleton, Z_Construct_UClass_AOWSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSGameMode.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSGameMode>()
{
	return AOWSGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSGameMode);
AOWSGameMode::~AOWSGameMode() {}
// End Class AOWSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharactersOnlineStruct::StaticStruct, Z_Construct_UScriptStruct_FCharactersOnlineStruct_Statics::NewStructOps, TEXT("CharactersOnlineStruct"), &Z_Registration_Info_UScriptStruct_CharactersOnlineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharactersOnlineStruct), 16337275U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSGameMode, AOWSGameMode::StaticClass, TEXT("AOWSGameMode"), &Z_Registration_Info_UClass_AOWSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSGameMode), 786337995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_851327133(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameMode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
