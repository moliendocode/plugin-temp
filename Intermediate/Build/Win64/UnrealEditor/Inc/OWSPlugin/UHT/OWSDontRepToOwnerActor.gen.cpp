// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSDontRepToOwnerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSDontRepToOwnerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSDontRepToOwnerActor
void AOWSDontRepToOwnerActor::StaticRegisterNativesAOWSDontRepToOwnerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSDontRepToOwnerActor);
UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor_NoRegister()
{
	return AOWSDontRepToOwnerActor::StaticClass();
}
struct Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSDontRepToOwnerActor.h" },
		{ "ModuleRelativePath", "Public/OWSDontRepToOwnerActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSDontRepToOwnerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::ClassParams = {
	&AOWSDontRepToOwnerActor::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSDontRepToOwnerActor()
{
	if (!Z_Registration_Info_UClass_AOWSDontRepToOwnerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSDontRepToOwnerActor.OuterSingleton, Z_Construct_UClass_AOWSDontRepToOwnerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSDontRepToOwnerActor.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSDontRepToOwnerActor>()
{
	return AOWSDontRepToOwnerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSDontRepToOwnerActor);
AOWSDontRepToOwnerActor::~AOWSDontRepToOwnerActor() {}
// End Class AOWSDontRepToOwnerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSDontRepToOwnerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSDontRepToOwnerActor, AOWSDontRepToOwnerActor::StaticClass, TEXT("AOWSDontRepToOwnerActor"), &Z_Registration_Info_UClass_AOWSDontRepToOwnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSDontRepToOwnerActor), 1429150224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSDontRepToOwnerActor_h_556966375(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSDontRepToOwnerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSDontRepToOwnerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
