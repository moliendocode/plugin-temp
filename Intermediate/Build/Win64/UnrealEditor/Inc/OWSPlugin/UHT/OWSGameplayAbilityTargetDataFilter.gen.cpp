// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameplayAbilityTargetDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameplayAbilityTargetDataFilter() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FOWSGameplayTargetDataFilter
static_assert(std::is_polymorphic<FOWSGameplayTargetDataFilter>() == std::is_polymorphic<FGameplayTargetDataFilter>(), "USTRUCT FOWSGameplayTargetDataFilter cannot be polymorphic unless super FGameplayTargetDataFilter is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter;
class UScriptStruct* FOWSGameplayTargetDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("OWSGameplayTargetDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FOWSGameplayTargetDataFilter>()
{
	return FOWSGameplayTargetDataFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDataFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[] = {
		{ "Category", "Filter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filter based on whether or not this actor is \"self.\" */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filter based on whether or not this actor is \"self.\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TeamNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWSGameplayTargetDataFilter, TeamNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamNumber_MetaData), NewProp_TeamNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewProp_TeamNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	Z_Construct_UScriptStruct_FGameplayTargetDataFilter,
	&NewStructOps,
	"OWSGameplayTargetDataFilter",
	Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::PropPointers),
	sizeof(FOWSGameplayTargetDataFilter),
	alignof(FOWSGameplayTargetDataFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter()
{
	if (!Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter.InnerSingleton;
}
// End ScriptStruct FOWSGameplayTargetDataFilter

// Begin ScriptStruct FOWSGameplayTargetDataFilterHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle;
class UScriptStruct* FOWSGameplayTargetDataFilterHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("OWSGameplayTargetDataFilterHandle"));
	}
	return Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FOWSGameplayTargetDataFilterHandle>()
{
	return FOWSGameplayTargetDataFilterHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Polymorphic handle to filter structure that handles checking if actors should be targeted */" },
#endif
		{ "ModuleRelativePath", "Public/OWSGameplayAbilityTargetDataFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Polymorphic handle to filter structure that handles checking if actors should be targeted" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWSGameplayTargetDataFilterHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"OWSGameplayTargetDataFilterHandle",
	nullptr,
	0,
	sizeof(FOWSGameplayTargetDataFilterHandle),
	alignof(FOWSGameplayTargetDataFilterHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle()
{
	if (!Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.InnerSingleton, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle.InnerSingleton;
}
// End ScriptStruct FOWSGameplayTargetDataFilterHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetDataFilter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWSGameplayTargetDataFilter::StaticStruct, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilter_Statics::NewStructOps, TEXT("OWSGameplayTargetDataFilter"), &Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWSGameplayTargetDataFilter), 611740392U) },
		{ FOWSGameplayTargetDataFilterHandle::StaticStruct, Z_Construct_UScriptStruct_FOWSGameplayTargetDataFilterHandle_Statics::NewStructOps, TEXT("OWSGameplayTargetDataFilterHandle"), &Z_Registration_Info_UScriptStruct_OWSGameplayTargetDataFilterHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWSGameplayTargetDataFilterHandle), 2797804798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetDataFilter_h_3526958592(TEXT("/Script/OWSPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameplayAbilityTargetDataFilter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
