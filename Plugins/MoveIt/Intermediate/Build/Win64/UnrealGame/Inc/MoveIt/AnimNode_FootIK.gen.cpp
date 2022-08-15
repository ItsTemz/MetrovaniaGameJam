// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_FootIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_State();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_Foot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIFootIK_State;
class UScriptStruct* FMIFootIK_State::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIFootIK_State.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIFootIK_State.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFootIK_State, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFootIK_State"));
	}
	return Z_Registration_Info_UScriptStruct_MIFootIK_State.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFootIK_State>()
{
	return FMIFootIK_State::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIFootIK_State_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiftFootRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftFootRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerFootRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerFootRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiftMaxZLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftMaxZLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerMaxZLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerMaxZLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerMaxZLimitOverEdge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerMaxZLimitOverEdge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchDownLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchDownLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchUpLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchUpLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollLeftLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollLeftLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRightLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRightLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFootIK_State>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot rotates to orient to the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot rotates to orient to the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate = { "OrientationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, OrientationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot moves up */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot moves up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate = { "LiftFootRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LiftFootRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot moves down */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot moves down" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate = { "LowerFootRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerFootRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How high the foot can go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How high the foot can go" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit = { "LiftMaxZLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LiftMaxZLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How low the foot can go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How low the foot can go" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit = { "LowerMaxZLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerMaxZLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How low the foot can go if its over the edge (not touching ground) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How low the foot can go if its over the edge (not touching ground)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge = { "LowerMaxZLimitOverEdge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerMaxZLimitOverEdge), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate down on pitch */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate down on pitch" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit = { "PitchDownLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, PitchDownLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate up on pitch */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate up on pitch" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit = { "PitchUpLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, PitchUpLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate left on roll */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate left on roll" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit = { "RollLeftLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, RollLeftLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate right on roll */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate right on roll" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit = { "RollRightLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, RollRightLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Offset the final position on Z */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Offset the final position on Z" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, ZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFootIK_State",
		sizeof(FMIFootIK_State),
		alignof(FMIFootIK_State),
		Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_State()
	{
		if (!Z_Registration_Info_UScriptStruct_MIFootIK_State.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIFootIK_State.InnerSingleton, Z_Construct_UScriptStruct_FMIFootIK_State_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIFootIK_State.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIFootIK_Foot;
class UScriptStruct* FMIFootIK_Foot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIFootIK_Foot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIFootIK_Foot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFootIK_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFootIK_Foot"));
	}
	return Z_Registration_Info_UScriptStruct_MIFootIK_Foot.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFootIK_Foot>()
{
	return FMIFootIK_Foot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFootIK_Foot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Foot bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot IK bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Foot IK bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_State, METADATA_PARAMS(nullptr, 0) }; // 3559808468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/**\n\x09 * Optional states to allow for different settings when crouching, sprinting, etc\n\x09 * Must always have at least one entry, or will abort applying IK\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Optional states to allow for different settings when crouching, sprinting, etc\nMust always have at least one entry, or will abort applying IK" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData)) }; // 3559808468
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFootIK_Foot",
		sizeof(FMIFootIK_Foot),
		alignof(FMIFootIK_Foot),
		Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_Foot()
	{
		if (!Z_Registration_Info_UScriptStruct_MIFootIK_Foot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIFootIK_Foot.InnerSingleton, Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIFootIK_Foot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_FootIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_FootIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_FootIK;
class UScriptStruct* FAnimNode_FootIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_FootIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_FootIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_FootIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_FootIK.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_FootIK>()
{
	return FAnimNode_FootIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pelvis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFeet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFeet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftFeet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightFeet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFeet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RightFeet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowPelvis_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowPelvis_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FollowPelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisXYTranslateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisXYTranslateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartHeightAboveMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceStartHeightAboveMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLengthBelowMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLengthBelowMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawPIE_MetaData[];
#endif
		static void NewProp_bEnableDebugDrawPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Computes and applies advanced IK for each foot, shifts the weight of the pelvis, handles orientation to floor\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Computes and applies advanced IK for each foot, shifts the weight of the pelvis, handles orientation to floor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FootIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Character root bone, this is usually the first bone in the skeletal hierarchy */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Character root bone, this is usually the first bone in the skeletal hierarchy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, Root), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Character pelvis bone, usually immediately beneath root (also called: hips, cog) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Character pelvis bone, usually immediately beneath root (also called: hips, cog)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_Foot, METADATA_PARAMS(nullptr, 0) }; // 1107242254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Add every left foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Add every left foot that will be modified" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData)) }; // 1107242254
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_Foot, METADATA_PARAMS(nullptr, 0) }; // 1107242254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Add every right foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Add every right foot that will be modified" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData)) }; // 1107242254
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_Inner = { "FollowPelvis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Same translation applied to the pelvis also applied to these joints (mainly for keeping hand ik moving along with pelvis) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Same translation applied to the pelvis also applied to these joints (mainly for keeping hand ik moving along with pelvis)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis = { "FollowPelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, FollowPelvis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** The state the character is currently in - Index to Feet::States, determining which to use */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The state the character is currently in - Index to Feet::States, determining which to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the pelvis adjusts its weight when both feet are in the air */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the pelvis adjusts its weight when both feet are in the air" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate = { "PelvisXYTranslateRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, PelvisXYTranslateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** How far above the mesh to trace from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far above the mesh to trace from" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh = { "TraceStartHeightAboveMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, TraceStartHeightAboveMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** How far below the mesh to trace to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far below the mesh to trace to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh = { "TraceLengthBelowMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, TraceLengthBelowMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** Channel to trace for foot IK */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Channel to trace for foot IK" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel = { "FootTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, FootTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_FootIK*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_FootIK), &Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true will draw debug helpers when playing in editor */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "If true will draw debug helpers when playing in editor" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE_SetBit(void* Obj)
	{
		((FAnimNode_FootIK*)Obj)->bEnableDebugDrawPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE = { "bEnableDebugDrawPIE", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_FootIK), &Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bWorkOutsidePIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_bEnableDebugDrawPIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_FootIK",
		sizeof(FAnimNode_FootIK),
		alignof(FAnimNode_FootIK),
		Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_FootIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_FootIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_FootIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_FootIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_FootIK_h_Statics::ScriptStructInfo[] = {
		{ FMIFootIK_State::StaticStruct, Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewStructOps, TEXT("MIFootIK_State"), &Z_Registration_Info_UScriptStruct_MIFootIK_State, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIFootIK_State), 3559808468U) },
		{ FMIFootIK_Foot::StaticStruct, Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewStructOps, TEXT("MIFootIK_Foot"), &Z_Registration_Info_UScriptStruct_MIFootIK_Foot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIFootIK_Foot), 1107242254U) },
		{ FAnimNode_FootIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewStructOps, TEXT("AnimNode_FootIK"), &Z_Registration_Info_UScriptStruct_AnimNode_FootIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_FootIK), 3634354910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_FootIK_h_988137132(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_FootIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_FootIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
