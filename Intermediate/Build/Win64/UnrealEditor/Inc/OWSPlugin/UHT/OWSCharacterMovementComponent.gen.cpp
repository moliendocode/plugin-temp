// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSCharacterMovementComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ECustomMovementMode();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Enum ECustomMovementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
static UEnum* ECustomMovementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_ECustomMovementMode, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ECustomMovementMode"));
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<ECustomMovementMode>()
{
	return ECustomMovementMode_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
		{ "TESTMOVE_Climbing.DisplayName", "Climbing" },
		{ "TESTMOVE_Climbing.Name", "TESTMOVE_Climbing" },
		{ "TESTMOVE_Walking.DisplayName", "Walking" },
		{ "TESTMOVE_Walking.Name", "TESTMOVE_Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TESTMOVE_Climbing", (int64)TESTMOVE_Climbing },
		{ "TESTMOVE_Walking", (int64)TESTMOVE_Walking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"ECustomMovementMode",
	"ECustomMovementMode",
	Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_ECustomMovementMode()
{
	if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_OWSPlugin_ECustomMovementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
}
// End Enum ECustomMovementMode

// Begin Class UOWSCharacterMovementComponent Function DoDash
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dash" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///@brief Triggers the dash action.\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Triggers the dash action." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "DoDash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execDoDash)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoDash();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function DoDash

// Begin Class UOWSCharacterMovementComponent Function IsMovingForward
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics
{
	struct OWSCharacterMovementComponent_eventIsMovingForward_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWSCharacterMovementComponent_eventIsMovingForward_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWSCharacterMovementComponent_eventIsMovingForward_Parms), &Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "IsMovingForward", nullptr, nullptr, Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::OWSCharacterMovementComponent_eventIsMovingForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::OWSCharacterMovementComponent_eventIsMovingForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execIsMovingForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMovingForward();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function IsMovingForward

// Begin Class UOWSCharacterMovementComponent Function ResetDashCooldownState
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer function to reset dash cooldown state\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer function to reset dash cooldown state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "ResetDashCooldownState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execResetDashCooldownState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDashCooldownState();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function ResetDashCooldownState

// Begin Class UOWSCharacterMovementComponent Function ResetDashState
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer handle for dash cooldown\n// Timer function to reset dash state and cooldown\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer handle for dash cooldown\nTimer function to reset dash state and cooldown" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "ResetDashState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execResetDashState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDashState();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function ResetDashState

// Begin Class UOWSCharacterMovementComponent Function Server_SetMaxWalkSpeed
struct OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms
{
	float NewMaxWalkSpeed;
};
static const FName NAME_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed = FName(TEXT("Server_SetMaxWalkSpeed"));
void UOWSCharacterMovementComponent::Server_SetMaxWalkSpeed(const float NewMaxWalkSpeed)
{
	OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms Parms;
	Parms.NewMaxWalkSpeed=NewMaxWalkSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaxWalkSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaxWalkSpeed_MetaData), NewProp_NewMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "Server_SetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::PropPointers), sizeof(OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSCharacterMovementComponent_eventServer_SetMaxWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execServer_SetMaxWalkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxWalkSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetMaxWalkSpeed_Validate(Z_Param_NewMaxWalkSpeed))
	{
		RPC_ValidateFailed(TEXT("Server_SetMaxWalkSpeed_Validate"));
		return;
	}
	P_THIS->Server_SetMaxWalkSpeed_Implementation(Z_Param_NewMaxWalkSpeed);
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function Server_SetMaxWalkSpeed

// Begin Class UOWSCharacterMovementComponent Function SetMaxWalkSpeed
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics
{
	struct OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms
	{
		float NewMaxWalkSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Max Walk Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set Max Walk Speed (Called from the owning client)\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Max Walk Speed (Called from the owning client)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed = { "NewMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms, NewMaxWalkSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::NewProp_NewMaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "SetMaxWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::OWSCharacterMovementComponent_eventSetMaxWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execSetMaxWalkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxWalkSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxWalkSpeed(Z_Param_NewMaxWalkSpeed);
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function SetMaxWalkSpeed

// Begin Class UOWSCharacterMovementComponent Function StartSprinting
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sprint\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "StartSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execStartSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprinting();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function StartSprinting

// Begin Class UOWSCharacterMovementComponent Function StopSprinting
struct Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOWSCharacterMovementComponent, nullptr, "StopSprinting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWSCharacterMovementComponent::execStopSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprinting();
	P_NATIVE_END;
}
// End Class UOWSCharacterMovementComponent Function StopSprinting

// Begin Class UOWSCharacterMovementComponent
void UOWSCharacterMovementComponent::StaticRegisterNativesUOWSCharacterMovementComponent()
{
	UClass* Class = UOWSCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoDash", &UOWSCharacterMovementComponent::execDoDash },
		{ "IsMovingForward", &UOWSCharacterMovementComponent::execIsMovingForward },
		{ "ResetDashCooldownState", &UOWSCharacterMovementComponent::execResetDashCooldownState },
		{ "ResetDashState", &UOWSCharacterMovementComponent::execResetDashState },
		{ "Server_SetMaxWalkSpeed", &UOWSCharacterMovementComponent::execServer_SetMaxWalkSpeed },
		{ "SetMaxWalkSpeed", &UOWSCharacterMovementComponent::execSetMaxWalkSpeed },
		{ "StartSprinting", &UOWSCharacterMovementComponent::execStartSprinting },
		{ "StopSprinting", &UOWSCharacterMovementComponent::execStopSprinting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWSCharacterMovementComponent);
UClass* Z_Construct_UClass_UOWSCharacterMovementComponent_NoRegister()
{
	return UOWSCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UOWSCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSprinting_MetaData[] = {
		{ "Category", "MovementMode" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAccelerationMultiplier_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMaxWalkSpeed_MetaData[] = {
		{ "Category", "Max Walk Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set Max Walk Speed\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Max Walk Speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashStrength_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dash (Refined)\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash (Refined)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDuration_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dash impulse strength\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash impulse strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dash duration in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash duration in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDodging_MetaData[] = {
		{ "Category", "MovementMode" },
		{ "ModuleRelativePath", "Public/OWSCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSprinting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAccelerationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCooldown;
	static void NewProp_IsDodging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDodging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_DoDash, "DoDash" }, // 2692448412
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_IsMovingForward, "IsMovingForward" }, // 573706805
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashCooldownState, "ResetDashCooldownState" }, // 441928031
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_ResetDashState, "ResetDashState" }, // 355321292
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_Server_SetMaxWalkSpeed, "Server_SetMaxWalkSpeed" }, // 3076400810
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 3339746478
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_StartSprinting, "StartSprinting" }, // 1148942538
		{ &Z_Construct_UFunction_UOWSCharacterMovementComponent_StopSprinting, "StopSprinting" }, // 2328520707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWSCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_SetBit(void* Obj)
{
	((UOWSCharacterMovementComponent*)Obj)->IsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting = { "IsSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSCharacterMovementComponent), &Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSprinting_MetaData), NewProp_IsSprinting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeedMultiplier_MetaData), NewProp_SprintSpeedMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier = { "SprintAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, SprintAccelerationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAccelerationMultiplier_MetaData), NewProp_SprintAccelerationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed = { "MaxMaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, MaxMaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMaxWalkSpeed_MetaData), NewProp_MaxMaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashStrength = { "DashStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, DashStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashStrength_MetaData), NewProp_DashStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashDuration = { "DashDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, DashDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDuration_MetaData), NewProp_DashDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWSCharacterMovementComponent, DashCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashCooldown_MetaData), NewProp_DashCooldown_MetaData) };
void Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsDodging_SetBit(void* Obj)
{
	((UOWSCharacterMovementComponent*)Obj)->IsDodging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsDodging = { "IsDodging", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOWSCharacterMovementComponent), &Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsDodging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDodging_MetaData), NewProp_IsDodging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintSpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_SprintAccelerationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_MaxMaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_DashCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::NewProp_IsDodging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::ClassParams = {
	&UOWSCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWSCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UOWSCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWSCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UOWSCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWSCharacterMovementComponent.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<UOWSCharacterMovementComponent>()
{
	return UOWSCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWSCharacterMovementComponent);
UOWSCharacterMovementComponent::~UOWSCharacterMovementComponent() {}
// End Class UOWSCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1077468412U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWSCharacterMovementComponent, UOWSCharacterMovementComponent::StaticClass, TEXT("UOWSCharacterMovementComponent"), &Z_Registration_Info_UClass_UOWSCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWSCharacterMovementComponent), 2717467698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_1805082502(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSCharacterMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
