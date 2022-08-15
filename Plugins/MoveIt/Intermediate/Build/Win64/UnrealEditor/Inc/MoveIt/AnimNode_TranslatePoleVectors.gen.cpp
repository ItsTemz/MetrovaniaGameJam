// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_TranslatePoleVectors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TranslatePoleVectors() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
// End Cross Module References

static_assert(std::is_polymorphic<FMITranslatePoleVectors_PoleVector>() == std::is_polymorphic<FMICopyIKBones_Bone>(), "USTRUCT FMITranslatePoleVectors_PoleVector cannot be polymorphic unless super FMICopyIKBones_Bone is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector;
class UScriptStruct* FMITranslatePoleVectors_PoleVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector, Z_Construct_UPackage__Script_MoveIt(), TEXT("MITranslatePoleVectors_PoleVector"));
	}
	return Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMITranslatePoleVectors_PoleVector>()
{
	return FMITranslatePoleVectors_PoleVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoleVectorOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMITranslatePoleVectors_PoleVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMITranslatePoleVectors_PoleVector, EffectorBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset = { "PoleVectorOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMITranslatePoleVectors_PoleVector, PoleVectorOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FMICopyIKBones_Bone,
		&NewStructOps,
		"MITranslatePoleVectors_PoleVector",
		sizeof(FMITranslatePoleVectors_PoleVector),
		alignof(FMITranslatePoleVectors_PoleVector),
		Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector()
	{
		if (!Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.InnerSingleton, Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_TranslatePoleVectors>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_TranslatePoleVectors cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors;
class UScriptStruct* FAnimNode_TranslatePoleVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_TranslatePoleVectors"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_TranslatePoleVectors>()
{
	return FAnimNode_TranslatePoleVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoleVectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Compute and apply ideal pole vector location for arms\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
		{ "ToolTip", "Compute and apply ideal pole vector location for arms" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TranslatePoleVectors>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_Inner = { "PoleVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector, METADATA_PARAMS(nullptr, 0) }; // 1183068163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors = { "PoleVectors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TranslatePoleVectors, PoleVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData)) }; // 1183068163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_TranslatePoleVectors",
		sizeof(FAnimNode_TranslatePoleVectors),
		alignof(FAnimNode_TranslatePoleVectors),
		Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TranslatePoleVectors_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TranslatePoleVectors_h_Statics::ScriptStructInfo[] = {
		{ FMITranslatePoleVectors_PoleVector::StaticStruct, Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewStructOps, TEXT("MITranslatePoleVectors_PoleVector"), &Z_Registration_Info_UScriptStruct_MITranslatePoleVectors_PoleVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMITranslatePoleVectors_PoleVector), 1183068163U) },
		{ FAnimNode_TranslatePoleVectors::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewStructOps, TEXT("AnimNode_TranslatePoleVectors"), &Z_Registration_Info_UScriptStruct_AnimNode_TranslatePoleVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TranslatePoleVectors), 3673392598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TranslatePoleVectors_h_3719322147(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TranslatePoleVectors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TranslatePoleVectors_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
