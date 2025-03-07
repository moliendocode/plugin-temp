// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterWithAbilities.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterWithAbilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacter_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterWithAbilities();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAttributeSet_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_AbilityInput();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Enum AbilityInput
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AbilityInput;
static UEnum* AbilityInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AbilityInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AbilityInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_AbilityInput, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("AbilityInput"));
	}
	return Z_Registration_Info_UEnum_AbilityInput.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<AbilityInput>()
{
	return AbilityInput_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "UseAbility1.DisplayName", "Use Ability 1" },
		{ "UseAbility1.Name", "AbilityInput::UseAbility1" },
		{ "UseAbility10.DisplayName", "Use Ability 10" },
		{ "UseAbility10.Name", "AbilityInput::UseAbility10" },
		{ "UseAbility11.DisplayName", "Use Ability 11" },
		{ "UseAbility11.Name", "AbilityInput::UseAbility11" },
		{ "UseAbility12.DisplayName", "Use Ability 12" },
		{ "UseAbility12.Name", "AbilityInput::UseAbility12" },
		{ "UseAbility13.DisplayName", "Use Ability 13" },
		{ "UseAbility13.Name", "AbilityInput::UseAbility13" },
		{ "UseAbility14.DisplayName", "Use Ability 14" },
		{ "UseAbility14.Name", "AbilityInput::UseAbility14" },
		{ "UseAbility15.DisplayName", "Use Ability 15" },
		{ "UseAbility15.Name", "AbilityInput::UseAbility15" },
		{ "UseAbility16.DisplayName", "Use Ability 16" },
		{ "UseAbility16.Name", "AbilityInput::UseAbility16" },
		{ "UseAbility17.DisplayName", "Use Ability 17" },
		{ "UseAbility17.Name", "AbilityInput::UseAbility17" },
		{ "UseAbility18.DisplayName", "Use Ability 18" },
		{ "UseAbility18.Name", "AbilityInput::UseAbility18" },
		{ "UseAbility19.DisplayName", "Use Ability 19" },
		{ "UseAbility19.Name", "AbilityInput::UseAbility19" },
		{ "UseAbility2.Comment", "//This maps the first ability(input ID should be 0 in int) to the action mapping(which you define in the project settings) by the name of \"UseAbility1\". \"Use Spell 1\" is the blueprint name of the element.\n" },
		{ "UseAbility2.DisplayName", "Use Ability 2" },
		{ "UseAbility2.Name", "AbilityInput::UseAbility2" },
		{ "UseAbility2.ToolTip", "This maps the first ability(input ID should be 0 in int) to the action mapping(which you define in the project settings) by the name of \"UseAbility1\". \"Use Spell 1\" is the blueprint name of the element." },
		{ "UseAbility20.DisplayName", "Use Ability 20" },
		{ "UseAbility20.Name", "AbilityInput::UseAbility20" },
		{ "UseAbility21.DisplayName", "Use Ability 21" },
		{ "UseAbility21.Name", "AbilityInput::UseAbility21" },
		{ "UseAbility22.DisplayName", "Use Ability 22" },
		{ "UseAbility22.Name", "AbilityInput::UseAbility22" },
		{ "UseAbility3.Comment", "//Maps ability 2(input ID 1) to action mapping UseAbility2. \"Use Spell 2\" is mostly used for when the enum is a blueprint variable.\n" },
		{ "UseAbility3.DisplayName", "Use Ability 3" },
		{ "UseAbility3.Name", "AbilityInput::UseAbility3" },
		{ "UseAbility3.ToolTip", "Maps ability 2(input ID 1) to action mapping UseAbility2. \"Use Spell 2\" is mostly used for when the enum is a blueprint variable." },
		{ "UseAbility4.DisplayName", "Use Ability 4" },
		{ "UseAbility4.Name", "AbilityInput::UseAbility4" },
		{ "UseAbility5.DisplayName", "Use Ability 5" },
		{ "UseAbility5.Name", "AbilityInput::UseAbility5" },
		{ "UseAbility6.DisplayName", "Use Ability 6" },
		{ "UseAbility6.Name", "AbilityInput::UseAbility6" },
		{ "UseAbility7.DisplayName", "Use Ability 7" },
		{ "UseAbility7.Name", "AbilityInput::UseAbility7" },
		{ "UseAbility8.DisplayName", "Use Ability 8" },
		{ "UseAbility8.Name", "AbilityInput::UseAbility8" },
		{ "UseAbility9.DisplayName", "Use Ability 9" },
		{ "UseAbility9.Name", "AbilityInput::UseAbility9" },
		{ "UseWeapon1.DisplayName", "Use Weapon 1" },
		{ "UseWeapon1.Name", "AbilityInput::UseWeapon1" },
		{ "UseWeapon2.DisplayName", "Use Weapon 2" },
		{ "UseWeapon2.Name", "AbilityInput::UseWeapon2" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AbilityInput::UseAbility1", (int64)AbilityInput::UseAbility1 },
		{ "AbilityInput::UseAbility2", (int64)AbilityInput::UseAbility2 },
		{ "AbilityInput::UseAbility3", (int64)AbilityInput::UseAbility3 },
		{ "AbilityInput::UseAbility4", (int64)AbilityInput::UseAbility4 },
		{ "AbilityInput::UseAbility5", (int64)AbilityInput::UseAbility5 },
		{ "AbilityInput::UseAbility6", (int64)AbilityInput::UseAbility6 },
		{ "AbilityInput::UseAbility7", (int64)AbilityInput::UseAbility7 },
		{ "AbilityInput::UseAbility8", (int64)AbilityInput::UseAbility8 },
		{ "AbilityInput::UseAbility9", (int64)AbilityInput::UseAbility9 },
		{ "AbilityInput::UseAbility10", (int64)AbilityInput::UseAbility10 },
		{ "AbilityInput::UseAbility11", (int64)AbilityInput::UseAbility11 },
		{ "AbilityInput::UseAbility12", (int64)AbilityInput::UseAbility12 },
		{ "AbilityInput::UseAbility13", (int64)AbilityInput::UseAbility13 },
		{ "AbilityInput::UseAbility14", (int64)AbilityInput::UseAbility14 },
		{ "AbilityInput::UseAbility15", (int64)AbilityInput::UseAbility15 },
		{ "AbilityInput::UseAbility16", (int64)AbilityInput::UseAbility16 },
		{ "AbilityInput::UseAbility17", (int64)AbilityInput::UseAbility17 },
		{ "AbilityInput::UseAbility18", (int64)AbilityInput::UseAbility18 },
		{ "AbilityInput::UseAbility19", (int64)AbilityInput::UseAbility19 },
		{ "AbilityInput::UseAbility20", (int64)AbilityInput::UseAbility20 },
		{ "AbilityInput::UseAbility21", (int64)AbilityInput::UseAbility21 },
		{ "AbilityInput::UseAbility22", (int64)AbilityInput::UseAbility22 },
		{ "AbilityInput::UseWeapon1", (int64)AbilityInput::UseWeapon1 },
		{ "AbilityInput::UseWeapon2", (int64)AbilityInput::UseWeapon2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"AbilityInput",
	"AbilityInput",
	Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_AbilityInput()
{
	if (!Z_Registration_Info_UEnum_AbilityInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AbilityInput.InnerSingleton, Z_Construct_UEnum_OWSPlugin_AbilityInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AbilityInput.InnerSingleton;
}
// End Enum AbilityInput

// Begin Class AOWSCharacterWithAbilities Function CalculateUpdatedDamage
struct OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms
{
	float OriginalDamage;
	const UOWSAttributeSet* SourceAttributes;
	FGameplayTagContainer EffectTags;
	float NewDamage;
	bool IsCritical;
};
static const FName NAME_AOWSCharacterWithAbilities_CalculateUpdatedDamage = FName(TEXT("CalculateUpdatedDamage"));
void AOWSCharacterWithAbilities::CalculateUpdatedDamage(float OriginalDamage, const UOWSAttributeSet* SourceAttributes, FGameplayTagContainer EffectTags, float& NewDamage, bool& IsCritical)
{
	OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms Parms;
	Parms.OriginalDamage=OriginalDamage;
	Parms.SourceAttributes=SourceAttributes;
	Parms.EffectTags=EffectTags;
	Parms.NewDamage=NewDamage;
	Parms.IsCritical=IsCritical ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_CalculateUpdatedDamage);
	ProcessEvent(Func,&Parms);
	NewDamage=Parms.NewDamage;
	IsCritical=Parms.IsCritical;
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage = { "OriginalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, OriginalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, SourceAttributes), Z_Construct_UClass_UOWSAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAttributes_MetaData), NewProp_SourceAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_EffectTags = { "EffectTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, EffectTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms, NewDamage), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_OriginalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_SourceAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_EffectTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_NewDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::NewProp_IsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "CalculateUpdatedDamage", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventCalculateUpdatedDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function CalculateUpdatedDamage

// Begin Class AOWSCharacterWithAbilities Function ChangeSpell
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics
{
	struct OWSCharacterWithAbilities_eventChangeSpell_Parms
	{
		int32 SpellSlot;
		TSubclassOf<UGameplayAbility> NewSpell;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpellSlot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewSpell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_SpellSlot = { "SpellSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeSpell_Parms, SpellSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_NewSpell = { "NewSpell", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeSpell_Parms, NewSpell), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_SpellSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::NewProp_NewSpell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ChangeSpell", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::OWSCharacterWithAbilities_eventChangeSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::OWSCharacterWithAbilities_eventChangeSpell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execChangeSpell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpellSlot);
	P_GET_OBJECT(UClass,Z_Param_NewSpell);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeSpell(Z_Param_SpellSlot,Z_Param_NewSpell);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function ChangeSpell

// Begin Class AOWSCharacterWithAbilities Function ChangeWeapon
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics
{
	struct OWSCharacterWithAbilities_eventChangeWeapon_Parms
	{
		int32 WeaponSlot;
		TSubclassOf<UGameplayAbility> NewWeapon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponSlot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewWeapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeWeapon_Parms, WeaponSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::NewProp_NewWeapon = { "NewWeapon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventChangeWeapon_Parms, NewWeapon), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::NewProp_WeaponSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::NewProp_NewWeapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ChangeWeapon", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::OWSCharacterWithAbilities_eventChangeWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::OWSCharacterWithAbilities_eventChangeWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execChangeWeapon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WeaponSlot);
	P_GET_OBJECT(UClass,Z_Param_NewWeapon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeWeapon(Z_Param_WeaponSlot,Z_Param_NewWeapon);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function ChangeWeapon

// Begin Class AOWSCharacterWithAbilities Function ClearAbility
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics
{
	struct OWSCharacterWithAbilities_eventClearAbility_Parms
	{
		int32 SpellSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpellSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::NewProp_SpellSlot = { "SpellSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventClearAbility_Parms, SpellSlot), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::NewProp_SpellSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ClearAbility", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::OWSCharacterWithAbilities_eventClearAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::OWSCharacterWithAbilities_eventClearAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execClearAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpellSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAbility(Z_Param_SpellSlot);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function ClearAbility

// Begin Class AOWSCharacterWithAbilities Function EnergyChanged
struct OWSCharacterWithAbilities_eventEnergyChanged_Parms
{
	float OldValue;
	float NewValue;
};
static const FName NAME_AOWSCharacterWithAbilities_EnergyChanged = FName(TEXT("EnergyChanged"));
void AOWSCharacterWithAbilities::EnergyChanged(float OldValue, float NewValue)
{
	OWSCharacterWithAbilities_eventEnergyChanged_Parms Parms;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_EnergyChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventEnergyChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventEnergyChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "EnergyChanged", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventEnergyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventEnergyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function EnergyChanged

// Begin Class AOWSCharacterWithAbilities Function GetCharacterStats
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Character Stats\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Character Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GetCharacterStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execGetCharacterStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCharacterStats();
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function GetCharacterStats

// Begin Class AOWSCharacterWithAbilities Function GrantAbility
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics
{
	struct OWSCharacterWithAbilities_eventGrantAbility_Parms
	{
		TSubclassOf<UGameplayAbility> NewAbility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::NewProp_NewAbility = { "NewAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbility_Parms, NewAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::NewProp_NewAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GrantAbility", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::OWSCharacterWithAbilities_eventGrantAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::OWSCharacterWithAbilities_eventGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execGrantAbility)
{
	P_GET_OBJECT(UClass,Z_Param_NewAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantAbility(Z_Param_NewAbility);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function GrantAbility

// Begin Class AOWSCharacterWithAbilities Function GrantAbilityKeyBind
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics
{
	struct OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms
	{
		TSubclassOf<UGameplayAbility> NewAbility;
		int32 AbilityLevel;
		int32 InputID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAbility;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_NewAbility = { "NewAbility", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, NewAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, AbilityLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms, InputID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_NewAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_AbilityLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "GrantAbilityKeyBind", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::OWSCharacterWithAbilities_eventGrantAbilityKeyBind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execGrantAbilityKeyBind)
{
	P_GET_OBJECT(UClass,Z_Param_NewAbility);
	P_GET_PROPERTY(FIntProperty,Z_Param_AbilityLevel);
	P_GET_PROPERTY(FIntProperty,Z_Param_InputID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantAbilityKeyBind(Z_Param_NewAbility,Z_Param_AbilityLevel,Z_Param_InputID);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function GrantAbilityKeyBind

// Begin Class AOWSCharacterWithAbilities Function HealthChanged
struct OWSCharacterWithAbilities_eventHealthChanged_Parms
{
	float OldValue;
	float NewValue;
};
static const FName NAME_AOWSCharacterWithAbilities_HealthChanged = FName(TEXT("HealthChanged"));
void AOWSCharacterWithAbilities::HealthChanged(float OldValue, float NewValue)
{
	OWSCharacterWithAbilities_eventHealthChanged_Parms Parms;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_HealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventHealthChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventHealthChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "HealthChanged", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function HealthChanged

// Begin Class AOWSCharacterWithAbilities Function ManaChanged
struct OWSCharacterWithAbilities_eventManaChanged_Parms
{
	float OldValue;
	float NewValue;
};
static const FName NAME_AOWSCharacterWithAbilities_ManaChanged = FName(TEXT("ManaChanged"));
void AOWSCharacterWithAbilities::ManaChanged(float OldValue, float NewValue)
{
	OWSCharacterWithAbilities_eventManaChanged_Parms Parms;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_ManaChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventManaChanged_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventManaChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "ManaChanged", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventManaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventManaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function ManaChanged

// Begin Class AOWSCharacterWithAbilities Function OnDeath
struct OWSCharacterWithAbilities_eventOnDeath_Parms
{
	AOWSCharacter* WhoKilledMe;
};
static const FName NAME_AOWSCharacterWithAbilities_OnDeath = FName(TEXT("OnDeath"));
void AOWSCharacterWithAbilities::OnDeath(AOWSCharacter* WhoKilledMe)
{
	OWSCharacterWithAbilities_eventOnDeath_Parms Parms;
	Parms.WhoKilledMe=WhoKilledMe;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnDeath);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoKilledMe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::NewProp_WhoKilledMe = { "WhoKilledMe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnDeath_Parms, WhoKilledMe), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::NewProp_WhoKilledMe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnDeath", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventOnDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventOnDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function OnDeath

// Begin Class AOWSCharacterWithAbilities Function OnGameplayEffectTagCountChanged
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics
{
	struct OWSCharacterWithAbilities_eventOnGameplayEffectTagCountChanged_Parms
	{
		FGameplayTag GameplayTag;
		int32 TagCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnGameplayEffectTagCountChanged_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTag_MetaData), NewProp_GameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::NewProp_TagCount = { "TagCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnGameplayEffectTagCountChanged_Parms, TagCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::NewProp_GameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::NewProp_TagCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnGameplayEffectTagCountChanged", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::OWSCharacterWithAbilities_eventOnGameplayEffectTagCountChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::OWSCharacterWithAbilities_eventOnGameplayEffectTagCountChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execOnGameplayEffectTagCountChanged)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_TagCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayEffectTagCountChanged(Z_Param_GameplayTag,Z_Param_TagCount);
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function OnGameplayEffectTagCountChanged

// Begin Class AOWSCharacterWithAbilities Function OnInflictDamage
struct OWSCharacterWithAbilities_eventOnInflictDamage_Parms
{
	AOWSCharacter* WhoWasDamaged;
	float DamageAmount;
	bool IsCritical;
};
static const FName NAME_AOWSCharacterWithAbilities_OnInflictDamage = FName(TEXT("OnInflictDamage"));
void AOWSCharacterWithAbilities::OnInflictDamage(AOWSCharacter* WhoWasDamaged, float DamageAmount, bool IsCritical)
{
	OWSCharacterWithAbilities_eventOnInflictDamage_Parms Parms;
	Parms.WhoWasDamaged=WhoWasDamaged;
	Parms.DamageAmount=DamageAmount;
	Parms.IsCritical=IsCritical ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnInflictDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoWasDamaged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_WhoWasDamaged = { "WhoWasDamaged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnInflictDamage_Parms, WhoWasDamaged), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnInflictDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((OWSCharacterWithAbilities_eventOnInflictDamage_Parms*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventOnInflictDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_WhoWasDamaged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::NewProp_IsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnInflictDamage", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventOnInflictDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventOnInflictDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function OnInflictDamage

// Begin Class AOWSCharacterWithAbilities Function OnOWSAttributeInitalizationComplete
static const FName NAME_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete = FName(TEXT("OnOWSAttributeInitalizationComplete"));
void AOWSCharacterWithAbilities::OnOWSAttributeInitalizationComplete()
{
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnOWSAttributeInitalizationComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function OnOWSAttributeInitalizationComplete

// Begin Class AOWSCharacterWithAbilities Function OnTakeDamage
struct OWSCharacterWithAbilities_eventOnTakeDamage_Parms
{
	AOWSCharacter* WhoAttackedMe;
	float DamageAmount;
	bool IsCritical;
};
static const FName NAME_AOWSCharacterWithAbilities_OnTakeDamage = FName(TEXT("OnTakeDamage"));
void AOWSCharacterWithAbilities::OnTakeDamage(AOWSCharacter* WhoAttackedMe, float DamageAmount, bool IsCritical)
{
	OWSCharacterWithAbilities_eventOnTakeDamage_Parms Parms;
	Parms.WhoAttackedMe=WhoAttackedMe;
	Parms.DamageAmount=DamageAmount;
	Parms.IsCritical=IsCritical ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_AOWSCharacterWithAbilities_OnTakeDamage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhoAttackedMe;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static void NewProp_IsCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCritical;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_WhoAttackedMe = { "WhoAttackedMe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnTakeDamage_Parms, WhoAttackedMe), Z_Construct_UClass_AOWSCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterWithAbilities_eventOnTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical_SetBit(void* Obj)
{
	((OWSCharacterWithAbilities_eventOnTakeDamage_Parms*)Obj)->IsCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical = { "IsCritical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSCharacterWithAbilities_eventOnTakeDamage_Parms), &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_WhoAttackedMe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::NewProp_IsCritical,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "OnTakeDamage", nullptr, nullptr, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::PropPointers), sizeof(OWSCharacterWithAbilities_eventOnTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterWithAbilities_eventOnTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSCharacterWithAbilities Function OnTakeDamage

// Begin Class AOWSCharacterWithAbilities Function UpdateCharacterStats
struct Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Update Character Stats\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update Character Stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSCharacterWithAbilities, nullptr, "UpdateCharacterStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSCharacterWithAbilities::execUpdateCharacterStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCharacterStats();
	P_NATIVE_END;
}
// End Class AOWSCharacterWithAbilities Function UpdateCharacterStats

// Begin Class AOWSCharacterWithAbilities
void AOWSCharacterWithAbilities::StaticRegisterNativesAOWSCharacterWithAbilities()
{
	UClass* Class = AOWSCharacterWithAbilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeSpell", &AOWSCharacterWithAbilities::execChangeSpell },
		{ "ChangeWeapon", &AOWSCharacterWithAbilities::execChangeWeapon },
		{ "ClearAbility", &AOWSCharacterWithAbilities::execClearAbility },
		{ "GetCharacterStats", &AOWSCharacterWithAbilities::execGetCharacterStats },
		{ "GrantAbility", &AOWSCharacterWithAbilities::execGrantAbility },
		{ "GrantAbilityKeyBind", &AOWSCharacterWithAbilities::execGrantAbilityKeyBind },
		{ "OnGameplayEffectTagCountChanged", &AOWSCharacterWithAbilities::execOnGameplayEffectTagCountChanged },
		{ "UpdateCharacterStats", &AOWSCharacterWithAbilities::execUpdateCharacterStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSCharacterWithAbilities);
UClass* Z_Construct_UClass_AOWSCharacterWithAbilities_NoRegister()
{
	return AOWSCharacterWithAbilities::StaticClass();
}
struct Z_Construct_UClass_AOWSCharacterWithAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "CharacterStats Health Navigation" },
		{ "IncludePath", "OWSCharacterWithAbilities.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFiredProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellAbilityHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spells\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spells" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability3_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability4_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability5_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability6_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability7_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability8_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability9_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability0_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability11_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability12_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability13_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability14_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability15_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability16_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability17_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability18_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability19_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability20_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability21_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability22_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAbilityHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Weapons\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weapons" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon1_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon2_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/OWSCharacterWithAbilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastFiredProjectile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OWSAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpellAbilityHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpellAbilityHandles;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability3;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability4;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability5;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability6;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability7;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability8;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability9;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability0;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability11;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability12;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability13;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability14;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability15;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability16;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability17;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability18;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability19;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability20;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability21;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Ability22;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponAbilityHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAbilityHandles;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Weapon1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Weapon2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_CalculateUpdatedDamage, "CalculateUpdatedDamage" }, // 623399513
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeSpell, "ChangeSpell" }, // 562490940
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ChangeWeapon, "ChangeWeapon" }, // 2383655267
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ClearAbility, "ClearAbility" }, // 3780793204
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_EnergyChanged, "EnergyChanged" }, // 3512628782
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GetCharacterStats, "GetCharacterStats" }, // 2305832741
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbility, "GrantAbility" }, // 45337620
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_GrantAbilityKeyBind, "GrantAbilityKeyBind" }, // 1795712200
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_HealthChanged, "HealthChanged" }, // 104879983
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_ManaChanged, "ManaChanged" }, // 2631744724
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnDeath, "OnDeath" }, // 3891109015
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnGameplayEffectTagCountChanged, "OnGameplayEffectTagCountChanged" }, // 412981300
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnInflictDamage, "OnInflictDamage" }, // 1141551050
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnOWSAttributeInitalizationComplete, "OnOWSAttributeInitalizationComplete" }, // 2063243555
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_OnTakeDamage, "OnTakeDamage" }, // 1011399696
		{ &Z_Construct_UFunction_AOWSCharacterWithAbilities_UpdateCharacterStats, "UpdateCharacterStats" }, // 3904059552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSCharacterWithAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile = { "LastFiredProjectile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, LastFiredProjectile), Z_Construct_UClass_AOWSAdvancedProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFiredProjectile_MetaData), NewProp_LastFiredProjectile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystem_MetaData), NewProp_AbilitySystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes = { "OWSAttributes", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, OWSAttributes), Z_Construct_UClass_UOWSAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSAttributes_MetaData), NewProp_OWSAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_Inner = { "SpellAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles = { "SpellAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, SpellAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellAbilityHandles_MetaData), NewProp_SpellAbilityHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1 = { "Ability1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability1), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability1_MetaData), NewProp_Ability1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2 = { "Ability2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability2), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability2_MetaData), NewProp_Ability2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3 = { "Ability3", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability3), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability3_MetaData), NewProp_Ability3_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4 = { "Ability4", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability4), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability4_MetaData), NewProp_Ability4_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5 = { "Ability5", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability5), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability5_MetaData), NewProp_Ability5_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6 = { "Ability6", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability6), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability6_MetaData), NewProp_Ability6_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7 = { "Ability7", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability7), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability7_MetaData), NewProp_Ability7_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8 = { "Ability8", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability8), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability8_MetaData), NewProp_Ability8_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9 = { "Ability9", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability9), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability9_MetaData), NewProp_Ability9_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0 = { "Ability0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability0), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability0_MetaData), NewProp_Ability0_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability11 = { "Ability11", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability11), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability11_MetaData), NewProp_Ability11_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability12 = { "Ability12", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability12), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability12_MetaData), NewProp_Ability12_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability13 = { "Ability13", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability13), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability13_MetaData), NewProp_Ability13_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability14 = { "Ability14", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability14), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability14_MetaData), NewProp_Ability14_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability15 = { "Ability15", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability15), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability15_MetaData), NewProp_Ability15_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability16 = { "Ability16", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability16), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability16_MetaData), NewProp_Ability16_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability17 = { "Ability17", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability17), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability17_MetaData), NewProp_Ability17_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability18 = { "Ability18", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability18), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability18_MetaData), NewProp_Ability18_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability19 = { "Ability19", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability19), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability19_MetaData), NewProp_Ability19_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability20 = { "Ability20", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability20), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability20_MetaData), NewProp_Ability20_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability21 = { "Ability21", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability21), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability21_MetaData), NewProp_Ability21_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability22 = { "Ability22", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Ability22), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability22_MetaData), NewProp_Ability22_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_WeaponAbilityHandles_Inner = { "WeaponAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_WeaponAbilityHandles = { "WeaponAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, WeaponAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAbilityHandles_MetaData), NewProp_WeaponAbilityHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1 = { "Weapon1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Weapon1), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon1_MetaData), NewProp_Weapon1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2 = { "Weapon2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSCharacterWithAbilities, Weapon2), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon2_MetaData), NewProp_Weapon2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_LastFiredProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_AbilitySystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_OWSAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_SpellAbilityHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability13,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability14,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability15,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability17,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability18,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability19,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability20,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability21,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Ability22,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_WeaponAbilityHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_WeaponAbilityHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::NewProp_Weapon2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOWSCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AOWSCharacterWithAbilities, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::ClassParams = {
	&AOWSCharacterWithAbilities::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSCharacterWithAbilities()
{
	if (!Z_Registration_Info_UClass_AOWSCharacterWithAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSCharacterWithAbilities.OuterSingleton, Z_Construct_UClass_AOWSCharacterWithAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSCharacterWithAbilities.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSCharacterWithAbilities>()
{
	return AOWSCharacterWithAbilities::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSCharacterWithAbilities);
AOWSCharacterWithAbilities::~AOWSCharacterWithAbilities() {}
// End Class AOWSCharacterWithAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AbilityInput_StaticEnum, TEXT("AbilityInput"), &Z_Registration_Info_UEnum_AbilityInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1224651537U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSCharacterWithAbilities, AOWSCharacterWithAbilities::StaticClass, TEXT("AOWSCharacterWithAbilities"), &Z_Registration_Info_UClass_AOWSCharacterWithAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSCharacterWithAbilities), 214820468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_4279169086(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterWithAbilities_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
