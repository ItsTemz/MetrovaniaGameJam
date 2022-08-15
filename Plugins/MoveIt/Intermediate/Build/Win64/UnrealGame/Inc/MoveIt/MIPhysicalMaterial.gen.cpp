// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIPhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPhysicalMaterial() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIParticleSystemType();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback();
	MOVEIT_API UClass* Z_Construct_UClass_UMIPhysicalMaterial_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIPhysicalMaterial();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIParticleSystemType;
	static UEnum* EMIParticleSystemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIParticleSystemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIParticleSystemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIParticleSystemType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIParticleSystemType"));
		}
		return Z_Registration_Info_UEnum_EMIParticleSystemType.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIParticleSystemType>()
	{
		return EMIParticleSystemType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enumerators[] = {
		{ "EMIParticleSystemType::MIPST_Legacy", (int64)EMIParticleSystemType::MIPST_Legacy },
		{ "EMIParticleSystemType::MIPST_Niagara", (int64)EMIParticleSystemType::MIPST_Niagara },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MIPST_Legacy.DisplayName", "Legacy" },
		{ "MIPST_Legacy.Name", "EMIParticleSystemType::MIPST_Legacy" },
		{ "MIPST_Niagara.DisplayName", "Niagara" },
		{ "MIPST_Niagara.Name", "EMIParticleSystemType::MIPST_Niagara" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIParticleSystemType",
		"EMIParticleSystemType",
		Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIParticleSystemType()
	{
		if (!Z_Registration_Info_UEnum_EMIParticleSystemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIParticleSystemType.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIParticleSystemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIParticleSystemType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIPhysMatLookupType;
	static UEnum* EMIPhysMatLookupType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIPhysMatLookupType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIPhysMatLookupType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIPhysMatLookupType"));
		}
		return Z_Registration_Info_UEnum_EMIPhysMatLookupType.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIPhysMatLookupType>()
	{
		return EMIPhysMatLookupType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enumerators[] = {
		{ "EMIPhysMatLookupType::PMLT_Material", (int64)EMIPhysMatLookupType::PMLT_Material },
		{ "EMIPhysMatLookupType::PMLT_CPP", (int64)EMIPhysMatLookupType::PMLT_CPP },
		{ "EMIPhysMatLookupType::PMLT_BP", (int64)EMIPhysMatLookupType::PMLT_BP },
		{ "EMIPhysMatLookupType::PMLT_Max", (int64)EMIPhysMatLookupType::PMLT_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "PMLT_BP.DisplayName", "Blueprint (MICharacter)" },
		{ "PMLT_BP.Name", "EMIPhysMatLookupType::PMLT_BP" },
		{ "PMLT_BP.ToolTip", "[High Performance Cost] Per-character ability to determine what asset to apply from Blueprint (override from MICharacter)" },
		{ "PMLT_CPP.DisplayName", "Code (MICharacter)" },
		{ "PMLT_CPP.Name", "EMIPhysMatLookupType::PMLT_CPP" },
		{ "PMLT_CPP.ToolTip", "Per-character ability to determine what asset to apply from code only (override from MICharacter)" },
		{ "PMLT_Material.DisplayName", "This Material" },
		{ "PMLT_Material.Name", "EMIPhysMatLookupType::PMLT_Material" },
		{ "PMLT_Material.ToolTip", "[Most Performant] Take the material directly from this physical material" },
		{ "PMLT_Max.Hidden", "" },
		{ "PMLT_Max.Name", "EMIPhysMatLookupType::PMLT_Max" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIPhysMatLookupType",
		"EMIPhysMatLookupType",
		Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType()
	{
		if (!Z_Registration_Info_UEnum_EMIPhysMatLookupType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIPhysMatLookupType.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIPhysMatLookupType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIPhysMatLookupFallback;
	static UEnum* EMIPhysMatLookupFallback_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIPhysMatLookupFallback"));
		}
		return Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIPhysMatLookupFallback>()
	{
		return EMIPhysMatLookupFallback_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enumerators[] = {
		{ "EMIPhysMatLookupFallback::PMLF_Material", (int64)EMIPhysMatLookupFallback::PMLF_Material },
		{ "EMIPhysMatLookupFallback::PMLF_None", (int64)EMIPhysMatLookupFallback::PMLF_None },
		{ "EMIPhysMatLookupFallback::PMLF_MAX", (int64)EMIPhysMatLookupFallback::PMLF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "PMLF_Material.DisplayName", "This Material" },
		{ "PMLF_Material.Name", "EMIPhysMatLookupFallback::PMLF_Material" },
		{ "PMLF_Material.ToolTip", "Fallback to assets assigned in this material if null asset is returned" },
		{ "PMLF_MAX.Hidden", "" },
		{ "PMLF_MAX.Name", "EMIPhysMatLookupFallback::PMLF_MAX" },
		{ "PMLF_None.DisplayName", "None" },
		{ "PMLF_None.Name", "EMIPhysMatLookupFallback::PMLF_None" },
		{ "PMLF_None.ToolTip", "If null asset is returned do nothing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIPhysMatLookupFallback",
		"EMIPhysMatLookupFallback",
		Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback()
	{
		if (!Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIPhysMatLookupFallback.InnerSingleton;
	}
	void UMIPhysicalMaterial::StaticRegisterNativesUMIPhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIPhysicalMaterial);
	UClass* Z_Construct_UClass_UMIPhysicalMaterial_NoRegister()
	{
		return UMIPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UMIPhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitSoundLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitSoundLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScuffSoundLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffSoundLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScuffSoundLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneImpactSoundLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactSoundLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneImpactSoundLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HitParticleLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticleLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HitParticleLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScuffParticleLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffParticleLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScuffParticleLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneImpactParticleLookupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactParticleLookupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneImpactParticleLookupType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FallbackMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FallbackMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScuffSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneImpactSound;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleSystemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParticleSystemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNiagara_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitNiagara;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffNiagara_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScuffNiagara;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactNiagara_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneImpactNiagara;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScuffParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoneImpactParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitVelocityToVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitVelocityToVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitVelocityToPitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitVelocityToPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffVelocityToVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScuffVelocityToVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffVelocityToPitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScuffVelocityToPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactVelocityToVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneImpactVelocityToVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneImpactVelocityToPitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneImpactVelocityToPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom physical material with surface interaction effects\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MIPhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Custom physical material with surface interaction effects" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which sound to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which sound to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType = { "HitSoundLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitSoundLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which sound to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which sound to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType = { "ScuffSoundLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffSoundLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which sound to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which sound to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType = { "BoneImpactSoundLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactSoundLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which particle to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which particle to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType = { "HitParticleLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitParticleLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which particle to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which particle to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType = { "ScuffParticleLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffParticleLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/** How to determine which particle to play */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How to determine which particle to play" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType = { "BoneImpactParticleLookupType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactParticleLookupType), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType_MetaData)) }; // 3918084449
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode_MetaData[] = {
		{ "Category", "Lookup" },
		{ "Comment", "/**\n\x09 * How systems handle LookupType returning a null asset from a code or blueprint function\n\x09 * Setting FallbackMode to \"This Material\" means if a code or blueprint function returns a null asset, then the asset assigned to this material will be used instead\n\x09 * Setting FallbackMode to \"None\" means that nothing will be used (maintains null asset)\n\x09 * This does nothing when LookupType is \"This Material\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "How systems handle LookupType returning a null asset from a code or blueprint function\nSetting FallbackMode to \"This Material\" means if a code or blueprint function returns a null asset, then the asset assigned to this material will be used instead\nSetting FallbackMode to \"None\" means that nothing will be used (maintains null asset)\nThis does nothing when LookupType is \"This Material\"" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode = { "FallbackMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, FallbackMode), Z_Construct_UEnum_MoveIt_EMIPhysMatLookupFallback, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode_MetaData)) }; // 3199636050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound played when the character runs into this surface at speed */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Sound played when the character runs into this surface at speed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSound = { "HitSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound played when the character walks beside/into this surface (scuffling sound) */" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Sound played when the character walks beside/into this surface (scuffling sound)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSound = { "ScuffSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound played when the character walks on this surface (footstep sound, usually) */" },
		{ "DisplayName", "Bone Impact Sound (Footstep)" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Sound played when the character walks on this surface (footstep sound, usually)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSound = { "BoneImpactSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSound_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType = { "ParticleSystemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ParticleSystemType), Z_Construct_UEnum_MoveIt_EMIParticleSystemType, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType_MetaData)) }; // 1535639163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitNiagara_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character runs into this surface at speed */" },
		{ "DisplayName", "Hit Particle" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character runs into this surface at speed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitNiagara = { "HitNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitNiagara_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffNiagara_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character walks beside/into this surface (scuffling sound) */" },
		{ "DisplayName", "Scuff Particle" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character walks beside/into this surface (scuffling sound)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffNiagara = { "ScuffNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffNiagara_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactNiagara_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character walks on this surface (footstep sound, usually) */" },
		{ "DisplayName", "Bone Impact Particle (Footstep)" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character walks on this surface (footstep sound, usually)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactNiagara = { "BoneImpactNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactNiagara_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticle_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character runs into this surface at speed */" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character runs into this surface at speed" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticle_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character walks beside/into this surface (scuffling sound) */" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character walks beside/into this surface (scuffling sound)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticle = { "ScuffParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticle_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "/** Particle spawned when the character walks on this surface (footstep sound, usually) */" },
		{ "DisplayName", "Bone Impact Particle (Footstep)" },
		{ "EditCondition", "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Particle spawned when the character walks on this surface (footstep sound, usually)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticle = { "BoneImpactParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Maps Velocity [Time] to Volume [Value] when the character runs into this surface at speed */" },
		{ "DisplayName", "Hit [Velocity -> Volume]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Volume [Value] when the character runs into this surface at speed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToVolume = { "HitVelocityToVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitVelocityToVolume), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToVolume_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToPitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Maps Velocity [Time] to Pitch [Value] when the character runs into this surface at speed */" },
		{ "DisplayName", "Hit [Velocity -> Pitch]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Pitch [Value] when the character runs into this surface at speed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToPitch = { "HitVelocityToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, HitVelocityToPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToPitch_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Maps Velocity [Time] to Volume [Value] when the character walks beside/into this surface (scuffling sound) */" },
		{ "DisplayName", "Scuff [Velocity -> Volume]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Volume [Value] when the character walks beside/into this surface (scuffling sound)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToVolume = { "ScuffVelocityToVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffVelocityToVolume), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToVolume_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToPitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Maps Velocity [Time] to Pitch [Value] when the character walks beside/into this surface (scuffling sound) */" },
		{ "DisplayName", "Scuff [Velocity -> Pitch]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Pitch [Value] when the character walks beside/into this surface (scuffling sound)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToPitch = { "ScuffVelocityToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, ScuffVelocityToPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToPitch_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**  Maps Velocity [Time] to Volume [Value] when the character walks on this surface (footstep sound) */" },
		{ "DisplayName", "Bone Impact (Footstep) [Velocity -> Volume]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Volume [Value] when the character walks on this surface (footstep sound)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToVolume = { "BoneImpactVelocityToVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactVelocityToVolume), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToVolume_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToPitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**  Maps Velocity [Time] to Pitch [Value] when the character walks on this surface (footstep sound) */" },
		{ "DisplayName", "Bone Impact (Footstep) [Velocity -> Pitch]" },
		{ "ModuleRelativePath", "Public/MIPhysicalMaterial.h" },
		{ "ToolTip", "Maps Velocity [Time] to Pitch [Value] when the character walks on this surface (footstep sound)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToPitch = { "BoneImpactVelocityToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIPhysicalMaterial, BoneImpactVelocityToPitch), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToPitch_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIPhysicalMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSoundLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSoundLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSoundLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticleLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticleLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticleLookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_FallbackMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ParticleSystemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitNiagara,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffNiagara,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactNiagara,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_HitVelocityToPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_ScuffVelocityToPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIPhysicalMaterial_Statics::NewProp_BoneImpactVelocityToPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIPhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIPhysicalMaterial_Statics::ClassParams = {
		&UMIPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMIPhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMIPhysicalMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIPhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UMIPhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIPhysicalMaterial.OuterSingleton, Z_Construct_UClass_UMIPhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIPhysicalMaterial.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMIPhysicalMaterial>()
	{
		return UMIPhysicalMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIPhysicalMaterial);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::EnumInfo[] = {
		{ EMIParticleSystemType_StaticEnum, TEXT("EMIParticleSystemType"), &Z_Registration_Info_UEnum_EMIParticleSystemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1535639163U) },
		{ EMIPhysMatLookupType_StaticEnum, TEXT("EMIPhysMatLookupType"), &Z_Registration_Info_UEnum_EMIPhysMatLookupType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3918084449U) },
		{ EMIPhysMatLookupFallback_StaticEnum, TEXT("EMIPhysMatLookupFallback"), &Z_Registration_Info_UEnum_EMIPhysMatLookupFallback, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3199636050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIPhysicalMaterial, UMIPhysicalMaterial::StaticClass, TEXT("UMIPhysicalMaterial"), &Z_Registration_Info_UClass_UMIPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIPhysicalMaterial), 1640665968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_1190786440(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
