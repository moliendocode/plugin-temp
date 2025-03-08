// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/Authentication/OWSAuthentication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAuthentication() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthentication();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthentication_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSAuthentication
void UOWSAuthentication::StaticRegisterNativesUOWSAuthentication()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAuthentication);
UClass* Z_Construct_UClass_UOWSAuthentication_NoRegister()
{
	return UOWSAuthentication::StaticClass();
}
struct Z_Construct_UClass_UOWSAuthentication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Authentication/OWSAuthentication.h" },
		{ "ModuleRelativePath", "Public/Authentication/OWSAuthentication.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAuthentication>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSAuthentication_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthentication_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOWSAuthentication_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOWSAuthenticationInterface_NoRegister, (int32)VTABLE_OFFSET(UOWSAuthentication, IOWSAuthenticationInterface), false },  // 2014709366
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAuthentication_Statics::ClassParams = {
	&UOWSAuthentication::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAuthentication_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAuthentication_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAuthentication()
{
	if (!Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton, Z_Construct_UClass_UOWSAuthentication_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAuthentication.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAuthentication>()
{
	return UOWSAuthentication::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAuthentication);
UOWSAuthentication::~UOWSAuthentication() {}
// End Class UOWSAuthentication

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAuthentication, UOWSAuthentication::StaticClass, TEXT("UOWSAuthentication"), &Z_Registration_Info_UClass_UOWSAuthentication, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAuthentication), 2742066136U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_2456846416(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_Authentication_OWSAuthentication_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
