// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWSPlugin/Public/OWSFloorTileSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWSFloorTileSpawner() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSFloorTileSpawner();
OWSPLUGIN_API UClass* Z_Construct_UClass_AOWSFloorTileSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWSPlugin();
// End Cross Module References

// Begin Class AOWSFloorTileSpawner
void AOWSFloorTileSpawner::StaticRegisterNativesAOWSFloorTileSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWSFloorTileSpawner);
UClass* Z_Construct_UClass_AOWSFloorTileSpawner_NoRegister()
{
	return AOWSFloorTileSpawner::StaticClass();
}
struct Z_Construct_UClass_AOWSFloorTileSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWSFloorTileSpawner.h" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawnX_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberToSpawnY_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryStaticMeshToSpawn_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenMeshes_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotationPerMesh_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotationPerMesh2_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomZVariance_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilesNotToSpawn_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "OWSFloorTileSpawner" },
		{ "ModuleRelativePath", "Public/OWSFloorTileSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToSpawnX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberToSpawnY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryStaticMeshToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenMeshes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedRotationPerMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedRotationPerMesh2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomZVariance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TilesNotToSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesNotToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWSFloorTileSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_NumberToSpawnX = { "NumberToSpawnX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, NumberToSpawnX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToSpawnX_MetaData), NewProp_NumberToSpawnX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_NumberToSpawnY = { "NumberToSpawnY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, NumberToSpawnY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberToSpawnY_MetaData), NewProp_NumberToSpawnY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_PrimaryStaticMeshToSpawn = { "PrimaryStaticMeshToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, PrimaryStaticMeshToSpawn), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryStaticMeshToSpawn_MetaData), NewProp_PrimaryStaticMeshToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_DistanceBetweenMeshes = { "DistanceBetweenMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, DistanceBetweenMeshes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenMeshes_MetaData), NewProp_DistanceBetweenMeshes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_FixedRotationPerMesh = { "FixedRotationPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, FixedRotationPerMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedRotationPerMesh_MetaData), NewProp_FixedRotationPerMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_FixedRotationPerMesh2 = { "FixedRotationPerMesh2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, FixedRotationPerMesh2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedRotationPerMesh2_MetaData), NewProp_FixedRotationPerMesh2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RandomZVariance = { "RandomZVariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, RandomZVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomZVariance_MetaData), NewProp_RandomZVariance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_TilesNotToSpawn_Inner = { "TilesNotToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_TilesNotToSpawn = { "TilesNotToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, TilesNotToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilesNotToSpawn_MetaData), NewProp_TilesNotToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWSFloorTileSpawner, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWSFloorTileSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_NumberToSpawnX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_NumberToSpawnY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_PrimaryStaticMeshToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_DistanceBetweenMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_FixedRotationPerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_FixedRotationPerMesh2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RandomZVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_TilesNotToSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_TilesNotToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWSFloorTileSpawner_Statics::NewProp_RandomSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFloorTileSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWSFloorTileSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OWSPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFloorTileSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWSFloorTileSpawner_Statics::ClassParams = {
	&AOWSFloorTileSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWSFloorTileSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFloorTileSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWSFloorTileSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWSFloorTileSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWSFloorTileSpawner()
{
	if (!Z_Registration_Info_UClass_AOWSFloorTileSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWSFloorTileSpawner.OuterSingleton, Z_Construct_UClass_AOWSFloorTileSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWSFloorTileSpawner.OuterSingleton;
}
template<> OWSPLUGIN_API UClass* StaticClass<AOWSFloorTileSpawner>()
{
	return AOWSFloorTileSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWSFloorTileSpawner);
AOWSFloorTileSpawner::~AOWSFloorTileSpawner() {}
// End Class AOWSFloorTileSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFloorTileSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWSFloorTileSpawner, AOWSFloorTileSpawner::StaticClass, TEXT("AOWSFloorTileSpawner"), &Z_Registration_Info_UClass_AOWSFloorTileSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWSFloorTileSpawner), 2356760814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFloorTileSpawner_h_3473137937(TEXT("/Script/OWSPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFloorTileSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_UnrealFruits_Plugins_OWSPlugin_Source_OWSPlugin_Public_OWSFloorTileSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
