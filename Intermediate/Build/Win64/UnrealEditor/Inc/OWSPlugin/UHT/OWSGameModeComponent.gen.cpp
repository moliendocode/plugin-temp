// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSGameModeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSGameModeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameModeComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSGameModeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSGameModeComponent
void UOWSGameModeComponent::StaticRegisterNativesUOWSGameModeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSGameModeComponent);
UClass* Z_Construct_UClass_UOWSGameModeComponent_NoRegister()
{
	return UOWSGameModeComponent::StaticClass();
}
struct Z_Construct_UClass_UOWSGameModeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OWSGameModeComponent.h" },
		{ "ModuleRelativePath", "Public/OWSGameModeComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSGameModeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSGameModeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameModeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSGameModeComponent_Statics::ClassParams = {
	&UOWSGameModeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSGameModeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSGameModeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSGameModeComponent()
{
	if (!Z_Registration_Info_UClass_UOWSGameModeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSGameModeComponent.OuterSingleton, Z_Construct_UClass_UOWSGameModeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSGameModeComponent.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSGameModeComponent>()
{
	return UOWSGameModeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSGameModeComponent);
UOWSGameModeComponent::~UOWSGameModeComponent() {}
// End Class UOWSGameModeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameModeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSGameModeComponent, UOWSGameModeComponent::StaticClass, TEXT("UOWSGameModeComponent"), &Z_Registration_Info_UClass_UOWSGameModeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSGameModeComponent), 1974265309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameModeComponent_h_1501075563(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameModeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSGameModeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
