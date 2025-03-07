// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWS2API.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWS2API() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWS2API();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWS2API_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbility();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityBar();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityBarWithAbilities();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAddOrUpdateZone();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAddZoneJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterNameJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChatGroup();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetAllCharactersJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetServerInstanceFromPort();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalDataItem();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLaunchZoneInstance();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLoginAndCreateSession();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLogout();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerGroup();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRegisterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveCharacterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSuccessAndErrorMessage();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateZoneJSONPost();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUserCharacter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneInstance();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FZoneNameJSONPost();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FSetSelectedCharacterAndConnectToLastZoneJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost;
class UScriptStruct* FSetSelectedCharacterAndConnectToLastZoneJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("SetSelectedCharacterAndConnectToLastZoneJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FSetSelectedCharacterAndConnectToLastZoneJSONPost>()
{
	return FSetSelectedCharacterAndConnectToLastZoneJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedCharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetSelectedCharacterAndConnectToLastZoneJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetSelectedCharacterAndConnectToLastZoneJSONPost, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::NewProp_SelectedCharacterName = { "SelectedCharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSetSelectedCharacterAndConnectToLastZoneJSONPost, SelectedCharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCharacterName_MetaData), NewProp_SelectedCharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::NewProp_SelectedCharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"SetSelectedCharacterAndConnectToLastZoneJSONPost",
	Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::PropPointers),
	sizeof(FSetSelectedCharacterAndConnectToLastZoneJSONPost),
	alignof(FSetSelectedCharacterAndConnectToLastZoneJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost.InnerSingleton;
}
// End ScriptStruct FSetSelectedCharacterAndConnectToLastZoneJSONPost

// Begin ScriptStruct FTravelToLastZoneServerJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost;
class UScriptStruct* FTravelToLastZoneServerJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("TravelToLastZoneServerJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FTravelToLastZoneServerJSONPost>()
{
	return FTravelToLastZoneServerJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTravelToLastZoneServerJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTravelToLastZoneServerJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTravelToLastZoneServerJSONPost, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_PlayerGroupType = { "PlayerGroupType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTravelToLastZoneServerJSONPost, PlayerGroupType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupType_MetaData), NewProp_PlayerGroupType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewProp_PlayerGroupType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"TravelToLastZoneServerJSONPost",
	Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::PropPointers),
	sizeof(FTravelToLastZoneServerJSONPost),
	alignof(FTravelToLastZoneServerJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost.InnerSingleton;
}
// End ScriptStruct FTravelToLastZoneServerJSONPost

// Begin ScriptStruct FGetCharacterStatsJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost;
class UScriptStruct* FGetCharacterStatsJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetCharacterStatsJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetCharacterStatsJSONPost>()
{
	return FGetCharacterStatsJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetCharacterStatsJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetCharacterStatsJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetCharacterStatsJSONPost",
	Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::PropPointers),
	sizeof(FGetCharacterStatsJSONPost),
	alignof(FGetCharacterStatsJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost.InnerSingleton;
}
// End ScriptStruct FGetCharacterStatsJSONPost

// Begin ScriptStruct FGetCustomCharacterDataJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost;
class UScriptStruct* FGetCustomCharacterDataJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetCustomCharacterDataJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetCustomCharacterDataJSONPost>()
{
	return FGetCustomCharacterDataJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetCustomCharacterDataJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetCustomCharacterDataJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetCustomCharacterDataJSONPost",
	Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::PropPointers),
	sizeof(FGetCustomCharacterDataJSONPost),
	alignof(FGetCustomCharacterDataJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost.InnerSingleton;
}
// End ScriptStruct FGetCustomCharacterDataJSONPost

// Begin ScriptStruct FCustomCharacterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomCharacterData;
class UScriptStruct* FCustomCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomCharacterData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CustomCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomCharacterData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCustomCharacterData>()
{
	return FCustomCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomFieldName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFieldName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_CustomFieldName = { "CustomFieldName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterData, CustomFieldName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomFieldName_MetaData), NewProp_CustomFieldName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterData, FieldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldValue_MetaData), NewProp_FieldValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_CustomFieldName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewProp_FieldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CustomCharacterData",
	Z_Construct_UScriptStruct_FCustomCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterData_Statics::PropPointers),
	sizeof(FCustomCharacterData),
	alignof(FCustomCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCustomCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomCharacterData.InnerSingleton;
}
// End ScriptStruct FCustomCharacterData

// Begin ScriptStruct FGetCharacterDataAndCustomData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData;
class UScriptStruct* FGetCharacterDataAndCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetCharacterDataAndCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetCharacterDataAndCustomData>()
{
	return FGetCharacterDataAndCustomData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetCharacterDataAndCustomData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetCharacterDataAndCustomData, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetCharacterDataAndCustomData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetCharacterDataAndCustomData",
	Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::PropPointers),
	sizeof(FGetCharacterDataAndCustomData),
	alignof(FGetCharacterDataAndCustomData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData()
{
	if (!Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.InnerSingleton, Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData.InnerSingleton;
}
// End ScriptStruct FGetCharacterDataAndCustomData

// Begin ScriptStruct FAddOrUpdateCustomCharacterDataJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost;
class UScriptStruct* FAddOrUpdateCustomCharacterDataJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AddOrUpdateCustomCharacterDataJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAddOrUpdateCustomCharacterDataJSONPost>()
{
	return FAddOrUpdateCustomCharacterDataJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOrUpdateCustomCharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddOrUpdateCustomCharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddOrUpdateCustomCharacterDataJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::NewProp_AddOrUpdateCustomCharacterData = { "AddOrUpdateCustomCharacterData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateCustomCharacterDataJSONPost, AddOrUpdateCustomCharacterData), Z_Construct_UScriptStruct_FCustomCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOrUpdateCustomCharacterData_MetaData), NewProp_AddOrUpdateCustomCharacterData_MetaData) }; // 2297753850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::NewProp_AddOrUpdateCustomCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AddOrUpdateCustomCharacterDataJSONPost",
	Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::PropPointers),
	sizeof(FAddOrUpdateCustomCharacterDataJSONPost),
	alignof(FAddOrUpdateCustomCharacterDataJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost.InnerSingleton;
}
// End ScriptStruct FAddOrUpdateCustomCharacterDataJSONPost

// Begin ScriptStruct FGetAllCharactersJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost;
class UScriptStruct* FGetAllCharactersJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAllCharactersJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetAllCharactersJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetAllCharactersJSONPost>()
{
	return FGetAllCharactersJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAllCharactersJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetAllCharactersJSONPost, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetAllCharactersJSONPost",
	Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::PropPointers),
	sizeof(FGetAllCharactersJSONPost),
	alignof(FGetAllCharactersJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetAllCharactersJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost.InnerSingleton;
}
// End ScriptStruct FGetAllCharactersJSONPost

// Begin ScriptStruct FUserCharacter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserCharacter;
class UScriptStruct* FUserCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserCharacter, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("UserCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_UserCharacter.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FUserCharacter>()
{
	return FUserCharacter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Silver_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Copper_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeCurrency_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PremiumCurrency_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastActivity_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Silver;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Copper;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeCurrency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PremiumCurrency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastActivity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserCharacter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gold_MetaData), NewProp_Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Silver = { "Silver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Silver), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Silver_MetaData), NewProp_Silver_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Copper = { "Copper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Copper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Copper_MetaData), NewProp_Copper_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_FreeCurrency = { "FreeCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, FreeCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeCurrency_MetaData), NewProp_FreeCurrency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_PremiumCurrency = { "PremiumCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, PremiumCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PremiumCurrency_MetaData), NewProp_PremiumCurrency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_LastActivity = { "LastActivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, LastActivity), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastActivity_MetaData), NewProp_LastActivity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserCharacter, CreateDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDate_MetaData), NewProp_CreateDate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Silver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Copper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_FreeCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_PremiumCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_LastActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserCharacter_Statics::NewProp_CreateDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserCharacter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"UserCharacter",
	Z_Construct_UScriptStruct_FUserCharacter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCharacter_Statics::PropPointers),
	sizeof(FUserCharacter),
	alignof(FUserCharacter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserCharacter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserCharacter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserCharacter()
{
	if (!Z_Registration_Info_UScriptStruct_UserCharacter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserCharacter.InnerSingleton, Z_Construct_UScriptStruct_FUserCharacter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserCharacter.InnerSingleton;
}
// End ScriptStruct FUserCharacter

// Begin ScriptStruct FLoginAndCreateSessionJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost;
class UScriptStruct* FLoginAndCreateSessionJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("LoginAndCreateSessionJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FLoginAndCreateSessionJSONPost>()
{
	return FLoginAndCreateSessionJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginAndCreateSessionJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoginAndCreateSessionJSONPost, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoginAndCreateSessionJSONPost, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"LoginAndCreateSessionJSONPost",
	Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::PropPointers),
	sizeof(FLoginAndCreateSessionJSONPost),
	alignof(FLoginAndCreateSessionJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost.InnerSingleton;
}
// End ScriptStruct FLoginAndCreateSessionJSONPost

// Begin ScriptStruct FLoginAndCreateSession
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoginAndCreateSession;
class UScriptStruct* FLoginAndCreateSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoginAndCreateSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoginAndCreateSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginAndCreateSession, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("LoginAndCreateSession"));
	}
	return Z_Registration_Info_UScriptStruct_LoginAndCreateSession.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FLoginAndCreateSession>()
{
	return FLoginAndCreateSession::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Authenticated_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Authenticated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Authenticated;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginAndCreateSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_Authenticated_SetBit(void* Obj)
{
	((FLoginAndCreateSession*)Obj)->Authenticated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_Authenticated = { "Authenticated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoginAndCreateSession), &Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_Authenticated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Authenticated_MetaData), NewProp_Authenticated_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoginAndCreateSession, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoginAndCreateSession, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_Authenticated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"LoginAndCreateSession",
	Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::PropPointers),
	sizeof(FLoginAndCreateSession),
	alignof(FLoginAndCreateSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoginAndCreateSession()
{
	if (!Z_Registration_Info_UScriptStruct_LoginAndCreateSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoginAndCreateSession.InnerSingleton, Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LoginAndCreateSession.InnerSingleton;
}
// End ScriptStruct FLoginAndCreateSession

// Begin ScriptStruct FRegisterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegisterJSONPost;
class UScriptStruct* FRegisterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegisterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegisterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("RegisterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_RegisterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FRegisterJSONPost>()
{
	return FRegisterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegisterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisterJSONPost, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisterJSONPost, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisterJSONPost, FirstName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstName_MetaData), NewProp_FirstName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegisterJSONPost, LastName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastName_MetaData), NewProp_LastName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_Email,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_FirstName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewProp_LastName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"RegisterJSONPost",
	Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::PropPointers),
	sizeof(FRegisterJSONPost),
	alignof(FRegisterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegisterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_RegisterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegisterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegisterJSONPost.InnerSingleton;
}
// End ScriptStruct FRegisterJSONPost

// Begin ScriptStruct FSuccessAndErrorMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage;
class UScriptStruct* FSuccessAndErrorMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuccessAndErrorMessage, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("SuccessAndErrorMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FSuccessAndErrorMessage>()
{
	return FSuccessAndErrorMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuccessAndErrorMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FSuccessAndErrorMessage*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuccessAndErrorMessage), &Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuccessAndErrorMessage, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"SuccessAndErrorMessage",
	Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::PropPointers),
	sizeof(FSuccessAndErrorMessage),
	alignof(FSuccessAndErrorMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSuccessAndErrorMessage()
{
	if (!Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.InnerSingleton, Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage.InnerSingleton;
}
// End ScriptStruct FSuccessAndErrorMessage

// Begin ScriptStruct FCharacterNameJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterNameJSONPost;
class UScriptStruct* FCharacterNameJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNameJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterNameJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterNameJSONPost>()
{
	return FCharacterNameJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterNameJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterNameJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterNameJSONPost",
	Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::PropPointers),
	sizeof(FCharacterNameJSONPost),
	alignof(FCharacterNameJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterNameJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterNameJSONPost.InnerSingleton;
}
// End ScriptStruct FCharacterNameJSONPost

// Begin ScriptStruct FAddAbilityToCharacterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost;
class UScriptStruct* FAddAbilityToCharacterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AddAbilityToCharacterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAddAbilityToCharacterJSONPost>()
{
	return FAddAbilityToCharacterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharHasAbilitiesCustomJSON_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharHasAbilitiesCustomJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddAbilityToCharacterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddAbilityToCharacterJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddAbilityToCharacterJSONPost, AbilityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityName_MetaData), NewProp_AbilityName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddAbilityToCharacterJSONPost, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_CharHasAbilitiesCustomJSON = { "CharHasAbilitiesCustomJSON", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddAbilityToCharacterJSONPost, CharHasAbilitiesCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharHasAbilitiesCustomJSON_MetaData), NewProp_CharHasAbilitiesCustomJSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewProp_CharHasAbilitiesCustomJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AddAbilityToCharacterJSONPost",
	Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::PropPointers),
	sizeof(FAddAbilityToCharacterJSONPost),
	alignof(FAddAbilityToCharacterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost.InnerSingleton;
}
// End ScriptStruct FAddAbilityToCharacterJSONPost

// Begin ScriptStruct FUpdateAbilityOnCharacterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost;
class UScriptStruct* FUpdateAbilityOnCharacterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("UpdateAbilityOnCharacterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FUpdateAbilityOnCharacterJSONPost>()
{
	return FUpdateAbilityOnCharacterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharHasAbilitiesCustomJSON_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharHasAbilitiesCustomJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateAbilityOnCharacterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAbilityOnCharacterJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAbilityOnCharacterJSONPost, AbilityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityName_MetaData), NewProp_AbilityName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAbilityOnCharacterJSONPost, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_CharHasAbilitiesCustomJSON = { "CharHasAbilitiesCustomJSON", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAbilityOnCharacterJSONPost, CharHasAbilitiesCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharHasAbilitiesCustomJSON_MetaData), NewProp_CharHasAbilitiesCustomJSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewProp_CharHasAbilitiesCustomJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"UpdateAbilityOnCharacterJSONPost",
	Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::PropPointers),
	sizeof(FUpdateAbilityOnCharacterJSONPost),
	alignof(FUpdateAbilityOnCharacterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost.InnerSingleton;
}
// End ScriptStruct FUpdateAbilityOnCharacterJSONPost

// Begin ScriptStruct FRemoveAbilityFromCharacterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost;
class UScriptStruct* FRemoveAbilityFromCharacterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("RemoveAbilityFromCharacterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FRemoveAbilityFromCharacterJSONPost>()
{
	return FRemoveAbilityFromCharacterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveAbilityFromCharacterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveAbilityFromCharacterJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveAbilityFromCharacterJSONPost, AbilityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityName_MetaData), NewProp_AbilityName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::NewProp_AbilityName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"RemoveAbilityFromCharacterJSONPost",
	Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::PropPointers),
	sizeof(FRemoveAbilityFromCharacterJSONPost),
	alignof(FRemoveAbilityFromCharacterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost.InnerSingleton;
}
// End ScriptStruct FRemoveAbilityFromCharacterJSONPost

// Begin ScriptStruct FAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Ability;
class UScriptStruct* FAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Ability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Ability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbility, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("Ability"));
	}
	return Z_Registration_Info_UScriptStruct_Ability.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAbility>()
{
	return FAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCustomJSON_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTypeID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomerGUID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Race_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureToUseForIcon_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClassName_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharHasAbilitiesID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharHasAbilitiesCustomJSON_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharName_MetaData[] = {
		{ "Category", "Ability Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInSlotNumber_MetaData[] = {
		{ "Category", "Ability Struct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This one is not used if we are just looking at all abilities a character has\n" },
#endif
		{ "ModuleRelativePath", "Public/OWS2API.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This one is not used if we are just looking at all abilities a character has" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityCustomJSON;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityTypeID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomerGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Race;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureToUseForIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayAbilityClassName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharHasAbilitiesID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharHasAbilitiesCustomJSON;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityInSlotNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityID_MetaData), NewProp_AbilityID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityCustomJSON = { "AbilityCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCustomJSON_MetaData), NewProp_AbilityCustomJSON_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityName_MetaData), NewProp_AbilityName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityTypeID = { "AbilityTypeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTypeID_MetaData), NewProp_AbilityTypeID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, Class), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CustomerGUID = { "CustomerGUID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, CustomerGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomerGUID_MetaData), NewProp_CustomerGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_Race = { "Race", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, Race), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Race_MetaData), NewProp_Race_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_TextureToUseForIcon = { "TextureToUseForIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, TextureToUseForIcon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureToUseForIcon_MetaData), NewProp_TextureToUseForIcon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_GameplayAbilityClassName = { "GameplayAbilityClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, GameplayAbilityClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilityClassName_MetaData), NewProp_GameplayAbilityClassName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharHasAbilitiesID = { "CharHasAbilitiesID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, CharHasAbilitiesID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharHasAbilitiesID_MetaData), NewProp_CharHasAbilitiesID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityLevel_MetaData), NewProp_AbilityLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharHasAbilitiesCustomJSON = { "CharHasAbilitiesCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, CharHasAbilitiesCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharHasAbilitiesCustomJSON_MetaData), NewProp_CharHasAbilitiesCustomJSON_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, CharName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharName_MetaData), NewProp_CharName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityInSlotNumber = { "AbilityInSlotNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbility, AbilityInSlotNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInSlotNumber_MetaData), NewProp_AbilityInSlotNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityCustomJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityTypeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CustomerGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_Race,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_TextureToUseForIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_GameplayAbilityClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharHasAbilitiesID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharHasAbilitiesCustomJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_CharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbility_Statics::NewProp_AbilityInSlotNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"Ability",
	Z_Construct_UScriptStruct_FAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_Statics::PropPointers),
	sizeof(FAbility),
	alignof(FAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbility()
{
	if (!Z_Registration_Info_UScriptStruct_Ability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Ability.InnerSingleton, Z_Construct_UScriptStruct_FAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Ability.InnerSingleton;
}
// End ScriptStruct FAbility

// Begin ScriptStruct FAbilityBar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityBar;
class UScriptStruct* FAbilityBar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityBar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityBar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityBar, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityBar"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityBar.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAbilityBar>()
{
	return FAbilityBar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharAbilityBarID_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityBarName_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfUnlockedSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharAbilityBarsCustomJSON_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharAbilityBarID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityBarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfUnlockedSlots;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharAbilityBarsCustomJSON;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityBar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharAbilityBarID = { "CharAbilityBarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, CharAbilityBarID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAbilityBarID_MetaData), NewProp_CharAbilityBarID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_AbilityBarName = { "AbilityBarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, AbilityBarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityBarName_MetaData), NewProp_AbilityBarName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_MaxNumberOfSlots = { "MaxNumberOfSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, MaxNumberOfSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfSlots_MetaData), NewProp_MaxNumberOfSlots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_NumberOfUnlockedSlots = { "NumberOfUnlockedSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, NumberOfUnlockedSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfUnlockedSlots_MetaData), NewProp_NumberOfUnlockedSlots_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharAbilityBarsCustomJSON = { "CharAbilityBarsCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBar, CharAbilityBarsCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAbilityBarsCustomJSON_MetaData), NewProp_CharAbilityBarsCustomJSON_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharAbilityBarID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_AbilityBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_MaxNumberOfSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_NumberOfUnlockedSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBar_Statics::NewProp_CharAbilityBarsCustomJSON,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityBar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AbilityBar",
	Z_Construct_UScriptStruct_FAbilityBar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBar_Statics::PropPointers),
	sizeof(FAbilityBar),
	alignof(FAbilityBar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityBar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityBar()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityBar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityBar.InnerSingleton, Z_Construct_UScriptStruct_FAbilityBar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityBar.InnerSingleton;
}
// End ScriptStruct FAbilityBar

// Begin ScriptStruct FAbilityBarWithAbilities
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities;
class UScriptStruct* FAbilityBarWithAbilities::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityBarWithAbilities, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityBarWithAbilities"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAbilityBarWithAbilities>()
{
	return FAbilityBarWithAbilities::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharAbilityBarID_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityBarName_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfUnlockedSlots_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharAbilityBarsCustomJSON_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Ability Bar Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharAbilityBarID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityBarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfSlots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfUnlockedSlots;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharAbilityBarsCustomJSON;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityBarWithAbilities>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharAbilityBarID = { "CharAbilityBarID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, CharAbilityBarID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAbilityBarID_MetaData), NewProp_CharAbilityBarID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_AbilityBarName = { "AbilityBarName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, AbilityBarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityBarName_MetaData), NewProp_AbilityBarName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_MaxNumberOfSlots = { "MaxNumberOfSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, MaxNumberOfSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfSlots_MetaData), NewProp_MaxNumberOfSlots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_NumberOfUnlockedSlots = { "NumberOfUnlockedSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, NumberOfUnlockedSlots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfUnlockedSlots_MetaData), NewProp_NumberOfUnlockedSlots_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharAbilityBarsCustomJSON = { "CharAbilityBarsCustomJSON", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, CharAbilityBarsCustomJSON), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharAbilityBarsCustomJSON_MetaData), NewProp_CharAbilityBarsCustomJSON_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAbility, METADATA_PARAMS(0, nullptr) }; // 2932264219
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityBarWithAbilities, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) }; // 2932264219
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharAbilityBarID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_AbilityBarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_MaxNumberOfSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_NumberOfUnlockedSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_CharAbilityBarsCustomJSON,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AbilityBarWithAbilities",
	Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::PropPointers),
	sizeof(FAbilityBarWithAbilities),
	alignof(FAbilityBarWithAbilities),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityBarWithAbilities()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.InnerSingleton, Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities.InnerSingleton;
}
// End ScriptStruct FAbilityBarWithAbilities

// Begin ScriptStruct FUpdateAllPlayerPositionsJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost;
class UScriptStruct* FUpdateAllPlayerPositionsJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("UpdateAllPlayerPositionsJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FUpdateAllPlayerPositionsJSONPost>()
{
	return FUpdateAllPlayerPositionsJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerializedPlayerLocationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SerializedPlayerLocationData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateAllPlayerPositionsJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::NewProp_SerializedPlayerLocationData = { "SerializedPlayerLocationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAllPlayerPositionsJSONPost, SerializedPlayerLocationData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerializedPlayerLocationData_MetaData), NewProp_SerializedPlayerLocationData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateAllPlayerPositionsJSONPost, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::NewProp_SerializedPlayerLocationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"UpdateAllPlayerPositionsJSONPost",
	Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::PropPointers),
	sizeof(FUpdateAllPlayerPositionsJSONPost),
	alignof(FUpdateAllPlayerPositionsJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost.InnerSingleton;
}
// End ScriptStruct FUpdateAllPlayerPositionsJSONPost

// Begin ScriptStruct FUpdateNumberOfPlayersJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost;
class UScriptStruct* FUpdateNumberOfPlayersJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("UpdateNumberOfPlayersJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FUpdateNumberOfPlayersJSONPost>()
{
	return FUpdateNumberOfPlayersJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneInstanceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfConnectedPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneInstanceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NumberOfConnectedPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateNumberOfPlayersJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::NewProp_ZoneInstanceId = { "ZoneInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateNumberOfPlayersJSONPost, ZoneInstanceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneInstanceId_MetaData), NewProp_ZoneInstanceId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::NewProp_NumberOfConnectedPlayers = { "NumberOfConnectedPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateNumberOfPlayersJSONPost, NumberOfConnectedPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfConnectedPlayers_MetaData), NewProp_NumberOfConnectedPlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::NewProp_ZoneInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::NewProp_NumberOfConnectedPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"UpdateNumberOfPlayersJSONPost",
	Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::PropPointers),
	sizeof(FUpdateNumberOfPlayersJSONPost),
	alignof(FUpdateNumberOfPlayersJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost.InnerSingleton;
}
// End ScriptStruct FUpdateNumberOfPlayersJSONPost

// Begin ScriptStruct FZoneNameJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneNameJSONPost;
class UScriptStruct* FZoneNameJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneNameJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ZoneNameJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FZoneNameJSONPost>()
{
	return FZoneNameJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneNameJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneNameJSONPost, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::NewProp_ZoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ZoneNameJSONPost",
	Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::PropPointers),
	sizeof(FZoneNameJSONPost),
	alignof(FZoneNameJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneNameJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ZoneNameJSONPost.InnerSingleton;
}
// End ScriptStruct FZoneNameJSONPost

// Begin ScriptStruct FGetZoneInstancesForZoneJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost;
class UScriptStruct* FGetZoneInstancesForZoneJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetZoneInstancesForZoneJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetZoneInstancesForZoneJSONPost>()
{
	return FGetZoneInstancesForZoneJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetZoneInstancesForZoneJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetZoneInstancesForZoneJSONPost, Request), Z_Construct_UScriptStruct_FZoneNameJSONPost, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 1828443575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetZoneInstancesForZoneJSONPost",
	Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::PropPointers),
	sizeof(FGetZoneInstancesForZoneJSONPost),
	alignof(FGetZoneInstancesForZoneJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost.InnerSingleton;
}
// End ScriptStruct FGetZoneInstancesForZoneJSONPost

// Begin ScriptStruct FZoneInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneInstance;
class UScriptStruct* FZoneInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneInstance, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ZoneInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneInstance.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FZoneInstance>()
{
	return FZoneInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FZoneInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCompContainsFilter_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMode_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftPlayerCap_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardPlayerCap_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinutesToShutdownAfterEmpty_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapInstanceID_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldServerID_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupID_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfReportedPlayers_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateFromServer_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastServerEmptyDate_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[] = {
		{ "Category", "Zone Struct" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldCompContainsFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinutesToShutdownAfterEmpty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapInstanceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfReportedPlayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastUpdateFromServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastServerEmptyDate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreateDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, MapID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_WorldCompContainsFilter = { "WorldCompContainsFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, WorldCompContainsFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCompContainsFilter_MetaData), NewProp_WorldCompContainsFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapMode = { "MapMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, MapMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMode_MetaData), NewProp_MapMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_SoftPlayerCap = { "SoftPlayerCap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, SoftPlayerCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftPlayerCap_MetaData), NewProp_SoftPlayerCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_HardPlayerCap = { "HardPlayerCap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, HardPlayerCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardPlayerCap_MetaData), NewProp_HardPlayerCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MinutesToShutdownAfterEmpty = { "MinutesToShutdownAfterEmpty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, MinutesToShutdownAfterEmpty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinutesToShutdownAfterEmpty_MetaData), NewProp_MinutesToShutdownAfterEmpty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapInstanceID = { "MapInstanceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, MapInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapInstanceID_MetaData), NewProp_MapInstanceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, WorldServerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldServerID_MetaData), NewProp_WorldServerID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_PlayerGroupID = { "PlayerGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, PlayerGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupID_MetaData), NewProp_PlayerGroupID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_NumberOfReportedPlayers = { "NumberOfReportedPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, NumberOfReportedPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfReportedPlayers_MetaData), NewProp_NumberOfReportedPlayers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_LastUpdateFromServer = { "LastUpdateFromServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, LastUpdateFromServer), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUpdateFromServer_MetaData), NewProp_LastUpdateFromServer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_LastServerEmptyDate = { "LastServerEmptyDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, LastServerEmptyDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastServerEmptyDate_MetaData), NewProp_LastServerEmptyDate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FZoneInstance, CreateDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDate_MetaData), NewProp_CreateDate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_WorldCompContainsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_SoftPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_HardPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MinutesToShutdownAfterEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_MapInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_WorldServerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_PlayerGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_NumberOfReportedPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_LastUpdateFromServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_LastServerEmptyDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneInstance_Statics::NewProp_CreateDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ZoneInstance",
	Z_Construct_UScriptStruct_FZoneInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstance_Statics::PropPointers),
	sizeof(FZoneInstance),
	alignof(FZoneInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneInstance()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneInstance.InnerSingleton, Z_Construct_UScriptStruct_FZoneInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ZoneInstance.InnerSingleton;
}
// End ScriptStruct FZoneInstance

// Begin ScriptStruct FCreateCharacterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost;
class UScriptStruct* FCreateCharacterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateCharacterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CreateCharacterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCreateCharacterJSONPost>()
{
	return FCreateCharacterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateCharacterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterJSONPost, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterJSONPost, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewProp_ClassName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CreateCharacterJSONPost",
	Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::PropPointers),
	sizeof(FCreateCharacterJSONPost),
	alignof(FCreateCharacterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost.InnerSingleton;
}
// End ScriptStruct FCreateCharacterJSONPost

// Begin ScriptStruct FCreateCharacter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateCharacter;
class UScriptStruct* FCreateCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateCharacter, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CreateCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacter.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCreateCharacter>()
{
	return FCreateCharacter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingMapName_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RX_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RY_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RZ_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Silver_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Copper_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeCurrency_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PremiumCurrency_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fame_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastActivity_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDate_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartingMapName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Silver;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Copper;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeCurrency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PremiumCurrency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Fame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gender;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastActivity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CreateDate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateCharacter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Success_SetBit(void* Obj)
{
	((FCreateCharacter*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreateCharacter), &Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Success_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, ClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassName_MetaData), NewProp_ClassName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, CharacterLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterLevel_MetaData), NewProp_CharacterLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_StartingMapName = { "StartingMapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, StartingMapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingMapName_MetaData), NewProp_StartingMapName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Z), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RX = { "RX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, RX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RX_MetaData), NewProp_RX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RY = { "RY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, RY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RY_MetaData), NewProp_RY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RZ = { "RZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, RZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RZ_MetaData), NewProp_RZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, TeamNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNumber_MetaData), NewProp_TeamNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gold_MetaData), NewProp_Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Silver = { "Silver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Silver), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Silver_MetaData), NewProp_Silver_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Copper = { "Copper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Copper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Copper_MetaData), NewProp_Copper_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_FreeCurrency = { "FreeCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, FreeCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeCurrency_MetaData), NewProp_FreeCurrency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_PremiumCurrency = { "PremiumCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, PremiumCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PremiumCurrency_MetaData), NewProp_PremiumCurrency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Fame = { "Fame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Fame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fame_MetaData), NewProp_Fame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Alignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Gender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_LastActivity = { "LastActivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, LastActivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastActivity_MetaData), NewProp_LastActivity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CreateDate = { "CreateDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacter, CreateDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDate_MetaData), NewProp_CreateDate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_ErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_ClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CharacterLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_StartingMapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_RZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_TeamNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Silver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Copper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_FreeCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_PremiumCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Fame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_LastActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewProp_CreateDate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateCharacter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CreateCharacter",
	Z_Construct_UScriptStruct_FCreateCharacter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacter_Statics::PropPointers),
	sizeof(FCreateCharacter),
	alignof(FCreateCharacter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateCharacter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacter()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateCharacter.InnerSingleton, Z_Construct_UScriptStruct_FCreateCharacter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacter.InnerSingleton;
}
// End ScriptStruct FCreateCharacter

// Begin ScriptStruct FRemoveCharacterJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost;
class UScriptStruct* FRemoveCharacterJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveCharacterJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("RemoveCharacterJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FRemoveCharacterJSONPost>()
{
	return FRemoveCharacterJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveCharacterJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveCharacterJSONPost, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRemoveCharacterJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"RemoveCharacterJSONPost",
	Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::PropPointers),
	sizeof(FRemoveCharacterJSONPost),
	alignof(FRemoveCharacterJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRemoveCharacterJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost.InnerSingleton;
}
// End ScriptStruct FRemoveCharacterJSONPost

// Begin ScriptStruct FGetPlayerGroupsCharacterIsInJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost;
class UScriptStruct* FGetPlayerGroupsCharacterIsInJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetPlayerGroupsCharacterIsInJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetPlayerGroupsCharacterIsInJSONPost>()
{
	return FGetPlayerGroupsCharacterIsInJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupTypeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetPlayerGroupsCharacterIsInJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetPlayerGroupsCharacterIsInJSONPost, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetPlayerGroupsCharacterIsInJSONPost, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_PlayerGroupTypeID = { "PlayerGroupTypeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetPlayerGroupsCharacterIsInJSONPost, PlayerGroupTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupTypeID_MetaData), NewProp_PlayerGroupTypeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewProp_PlayerGroupTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetPlayerGroupsCharacterIsInJSONPost",
	Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::PropPointers),
	sizeof(FGetPlayerGroupsCharacterIsInJSONPost),
	alignof(FGetPlayerGroupsCharacterIsInJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost.InnerSingleton;
}
// End ScriptStruct FGetPlayerGroupsCharacterIsInJSONPost

// Begin ScriptStruct FPlayerGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerGroup;
class UScriptStruct* FPlayerGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerGroup, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("PlayerGroup"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerGroup.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FPlayerGroup>()
{
	return FPlayerGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupID_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupName_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupTypeID_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DateAdded_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyState_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Player Group" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerGroupName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupTypeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DateAdded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupID = { "PlayerGroupID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, PlayerGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupID_MetaData), NewProp_PlayerGroupID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupName = { "PlayerGroupName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, PlayerGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupName_MetaData), NewProp_PlayerGroupName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupTypeID = { "PlayerGroupTypeID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, PlayerGroupTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupTypeID_MetaData), NewProp_PlayerGroupTypeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_DateAdded = { "DateAdded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, DateAdded), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DateAdded_MetaData), NewProp_DateAdded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_ReadyState = { "ReadyState", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, ReadyState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyState_MetaData), NewProp_ReadyState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerGroup, TeamNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNumber_MetaData), NewProp_TeamNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_PlayerGroupTypeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_DateAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_ReadyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewProp_TeamNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"PlayerGroup",
	Z_Construct_UScriptStruct_FPlayerGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGroup_Statics::PropPointers),
	sizeof(FPlayerGroup),
	alignof(FPlayerGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerGroup()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerGroup.InnerSingleton, Z_Construct_UScriptStruct_FPlayerGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerGroup.InnerSingleton;
}
// End ScriptStruct FPlayerGroup

// Begin ScriptStruct FLaunchZoneInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LaunchZoneInstance;
class UScriptStruct* FLaunchZoneInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchZoneInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LaunchZoneInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaunchZoneInstance, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("LaunchZoneInstance"));
	}
	return Z_Registration_Info_UScriptStruct_LaunchZoneInstance.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FLaunchZoneInstance>()
{
	return FLaunchZoneInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerGroupTypeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerGroupTypeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaunchZoneInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchZoneInstance, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchZoneInstance, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_PlayerGroupTypeID = { "PlayerGroupTypeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLaunchZoneInstance, PlayerGroupTypeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerGroupTypeID_MetaData), NewProp_PlayerGroupTypeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewProp_PlayerGroupTypeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"LaunchZoneInstance",
	Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::PropPointers),
	sizeof(FLaunchZoneInstance),
	alignof(FLaunchZoneInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLaunchZoneInstance()
{
	if (!Z_Registration_Info_UScriptStruct_LaunchZoneInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LaunchZoneInstance.InnerSingleton, Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LaunchZoneInstance.InnerSingleton;
}
// End ScriptStruct FLaunchZoneInstance

// Begin ScriptStruct FAddOrUpdateZone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddOrUpdateZone;
class UScriptStruct* FAddOrUpdateZone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddOrUpdateZone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddOrUpdateZone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddOrUpdateZone, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AddOrUpdateZone"));
	}
	return Z_Registration_Info_UScriptStruct_AddOrUpdateZone.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAddOrUpdateZone>()
{
	return FAddOrUpdateZone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCompContainsFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCompListFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftPlayerCap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HardPlayerCap_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldCompContainsFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldCompListFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SoftPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HardPlayerCap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddOrUpdateZone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, MapID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_WorldCompContainsFilter = { "WorldCompContainsFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, WorldCompContainsFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCompContainsFilter_MetaData), NewProp_WorldCompContainsFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_WorldCompListFilter = { "WorldCompListFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, WorldCompListFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCompListFilter_MetaData), NewProp_WorldCompListFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_SoftPlayerCap = { "SoftPlayerCap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, SoftPlayerCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftPlayerCap_MetaData), NewProp_SoftPlayerCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_HardPlayerCap = { "HardPlayerCap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, HardPlayerCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HardPlayerCap_MetaData), NewProp_HardPlayerCap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapMode = { "MapMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddOrUpdateZone, MapMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapMode_MetaData), NewProp_MapMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_WorldCompContainsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_WorldCompListFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_SoftPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_HardPlayerCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewProp_MapMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AddOrUpdateZone",
	Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::PropPointers),
	sizeof(FAddOrUpdateZone),
	alignof(FAddOrUpdateZone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddOrUpdateZone()
{
	if (!Z_Registration_Info_UScriptStruct_AddOrUpdateZone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddOrUpdateZone.InnerSingleton, Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddOrUpdateZone.InnerSingleton;
}
// End ScriptStruct FAddOrUpdateZone

// Begin ScriptStruct FAddZoneJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddZoneJSONPost;
class UScriptStruct* FAddZoneJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddZoneJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddZoneJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddZoneJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AddZoneJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_AddZoneJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FAddZoneJSONPost>()
{
	return FAddZoneJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOrUpdateZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddOrUpdateZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddZoneJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::NewProp_AddOrUpdateZone = { "AddOrUpdateZone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAddZoneJSONPost, AddOrUpdateZone), Z_Construct_UScriptStruct_FAddOrUpdateZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOrUpdateZone_MetaData), NewProp_AddOrUpdateZone_MetaData) }; // 1427088762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::NewProp_AddOrUpdateZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"AddZoneJSONPost",
	Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::PropPointers),
	sizeof(FAddZoneJSONPost),
	alignof(FAddZoneJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAddZoneJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_AddZoneJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddZoneJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AddZoneJSONPost.InnerSingleton;
}
// End ScriptStruct FAddZoneJSONPost

// Begin ScriptStruct FUpdateZoneJSONPost
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost;
class UScriptStruct* FUpdateZoneJSONPost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateZoneJSONPost, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("UpdateZoneJSONPost"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FUpdateZoneJSONPost>()
{
	return FUpdateZoneJSONPost::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddOrUpdateZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddOrUpdateZone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateZoneJSONPost>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::NewProp_AddOrUpdateZone = { "AddOrUpdateZone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateZoneJSONPost, AddOrUpdateZone), Z_Construct_UScriptStruct_FAddOrUpdateZone, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddOrUpdateZone_MetaData), NewProp_AddOrUpdateZone_MetaData) }; // 1427088762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::NewProp_AddOrUpdateZone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"UpdateZoneJSONPost",
	Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::PropPointers),
	sizeof(FUpdateZoneJSONPost),
	alignof(FUpdateZoneJSONPost),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateZoneJSONPost()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.InnerSingleton, Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost.InnerSingleton;
}
// End ScriptStruct FUpdateZoneJSONPost

// Begin ScriptStruct FGetServerInstanceFromPort
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort;
class UScriptStruct* FGetServerInstanceFromPort::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetServerInstanceFromPort, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GetServerInstanceFromPort"));
	}
	return Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGetServerInstanceFromPort>()
{
	return FGetServerInstanceFromPort::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCompContainsFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldCompListFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapInstanceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InternalServerIP_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldCompContainsFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WorldCompListFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapInstanceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStartTime;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ServerStatus;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InternalServerIP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetServerInstanceFromPort>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_WorldCompContainsFilter = { "WorldCompContainsFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, WorldCompContainsFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCompContainsFilter_MetaData), NewProp_WorldCompContainsFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_WorldCompListFilter = { "WorldCompListFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, WorldCompListFilter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldCompListFilter_MetaData), NewProp_WorldCompListFilter_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MapInstanceID = { "MapInstanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, MapInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapInstanceID_MetaData), NewProp_MapInstanceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MaxNumberOfInstances = { "MaxNumberOfInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, MaxNumberOfInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfInstances_MetaData), NewProp_MaxNumberOfInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ActiveStartTime = { "ActiveStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, ActiveStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStartTime_MetaData), NewProp_ActiveStartTime_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ServerStatus = { "ServerStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, ServerStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerStatus_MetaData), NewProp_ServerStatus_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_InternalServerIP = { "InternalServerIP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetServerInstanceFromPort, InternalServerIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InternalServerIP_MetaData), NewProp_InternalServerIP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_WorldCompContainsFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_WorldCompListFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MapInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_MaxNumberOfInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ActiveStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_ServerStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewProp_InternalServerIP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GetServerInstanceFromPort",
	Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::PropPointers),
	sizeof(FGetServerInstanceFromPort),
	alignof(FGetServerInstanceFromPort),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetServerInstanceFromPort()
{
	if (!Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.InnerSingleton, Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort.InnerSingleton;
}
// End ScriptStruct FGetServerInstanceFromPort

// Begin ScriptStruct FGlobalDataItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalDataItem;
class UScriptStruct* FGlobalDataItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalDataItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalDataItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalDataItem, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GlobalDataItem"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalDataItem.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGlobalDataItem>()
{
	return FGlobalDataItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGlobalDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDataKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDataValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalDataValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalDataItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlobalDataItem_Statics::NewProp_GlobalDataKey = { "GlobalDataKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalDataItem, GlobalDataKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDataKey_MetaData), NewProp_GlobalDataKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlobalDataItem_Statics::NewProp_GlobalDataValue = { "GlobalDataValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalDataItem, GlobalDataValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalDataValue_MetaData), NewProp_GlobalDataValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalDataItem_Statics::NewProp_GlobalDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalDataItem_Statics::NewProp_GlobalDataValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalDataItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GlobalDataItem",
	Z_Construct_UScriptStruct_FGlobalDataItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalDataItem_Statics::PropPointers),
	sizeof(FGlobalDataItem),
	alignof(FGlobalDataItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalDataItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalDataItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalDataItem()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalDataItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalDataItem.InnerSingleton, Z_Construct_UScriptStruct_FGlobalDataItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GlobalDataItem.InnerSingleton;
}
// End ScriptStruct FGlobalDataItem

// Begin Enum ERPGSchemeToChooseMap
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERPGSchemeToChooseMap;
static UEnum* ERPGSchemeToChooseMap_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ERPGSchemeToChooseMap"));
	}
	return Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<ERPGSchemeToChooseMap::SchemeToChooseMap>()
{
	return ERPGSchemeToChooseMap_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ERPGSchemeToChooseMap::Default" },
		{ "MapOnWorldServerWithLeastNumberOfMaps.DisplayName", "Map on World Server with least number of maps" },
		{ "MapOnWorldServerWithLeastNumberOfMaps.Name", "ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps" },
		{ "MapWithFewestPlayers.DisplayName", "Map with fewest players" },
		{ "MapWithFewestPlayers.Name", "ERPGSchemeToChooseMap::MapWithFewestPlayers" },
		{ "MapWithMostPlayers.DisplayName", "Map with most players" },
		{ "MapWithMostPlayers.Name", "ERPGSchemeToChooseMap::MapWithMostPlayers" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
		{ "SpecificWorldServer.DisplayName", "Specific World Server" },
		{ "SpecificWorldServer.Name", "ERPGSchemeToChooseMap::SpecificWorldServer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERPGSchemeToChooseMap::Default", (int64)ERPGSchemeToChooseMap::Default },
		{ "ERPGSchemeToChooseMap::MapWithFewestPlayers", (int64)ERPGSchemeToChooseMap::MapWithFewestPlayers },
		{ "ERPGSchemeToChooseMap::MapWithMostPlayers", (int64)ERPGSchemeToChooseMap::MapWithMostPlayers },
		{ "ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps", (int64)ERPGSchemeToChooseMap::MapOnWorldServerWithLeastNumberOfMaps },
		{ "ERPGSchemeToChooseMap::SpecificWorldServer", (int64)ERPGSchemeToChooseMap::SpecificWorldServer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"ERPGSchemeToChooseMap",
	"ERPGSchemeToChooseMap::SchemeToChooseMap",
	Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap()
{
	if (!Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.InnerSingleton, Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERPGSchemeToChooseMap.InnerSingleton;
}
// End Enum ERPGSchemeToChooseMap

// Begin Enum ERPGPlayerGroupType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERPGPlayerGroupType;
static UEnum* ERPGPlayerGroupType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERPGPlayerGroupType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERPGPlayerGroupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ERPGPlayerGroupType"));
	}
	return Z_Registration_Info_UEnum_ERPGPlayerGroupType.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<ERPGPlayerGroupType::PlayerGroupType>()
{
	return ERPGPlayerGroupType_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alliance.DisplayName", "Alliance" },
		{ "Alliance.Name", "ERPGPlayerGroupType::Alliance" },
		{ "BlueprintType", "true" },
		{ "Faction.DisplayName", "Faction" },
		{ "Faction.Name", "ERPGPlayerGroupType::Faction" },
		{ "FlightGroup.DisplayName", "FlightGroup" },
		{ "FlightGroup.Name", "ERPGPlayerGroupType::FlightGroup" },
		{ "Guild.DisplayName", "Guild" },
		{ "Guild.Name", "ERPGPlayerGroupType::Guild" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
		{ "NoGroup.DisplayName", "NoGroup" },
		{ "NoGroup.Name", "ERPGPlayerGroupType::NoGroup" },
		{ "Other.Name", "ERPGPlayerGroupType::Other" },
		{ "Party.DisplayName", "Party" },
		{ "Party.Name", "ERPGPlayerGroupType::Party" },
		{ "Raid.DisplayName", "Raid" },
		{ "Raid.Name", "ERPGPlayerGroupType::Raid" },
		{ "Squad.DisplayName", "Squad" },
		{ "Squad.Name", "ERPGPlayerGroupType::Squad" },
		{ "Team.DisplayName", "Team" },
		{ "Team.Name", "ERPGPlayerGroupType::Team" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERPGPlayerGroupType::NoGroup", (int64)ERPGPlayerGroupType::NoGroup },
		{ "ERPGPlayerGroupType::Party", (int64)ERPGPlayerGroupType::Party },
		{ "ERPGPlayerGroupType::Raid", (int64)ERPGPlayerGroupType::Raid },
		{ "ERPGPlayerGroupType::Guild", (int64)ERPGPlayerGroupType::Guild },
		{ "ERPGPlayerGroupType::Team", (int64)ERPGPlayerGroupType::Team },
		{ "ERPGPlayerGroupType::Faction", (int64)ERPGPlayerGroupType::Faction },
		{ "ERPGPlayerGroupType::FlightGroup", (int64)ERPGPlayerGroupType::FlightGroup },
		{ "ERPGPlayerGroupType::Alliance", (int64)ERPGPlayerGroupType::Alliance },
		{ "ERPGPlayerGroupType::Squad", (int64)ERPGPlayerGroupType::Squad },
		{ "ERPGPlayerGroupType::Other", (int64)ERPGPlayerGroupType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"ERPGPlayerGroupType",
	"ERPGPlayerGroupType::PlayerGroupType",
	Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType()
{
	if (!Z_Registration_Info_UEnum_ERPGPlayerGroupType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERPGPlayerGroupType.InnerSingleton, Z_Construct_UEnum_OWSPlugin_ERPGPlayerGroupType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERPGPlayerGroupType.InnerSingleton;
}
// End Enum ERPGPlayerGroupType

// Begin ScriptStruct FCreateCharacterUsingDefaultCharacterValues
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues;
class UScriptStruct* FCreateCharacterUsingDefaultCharacterValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CreateCharacterUsingDefaultCharacterValues"));
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCreateCharacterUsingDefaultCharacterValues>()
{
	return FCreateCharacterUsingDefaultCharacterValues::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateCharacterUsingDefaultCharacterValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterUsingDefaultCharacterValues, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterUsingDefaultCharacterValues, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName = { "DefaultSetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreateCharacterUsingDefaultCharacterValues, DefaultSetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSetName_MetaData), NewProp_DefaultSetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_UserSessionGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewProp_DefaultSetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CreateCharacterUsingDefaultCharacterValues",
	Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::PropPointers),
	sizeof(FCreateCharacterUsingDefaultCharacterValues),
	alignof(FCreateCharacterUsingDefaultCharacterValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues()
{
	if (!Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.InnerSingleton, Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues.InnerSingleton;
}
// End ScriptStruct FCreateCharacterUsingDefaultCharacterValues

// Begin ScriptStruct FLogout
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Logout;
class UScriptStruct* FLogout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Logout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Logout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogout, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("Logout"));
	}
	return Z_Registration_Info_UScriptStruct_Logout.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FLogout>()
{
	return FLogout::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLogout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSessionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSessionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogout_Statics::NewProp_UserSessionGUID = { "UserSessionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLogout, UserSessionGUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSessionGUID_MetaData), NewProp_UserSessionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogout_Statics::NewProp_UserSessionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"Logout",
	Z_Construct_UScriptStruct_FLogout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogout_Statics::PropPointers),
	sizeof(FLogout),
	alignof(FLogout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLogout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLogout()
{
	if (!Z_Registration_Info_UScriptStruct_Logout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Logout.InnerSingleton, Z_Construct_UScriptStruct_FLogout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Logout.InnerSingleton;
}
// End ScriptStruct FLogout

// Begin ScriptStruct FChatGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChatGroup;
class UScriptStruct* FChatGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChatGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChatGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatGroup, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ChatGroup"));
	}
	return Z_Registration_Info_UScriptStruct_ChatGroup.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FChatGroup>()
{
	return FChatGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChatGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGroupID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGroupName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatGroup_Statics::NewProp_ChatGroupID = { "ChatGroupID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatGroup, ChatGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGroupID_MetaData), NewProp_ChatGroupID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatGroup_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatGroup, ChatGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGroupName_MetaData), NewProp_ChatGroupName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatGroup_Statics::NewProp_ChatGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatGroup_Statics::NewProp_ChatGroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ChatGroup",
	Z_Construct_UScriptStruct_FChatGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatGroup_Statics::PropPointers),
	sizeof(FChatGroup),
	alignof(FChatGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatGroup()
{
	if (!Z_Registration_Info_UScriptStruct_ChatGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChatGroup.InnerSingleton, Z_Construct_UScriptStruct_FChatGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChatGroup.InnerSingleton;
}
// End ScriptStruct FChatGroup

// Begin Class UOWS2API
void UOWS2API::StaticRegisterNativesUOWS2API()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWS2API);
UClass* Z_Construct_UClass_UOWS2API_NoRegister()
{
	return UOWS2API::StaticClass();
}
struct Z_Construct_UClass_UOWS2API_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWS2API.h" },
		{ "ModuleRelativePath", "Public/OWS2API.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWS2API>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWS2API_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWS2API_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWS2API_Statics::ClassParams = {
	&UOWS2API::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWS2API_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWS2API_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWS2API()
{
	if (!Z_Registration_Info_UClass_UOWS2API.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWS2API.OuterSingleton, Z_Construct_UClass_UOWS2API_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWS2API.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWS2API>()
{
	return UOWS2API::StaticClass();
}
UOWS2API::UOWS2API(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWS2API);
UOWS2API::~UOWS2API() {}
// End Class UOWS2API

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERPGSchemeToChooseMap_StaticEnum, TEXT("ERPGSchemeToChooseMap"), &Z_Registration_Info_UEnum_ERPGSchemeToChooseMap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 395812411U) },
		{ ERPGPlayerGroupType_StaticEnum, TEXT("ERPGPlayerGroupType"), &Z_Registration_Info_UEnum_ERPGPlayerGroupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3882137785U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSetSelectedCharacterAndConnectToLastZoneJSONPost::StaticStruct, Z_Construct_UScriptStruct_FSetSelectedCharacterAndConnectToLastZoneJSONPost_Statics::NewStructOps, TEXT("SetSelectedCharacterAndConnectToLastZoneJSONPost"), &Z_Registration_Info_UScriptStruct_SetSelectedCharacterAndConnectToLastZoneJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetSelectedCharacterAndConnectToLastZoneJSONPost), 3984755002U) },
		{ FTravelToLastZoneServerJSONPost::StaticStruct, Z_Construct_UScriptStruct_FTravelToLastZoneServerJSONPost_Statics::NewStructOps, TEXT("TravelToLastZoneServerJSONPost"), &Z_Registration_Info_UScriptStruct_TravelToLastZoneServerJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTravelToLastZoneServerJSONPost), 3065904029U) },
		{ FGetCharacterStatsJSONPost::StaticStruct, Z_Construct_UScriptStruct_FGetCharacterStatsJSONPost_Statics::NewStructOps, TEXT("GetCharacterStatsJSONPost"), &Z_Registration_Info_UScriptStruct_GetCharacterStatsJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetCharacterStatsJSONPost), 37955696U) },
		{ FGetCustomCharacterDataJSONPost::StaticStruct, Z_Construct_UScriptStruct_FGetCustomCharacterDataJSONPost_Statics::NewStructOps, TEXT("GetCustomCharacterDataJSONPost"), &Z_Registration_Info_UScriptStruct_GetCustomCharacterDataJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetCustomCharacterDataJSONPost), 1099582819U) },
		{ FCustomCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCustomCharacterData_Statics::NewStructOps, TEXT("CustomCharacterData"), &Z_Registration_Info_UScriptStruct_CustomCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomCharacterData), 2297753850U) },
		{ FGetCharacterDataAndCustomData::StaticStruct, Z_Construct_UScriptStruct_FGetCharacterDataAndCustomData_Statics::NewStructOps, TEXT("GetCharacterDataAndCustomData"), &Z_Registration_Info_UScriptStruct_GetCharacterDataAndCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetCharacterDataAndCustomData), 588778452U) },
		{ FAddOrUpdateCustomCharacterDataJSONPost::StaticStruct, Z_Construct_UScriptStruct_FAddOrUpdateCustomCharacterDataJSONPost_Statics::NewStructOps, TEXT("AddOrUpdateCustomCharacterDataJSONPost"), &Z_Registration_Info_UScriptStruct_AddOrUpdateCustomCharacterDataJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddOrUpdateCustomCharacterDataJSONPost), 2139395114U) },
		{ FGetAllCharactersJSONPost::StaticStruct, Z_Construct_UScriptStruct_FGetAllCharactersJSONPost_Statics::NewStructOps, TEXT("GetAllCharactersJSONPost"), &Z_Registration_Info_UScriptStruct_GetAllCharactersJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetAllCharactersJSONPost), 3192358342U) },
		{ FUserCharacter::StaticStruct, Z_Construct_UScriptStruct_FUserCharacter_Statics::NewStructOps, TEXT("UserCharacter"), &Z_Registration_Info_UScriptStruct_UserCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserCharacter), 3175432417U) },
		{ FLoginAndCreateSessionJSONPost::StaticStruct, Z_Construct_UScriptStruct_FLoginAndCreateSessionJSONPost_Statics::NewStructOps, TEXT("LoginAndCreateSessionJSONPost"), &Z_Registration_Info_UScriptStruct_LoginAndCreateSessionJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoginAndCreateSessionJSONPost), 1146864058U) },
		{ FLoginAndCreateSession::StaticStruct, Z_Construct_UScriptStruct_FLoginAndCreateSession_Statics::NewStructOps, TEXT("LoginAndCreateSession"), &Z_Registration_Info_UScriptStruct_LoginAndCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoginAndCreateSession), 3283991891U) },
		{ FRegisterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FRegisterJSONPost_Statics::NewStructOps, TEXT("RegisterJSONPost"), &Z_Registration_Info_UScriptStruct_RegisterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisterJSONPost), 2023872588U) },
		{ FSuccessAndErrorMessage::StaticStruct, Z_Construct_UScriptStruct_FSuccessAndErrorMessage_Statics::NewStructOps, TEXT("SuccessAndErrorMessage"), &Z_Registration_Info_UScriptStruct_SuccessAndErrorMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuccessAndErrorMessage), 3056499597U) },
		{ FCharacterNameJSONPost::StaticStruct, Z_Construct_UScriptStruct_FCharacterNameJSONPost_Statics::NewStructOps, TEXT("CharacterNameJSONPost"), &Z_Registration_Info_UScriptStruct_CharacterNameJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterNameJSONPost), 2234268967U) },
		{ FAddAbilityToCharacterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FAddAbilityToCharacterJSONPost_Statics::NewStructOps, TEXT("AddAbilityToCharacterJSONPost"), &Z_Registration_Info_UScriptStruct_AddAbilityToCharacterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddAbilityToCharacterJSONPost), 2540730879U) },
		{ FUpdateAbilityOnCharacterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FUpdateAbilityOnCharacterJSONPost_Statics::NewStructOps, TEXT("UpdateAbilityOnCharacterJSONPost"), &Z_Registration_Info_UScriptStruct_UpdateAbilityOnCharacterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateAbilityOnCharacterJSONPost), 3924236737U) },
		{ FRemoveAbilityFromCharacterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FRemoveAbilityFromCharacterJSONPost_Statics::NewStructOps, TEXT("RemoveAbilityFromCharacterJSONPost"), &Z_Registration_Info_UScriptStruct_RemoveAbilityFromCharacterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveAbilityFromCharacterJSONPost), 2429037639U) },
		{ FAbility::StaticStruct, Z_Construct_UScriptStruct_FAbility_Statics::NewStructOps, TEXT("Ability"), &Z_Registration_Info_UScriptStruct_Ability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbility), 2932264219U) },
		{ FAbilityBar::StaticStruct, Z_Construct_UScriptStruct_FAbilityBar_Statics::NewStructOps, TEXT("AbilityBar"), &Z_Registration_Info_UScriptStruct_AbilityBar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityBar), 2491850596U) },
		{ FAbilityBarWithAbilities::StaticStruct, Z_Construct_UScriptStruct_FAbilityBarWithAbilities_Statics::NewStructOps, TEXT("AbilityBarWithAbilities"), &Z_Registration_Info_UScriptStruct_AbilityBarWithAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityBarWithAbilities), 3115732976U) },
		{ FUpdateAllPlayerPositionsJSONPost::StaticStruct, Z_Construct_UScriptStruct_FUpdateAllPlayerPositionsJSONPost_Statics::NewStructOps, TEXT("UpdateAllPlayerPositionsJSONPost"), &Z_Registration_Info_UScriptStruct_UpdateAllPlayerPositionsJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateAllPlayerPositionsJSONPost), 547051432U) },
		{ FUpdateNumberOfPlayersJSONPost::StaticStruct, Z_Construct_UScriptStruct_FUpdateNumberOfPlayersJSONPost_Statics::NewStructOps, TEXT("UpdateNumberOfPlayersJSONPost"), &Z_Registration_Info_UScriptStruct_UpdateNumberOfPlayersJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateNumberOfPlayersJSONPost), 1755219098U) },
		{ FZoneNameJSONPost::StaticStruct, Z_Construct_UScriptStruct_FZoneNameJSONPost_Statics::NewStructOps, TEXT("ZoneNameJSONPost"), &Z_Registration_Info_UScriptStruct_ZoneNameJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneNameJSONPost), 1828443575U) },
		{ FGetZoneInstancesForZoneJSONPost::StaticStruct, Z_Construct_UScriptStruct_FGetZoneInstancesForZoneJSONPost_Statics::NewStructOps, TEXT("GetZoneInstancesForZoneJSONPost"), &Z_Registration_Info_UScriptStruct_GetZoneInstancesForZoneJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetZoneInstancesForZoneJSONPost), 3429548612U) },
		{ FZoneInstance::StaticStruct, Z_Construct_UScriptStruct_FZoneInstance_Statics::NewStructOps, TEXT("ZoneInstance"), &Z_Registration_Info_UScriptStruct_ZoneInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneInstance), 763714394U) },
		{ FCreateCharacterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FCreateCharacterJSONPost_Statics::NewStructOps, TEXT("CreateCharacterJSONPost"), &Z_Registration_Info_UScriptStruct_CreateCharacterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateCharacterJSONPost), 2816838712U) },
		{ FCreateCharacter::StaticStruct, Z_Construct_UScriptStruct_FCreateCharacter_Statics::NewStructOps, TEXT("CreateCharacter"), &Z_Registration_Info_UScriptStruct_CreateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateCharacter), 4183928516U) },
		{ FRemoveCharacterJSONPost::StaticStruct, Z_Construct_UScriptStruct_FRemoveCharacterJSONPost_Statics::NewStructOps, TEXT("RemoveCharacterJSONPost"), &Z_Registration_Info_UScriptStruct_RemoveCharacterJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoveCharacterJSONPost), 3445592851U) },
		{ FGetPlayerGroupsCharacterIsInJSONPost::StaticStruct, Z_Construct_UScriptStruct_FGetPlayerGroupsCharacterIsInJSONPost_Statics::NewStructOps, TEXT("GetPlayerGroupsCharacterIsInJSONPost"), &Z_Registration_Info_UScriptStruct_GetPlayerGroupsCharacterIsInJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetPlayerGroupsCharacterIsInJSONPost), 2350448307U) },
		{ FPlayerGroup::StaticStruct, Z_Construct_UScriptStruct_FPlayerGroup_Statics::NewStructOps, TEXT("PlayerGroup"), &Z_Registration_Info_UScriptStruct_PlayerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerGroup), 3053493591U) },
		{ FLaunchZoneInstance::StaticStruct, Z_Construct_UScriptStruct_FLaunchZoneInstance_Statics::NewStructOps, TEXT("LaunchZoneInstance"), &Z_Registration_Info_UScriptStruct_LaunchZoneInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaunchZoneInstance), 3955728152U) },
		{ FAddOrUpdateZone::StaticStruct, Z_Construct_UScriptStruct_FAddOrUpdateZone_Statics::NewStructOps, TEXT("AddOrUpdateZone"), &Z_Registration_Info_UScriptStruct_AddOrUpdateZone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddOrUpdateZone), 1427088762U) },
		{ FAddZoneJSONPost::StaticStruct, Z_Construct_UScriptStruct_FAddZoneJSONPost_Statics::NewStructOps, TEXT("AddZoneJSONPost"), &Z_Registration_Info_UScriptStruct_AddZoneJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddZoneJSONPost), 3189419882U) },
		{ FUpdateZoneJSONPost::StaticStruct, Z_Construct_UScriptStruct_FUpdateZoneJSONPost_Statics::NewStructOps, TEXT("UpdateZoneJSONPost"), &Z_Registration_Info_UScriptStruct_UpdateZoneJSONPost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateZoneJSONPost), 3078507714U) },
		{ FGetServerInstanceFromPort::StaticStruct, Z_Construct_UScriptStruct_FGetServerInstanceFromPort_Statics::NewStructOps, TEXT("GetServerInstanceFromPort"), &Z_Registration_Info_UScriptStruct_GetServerInstanceFromPort, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetServerInstanceFromPort), 4229155254U) },
		{ FGlobalDataItem::StaticStruct, Z_Construct_UScriptStruct_FGlobalDataItem_Statics::NewStructOps, TEXT("GlobalDataItem"), &Z_Registration_Info_UScriptStruct_GlobalDataItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalDataItem), 4170350526U) },
		{ FCreateCharacterUsingDefaultCharacterValues::StaticStruct, Z_Construct_UScriptStruct_FCreateCharacterUsingDefaultCharacterValues_Statics::NewStructOps, TEXT("CreateCharacterUsingDefaultCharacterValues"), &Z_Registration_Info_UScriptStruct_CreateCharacterUsingDefaultCharacterValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateCharacterUsingDefaultCharacterValues), 193437933U) },
		{ FLogout::StaticStruct, Z_Construct_UScriptStruct_FLogout_Statics::NewStructOps, TEXT("Logout"), &Z_Registration_Info_UScriptStruct_Logout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLogout), 760078347U) },
		{ FChatGroup::StaticStruct, Z_Construct_UScriptStruct_FChatGroup_Statics::NewStructOps, TEXT("ChatGroup"), &Z_Registration_Info_UScriptStruct_ChatGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatGroup), 2084555656U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWS2API, UOWS2API::StaticClass, TEXT("UOWS2API"), &Z_Registration_Info_UClass_UOWS2API, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWS2API), 4201140508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_429656776(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWS2API_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
