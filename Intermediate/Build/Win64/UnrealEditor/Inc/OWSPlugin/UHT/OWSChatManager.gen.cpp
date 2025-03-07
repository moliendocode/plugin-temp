// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSChatManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSChatManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSChatManager();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSChatManager_NoRegister();
OWSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChatMessage();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin ScriptStruct FChatMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChatMessage;
class UScriptStruct* FChatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatMessage, (UObject*)Z_Construct_UPackage__Script_OWSPlugin(), TEXT("ChatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ChatMessage.OuterSingleton;
}
template<> OWSPLUGIN_API UScriptStruct* StaticStruct<FChatMessage>()
{
	return FChatMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMessageID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentByCharID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentByCharName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentToCharID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SentToCharName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGroupID_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatGroupName_MetaData[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatMessage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatMessageID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SentByCharID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentByCharName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SentToCharID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentToCharName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChatGroupID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, ChatMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMessage_MetaData), NewProp_ChatMessage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID = { "ChatMessageID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, ChatMessageID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMessageID_MetaData), NewProp_ChatMessageID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID = { "SentByCharID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, SentByCharID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentByCharID_MetaData), NewProp_SentByCharID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName = { "SentByCharName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, SentByCharName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentByCharName_MetaData), NewProp_SentByCharName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID = { "SentToCharID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, SentToCharID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentToCharID_MetaData), NewProp_SentToCharID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName = { "SentToCharName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, SentToCharName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SentToCharName_MetaData), NewProp_SentToCharName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID = { "ChatGroupID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, ChatGroupID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGroupID_MetaData), NewProp_ChatGroupID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChatMessage, ChatGroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatGroupName_MetaData), NewProp_ChatGroupName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatMessageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentByCharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_SentToCharName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMessage_Statics::NewProp_ChatGroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
	nullptr,
	&NewStructOps,
	"ChatMessage",
	Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::PropPointers),
	sizeof(FChatMessage),
	alignof(FChatMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChatMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChatMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ChatMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChatMessage.InnerSingleton, Z_Construct_UScriptStruct_FChatMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChatMessage.InnerSingleton;
}
// End ScriptStruct FChatMessage

