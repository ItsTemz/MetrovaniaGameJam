// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIAnimNotify_Footstep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimNotify_Footstep() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimNotify_Footstep_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimNotify_Footstep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UMIAnimNotify_Footstep::StaticRegisterNativesUMIAnimNotify_Footstep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIAnimNotify_Footstep);
	UClass* Z_Construct_UClass_UMIAnimNotify_Footstep_NoRegister()
	{
		return UMIAnimNotify_Footstep::StaticClass();
	}
	struct Z_Construct_UClass_UMIAnimNotify_Footstep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPSTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewPSTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSound;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOutsideGameWorld_MetaData[];
#endif
		static void NewProp_bEnableOutsideGameWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOutsideGameWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Anim notify to use for playing footsteps. MoveIt does not use this by default, it is here to force footsteps from animations if required.\n */" },
		{ "DisplayName", "Footstep" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MIAnimNotify_Footstep.h" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Anim notify to use for playing footsteps. MoveIt does not use this by default, it is here to force footsteps from animations if required." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Socket to play footstep from - REQUIRED */" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Socket to play footstep from - REQUIRED" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimNotify_Footstep, SocketName), METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_SocketName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewPSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Particle System to Spawn when setting up anim notify\n" },
		{ "DisplayName", "Preview Particle System" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Particle System to Spawn when setting up anim notify" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewPSTemplate = { "PreviewPSTemplate", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimNotify_Footstep, PreviewPSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewPSTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewPSTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewSound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Sound to Play when setting up anim notify\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Sound to Play when setting up anim notify" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewSound = { "PreviewSound", nullptr, (EPropertyFlags)0x0011000800000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimNotify_Footstep, PreviewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewSound_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Volume Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimNotify_Footstep, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Pitch Multiplier\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimNotify_Footstep, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Public/MIAnimNotify_Footstep.h" },
	};
#endif
	void Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld_SetBit(void* Obj)
	{
		((UMIAnimNotify_Footstep*)Obj)->bEnableOutsideGameWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld = { "bEnableOutsideGameWorld", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimNotify_Footstep), &Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_SocketName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewPSTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PreviewSound,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::NewProp_bEnableOutsideGameWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIAnimNotify_Footstep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::ClassParams = {
		&UMIAnimNotify_Footstep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIAnimNotify_Footstep()
	{
		if (!Z_Registration_Info_UClass_UMIAnimNotify_Footstep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIAnimNotify_Footstep.OuterSingleton, Z_Construct_UClass_UMIAnimNotify_Footstep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIAnimNotify_Footstep.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMIAnimNotify_Footstep>()
	{
		return UMIAnimNotify_Footstep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIAnimNotify_Footstep);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIAnimNotify_Footstep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIAnimNotify_Footstep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIAnimNotify_Footstep, UMIAnimNotify_Footstep::StaticClass, TEXT("UMIAnimNotify_Footstep"), &Z_Registration_Info_UClass_UMIAnimNotify_Footstep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIAnimNotify_Footstep), 2881820468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIAnimNotify_Footstep_h_1685828157(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIAnimNotify_Footstep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIAnimNotify_Footstep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
