// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetroidvaniaJam17/MetroidvaniaJam17GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetroidvaniaJam17GameMode() {}
// Cross Module References
	METROIDVANIAJAM17_API UClass* Z_Construct_UClass_AMetroidvaniaJam17GameMode_NoRegister();
	METROIDVANIAJAM17_API UClass* Z_Construct_UClass_AMetroidvaniaJam17GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MetroidvaniaJam17();
// End Cross Module References
	void AMetroidvaniaJam17GameMode::StaticRegisterNativesAMetroidvaniaJam17GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMetroidvaniaJam17GameMode);
	UClass* Z_Construct_UClass_AMetroidvaniaJam17GameMode_NoRegister()
	{
		return AMetroidvaniaJam17GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MetroidvaniaJam17,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MetroidvaniaJam17GameMode.h" },
		{ "ModuleRelativePath", "MetroidvaniaJam17GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetroidvaniaJam17GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::ClassParams = {
		&AMetroidvaniaJam17GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetroidvaniaJam17GameMode()
	{
		if (!Z_Registration_Info_UClass_AMetroidvaniaJam17GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMetroidvaniaJam17GameMode.OuterSingleton, Z_Construct_UClass_AMetroidvaniaJam17GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMetroidvaniaJam17GameMode.OuterSingleton;
	}
	template<> METROIDVANIAJAM17_API UClass* StaticClass<AMetroidvaniaJam17GameMode>()
	{
		return AMetroidvaniaJam17GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetroidvaniaJam17GameMode);
	struct Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMetroidvaniaJam17GameMode, AMetroidvaniaJam17GameMode::StaticClass, TEXT("AMetroidvaniaJam17GameMode"), &Z_Registration_Info_UClass_AMetroidvaniaJam17GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMetroidvaniaJam17GameMode), 2561812383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17GameMode_h_1683423655(TEXT("/Script/MetroidvaniaJam17"),
		Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
