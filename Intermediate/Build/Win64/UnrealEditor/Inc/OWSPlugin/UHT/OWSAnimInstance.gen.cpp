// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAnimInstance();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSAnimInstance Function GetStartTimeByDistance
struct Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics
{
	struct OWSAnimInstance_eventGetStartTimeByDistance_Parms
	{
		UAnimSequence* AnimSequence;
		float distance;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/OWSAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAnimInstance_eventGetStartTimeByDistance_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAnimInstance_eventGetStartTimeByDistance_Parms, distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSAnimInstance_eventGetStartTimeByDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSAnimInstance, nullptr, "GetStartTimeByDistance", nullptr, nullptr, Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::OWSAnimInstance_eventGetStartTimeByDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::OWSAnimInstance_eventGetStartTimeByDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSAnimInstance::execGetStartTimeByDistance)
{
	P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStartTimeByDistance(Z_Param_AnimSequence,Z_Param_distance);
	P_NATIVE_END;
}
// End Class UOWSAnimInstance Function GetStartTimeByDistance

// Begin Class UOWSAnimInstance
void UOWSAnimInstance::StaticRegisterNativesUOWSAnimInstance()
{
	UClass* Class = UOWSAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStartTimeByDistance", &UOWSAnimInstance::execGetStartTimeByDistance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSAnimInstance);
UClass* Z_Construct_UClass_UOWSAnimInstance_NoRegister()
{
	return UOWSAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UOWSAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "OWSAnimInstance.h" },
		{ "ModuleRelativePath", "Public/OWSAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSAnimInstance_GetStartTimeByDistance, "GetStartTimeByDistance" }, // 4170492593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOWSAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSAnimInstance_Statics::ClassParams = {
	&UOWSAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSAnimInstance()
{
	if (!Z_Registration_Info_UClass_UOWSAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSAnimInstance.OuterSingleton, Z_Construct_UClass_UOWSAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSAnimInstance.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSAnimInstance>()
{
	return UOWSAnimInstance::StaticClass();
}
UOWSAnimInstance::UOWSAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSAnimInstance);
UOWSAnimInstance::~UOWSAnimInstance() {}
// End Class UOWSAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSAnimInstance, UOWSAnimInstance::StaticClass, TEXT("UOWSAnimInstance"), &Z_Registration_Info_UClass_UOWSAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSAnimInstance), 2164979176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAnimInstance_h_3327247850(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