// Begin Class AOWSChatManager Function AddOrJoinChatGroup
struct Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics
{
	struct OWSChatManager_eventAddOrJoinChatGroup_Parms
	{
		FString CharacterNameToAdd;
		FString ChatGroupName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add to Chat Group\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add to Chat Group" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameToAdd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_CharacterNameToAdd = { "CharacterNameToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventAddOrJoinChatGroup_Parms, CharacterNameToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventAddOrJoinChatGroup_Parms, ChatGroupName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_CharacterNameToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::NewProp_ChatGroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "AddOrJoinChatGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::OWSChatManager_eventAddOrJoinChatGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::OWSChatManager_eventAddOrJoinChatGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execAddOrJoinChatGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterNameToAdd);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChatGroupName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrJoinChatGroup(Z_Param_CharacterNameToAdd,Z_Param_ChatGroupName);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function AddOrJoinChatGroup

// Begin Class AOWSChatManager Function ErrorGetNewChatMessages
struct OWSChatManager_eventErrorGetNewChatMessages_Parms
{
	FString ErrorMsg;
};
static const FName NAME_AOWSChatManager_ErrorGetNewChatMessages = FName(TEXT("ErrorGetNewChatMessages"));
void AOWSChatManager::ErrorGetNewChatMessages(const FString& ErrorMsg)
{
	OWSChatManager_eventErrorGetNewChatMessages_Parms Parms;
	Parms.ErrorMsg=ErrorMsg;
	UFunction* Func = FindFunctionChecked(NAME_AOWSChatManager_ErrorGetNewChatMessages);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventErrorGetNewChatMessages_Parms, ErrorMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMsg_MetaData), NewProp_ErrorMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::NewProp_ErrorMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "ErrorGetNewChatMessages", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::PropPointers), sizeof(OWSChatManager_eventErrorGetNewChatMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSChatManager_eventErrorGetNewChatMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSChatManager Function ErrorGetNewChatMessages

// Begin Class AOWSChatManager Function GetNewChatMessages
struct Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics
{
	struct OWSChatManager_eventGetNewChatMessages_Parms
	{
		int32 LastChatMessageReceived;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get new Chat Messages\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get new Chat Messages" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastChatMessageReceived;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::NewProp_LastChatMessageReceived = { "LastChatMessageReceived", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventGetNewChatMessages_Parms, LastChatMessageReceived), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::NewProp_LastChatMessageReceived,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "GetNewChatMessages", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::OWSChatManager_eventGetNewChatMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::OWSChatManager_eventGetNewChatMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execGetNewChatMessages)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LastChatMessageReceived);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNewChatMessages(Z_Param_LastChatMessageReceived);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function GetNewChatMessages

// Begin Class AOWSChatManager Function LeaveChatGroup
struct Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics
{
	struct OWSChatManager_eventLeaveChatGroup_Parms
	{
		FString CharacterNameToRemove;
		FString ChatGroupName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Leave Chat Group\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leave Chat Group" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterNameToRemove;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatGroupName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_CharacterNameToRemove = { "CharacterNameToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventLeaveChatGroup_Parms, CharacterNameToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_ChatGroupName = { "ChatGroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventLeaveChatGroup_Parms, ChatGroupName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_CharacterNameToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::NewProp_ChatGroupName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "LeaveChatGroup", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::OWSChatManager_eventLeaveChatGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::OWSChatManager_eventLeaveChatGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execLeaveChatGroup)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterNameToRemove);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChatGroupName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LeaveChatGroup(Z_Param_CharacterNameToRemove,Z_Param_ChatGroupName);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function LeaveChatGroup

// Begin Class AOWSChatManager Function NotifyGetNewChatMessages
struct OWSChatManager_eventNotifyGetNewChatMessages_Parms
{
	TArray<FChatMessage> NewChatMessages;
	int32 MaxMessageID;
};
static const FName NAME_AOWSChatManager_NotifyGetNewChatMessages = FName(TEXT("NotifyGetNewChatMessages"));
void AOWSChatManager::NotifyGetNewChatMessages(TArray<FChatMessage> const& NewChatMessages, const int32 MaxMessageID)
{
	OWSChatManager_eventNotifyGetNewChatMessages_Parms Parms;
	Parms.NewChatMessages=NewChatMessages;
	Parms.MaxMessageID=MaxMessageID;
	UFunction* Func = FindFunctionChecked(NAME_AOWSChatManager_NotifyGetNewChatMessages);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewChatMessages_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMessageID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewChatMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewChatMessages;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMessageID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_Inner = { "NewChatMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChatMessage, METADATA_PARAMS(0, nullptr) }; // 2624026951
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages = { "NewChatMessages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventNotifyGetNewChatMessages_Parms, NewChatMessages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewChatMessages_MetaData), NewProp_NewChatMessages_MetaData) }; // 2624026951
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID = { "MaxMessageID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventNotifyGetNewChatMessages_Parms, MaxMessageID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMessageID_MetaData), NewProp_MaxMessageID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_NewChatMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::NewProp_MaxMessageID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "NotifyGetNewChatMessages", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::PropPointers), sizeof(OWSChatManager_eventNotifyGetNewChatMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::Function_MetaDataParams) };
static_assert(sizeof(OWSChatManager_eventNotifyGetNewChatMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AOWSChatManager Function NotifyGetNewChatMessages

// Begin Class AOWSChatManager Function SendChatToChannel
struct Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics
{
	struct OWSChatManager_eventSendChatToChannel_Parms
	{
		FString SentFromCharacterName;
		FString Message;
		FString ChatChannelName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Send Chat to Channel\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send Chat to Channel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatChannelName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, SentFromCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_ChatChannelName = { "ChatChannelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendChatToChannel_Parms, ChatChannelName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_SentFromCharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::NewProp_ChatChannelName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendChatToChannel", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::OWSChatManager_eventSendChatToChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::OWSChatManager_eventSendChatToChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_SendChatToChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendChatToChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execSendChatToChannel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SentFromCharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_ChatChannelName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendChatToChannel(Z_Param_SentFromCharacterName,Z_Param_Message,Z_Param_ChatChannelName);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function SendChatToChannel

// Begin Class AOWSChatManager Function SendGlobalChat
struct Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics
{
	struct OWSChatManager_eventSendGlobalChat_Parms
	{
		FString SentFromCharacterName;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Send Global Chat\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send Global Chat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendGlobalChat_Parms, SentFromCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendGlobalChat_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_SentFromCharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendGlobalChat", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::OWSChatManager_eventSendGlobalChat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::OWSChatManager_eventSendGlobalChat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_SendGlobalChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendGlobalChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execSendGlobalChat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SentFromCharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGlobalChat(Z_Param_SentFromCharacterName,Z_Param_Message);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function SendGlobalChat

// Begin Class AOWSChatManager Function SendPrivateChatMessage
struct Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics
{
	struct OWSChatManager_eventSendPrivateChatMessage_Parms
	{
		FString SentFromCharacterName;
		FString SendToCharacterName;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Send Private Message\n" },
#endif
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send Private Message" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SentFromCharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SendToCharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SentFromCharacterName = { "SentFromCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, SentFromCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SendToCharacterName = { "SendToCharacterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, SendToCharacterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWSChatManager_eventSendPrivateChatMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SentFromCharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_SendToCharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOWSChatManager, nullptr, "SendPrivateChatMessage", nullptr, nullptr, Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::OWSChatManager_eventSendPrivateChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::OWSChatManager_eventSendPrivateChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOWSChatManager::execSendPrivateChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SentFromCharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_SendToCharacterName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendPrivateChatMessage(Z_Param_SentFromCharacterName,Z_Param_SendToCharacterName,Z_Param_Message);
	P_NATIVE_END;
}
// End Class AOWSChatManager Function SendPrivateChatMessage

// Begin Class AOWSChatManager
void AOWSChatManager::StaticRegisterNativesAOWSChatManager()
{
	UClass* Class = AOWSChatManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrJoinChatGroup", &AOWSChatManager::execAddOrJoinChatGroup },
		{ "GetNewChatMessages", &AOWSChatManager::execGetNewChatMessages },
		{ "LeaveChatGroup", &AOWSChatManager::execLeaveChatGroup },
		{ "SendChatToChannel", &AOWSChatManager::execSendChatToChannel },
		{ "SendGlobalChat", &AOWSChatManager::execSendGlobalChat },
		{ "SendPrivateChatMessage", &AOWSChatManager::execSendPrivateChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSChatManager);
UClass* Z_Construct_UClass_AOWSChatManager_NoRegister()
{
	return AOWSChatManager::StaticClass();
}
struct Z_Construct_UClass_AOWSChatManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSChatManager.h" },
		{ "ModuleRelativePath", "Public/OWSChatManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOWSChatManager_AddOrJoinChatGroup, "AddOrJoinChatGroup" }, // 1528362362
		{ &Z_Construct_UFunction_AOWSChatManager_ErrorGetNewChatMessages, "ErrorGetNewChatMessages" }, // 79633189
		{ &Z_Construct_UFunction_AOWSChatManager_GetNewChatMessages, "GetNewChatMessages" }, // 494027757
		{ &Z_Construct_UFunction_AOWSChatManager_LeaveChatGroup, "LeaveChatGroup" }, // 2999310242
		{ &Z_Construct_UFunction_AOWSChatManager_NotifyGetNewChatMessages, "NotifyGetNewChatMessages" }, // 4226220906
		{ &Z_Construct_UFunction_AOWSChatManager_SendChatToChannel, "SendChatToChannel" }, // 4019684324
		{ &Z_Construct_UFunction_AOWSChatManager_SendGlobalChat, "SendGlobalChat" }, // 2175144268
		{ &Z_Construct_UFunction_AOWSChatManager_SendPrivateChatMessage, "SendPrivateChatMessage" }, // 3615292773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSChatManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOWSChatManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSChatManager_Statics::ClassParams = {
	&AOWSChatManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSChatManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSChatManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSChatManager()
{
	if (!Z_Registration_Info_UClass_AOWSChatManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSChatManager.OuterSingleton, Z_Construct_UClass_AOWSChatManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSChatManager.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSChatManager>()
{
	return AOWSChatManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSChatManager);
AOWSChatManager::~AOWSChatManager() {}
// End Class AOWSChatManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChatMessage::StaticStruct, Z_Construct_UScriptStruct_FChatMessage_Statics::NewStructOps, TEXT("ChatMessage"), &Z_Registration_Info_UScriptStruct_ChatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChatMessage), 2624026951U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSChatManager, AOWSChatManager::StaticClass, TEXT("AOWSChatManager"), &Z_Registration_Info_UClass_AOWSChatManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSChatManager), 3989941106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_2159876075(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSChatManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
