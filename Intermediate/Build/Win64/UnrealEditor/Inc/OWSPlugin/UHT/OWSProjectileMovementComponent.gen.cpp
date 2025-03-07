// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSProjectileMovementComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSProjectileMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSProjectileMovementComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSProjectileMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class UOWSProjectileMovementComponent Function ServerUpdateState
struct OWSProjectileMovementComponent_eventServerUpdateState_Parms
{
	FVector InAcceleration;
};
static const FName NAME_UOWSProjectileMovementComponent_ServerUpdateState = FName(TEXT("ServerUpdateState"));
void UOWSProjectileMovementComponent::ServerUpdateState(FVector InAcceleration)
{
	OWSProjectileMovementComponent_eventServerUpdateState_Parms Parms;
	Parms.InAcceleration=InAcceleration;
	UFunction* Func = FindFunctionChecked(NAME_UOWSProjectileMovementComponent_ServerUpdateState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSProjectileMovementComponent_eventServerUpdateState_Parms, InAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::NewProp_InAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSProjectileMovementComponent, nullptr, "ServerUpdateState", nullptr, nullptr, Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::PropPointers), sizeof(OWSProjectileMovementComponent_eventServerUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSProjectileMovementComponent_eventServerUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSProjectileMovementComponent::execServerUpdateState)
{
	P_GET_STRUCT(FVector,Z_Param_InAcceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateState_Validate(Z_Param_InAcceleration))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateState_Validate"));
		return;
	}
	P_THIS->ServerUpdateState_Implementation(Z_Param_InAcceleration);
	P_NATIVE_END;
}
// End Class UOWSProjectileMovementComponent Function ServerUpdateState

// Begin Class UOWSProjectileMovementComponent
void UOWSProjectileMovementComponent::StaticRegisterNativesUOWSProjectileMovementComponent()
{
	UClass* Class = UOWSProjectileMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerUpdateState", &UOWSProjectileMovementComponent::execServerUpdateState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSProjectileMovementComponent);
UClass* Z_Construct_UClass_UOWSProjectileMovementComponent_NoRegister()
{
	return UOWSProjectileMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UOWSProjectileMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "OWSProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelRate_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** linear acceleration in the direction of current velocity */" },
#endif
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "linear acceleration in the direction of current velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPhysicsVolumeWhenStopped_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Don't clear physics volume when stopped */" },
#endif
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Don't clear physics volume when stopped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** explicit acceleration vector (additive with AccelRate) */" },
#endif
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "explicit acceleration vector (additive with AccelRate)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitZStopSimulatingThreshold_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** stop only if HitNormal.Z is greater than this value, otherwise continue moving after removing velocity in the impact direction\n\x09 * primarily this is used to only stop the projectile on hitting a floor\n\x09 * no effect if bBounce is true\n\x09 */" },
#endif
		{ "EditCondition", "!bBounce" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "stop only if HitNormal.Z is greater than this value, otherwise continue moving after removing velocity in the impact direction\nprimarily this is used to only stop the projectile on hitting a floor\nno effect if bBounce is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddlUpdatedComponents_MetaData[] = {
		{ "Category", "MovementComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** additional components that should be moved along with the main UpdatedComponent. Defaults to all colliding children of UpdatedComponent.\n\x09 * closest blocking hit of all components is used for blocking collision\n\x09 *\n\x09 * Ultimately this is a workaround for UPrimitiveComponent::MoveComponent() not sweeping children.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "additional components that should be moved along with the main UpdatedComponent. Defaults to all colliding children of UpdatedComponent.\nclosest blocking hit of all components is used for blocking collision\n\nUltimately this is a workaround for UPrimitiveComponent::MoveComponent() not sweeping children." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventZHoming_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, projectile does not home in Z axis */" },
#endif
		{ "EditCondition", "!bBounce" },
		{ "ModuleRelativePath", "Public/OWSProjectileMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, projectile does not home in Z axis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelRate;
	static void NewProp_bKeepPhysicsVolumeWhenStopped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPhysicsVolumeWhenStopped;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitZStopSimulatingThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddlUpdatedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddlUpdatedComponents;
	static void NewProp_bPreventZHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventZHoming;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSProjectileMovementComponent_ServerUpdateState, "ServerUpdateState" }, // 590365833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSProjectileMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate = { "AccelRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, AccelRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelRate_MetaData), NewProp_AccelRate_MetaData) };
void Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_SetBit(void* Obj)
{
	((UOWSProjectileMovementComponent*)Obj)->bKeepPhysicsVolumeWhenStopped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped = { "bKeepPhysicsVolumeWhenStopped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSProjectileMovementComponent), &Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepPhysicsVolumeWhenStopped_MetaData), NewProp_bKeepPhysicsVolumeWhenStopped_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, ReplicatedAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedAcceleration_MetaData), NewProp_ReplicatedAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold = { "HitZStopSimulatingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, HitZStopSimulatingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitZStopSimulatingThreshold_MetaData), NewProp_HitZStopSimulatingThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_Inner = { "AddlUpdatedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents = { "AddlUpdatedComponents", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSProjectileMovementComponent, AddlUpdatedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddlUpdatedComponents_MetaData), NewProp_AddlUpdatedComponents_MetaData) };
void Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_SetBit(void* Obj)
{
	((UOWSProjectileMovementComponent*)Obj)->bPreventZHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming = { "bPreventZHoming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSProjectileMovementComponent), &Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventZHoming_MetaData), NewProp_bPreventZHoming_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AccelRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bKeepPhysicsVolumeWhenStopped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_ReplicatedAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_HitZStopSimulatingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_AddlUpdatedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::NewProp_bPreventZHoming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::ClassParams = {
	&UOWSProjectileMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSProjectileMovementComponent()
{
	if (!Z_Registration_Info_UClass_UOWSProjectileMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSProjectileMovementComponent.OuterSingleton, Z_Construct_UClass_UOWSProjectileMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSProjectileMovementComponent.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSProjectileMovementComponent>()
{
	return UOWSProjectileMovementComponent::StaticClass();
}
void UOWSProjectileMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));
	const bool bIsValid = true
		&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOWSProjectileMovementComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSProjectileMovementComponent);
UOWSProjectileMovementComponent::~UOWSProjectileMovementComponent() {}
// End Class UOWSProjectileMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSProjectileMovementComponent, UOWSProjectileMovementComponent::StaticClass, TEXT("UOWSProjectileMovementComponent"), &Z_Registration_Info_UClass_UOWSProjectileMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSProjectileMovementComponent), 1708334058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_693680017(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSProjectileMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
