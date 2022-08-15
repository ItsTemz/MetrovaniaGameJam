// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_TraversalSpring.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TraversalSpring() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_TraversalSpring>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_TraversalSpring cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring;
class UScriptStruct* FAnimNode_TraversalSpring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_TraversalSpring"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_TraversalSpring>()
{
	return FAnimNode_TraversalSpring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringUpwardStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringUpwardStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringDownwardStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDownwardStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Applies a spring based on movement while on an incline to push the pelvis up (walking uphill) or down (walking downhill)\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Applies a spring based on movement while on an incline to push the pelvis up (walking uphill) or down (walking downhill)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TraversalSpring>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring strength (displacement, mass) when moving up a hill */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring strength (displacement, mass) when moving up a hill" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength = { "SpringUpwardStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringUpwardStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring strength (displacement, mass) when moving down a hill */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring strength (displacement, mass) when moving down a hill" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength = { "SpringDownwardStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringDownwardStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring stiffness (tightness) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring stiffness (tightness)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_TraversalSpring",
		sizeof(FAnimNode_TraversalSpring),
		alignof(FAnimNode_TraversalSpring),
		Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TraversalSpring_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TraversalSpring_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_TraversalSpring::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewStructOps, TEXT("AnimNode_TraversalSpring"), &Z_Registration_Info_UScriptStruct_AnimNode_TraversalSpring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TraversalSpring), 2653080120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TraversalSpring_h_2868796030(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TraversalSpring_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_TraversalSpring_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
