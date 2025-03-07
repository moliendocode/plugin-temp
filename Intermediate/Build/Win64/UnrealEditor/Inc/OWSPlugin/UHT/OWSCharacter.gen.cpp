// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacter.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterBase();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterDataStruct();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagsToUse();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FCustomCharacterDataStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct;
class UScriptStruct* FCustomCharacterDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomCharacterDataStruct, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CustomCharacterDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCustomCharacterDataStruct>()
{
	return FCustomCharacterDataStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Customization" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTexture_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterTexture;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomCharacterDataStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterTexture = { "CharacterTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, CharacterTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTexture_MetaData), NewProp_CharacterTexture_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomCharacterDataStruct, CharacterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMesh_MetaData), NewProp_CharacterMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewProp_CharacterMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CustomCharacterDataStruct",
	Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::PropPointers),
	sizeof(FCustomCharacterDataStruct),
	alignof(FCustomCharacterDataStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomCharacterDataStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct.InnerSingleton;
}
// End ScriptStruct FCustomCharacterDataStruct

// Begin ScriptStruct FCharacterStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterStats;
class UScriptStruct* FCharacterStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterStats, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterStats"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterStats>()
{
	return FCharacterStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wisdom_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Luck_MetaData[] = {
		{ "Category", "Stats" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wisdom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Luck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Wisdom = { "Wisdom", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Wisdom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wisdom_MetaData), NewProp_Wisdom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck = { "Luck", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterStats, Luck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Luck_MetaData), NewProp_Luck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Wisdom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterStats_Statics::NewProp_Luck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterStats",
	Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::PropPointers),
	sizeof(FCharacterStats),
	alignof(FCharacterStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterStats()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton, Z_Construct_UScriptStruct_FCharacterStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterStats.InnerSingleton;
}
// End ScriptStruct FCharacterStats

// Begin ScriptStruct FGameplayTagsToUse
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagsToUse;
class UScriptStruct* FGameplayTagsToUse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagsToUse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagsToUse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagsToUse, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("GameplayTagsToUse"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagsToUse.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FGameplayTagsToUse>()
{
	return FGameplayTagsToUse::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagsToUse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_CharacterTags = { "CharacterTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagsToUse, CharacterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTags_MetaData), NewProp_CharacterTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_AbilitiesTags = { "AbilitiesTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagsToUse, AbilitiesTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesTags_MetaData), NewProp_AbilitiesTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_WeaponTags = { "WeaponTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagsToUse, WeaponTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTags_MetaData), NewProp_WeaponTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_ArmorTags = { "ArmorTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagsToUse, ArmorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorTags_MetaData), NewProp_ArmorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_CharacterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_AbilitiesTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_WeaponTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewProp_ArmorTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"GameplayTagsToUse",
	Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::PropPointers),
	sizeof(FGameplayTagsToUse),
	alignof(FGameplayTagsToUse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagsToUse()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagsToUse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagsToUse.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagsToUse.InnerSingleton;
}
// End ScriptStruct FGameplayTagsToUse

// Begin Class AOWSCharacter Function GetCharacterID
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics
{
	struct OWSCharacter_eventGetCharacterID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterID", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::OWSCharacter_eventGetCharacterID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::OWSCharacter_eventGetCharacterID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterID();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterID

// Begin Class AOWSCharacter Function GetCharacterMesh
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics
{
	struct OWSCharacter_eventGetCharacterMesh_Parms
	{
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterMesh", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::OWSCharacter_eventGetCharacterMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::OWSCharacter_eventGetCharacterMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GetCharacterMesh();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterMesh

// Begin Class AOWSCharacter Function GetCharacterName
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics
{
	struct OWSCharacter_eventGetCharacterName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterName", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::OWSCharacter_eventGetCharacterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::OWSCharacter_eventGetCharacterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCharacterName();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterName

// Begin Class AOWSCharacter Function GetCharacterTexture
struct Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics
{
	struct OWSCharacter_eventGetCharacterTexture_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetCharacterTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetCharacterTexture", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::OWSCharacter_eventGetCharacterTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::OWSCharacter_eventGetCharacterTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetCharacterTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetCharacterTexture();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetCharacterTexture

// Begin Class AOWSCharacter Function GetDexterity
struct Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics
{
	struct OWSCharacter_eventGetDexterity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetDexterity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetDexterity", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::OWSCharacter_eventGetDexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::OWSCharacter_eventGetDexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetDexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetDexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetDexterity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDexterity();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetDexterity

// Begin Class AOWSCharacter Function GetHealth
struct Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics
{
	struct OWSCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::OWSCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::OWSCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetHealth

// Begin Class AOWSCharacter Function GetIntelligence
struct Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics
{
	struct OWSCharacter_eventGetIntelligence_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetIntelligence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetIntelligence", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::OWSCharacter_eventGetIntelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::OWSCharacter_eventGetIntelligence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetIntelligence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetIntelligence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetIntelligence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetIntelligence();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetIntelligence

// Begin Class AOWSCharacter Function GetLuck
struct Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics
{
	struct OWSCharacter_eventGetLuck_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetLuck_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetLuck", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::OWSCharacter_eventGetLuck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::OWSCharacter_eventGetLuck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetLuck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetLuck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetLuck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLuck();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetLuck

// Begin Class AOWSCharacter Function GetMana
struct Z_Construct_UFunction_AOWSCharacter_GetMana_Statics
{
	struct OWSCharacter_eventGetMana_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetMana", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::OWSCharacter_eventGetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::OWSCharacter_eventGetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMana();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetMana

// Begin Class AOWSCharacter Function GetStamina
struct Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics
{
	struct OWSCharacter_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::OWSCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::OWSCharacter_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetStamina

// Begin Class AOWSCharacter Function GetStrength
struct Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics
{
	struct OWSCharacter_eventGetStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetStrength", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::OWSCharacter_eventGetStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::OWSCharacter_eventGetStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStrength();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetStrength

// Begin Class AOWSCharacter Function GetWisdom
struct Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics
{
	struct OWSCharacter_eventGetWisdom_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacter_eventGetWisdom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "GetWisdom", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::OWSCharacter_eventGetWisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::OWSCharacter_eventGetWisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacter_GetWisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_GetWisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacter::execGetWisdom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWisdom();
	P_NATIVE_END;
}
// End Class AOWSCharacter Function GetWisdom

// Begin Class AOWSCharacter Function OnRep_CustomCharacterData
static const FName NAME_AOWSCharacter_OnRep_CustomCharacterData = FName(TEXT("OnRep_CustomCharacterData"));
void AOWSCharacter::OnRep_CustomCharacterData()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacter_OnRep_CustomCharacterData);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacter, nullptr, "OnRep_CustomCharacterData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacter Function OnRep_CustomCharacterData

// Begin Class AOWSCharacter
void AOWSCharacter::StaticRegisterNativesAOWSCharacter()
{
	UClass* Class = AOWSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterID", &AOWSCharacter::execGetCharacterID },
		{ "GetCharacterMesh", &AOWSCharacter::execGetCharacterMesh },
		{ "GetCharacterName", &AOWSCharacter::execGetCharacterName },
		{ "GetCharacterTexture", &AOWSCharacter::execGetCharacterTexture },
		{ "GetDexterity", &AOWSCharacter::execGetDexterity },
		{ "GetHealth", &AOWSCharacter::execGetHealth },
		{ "GetIntelligence", &AOWSCharacter::execGetIntelligence },
		{ "GetLuck", &AOWSCharacter::execGetLuck },
		{ "GetMana", &AOWSCharacter::execGetMana },
		{ "GetStamina", &AOWSCharacter::execGetStamina },
		{ "GetStrength", &AOWSCharacter::execGetStrength },
		{ "GetWisdom", &AOWSCharacter::execGetWisdom },
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
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCharacterData_MetaData[] = {
		{ "Category", "Character Customization" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStats_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagsToUse_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/OWSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagsToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterID, "GetCharacterID" }, // 2214181571
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterMesh, "GetCharacterMesh" }, // 2046615135
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterName, "GetCharacterName" }, // 1120576668
		{ &Z_Construct_UFunction_AOWSCharacter_GetCharacterTexture, "GetCharacterTexture" }, // 410901955
		{ &Z_Construct_UFunction_AOWSCharacter_GetDexterity, "GetDexterity" }, // 3578518690
		{ &Z_Construct_UFunction_AOWSCharacter_GetHealth, "GetHealth" }, // 3596976607
		{ &Z_Construct_UFunction_AOWSCharacter_GetIntelligence, "GetIntelligence" }, // 3633358498
		{ &Z_Construct_UFunction_AOWSCharacter_GetLuck, "GetLuck" }, // 3898045334
		{ &Z_Construct_UFunction_AOWSCharacter_GetMana, "GetMana" }, // 2090658326
		{ &Z_Construct_UFunction_AOWSCharacter_GetStamina, "GetStamina" }, // 2150479225
		{ &Z_Construct_UFunction_AOWSCharacter_GetStrength, "GetStrength" }, // 641305586
		{ &Z_Construct_UFunction_AOWSCharacter_GetWisdom, "GetWisdom" }, // 892863673
		{ &Z_Construct_UFunction_AOWSCharacter_OnRep_CustomCharacterData, "OnRep_CustomCharacterData" }, // 940550377
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CustomCharacterData = { "CustomCharacterData", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, CustomCharacterData), Z_Construct_UScriptStruct_FCustomCharacterDataStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCharacterData_MetaData), NewProp_CustomCharacterData_MetaData) }; // 2876975285
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterStats = { "CharacterStats", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, CharacterStats), Z_Construct_UScriptStruct_FCharacterStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStats_MetaData), NewProp_CharacterStats_MetaData) }; // 417406361
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacter_Statics::NewProp_GameplayTagsToUse = { "GameplayTagsToUse", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacter, GameplayTagsToUse), Z_Construct_UScriptStruct_FGameplayTagsToUse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagsToUse_MetaData), NewProp_GameplayTagsToUse_MetaData) }; // 2701483774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CustomCharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_CharacterStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacter_Statics::NewProp_GameplayTagsToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOWSCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSCharacter, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacter_Statics::ClassParams = {
	&AOWSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
	static const FName Name_CustomCharacterData(TEXT("CustomCharacterData"));
	const bool bIsValid = true
		&& Name_CustomCharacterData == ClassReps[(int32)ENetFields_Private::CustomCharacterData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AOWSCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacter);
AOWSCharacter::~AOWSCharacter() {}
// End Class AOWSCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomCharacterDataStruct::StaticStruct, Z_Construct_UScriptStruct_FCustomCharacterDataStruct_Statics::NewStructOps, TEXT("CustomCharacterDataStruct"), &Z_Registration_Info_UScriptStruct_CustomCharacterDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomCharacterDataStruct), 2876975285U) },
		{ FCharacterStats::StaticStruct, Z_Construct_UScriptStruct_FCharacterStats_Statics::NewStructOps, TEXT("CharacterStats"), &Z_Registration_Info_UScriptStruct_CharacterStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterStats), 417406361U) },
		{ FGameplayTagsToUse::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagsToUse_Statics::NewStructOps, TEXT("GameplayTagsToUse"), &Z_Registration_Info_UScriptStruct_GameplayTagsToUse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagsToUse), 2701483774U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSCharacter, AOWSCharacter::StaticClass, TEXT("AOWSCharacter"), &Z_Registration_Info_UClass_AOWSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSCharacter), 2092381974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_406045515(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
