// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSTravelToMapActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSTravelToMapActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSTravelToMapActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSTravelToMapActor_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_DynamicAxisType();
OWSPLUGIN_API UEnum* Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Enum DynamicAxisType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DynamicAxisType;
static UEnum* DynamicAxisType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DynamicAxisType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DynamicAxisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWSPlugin_DynamicAxisType, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("DynamicAxisType"));
	}
	return Z_Registration_Info_UEnum_DynamicAxisType.OuterSingleton;
}
template<> OWSPLUGIN_API UEnum* StaticEnum<DynamicAxisType>()
{
	return DynamicAxisType_StaticEnum();
}
struct Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
		{ "XAxis.DisplayName", "X Axis" },
		{ "XAxis.Name", "XAxis" },
		{ "YAxis.DisplayName", "Y Axis" },
		{ "YAxis.Name", "YAxis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "XAxis", (int64)XAxis },
		{ "YAxis", (int64)YAxis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	"DynamicAxisType",
	"DynamicAxisType",
	Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWSPlugin_DynamicAxisType()
{
	if (!Z_Registration_Info_UEnum_DynamicAxisType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DynamicAxisType.InnerSingleton, Z_Construct_UEnum_OWSPlugin_DynamicAxisType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DynamicAxisType.InnerSingleton;
}
// End Enum DynamicAxisType

// Begin Class AOWSTravelToMapActor Function ErrorMapServerToTravelTo
struct OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSTravelToMapActor_ErrorMapServerToTravelTo = FName(TEXT("ErrorMapServerToTravelTo"));
void AOWSTravelToMapActor::ErrorMapServerToTravelTo(const FString& ErrorMsg)
{
	OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSTravelToMapActor_ErrorMapServerToTravelTo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "ErrorMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::PropPointers), sizeof(OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSTravelToMapActor_eventErrorMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSTravelToMapActor Function ErrorMapServerToTravelTo

// Begin Class AOWSTravelToMapActor Function GetCartesianFromSpherical
struct Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics
{
	struct OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms
	{
		FVector2D ShpericalVector;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShpericalVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ShpericalVector = { "ShpericalVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms, ShpericalVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ShpericalVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetCartesianFromSpherical", nullptr, nullptr, Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::OWSTravelToMapActor_eventGetCartesianFromSpherical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSTravelToMapActor::execGetCartesianFromSpherical)
{
	P_GET_STRUCT(FVector2D,Z_Param_ShpericalVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetCartesianFromSpherical(Z_Param_ShpericalVector);
	P_NATIVE_END;
}
// End Class AOWSTravelToMapActor Function GetCartesianFromSpherical

// Begin Class AOWSTravelToMapActor Function GetMapServerToTravelTo
struct Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics
{
	struct OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms
	{
		APlayerController* PlayerController;
		TEnumAsByte<ERPGSchemeToChooseMap::SchemeToChooseMap> SelectedSchemeToChooseMap;
		int32 WorldServerID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedSchemeToChooseMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldServerID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap = { "SelectedSchemeToChooseMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, SelectedSchemeToChooseMap), Z_Construct_UEnum_OWSPlugin_ERPGSchemeToChooseMap, METADATA_PARAMS(0, nullptr) }; // 395812411
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_WorldServerID = { "WorldServerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms, WorldServerID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_SelectedSchemeToChooseMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::NewProp_WorldServerID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::OWSTravelToMapActor_eventGetMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSTravelToMapActor::execGetMapServerToTravelTo)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectedSchemeToChooseMap);
	P_GET_PROPERTY(FIntProperty,Z_Param_WorldServerID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMapServerToTravelTo(Z_Param_PlayerController,ERPGSchemeToChooseMap::SchemeToChooseMap(Z_Param_SelectedSchemeToChooseMap),Z_Param_WorldServerID);
	P_NATIVE_END;
}
// End Class AOWSTravelToMapActor Function GetMapServerToTravelTo

// Begin Class AOWSTravelToMapActor Function GetSphericalFromCartesian
struct Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics
{
	struct OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms
	{
		FVector CartesianVector;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CartesianVector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_CartesianVector = { "CartesianVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms, CartesianVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_CartesianVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "GetSphericalFromCartesian", nullptr, nullptr, Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::OWSTravelToMapActor_eventGetSphericalFromCartesian_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSTravelToMapActor::execGetSphericalFromCartesian)
{
	P_GET_STRUCT(FVector,Z_Param_CartesianVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetSphericalFromCartesian(Z_Param_CartesianVector);
	P_NATIVE_END;
}
// End Class AOWSTravelToMapActor Function GetSphericalFromCartesian

// Begin Class AOWSTravelToMapActor Function NotifyMapServerToTravelTo
struct OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms
{
	FString ServerAndPort;
};
static const FName NAME_AOWSTravelToMapActor_NotifyMapServerToTravelTo = FName(TEXT("NotifyMapServerToTravelTo"));
void AOWSTravelToMapActor::NotifyMapServerToTravelTo(const FString& ServerAndPort)
{
	OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms Parms;
	Parms.ServerAndPort=ServerAndPort;
	UFunction* Func = FindFunctionChecked(NAME_AOWSTravelToMapActor_NotifyMapServerToTravelTo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Travel" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAndPort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAndPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort = { "ServerAndPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms, ServerAndPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAndPort_MetaData), NewProp_ServerAndPort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::NewProp_ServerAndPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSTravelToMapActor, nullptr, "NotifyMapServerToTravelTo", nullptr, nullptr, Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::PropPointers), sizeof(OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSTravelToMapActor_eventNotifyMapServerToTravelTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSTravelToMapActor Function NotifyMapServerToTravelTo

// Begin Class AOWSTravelToMapActor
void AOWSTravelToMapActor::StaticRegisterNativesAOWSTravelToMapActor()
{
	UClass* Class = AOWSTravelToMapActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCartesianFromSpherical", &AOWSTravelToMapActor::execGetCartesianFromSpherical },
		{ "GetMapServerToTravelTo", &AOWSTravelToMapActor::execGetMapServerToTravelTo },
		{ "GetSphericalFromCartesian", &AOWSTravelToMapActor::execGetSphericalFromCartesian },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSTravelToMapActor);
UClass* Z_Construct_UClass_AOWSTravelToMapActor_NoRegister()
{
	return AOWSTravelToMapActor::StaticClass();
}
struct Z_Construct_UClass_AOWSTravelToMapActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSTravelToMapActor.h" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OWSPlayerControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOnMap_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicSpawnLocation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertDynamicAxisOffset_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSpawnAxis_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicSpawnRotation_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSpawnRotationOffeset_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/OWSTravelToMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OWSPlayerControllerComponent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOnMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingRotation;
	static void NewProp_UseDynamicSpawnLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicSpawnLocation;
	static void NewProp_InvertDynamicAxisOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertDynamicAxisOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicSpawnAxis;
	static void NewProp_UseDynamicSpawnRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicSpawnRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicSpawnRotationOffeset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_ErrorMapServerToTravelTo, "ErrorMapServerToTravelTo" }, // 1777782617
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetCartesianFromSpherical, "GetCartesianFromSpherical" }, // 1481464662
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetMapServerToTravelTo, "GetMapServerToTravelTo" }, // 465822972
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_GetSphericalFromCartesian, "GetSphericalFromCartesian" }, // 2903064936
		{ &Z_Construct_UFunction_AOWSTravelToMapActor_NotifyMapServerToTravelTo, "NotifyMapServerToTravelTo" }, // 47263951
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSTravelToMapActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_OWSPlayerControllerComponent = { "OWSPlayerControllerComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, OWSPlayerControllerComponent), Z_Construct_UClass_UOWSPlayerControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OWSPlayerControllerComponent_MetaData), NewProp_OWSPlayerControllerComponent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap = { "LocationOnMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, LocationOnMap), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOnMap_MetaData), NewProp_LocationOnMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation = { "StartingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, StartingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingRotation_MetaData), NewProp_StartingRotation_MetaData) };
void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_SetBit(void* Obj)
{
	((AOWSTravelToMapActor*)Obj)->UseDynamicSpawnLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation = { "UseDynamicSpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDynamicSpawnLocation_MetaData), NewProp_UseDynamicSpawnLocation_MetaData) };
void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_SetBit(void* Obj)
{
	((AOWSTravelToMapActor*)Obj)->InvertDynamicAxisOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset = { "InvertDynamicAxisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertDynamicAxisOffset_MetaData), NewProp_InvertDynamicAxisOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis = { "DynamicSpawnAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, DynamicSpawnAxis), Z_Construct_UEnum_OWSPlugin_DynamicAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSpawnAxis_MetaData), NewProp_DynamicSpawnAxis_MetaData) }; // 3754255418
void Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_SetBit(void* Obj)
{
	((AOWSTravelToMapActor*)Obj)->UseDynamicSpawnRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation = { "UseDynamicSpawnRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOWSTravelToMapActor), &Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDynamicSpawnRotation_MetaData), NewProp_UseDynamicSpawnRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset = { "DynamicSpawnRotationOffeset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSTravelToMapActor, DynamicSpawnRotationOffeset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSpawnRotationOffeset_MetaData), NewProp_DynamicSpawnRotationOffeset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_OWSPlayerControllerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_LocationOnMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_StartingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_InvertDynamicAxisOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_UseDynamicSpawnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSTravelToMapActor_Statics::NewProp_DynamicSpawnRotationOffeset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSTravelToMapActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSTravelToMapActor_Statics::ClassParams = {
	&AOWSTravelToMapActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSTravelToMapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSTravelToMapActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSTravelToMapActor()
{
	if (!Z_Registration_Info_UClass_AOWSTravelToMapActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSTravelToMapActor.OuterSingleton, Z_Construct_UClass_AOWSTravelToMapActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSTravelToMapActor.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSTravelToMapActor>()
{
	return AOWSTravelToMapActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSTravelToMapActor);
AOWSTravelToMapActor::~AOWSTravelToMapActor() {}
// End Class AOWSTravelToMapActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DynamicAxisType_StaticEnum, TEXT("DynamicAxisType"), &Z_Registration_Info_UEnum_DynamicAxisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3754255418U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSTravelToMapActor, AOWSTravelToMapActor::StaticClass, TEXT("AOWSTravelToMapActor"), &Z_Registration_Info_UClass_AOWSTravelToMapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSTravelToMapActor), 3203229527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_1166045488(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSTravelToMapActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
