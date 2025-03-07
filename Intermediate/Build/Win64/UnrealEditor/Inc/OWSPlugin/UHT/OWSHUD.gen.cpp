// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSHUD() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSHUD();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSHUD_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventory_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSInventoryItemStack_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_EAnchorPoint();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeaking();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueChoice();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFloatingDamage();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Enum EAnchorPoint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnchorPoint;
static UEnum* EAnchorPoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnchorPoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnchorPoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_EAnchorPoint, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("EAnchorPoint"));
	}
	return Z_Registration_Info_UEnum_EAnchorPoint.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<EAnchorPoint>()
{
	return EAnchorPoint_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BottomCenter.DisplayName", "Bottom Center" },
		{ "BottomCenter.Name", "BottomCenter" },
		{ "BottomLeft.DisplayName", "Bottom Left" },
		{ "BottomLeft.Name", "BottomLeft" },
		{ "BottomRight.DisplayName", "Bottom Right" },
		{ "BottomRight.Name", "BottomRight" },
		{ "MiddleCenter.DisplayName", "Middle Center" },
		{ "MiddleCenter.Name", "MiddleCenter" },
		{ "MiddleLeft.DisplayName", "Middle Left" },
		{ "MiddleLeft.Name", "MiddleLeft" },
		{ "MiddleRight.DisplayName", "Middle Right" },
		{ "MiddleRight.Name", "MiddleRight" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
		{ "TopCenter.DisplayName", "Top Center" },
		{ "TopCenter.Name", "TopCenter" },
		{ "TopLeft.DisplayName", "Top Left" },
		{ "TopLeft.Name", "TopLeft" },
		{ "TopRight.DisplayName", "Top Right" },
		{ "TopRight.Name", "TopRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TopLeft", (int64)TopLeft },
		{ "TopCenter", (int64)TopCenter },
		{ "TopRight", (int64)TopRight },
		{ "MiddleLeft", (int64)MiddleLeft },
		{ "MiddleCenter", (int64)MiddleCenter },
		{ "MiddleRight", (int64)MiddleRight },
		{ "BottomLeft", (int64)BottomLeft },
		{ "BottomCenter", (int64)BottomCenter },
		{ "BottomRight", (int64)BottomRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"EAnchorPoint",
	"EAnchorPoint",
	Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_EAnchorPoint()
{
	if (!Z_Registration_Info_UEnum_EAnchorPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnchorPoint.InnerSingleton, Z_Construct_UEnum_OWSPlugin_EAnchorPoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnchorPoint.InnerSingleton;
}
// End Enum EAnchorPoint

// Begin Enum ESpeechBalloonStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeechBalloonStyle;
static UEnum* ESpeechBalloonStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeechBalloonStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeechBalloonStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ESpeechBalloonStyle"));
	}
	return Z_Registration_Info_UEnum_ESpeechBalloonStyle.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<ESpeechBalloonStyle>()
{
	return ESpeechBalloonStyle_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
		{ "Speech.DisplayName", "Speech" },
		{ "Speech.Name", "Speech" },
		{ "Thought.DisplayName", "Thought" },
		{ "Thought.Name", "Thought" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Speech", (int64)Speech },
		{ "Thought", (int64)Thought },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"ESpeechBalloonStyle",
	"ESpeechBalloonStyle",
	Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle()
{
	if (!Z_Registration_Info_UEnum_ESpeechBalloonStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeechBalloonStyle.InnerSingleton, Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeechBalloonStyle.InnerSingleton;
}
// End Enum ESpeechBalloonStyle

// Begin ScriptStruct FFloatingDamage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatingDamage;
class UScriptStruct* FFloatingDamage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingDamage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatingDamage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatingDamage, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("FloatingDamage"));
	}
	return Z_Registration_Info_UScriptStruct_FloatingDamage.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FFloatingDamage>()
{
	return FFloatingDamage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatingDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTextLength_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeft_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLocation_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActorOffset_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHealing_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCritical_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkedForDeletion_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowDropShadow_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowOutline_MetaData[] = {
		{ "Category", "Floating Text" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DamageText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTextLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedActorOffset;
	static void NewProp_IsHealing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHealing;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static void NewProp_MarkedForDeletion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MarkedForDeletion;
	static void NewProp_ShowDropShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDropShadow;
	static void NewProp_ShowOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOutline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatingDamage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, DamageText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageText_MetaData), NewProp_DamageText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength = { "DamageTextLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, DamageTextLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTextLength_MetaData), NewProp_DamageTextLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, TimeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLeft_MetaData), NewProp_TimeLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation = { "DisplayLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, DisplayLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLocation_MetaData), NewProp_DisplayLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedActor_MetaData), NewProp_DamagedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset = { "DamagedActorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatingDamage, DamagedActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedActorOffset_MetaData), NewProp_DamagedActorOffset_MetaData) };
void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_SetBit(void* Obj)
{
	((FFloatingDamage*)Obj)->IsHealing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing = { "IsHealing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHealing_MetaData), NewProp_IsHealing_MetaData) };
void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((FFloatingDamage*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCritical_MetaData), NewProp_IsCritical_MetaData) };
void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_SetBit(void* Obj)
{
	((FFloatingDamage*)Obj)->MarkedForDeletion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion = { "MarkedForDeletion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkedForDeletion_MetaData), NewProp_MarkedForDeletion_MetaData) };
void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_SetBit(void* Obj)
{
	((FFloatingDamage*)Obj)->ShowDropShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow = { "ShowDropShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowDropShadow_MetaData), NewProp_ShowDropShadow_MetaData) };
void Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_SetBit(void* Obj)
{
	((FFloatingDamage*)Obj)->ShowOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline = { "ShowOutline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFloatingDamage), &Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowOutline_MetaData), NewProp_ShowOutline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamageTextLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_TimeLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DisplayLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_DamagedActorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsHealing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_IsCritical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_MarkedForDeletion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowDropShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewProp_ShowOutline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatingDamage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"FloatingDamage",
	Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::PropPointers),
	sizeof(FFloatingDamage),
	alignof(FFloatingDamage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatingDamage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatingDamage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatingDamage()
{
	if (!Z_Registration_Info_UScriptStruct_FloatingDamage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatingDamage.InnerSingleton, Z_Construct_UScriptStruct_FFloatingDamage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatingDamage.InnerSingleton;
}
// End ScriptStruct FFloatingDamage

// Begin ScriptStruct FDialogueChoice
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueChoice;
class UScriptStruct* FDialogueChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueChoice, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("DialogueChoice"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueChoice.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FDialogueChoice>()
{
	return FDialogueChoice::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceKeyword_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceKeyword;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueChoice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceKeyword = { "ChoiceKeyword", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, ChoiceKeyword), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceKeyword_MetaData), NewProp_ChoiceKeyword_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, ChoiceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceText_MetaData), NewProp_ChoiceText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceKeyword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"DialogueChoice",
	Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers),
	sizeof(FDialogueChoice),
	alignof(FDialogueChoice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueChoice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueChoice()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueChoice.InnerSingleton, Z_Construct_UScriptStruct_FDialogueChoice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueChoice.InnerSingleton;
}
// End ScriptStruct FDialogueChoice

// Begin ScriptStruct FCharacterSpeaking
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterSpeaking;
class UScriptStruct* FCharacterSpeaking::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterSpeaking.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterSpeaking.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSpeaking, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("CharacterSpeaking"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterSpeaking.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FCharacterSpeaking>()
{
	return FCharacterSpeaking::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterSpeaking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpokenStartTime_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpokenDuration_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpokenText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpokenStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpokenDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSpeaking>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSpeaking, Speaker), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSpeaking, SpokenText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpokenText_MetaData), NewProp_SpokenText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenStartTime = { "SpokenStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSpeaking, SpokenStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpokenStartTime_MetaData), NewProp_SpokenStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenDuration = { "SpokenDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSpeaking, SpokenDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpokenDuration_MetaData), NewProp_SpokenDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewProp_SpokenDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"CharacterSpeaking",
	Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::PropPointers),
	sizeof(FCharacterSpeaking),
	alignof(FCharacterSpeaking),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterSpeaking()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterSpeaking.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterSpeaking.InnerSingleton, Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterSpeaking.InnerSingleton;
}
// End ScriptStruct FCharacterSpeaking

// Begin Class AOWSHUD Function AddDialogueChoice
struct Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics
{
	struct OWSHUD_eventAddDialogueChoice_Parms
	{
		FString ChoiceKeyword;
		FString ChoiceText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceKeyword;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::NewProp_ChoiceKeyword = { "ChoiceKeyword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventAddDialogueChoice_Parms, ChoiceKeyword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventAddDialogueChoice_Parms, ChoiceText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::NewProp_ChoiceKeyword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::NewProp_ChoiceText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "AddDialogueChoice", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::OWSHUD_eventAddDialogueChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::OWSHUD_eventAddDialogueChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_AddDialogueChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_AddDialogueChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execAddDialogueChoice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ChoiceKeyword);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChoiceText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDialogueChoice(Z_Param_ChoiceKeyword,Z_Param_ChoiceText);
	P_NATIVE_END;
}
// End Class AOWSHUD Function AddDialogueChoice

// Begin Class AOWSHUD Function AddFloatingDamageItem
struct Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics
{
	struct OWSHUD_eventAddFloatingDamageItem_Parms
	{
		FString DamageText;
		AActor* DamagedActor;
		FVector DamagedActorOffset;
		bool IsHealing;
		bool IsCritical;
		bool ShowDropShadow;
		bool ShowOutline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "CPP_Default_IsCritical", "false" },
		{ "CPP_Default_IsHealing", "false" },
		{ "CPP_Default_ShowDropShadow", "false" },
		{ "CPP_Default_ShowOutline", "false" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DamageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamagedActorOffset;
	static void NewProp_IsHealing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHealing;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static void NewProp_ShowDropShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDropShadow;
	static void NewProp_ShowOutline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowOutline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamageText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActorOffset = { "DamagedActorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventAddFloatingDamageItem_Parms, DamagedActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing_SetBit(void* Obj)
{
	((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->IsHealing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing = { "IsHealing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow_SetBit(void* Obj)
{
	((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->ShowDropShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow = { "ShowDropShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline_SetBit(void* Obj)
{
	((OWSHUD_eventAddFloatingDamageItem_Parms*)Obj)->ShowOutline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline = { "ShowOutline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSHUD_eventAddFloatingDamageItem_Parms), &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_DamagedActorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsHealing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_IsCritical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowDropShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::NewProp_ShowOutline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "AddFloatingDamageItem", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::OWSHUD_eventAddFloatingDamageItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::OWSHUD_eventAddFloatingDamageItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execAddFloatingDamageItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DamageText);
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_STRUCT(FVector,Z_Param_DamagedActorOffset);
	P_GET_UBOOL(Z_Param_IsHealing);
	P_GET_UBOOL(Z_Param_IsCritical);
	P_GET_UBOOL(Z_Param_ShowDropShadow);
	P_GET_UBOOL(Z_Param_ShowOutline);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFloatingDamageItem(Z_Param_DamageText,Z_Param_DamagedActor,Z_Param_DamagedActorOffset,Z_Param_IsHealing,Z_Param_IsCritical,Z_Param_ShowDropShadow,Z_Param_ShowOutline);
	P_NATIVE_END;
}
// End Class AOWSHUD Function AddFloatingDamageItem

// Begin Class AOWSHUD Function CalculateScreenPosition
struct Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics
{
	struct OWSHUD_eventCalculateScreenPosition_Parms
	{
		TEnumAsByte<EAnchorPoint> ScreenAnchorPoint;
		TEnumAsByte<EAnchorPoint> UIAnchorPoint;
		int32 OffsetX;
		int32 OffsetY;
		int32 UIWidth;
		int32 UIHeight;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Screen" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAnchorPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint = { "ScreenAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, ScreenAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenAnchorPoint_MetaData), NewProp_ScreenAnchorPoint_MetaData) }; // 2257924909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIAnchorPoint_MetaData), NewProp_UIAnchorPoint_MetaData) }; // 2257924909
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, OffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetX_MetaData), NewProp_OffsetX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, OffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetY_MetaData), NewProp_OffsetY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth = { "UIWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidth_MetaData), NewProp_UIWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight = { "UIHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, UIHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIHeight_MetaData), NewProp_UIHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventCalculateScreenPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ScreenAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_UIHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "CalculateScreenPosition", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::OWSHUD_eventCalculateScreenPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::OWSHUD_eventCalculateScreenPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execCalculateScreenPosition)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ScreenAnchorPoint);
	P_GET_PROPERTY(FByteProperty,Z_Param_UIAnchorPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetX);
	P_GET_PROPERTY(FIntProperty,Z_Param_OffsetY);
	P_GET_PROPERTY(FIntProperty,Z_Param_UIWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_UIHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->CalculateScreenPosition(EAnchorPoint(Z_Param_ScreenAnchorPoint),EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_OffsetX,Z_Param_OffsetY,Z_Param_UIWidth,Z_Param_UIHeight);
	P_NATIVE_END;
}
// End Class AOWSHUD Function CalculateScreenPosition

// Begin Class AOWSHUD Function CleanUpFloatingDamageItems
struct Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "CleanUpFloatingDamageItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execCleanUpFloatingDamageItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanUpFloatingDamageItems();
	P_NATIVE_END;
}
// End Class AOWSHUD Function CleanUpFloatingDamageItems

// Begin Class AOWSHUD Function ClearDialogueChoices
struct Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "ClearDialogueChoices", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execClearDialogueChoices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDialogueChoices();
	P_NATIVE_END;
}
// End Class AOWSHUD Function ClearDialogueChoices

// Begin Class AOWSHUD Function DrawWindow
struct Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics
{
	struct OWSHUD_eventDrawWindow_Parms
	{
		TEnumAsByte<EAnchorPoint> ScreenAnchorPoint;
		TEnumAsByte<EAnchorPoint> UIAnchorPoint;
		int32 X;
		int32 Y;
		int32 Width;
		int32 Height;
		int32 DrawnAtX;
		int32 DrawnAtY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAnchorPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawnAtX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DrawnAtY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_ScreenAnchorPoint = { "ScreenAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, ScreenAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenAnchorPoint_MetaData), NewProp_ScreenAnchorPoint_MetaData) }; // 2257924909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIAnchorPoint_MetaData), NewProp_UIAnchorPoint_MetaData) }; // 2257924909
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_DrawnAtX = { "DrawnAtX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, DrawnAtX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_DrawnAtY = { "DrawnAtY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventDrawWindow_Parms, DrawnAtY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_ScreenAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_UIAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_DrawnAtX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::NewProp_DrawnAtY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "DrawWindow", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::OWSHUD_eventDrawWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::OWSHUD_eventDrawWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_DrawWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_DrawWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execDrawWindow)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ScreenAnchorPoint);
	P_GET_PROPERTY(FByteProperty,Z_Param_UIAnchorPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DrawnAtX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DrawnAtY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawWindow(EAnchorPoint(Z_Param_ScreenAnchorPoint),EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_X,Z_Param_Y,Z_Param_Width,Z_Param_Height,Z_Param_Out_DrawnAtX,Z_Param_Out_DrawnAtY);
	P_NATIVE_END;
}
// End Class AOWSHUD Function DrawWindow

// Begin Class AOWSHUD Function GetEstimatedDialogueNumberOfLines
struct Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics
{
	struct OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms
	{
		FString DialogueText;
		int32 TextWrapPoint;
		float AverageLetterWidth;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextWrapPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageLetterWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextWrapPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageLetterWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms, DialogueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_TextWrapPoint = { "TextWrapPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms, TextWrapPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextWrapPoint_MetaData), NewProp_TextWrapPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_AverageLetterWidth = { "AverageLetterWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms, AverageLetterWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageLetterWidth_MetaData), NewProp_AverageLetterWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_TextWrapPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_AverageLetterWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "GetEstimatedDialogueNumberOfLines", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::OWSHUD_eventGetEstimatedDialogueNumberOfLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execGetEstimatedDialogueNumberOfLines)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogueText);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextWrapPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AverageLetterWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEstimatedDialogueNumberOfLines(Z_Param_DialogueText,Z_Param_TextWrapPoint,Z_Param_AverageLetterWidth);
	P_NATIVE_END;
}
// End Class AOWSHUD Function GetEstimatedDialogueNumberOfLines

// Begin Class AOWSHUD Function OnDialogueChoiceBlur
struct OWSHUD_eventOnDialogueChoiceBlur_Parms
{
	FDialogueChoice DialogueChoiceHovered;
};
static const FName NAME_AOWSHUD_OnDialogueChoiceBlur = FName(TEXT("OnDialogueChoiceBlur"));
void AOWSHUD::OnDialogueChoiceBlur(const FDialogueChoice DialogueChoiceHovered)
{
	OWSHUD_eventOnDialogueChoiceBlur_Parms Parms;
	Parms.DialogueChoiceHovered=DialogueChoiceHovered;
	UFunction* Func = FindFunctionChecked(NAME_AOWSHUD_OnDialogueChoiceBlur);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueChoiceHovered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueChoiceHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::NewProp_DialogueChoiceHovered = { "DialogueChoiceHovered", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventOnDialogueChoiceBlur_Parms, DialogueChoiceHovered), Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueChoiceHovered_MetaData), NewProp_DialogueChoiceHovered_MetaData) }; // 3860018697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::NewProp_DialogueChoiceHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "OnDialogueChoiceBlur", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::PropPointers), sizeof(OWSHUD_eventOnDialogueChoiceBlur_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSHUD_eventOnDialogueChoiceBlur_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSHUD Function OnDialogueChoiceBlur

// Begin Class AOWSHUD Function OnDialogueChoiceHovered
struct OWSHUD_eventOnDialogueChoiceHovered_Parms
{
	FDialogueChoice DialogueChoiceHovered;
};
static const FName NAME_AOWSHUD_OnDialogueChoiceHovered = FName(TEXT("OnDialogueChoiceHovered"));
void AOWSHUD::OnDialogueChoiceHovered(const FDialogueChoice DialogueChoiceHovered)
{
	OWSHUD_eventOnDialogueChoiceHovered_Parms Parms;
	Parms.DialogueChoiceHovered=DialogueChoiceHovered;
	UFunction* Func = FindFunctionChecked(NAME_AOWSHUD_OnDialogueChoiceHovered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueChoiceHovered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueChoiceHovered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::NewProp_DialogueChoiceHovered = { "DialogueChoiceHovered", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventOnDialogueChoiceHovered_Parms, DialogueChoiceHovered), Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueChoiceHovered_MetaData), NewProp_DialogueChoiceHovered_MetaData) }; // 3860018697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::NewProp_DialogueChoiceHovered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "OnDialogueChoiceHovered", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::PropPointers), sizeof(OWSHUD_eventOnDialogueChoiceHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSHUD_eventOnDialogueChoiceHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSHUD Function OnDialogueChoiceHovered

// Begin Class AOWSHUD Function OnDialogueChoiceSelected
struct OWSHUD_eventOnDialogueChoiceSelected_Parms
{
	FDialogueChoice DialogueChoiceSelecte;
};
static const FName NAME_AOWSHUD_OnDialogueChoiceSelected = FName(TEXT("OnDialogueChoiceSelected"));
void AOWSHUD::OnDialogueChoiceSelected(const FDialogueChoice DialogueChoiceSelecte)
{
	OWSHUD_eventOnDialogueChoiceSelected_Parms Parms;
	Parms.DialogueChoiceSelecte=DialogueChoiceSelecte;
	UFunction* Func = FindFunctionChecked(NAME_AOWSHUD_OnDialogueChoiceSelected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueChoiceSelecte_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueChoiceSelecte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::NewProp_DialogueChoiceSelecte = { "DialogueChoiceSelecte", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventOnDialogueChoiceSelected_Parms, DialogueChoiceSelecte), Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueChoiceSelecte_MetaData), NewProp_DialogueChoiceSelecte_MetaData) }; // 3860018697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::NewProp_DialogueChoiceSelecte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "OnDialogueChoiceSelected", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::PropPointers), sizeof(OWSHUD_eventOnDialogueChoiceSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSHUD_eventOnDialogueChoiceSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSHUD Function OnDialogueChoiceSelected

// Begin Class AOWSHUD Function RenderDialogueBox
struct Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics
{
	struct OWSHUD_eventRenderDialogueBox_Parms
	{
		AOWSCharacter* Speaker;
		TEnumAsByte<EAnchorPoint> UIAnchorPoint;
		TEnumAsByte<ESpeechBalloonStyle> BalloonStyle;
		FString DialogueText;
		float FontScale;
		float OffsetX;
		float OffsetY;
		int32 TextWrapPoint;
		bool DrawTail;
		float BorderWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIAnchorPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BalloonStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextWrapPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTail_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BalloonStyle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextWrapPoint;
	static void NewProp_DrawTail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawTail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, Speaker), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIAnchorPoint_MetaData), NewProp_UIAnchorPoint_MetaData) }; // 2257924909
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_BalloonStyle = { "BalloonStyle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, BalloonStyle), Z_Construct_UEnum_OWSPlugin_ESpeechBalloonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BalloonStyle_MetaData), NewProp_BalloonStyle_MetaData) }; // 2144091834
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, DialogueText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, FontScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontScale_MetaData), NewProp_FontScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, OffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetX_MetaData), NewProp_OffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, OffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetY_MetaData), NewProp_OffsetY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_TextWrapPoint = { "TextWrapPoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, TextWrapPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextWrapPoint_MetaData), NewProp_TextWrapPoint_MetaData) };
void Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DrawTail_SetBit(void* Obj)
{
	((OWSHUD_eventRenderDialogueBox_Parms*)Obj)->DrawTail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DrawTail = { "DrawTail", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSHUD_eventRenderDialogueBox_Parms), &Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DrawTail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTail_MetaData), NewProp_DrawTail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_BorderWidth = { "BorderWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderDialogueBox_Parms, BorderWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderWidth_MetaData), NewProp_BorderWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_UIAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_BalloonStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_FontScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_OffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_OffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_TextWrapPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_DrawTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::NewProp_BorderWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderDialogueBox", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::OWSHUD_eventRenderDialogueBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::OWSHUD_eventRenderDialogueBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderDialogueBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderDialogueBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderDialogueBox)
{
	P_GET_OBJECT(AOWSCharacter,Z_Param_Speaker);
	P_GET_PROPERTY(FByteProperty,Z_Param_UIAnchorPoint);
	P_GET_PROPERTY(FByteProperty,Z_Param_BalloonStyle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogueText);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FontScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetY);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextWrapPoint);
	P_GET_UBOOL(Z_Param_DrawTail);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BorderWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderDialogueBox(Z_Param_Speaker,EAnchorPoint(Z_Param_UIAnchorPoint),ESpeechBalloonStyle(Z_Param_BalloonStyle),Z_Param_DialogueText,Z_Param_FontScale,Z_Param_OffsetX,Z_Param_OffsetY,Z_Param_TextWrapPoint,Z_Param_DrawTail,Z_Param_BorderWidth);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderDialogueBox

// Begin Class AOWSHUD Function RenderFloatingDamage
struct Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics
{
	struct OWSHUD_eventRenderFloatingDamage_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderFloatingDamage_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderFloatingDamage", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::OWSHUD_eventRenderFloatingDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::OWSHUD_eventRenderFloatingDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderFloatingDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderFloatingDamage(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderFloatingDamage

// Begin Class AOWSHUD Function RenderInteractiveDialogueChoices
struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics
{
	struct OWSHUD_eventRenderInteractiveDialogueChoices_Parms
	{
		AOWSCharacter* NPC;
		UTexture* BackgroundTexture;
		int32 MinSizeX;
		int32 MinSizeY;
		float FontSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoices_Parms, NPC), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoices_Parms, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_MinSizeX = { "MinSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoices_Parms, MinSizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_MinSizeY = { "MinSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoices_Parms, MinSizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoices_Parms, FontSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_BackgroundTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_MinSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_MinSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::NewProp_FontSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveDialogueChoices", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::OWSHUD_eventRenderInteractiveDialogueChoices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::OWSHUD_eventRenderInteractiveDialogueChoices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderInteractiveDialogueChoices)
{
	P_GET_OBJECT(AOWSCharacter,Z_Param_NPC);
	P_GET_OBJECT(UTexture,Z_Param_BackgroundTexture);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinSizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FontSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderInteractiveDialogueChoices(Z_Param_NPC,Z_Param_BackgroundTexture,Z_Param_MinSizeX,Z_Param_MinSizeY,Z_Param_FontSize);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderInteractiveDialogueChoices

// Begin Class AOWSHUD Function RenderInteractiveDialogueChoicesInternal
struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics
{
	struct OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms
	{
		TArray<FDialogueChoice> ChoicesToRender;
		AOWSCharacter* NPC;
		UTexture* BackgroundTexture;
		int32 MinSizeX;
		int32 MinSizeY;
		float FontSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicesToRender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoicesToRender_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoicesToRender;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_ChoicesToRender_Inner = { "ChoicesToRender", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(0, nullptr) }; // 3860018697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_ChoicesToRender = { "ChoicesToRender", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, ChoicesToRender), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicesToRender_MetaData), NewProp_ChoicesToRender_MetaData) }; // 3860018697
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, NPC), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, BackgroundTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_MinSizeX = { "MinSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, MinSizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_MinSizeY = { "MinSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, MinSizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms, FontSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_ChoicesToRender_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_ChoicesToRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_BackgroundTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_MinSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_MinSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::NewProp_FontSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveDialogueChoicesInternal", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::OWSHUD_eventRenderInteractiveDialogueChoicesInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderInteractiveDialogueChoicesInternal)
{
	P_GET_TARRAY_REF(FDialogueChoice,Z_Param_Out_ChoicesToRender);
	P_GET_OBJECT(AOWSCharacter,Z_Param_NPC);
	P_GET_OBJECT(UTexture,Z_Param_BackgroundTexture);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinSizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FontSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderInteractiveDialogueChoicesInternal(Z_Param_Out_ChoicesToRender,Z_Param_NPC,Z_Param_BackgroundTexture,Z_Param_MinSizeX,Z_Param_MinSizeY,Z_Param_FontSize);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderInteractiveDialogueChoicesInternal

// Begin Class AOWSHUD Function RenderInteractiveInventoryGrid
struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics
{
	struct OWSHUD_eventRenderInteractiveInventoryGrid_Parms
	{
		UOWSInventory* Inventory;
		UTexture* EmptySlotTexture;
		TEnumAsByte<EAnchorPoint> UIAnchorPoint;
		int32 X;
		int32 Y;
		int32 XSpacing;
		int32 YSpacing;
		int32 iconWidth;
		int32 iconHeight;
		int32 NumberOfRows;
		int32 NumberOfCols;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptySlotTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UIAnchorPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iconWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iconHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfRows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCols;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, Inventory), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_EmptySlotTexture = { "EmptySlotTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, EmptySlotTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_UIAnchorPoint = { "UIAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, UIAnchorPoint), Z_Construct_UEnum_OWSPlugin_EAnchorPoint, METADATA_PARAMS(0, nullptr) }; // 2257924909
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_XSpacing = { "XSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, XSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_YSpacing = { "YSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, YSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconWidth = { "iconWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, iconWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconHeight = { "iconHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, iconHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfRows = { "NumberOfRows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, NumberOfRows), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfCols = { "NumberOfCols", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGrid_Parms, NumberOfCols), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_EmptySlotTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_UIAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_XSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_YSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_iconHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::NewProp_NumberOfCols,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveInventoryGrid", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::OWSHUD_eventRenderInteractiveInventoryGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::OWSHUD_eventRenderInteractiveInventoryGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderInteractiveInventoryGrid)
{
	P_GET_OBJECT(UOWSInventory,Z_Param_Inventory);
	P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture);
	P_GET_PROPERTY(FByteProperty,Z_Param_UIAnchorPoint);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_XSpacing);
	P_GET_PROPERTY(FIntProperty,Z_Param_YSpacing);
	P_GET_PROPERTY(FIntProperty,Z_Param_iconWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_iconHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfRows);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfCols);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderInteractiveInventoryGrid(Z_Param_Inventory,Z_Param_EmptySlotTexture,EAnchorPoint(Z_Param_UIAnchorPoint),Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderInteractiveInventoryGrid

// Begin Class AOWSHUD Function RenderInteractiveInventoryGridUsingLockedSlotGroups
struct Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics
{
	struct OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms
	{
		UOWSInventory* Inventory;
		UTexture* EmptySlotTexture;
		UTexture* LockedRowTexture;
		int32 X;
		int32 Y;
		int32 XSpacing;
		int32 YSpacing;
		int32 iconWidth;
		int32 iconHeight;
		int32 NumberOfRows;
		int32 NumberOfCols;
		int32 SlotGroupRows;
		int32 SlotGroupCols;
		int32 SlotGroupXSpacing;
		int32 SlotGroupYSpacing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptySlotTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedRowTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_XSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iconWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_iconHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfRows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCols;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotGroupRows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotGroupCols;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotGroupXSpacing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotGroupYSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, Inventory), Z_Construct_UClass_UOWSInventory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_EmptySlotTexture = { "EmptySlotTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, EmptySlotTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_LockedRowTexture = { "LockedRowTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, LockedRowTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_XSpacing = { "XSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, XSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_YSpacing = { "YSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, YSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconWidth = { "iconWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, iconWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconHeight = { "iconHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, iconHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfRows = { "NumberOfRows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, NumberOfRows), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfCols = { "NumberOfCols", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, NumberOfCols), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupRows = { "SlotGroupRows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupRows), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupCols = { "SlotGroupCols", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupCols), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupXSpacing = { "SlotGroupXSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupXSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupYSpacing = { "SlotGroupYSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms, SlotGroupYSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_EmptySlotTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_LockedRowTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_XSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_YSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_iconHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_NumberOfCols,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupRows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupCols,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupXSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::NewProp_SlotGroupYSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "RenderInteractiveInventoryGridUsingLockedSlotGroups", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::OWSHUD_eventRenderInteractiveInventoryGridUsingLockedSlotGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execRenderInteractiveInventoryGridUsingLockedSlotGroups)
{
	P_GET_OBJECT(UOWSInventory,Z_Param_Inventory);
	P_GET_OBJECT(UTexture,Z_Param_EmptySlotTexture);
	P_GET_OBJECT(UTexture,Z_Param_LockedRowTexture);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_XSpacing);
	P_GET_PROPERTY(FIntProperty,Z_Param_YSpacing);
	P_GET_PROPERTY(FIntProperty,Z_Param_iconWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_iconHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfRows);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfCols);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotGroupRows);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotGroupCols);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotGroupXSpacing);
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotGroupYSpacing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderInteractiveInventoryGridUsingLockedSlotGroups(Z_Param_Inventory,Z_Param_EmptySlotTexture,Z_Param_LockedRowTexture,Z_Param_X,Z_Param_Y,Z_Param_XSpacing,Z_Param_YSpacing,Z_Param_iconWidth,Z_Param_iconHeight,Z_Param_NumberOfRows,Z_Param_NumberOfCols,Z_Param_SlotGroupRows,Z_Param_SlotGroupCols,Z_Param_SlotGroupXSpacing,Z_Param_SlotGroupYSpacing);
	P_NATIVE_END;
}
// End Class AOWSHUD Function RenderInteractiveInventoryGridUsingLockedSlotGroups

// Begin Class AOWSHUD Function SetSplitDialogTexture
struct Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics
{
	struct OWSHUD_eventSetSplitDialogTexture_Parms
	{
		UTexture* inSplitDialogTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_inSplitDialogTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::NewProp_inSplitDialogTexture = { "inSplitDialogTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSHUD_eventSetSplitDialogTexture_Parms, inSplitDialogTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::NewProp_inSplitDialogTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSHUD, nullptr, "SetSplitDialogTexture", nullptr, nullptr, Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::OWSHUD_eventSetSplitDialogTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::OWSHUD_eventSetSplitDialogTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSHUD::execSetSplitDialogTexture)
{
	P_GET_OBJECT(UTexture,Z_Param_inSplitDialogTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSplitDialogTexture(Z_Param_inSplitDialogTexture);
	P_NATIVE_END;
}
// End Class AOWSHUD Function SetSplitDialogTexture

// Begin Class AOWSHUD
void AOWSHUD::StaticRegisterNativesAOWSHUD()
{
	UClass* Class = AOWSHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialogueChoice", &AOWSHUD::execAddDialogueChoice },
		{ "AddFloatingDamageItem", &AOWSHUD::execAddFloatingDamageItem },
		{ "CalculateScreenPosition", &AOWSHUD::execCalculateScreenPosition },
		{ "CleanUpFloatingDamageItems", &AOWSHUD::execCleanUpFloatingDamageItems },
		{ "ClearDialogueChoices", &AOWSHUD::execClearDialogueChoices },
		{ "DrawWindow", &AOWSHUD::execDrawWindow },
		{ "GetEstimatedDialogueNumberOfLines", &AOWSHUD::execGetEstimatedDialogueNumberOfLines },
		{ "RenderDialogueBox", &AOWSHUD::execRenderDialogueBox },
		{ "RenderFloatingDamage", &AOWSHUD::execRenderFloatingDamage },
		{ "RenderInteractiveDialogueChoices", &AOWSHUD::execRenderInteractiveDialogueChoices },
		{ "RenderInteractiveDialogueChoicesInternal", &AOWSHUD::execRenderInteractiveDialogueChoicesInternal },
		{ "RenderInteractiveInventoryGrid", &AOWSHUD::execRenderInteractiveInventoryGrid },
		{ "RenderInteractiveInventoryGridUsingLockedSlotGroups", &AOWSHUD::execRenderInteractiveInventoryGridUsingLockedSlotGroups },
		{ "SetSplitDialogTexture", &AOWSHUD::execSetSplitDialogTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSHUD);
UClass* Z_Construct_UClass_AOWSHUD_NoRegister()
{
	return AOWSHUD::StaticClass();
}
struct Z_Construct_UClass_AOWSHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "OWSHUD.h" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFont_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageSpeed_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFontColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageOutlineColor_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageOutlineFont_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFont_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageSpeed_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFontColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageOutlineColor_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageOutlineFont_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Critical Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFont_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingSpeed_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFontColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingOutlineColor_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingOutlineFont_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingHealingFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFont_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingSpeed_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFontColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingOutlineColor_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingOutlineFont_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData[] = {
		{ "Category", "Floating Critical Healing" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDamageItems_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStackBeingDragged_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderTop_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Windows\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Windows" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderLeft_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderRight_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderBottom_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderTopLeftCorner_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderTopRightCorner_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderBottomLeftCorner_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorderBottomRightCorner_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowBackground_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThoughtBubbleTail_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Thought Bubble Tail\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thought Bubble Tail" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeechBalloonTail_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Speech Baloon Tail\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speech Baloon Tail" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Speakers\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speakers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueChoices_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueFont_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSecondIconForStack_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Should we draw a second icon with an offset when there is a stack. */" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we draw a second icon with an offset when there is a stack." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackDrawOffset_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The offset to draw the second icon in a stack. */" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset to draw the second icon in a stack." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackDrawTextOffset_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The offset to draw the number of items in a stack (entered as positive, but draws negative). */" },
#endif
		{ "ModuleRelativePath", "Public/OWSHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset to draw the number of items in a stack (entered as positive, but draws negative)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingDamageFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDamageSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDamageFontColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDamageDropShadowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageDropShadowOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageDropShadowOffsetY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDamageOutlineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingDamageOutlineFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageMinimumDisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingDamageFadeOutSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalDamageFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageFontColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageDropShadowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageDropShadowOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageDropShadowOffsetY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalDamageOutlineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalDamageOutlineFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageMinimumDisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalDamageFadeOutSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingHealingFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingHealingSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingHealingFontColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingHealingDropShadowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingDropShadowOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingDropShadowOffsetY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingHealingOutlineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingHealingOutlineFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingMinimumDisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingHealingFadeOutSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalHealingFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingFontColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingDropShadowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingDropShadowOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingDropShadowOffsetY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingCriticalHealingOutlineColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatingCriticalHealingOutlineFont;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingMinimumDisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingCriticalHealingFadeOutSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDamageItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatingDamageItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemStackBeingDragged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderBottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderTopLeftCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderTopRightCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderBottomLeftCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorderBottomRightCorner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBackground;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThoughtBubbleTail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeechBalloonTail;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueChoices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueFont;
	static void NewProp_bDrawSecondIconForStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSecondIconForStack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StackDrawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StackDrawTextOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSHUD_AddDialogueChoice, "AddDialogueChoice" }, // 1486254405
		{ &Z_Construct_UFunction_AOWSHUD_AddFloatingDamageItem, "AddFloatingDamageItem" }, // 2200083119
		{ &Z_Construct_UFunction_AOWSHUD_CalculateScreenPosition, "CalculateScreenPosition" }, // 1012915779
		{ &Z_Construct_UFunction_AOWSHUD_CleanUpFloatingDamageItems, "CleanUpFloatingDamageItems" }, // 137345410
		{ &Z_Construct_UFunction_AOWSHUD_ClearDialogueChoices, "ClearDialogueChoices" }, // 2445327472
		{ &Z_Construct_UFunction_AOWSHUD_DrawWindow, "DrawWindow" }, // 3190853352
		{ &Z_Construct_UFunction_AOWSHUD_GetEstimatedDialogueNumberOfLines, "GetEstimatedDialogueNumberOfLines" }, // 1593636270
		{ &Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceBlur, "OnDialogueChoiceBlur" }, // 3197486900
		{ &Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceHovered, "OnDialogueChoiceHovered" }, // 2581408275
		{ &Z_Construct_UFunction_AOWSHUD_OnDialogueChoiceSelected, "OnDialogueChoiceSelected" }, // 134513224
		{ &Z_Construct_UFunction_AOWSHUD_RenderDialogueBox, "RenderDialogueBox" }, // 2533067148
		{ &Z_Construct_UFunction_AOWSHUD_RenderFloatingDamage, "RenderFloatingDamage" }, // 3055466307
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoices, "RenderInteractiveDialogueChoices" }, // 343229137
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveDialogueChoicesInternal, "RenderInteractiveDialogueChoicesInternal" }, // 2891896733
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGrid, "RenderInteractiveInventoryGrid" }, // 342910255
		{ &Z_Construct_UFunction_AOWSHUD_RenderInteractiveInventoryGridUsingLockedSlotGroups, "RenderInteractiveInventoryGridUsingLockedSlotGroups" }, // 791155371
		{ &Z_Construct_UFunction_AOWSHUD_SetSplitDialogTexture, "SetSplitDialogTexture" }, // 171367745
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont = { "FloatingDamageFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageFont_MetaData), NewProp_FloatingDamageFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed = { "FloatingDamageSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageSpeed_MetaData), NewProp_FloatingDamageSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor = { "FloatingDamageFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageFontColor_MetaData), NewProp_FloatingDamageFontColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor = { "FloatingDamageDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageDropShadowColor_MetaData), NewProp_FloatingDamageDropShadowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX = { "FloatingDamageDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageDropShadowOffsetX_MetaData), NewProp_FloatingDamageDropShadowOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY = { "FloatingDamageDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageDropShadowOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageDropShadowOffsetY_MetaData), NewProp_FloatingDamageDropShadowOffsetY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor = { "FloatingDamageOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageOutlineColor_MetaData), NewProp_FloatingDamageOutlineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont = { "FloatingDamageOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageOutlineFont_MetaData), NewProp_FloatingDamageOutlineFont_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime = { "FloatingDamageMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageMinimumDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageMinimumDisplayTime_MetaData), NewProp_FloatingDamageMinimumDisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed = { "FloatingDamageFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageFadeOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageFadeOutSpeed_MetaData), NewProp_FloatingDamageFadeOutSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont = { "FloatingCriticalDamageFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageFont_MetaData), NewProp_FloatingCriticalDamageFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed = { "FloatingCriticalDamageSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageSpeed_MetaData), NewProp_FloatingCriticalDamageSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor = { "FloatingCriticalDamageFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageFontColor_MetaData), NewProp_FloatingCriticalDamageFontColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor = { "FloatingCriticalDamageDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageDropShadowColor_MetaData), NewProp_FloatingCriticalDamageDropShadowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX = { "FloatingCriticalDamageDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData), NewProp_FloatingCriticalDamageDropShadowOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY = { "FloatingCriticalDamageDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageDropShadowOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData), NewProp_FloatingCriticalDamageDropShadowOffsetY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor = { "FloatingCriticalDamageOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageOutlineColor_MetaData), NewProp_FloatingCriticalDamageOutlineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont = { "FloatingCriticalDamageOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageOutlineFont_MetaData), NewProp_FloatingCriticalDamageOutlineFont_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime = { "FloatingCriticalDamageMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageMinimumDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData), NewProp_FloatingCriticalDamageMinimumDisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed = { "FloatingCriticalDamageFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalDamageFadeOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData), NewProp_FloatingCriticalDamageFadeOutSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont = { "FloatingHealingFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingFont_MetaData), NewProp_FloatingHealingFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed = { "FloatingHealingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingSpeed_MetaData), NewProp_FloatingHealingSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor = { "FloatingHealingFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingFontColor_MetaData), NewProp_FloatingHealingFontColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor = { "FloatingHealingDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingDropShadowColor_MetaData), NewProp_FloatingHealingDropShadowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX = { "FloatingHealingDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingDropShadowOffsetX_MetaData), NewProp_FloatingHealingDropShadowOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY = { "FloatingHealingDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingDropShadowOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingDropShadowOffsetY_MetaData), NewProp_FloatingHealingDropShadowOffsetY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor = { "FloatingHealingOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingOutlineColor_MetaData), NewProp_FloatingHealingOutlineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont = { "FloatingHealingOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingOutlineFont_MetaData), NewProp_FloatingHealingOutlineFont_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime = { "FloatingHealingMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingMinimumDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingMinimumDisplayTime_MetaData), NewProp_FloatingHealingMinimumDisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed = { "FloatingHealingFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingHealingFadeOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingHealingFadeOutSpeed_MetaData), NewProp_FloatingHealingFadeOutSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont = { "FloatingCriticalHealingFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingFont_MetaData), NewProp_FloatingCriticalHealingFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed = { "FloatingCriticalHealingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingSpeed_MetaData), NewProp_FloatingCriticalHealingSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor = { "FloatingCriticalHealingFontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingFontColor_MetaData), NewProp_FloatingCriticalHealingFontColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor = { "FloatingCriticalHealingDropShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingDropShadowColor_MetaData), NewProp_FloatingCriticalHealingDropShadowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX = { "FloatingCriticalHealingDropShadowOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData), NewProp_FloatingCriticalHealingDropShadowOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY = { "FloatingCriticalHealingDropShadowOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingDropShadowOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData), NewProp_FloatingCriticalHealingDropShadowOffsetY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor = { "FloatingCriticalHealingOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingOutlineColor_MetaData), NewProp_FloatingCriticalHealingOutlineColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont = { "FloatingCriticalHealingOutlineFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingOutlineFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingOutlineFont_MetaData), NewProp_FloatingCriticalHealingOutlineFont_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime = { "FloatingCriticalHealingMinimumDisplayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingMinimumDisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData), NewProp_FloatingCriticalHealingMinimumDisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed = { "FloatingCriticalHealingFadeOutSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingCriticalHealingFadeOutSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData), NewProp_FloatingCriticalHealingFadeOutSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_Inner = { "FloatingDamageItems", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFloatingDamage, METADATA_PARAMS(0, nullptr) }; // 4031439210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems = { "FloatingDamageItems", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, FloatingDamageItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDamageItems_MetaData), NewProp_FloatingDamageItems_MetaData) }; // 4031439210
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged = { "ItemStackBeingDragged", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, ItemStackBeingDragged), Z_Construct_UClass_UOWSInventoryItemStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStackBeingDragged_MetaData), NewProp_ItemStackBeingDragged_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTop = { "WindowBorderTop", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderTop), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderTop_MetaData), NewProp_WindowBorderTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderLeft = { "WindowBorderLeft", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderLeft), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderLeft_MetaData), NewProp_WindowBorderLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderRight = { "WindowBorderRight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderRight), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderRight_MetaData), NewProp_WindowBorderRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottom = { "WindowBorderBottom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderBottom), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderBottom_MetaData), NewProp_WindowBorderBottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTopLeftCorner = { "WindowBorderTopLeftCorner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderTopLeftCorner), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderTopLeftCorner_MetaData), NewProp_WindowBorderTopLeftCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTopRightCorner = { "WindowBorderTopRightCorner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderTopRightCorner), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderTopRightCorner_MetaData), NewProp_WindowBorderTopRightCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottomLeftCorner = { "WindowBorderBottomLeftCorner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderBottomLeftCorner), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderBottomLeftCorner_MetaData), NewProp_WindowBorderBottomLeftCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottomRightCorner = { "WindowBorderBottomRightCorner", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBorderBottomRightCorner), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBorderBottomRightCorner_MetaData), NewProp_WindowBorderBottomRightCorner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBackground = { "WindowBackground", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, WindowBackground), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowBackground_MetaData), NewProp_WindowBackground_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_ThoughtBubbleTail = { "ThoughtBubbleTail", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, ThoughtBubbleTail), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThoughtBubbleTail_MetaData), NewProp_ThoughtBubbleTail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_SpeechBalloonTail = { "SpeechBalloonTail", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, SpeechBalloonTail), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeechBalloonTail_MetaData), NewProp_SpeechBalloonTail_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterSpeaking, METADATA_PARAMS(0, nullptr) }; // 4091407262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speakers_MetaData), NewProp_Speakers_MetaData) }; // 4091407262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueChoices_Inner = { "DialogueChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(0, nullptr) }; // 3860018697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueChoices = { "DialogueChoices", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, DialogueChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueChoices_MetaData), NewProp_DialogueChoices_MetaData) }; // 3860018697
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueFont = { "DialogueFont", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, DialogueFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueFont_MetaData), NewProp_DialogueFont_MetaData) };
void Z_Construct_UClass_AOWSHUD_Statics::NewProp_bDrawSecondIconForStack_SetBit(void* Obj)
{
	((AOWSHUD*)Obj)->bDrawSecondIconForStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_bDrawSecondIconForStack = { "bDrawSecondIconForStack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSHUD), &Z_Construct_UClass_AOWSHUD_Statics::NewProp_bDrawSecondIconForStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSecondIconForStack_MetaData), NewProp_bDrawSecondIconForStack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_StackDrawOffset = { "StackDrawOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, StackDrawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackDrawOffset_MetaData), NewProp_StackDrawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSHUD_Statics::NewProp_StackDrawTextOffset = { "StackDrawTextOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSHUD, StackDrawTextOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackDrawTextOffset_MetaData), NewProp_StackDrawTextOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFontColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageDropShadowOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageOutlineFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageMinimumDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageFadeOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFontColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageDropShadowOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageOutlineFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageMinimumDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalDamageFadeOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFontColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingDropShadowOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingOutlineFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingMinimumDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingHealingFadeOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFontColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingDropShadowOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingOutlineFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingMinimumDisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingCriticalHealingFadeOutSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_FloatingDamageItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_ItemStackBeingDragged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTopLeftCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderTopRightCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottomLeftCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBorderBottomRightCorner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_WindowBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_ThoughtBubbleTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_SpeechBalloonTail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_Speakers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_Speakers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_DialogueFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_bDrawSecondIconForStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_StackDrawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSHUD_Statics::NewProp_StackDrawTextOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSHUD_Statics::ClassParams = {
	&AOWSHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSHUD()
{
	if (!Z_Registration_Info_UClass_AOWSHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSHUD.OuterSingleton, Z_Construct_UClass_AOWSHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSHUD.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSHUD>()
{
	return AOWSHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSHUD);
AOWSHUD::~AOWSHUD() {}
// End Class AOWSHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnchorPoint_StaticEnum, TEXT("EAnchorPoint"), &Z_Registration_Info_UEnum_EAnchorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2257924909U) },
		{ ESpeechBalloonStyle_StaticEnum, TEXT("ESpeechBalloonStyle"), &Z_Registration_Info_UEnum_ESpeechBalloonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2144091834U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloatingDamage::StaticStruct, Z_Construct_UScriptStruct_FFloatingDamage_Statics::NewStructOps, TEXT("FloatingDamage"), &Z_Registration_Info_UScriptStruct_FloatingDamage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatingDamage), 4031439210U) },
		{ FDialogueChoice::StaticStruct, Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewStructOps, TEXT("DialogueChoice"), &Z_Registration_Info_UScriptStruct_DialogueChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueChoice), 3860018697U) },
		{ FCharacterSpeaking::StaticStruct, Z_Construct_UScriptStruct_FCharacterSpeaking_Statics::NewStructOps, TEXT("CharacterSpeaking"), &Z_Registration_Info_UScriptStruct_CharacterSpeaking, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterSpeaking), 4091407262U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSHUD, AOWSHUD::StaticClass, TEXT("AOWSHUD"), &Z_Registration_Info_UClass_AOWSHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSHUD), 3795053462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_4120931192(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSHUD_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
