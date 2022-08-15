// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Gait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Gait() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIGait_Foot();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Gait();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIGait_Foot;
class UScriptStruct* FMIGait_Foot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIGait_Foot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIGait_Foot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIGait_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIGait_Foot"));
	}
	return Z_Registration_Info_UScriptStruct_MIGait_Foot.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIGait_Foot>()
{
	return FMIGait_Foot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIGait_Foot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Foot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pole_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKPole_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKPole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbRootLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimbRootLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActualLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIGait_Foot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Foot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot = { "IKFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, IKFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the knee/calf */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the knee/calf" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole = { "Pole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Pole), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the knee/calf */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the knee/calf" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole = { "IKPole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, IKPole), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the thigh */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the thigh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Parent), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation = { "LimbRootLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, LimbRootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation = { "ActualLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, ActualLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity = { "BoneVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, BoneVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIGait_Foot",
		sizeof(FMIGait_Foot),
		alignof(FMIGait_Foot),
		Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIGait_Foot()
	{
		if (!Z_Registration_Info_UScriptStruct_MIGait_Foot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIGait_Foot.InnerSingleton, Z_Construct_UScriptStruct_FMIGait_Foot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIGait_Foot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_Gait>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_Gait cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Gait;
class UScriptStruct* FAnimNode_Gait::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Gait.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Gait.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Gait, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Gait"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Gait.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Gait>()
{
	return FAnimNode_Gait::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Gait_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKRoot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Feet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Feet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGait_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustGaitToSlope_MetaData[];
#endif
		static void NewProp_bAdjustGaitToSlope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustGaitToSlope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeAngleGaitMultiplierCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeAngleGaitMultiplierCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeSmoothingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeSmoothingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceAheadDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceAheadDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceAheadTraceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlopeTraceAheadTraceCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceStartHeightAboveMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceStartHeightAboveMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceLengthBelowMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceLengthBelowMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlopeTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedFootHeightBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedFootHeightBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedFootHeightBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedFootHeightBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisTightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisTightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampIKLengthToBoneLength_MetaData[];
#endif
		static void NewProp_bClampIKLengthToBoneLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampIKLengthToBoneLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Changes the distance between the feet while moving, and applies a spring to the pelvis to modify the weight at shorter gaits\n *\x09Using this node allows characters to walk into walls without the legs clipping, as it will ultimately run on the spot instead\n *\x09""Additionally gives the benefit of start and stop animations, procedurally\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Changes the distance between the feet while moving, and applies a spring to the pelvis to modify the weight at shorter gaits\nUsing this node allows characters to walk into walls without the legs clipping, as it will ultimately run on the spot instead\nAdditionally gives the benefit of start and stop animations, procedurally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Gait>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** The bone above the feet IK bones (they should have an IK root) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "The bone above the feet IK bones (they should have an IK root)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot = { "IKRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, IKRoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_Inner = { "Feet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIGait_Foot, METADATA_PARAMS(nullptr, 0) }; // 1418139390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Add each foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Add each foot that will be modified" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Feet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData)) }; // 1418139390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** 0->1 range, usually normalized character speed */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "0->1 range, usually normalized character speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Gait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Custom multiplier that can be helpful to modify gait based on state */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Custom multiplier that can be helpful to modify gait based on state" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier = { "GaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, GaitMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Used to prevent feet being too close together when starting to move */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Used to prevent feet being too close together when starting to move" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait = { "MinGait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MinGait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Used to prevent excessive gait */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Used to prevent excessive gait" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait = { "MaxGait", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MaxGait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Will adjust based on slope of surface walked on (less gait when walking uphill) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Will adjust based on slope of surface walked on (less gait when walking uphill)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_SetBit(void* Obj)
	{
		((FAnimNode_Gait*)Obj)->bAdjustGaitToSlope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope = { "bAdjustGaitToSlope", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Gait), &Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Modify gait based on the slope of the surface */" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Modify gait based on the slope of the surface" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve = { "SlopeAngleGaitMultiplierCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeAngleGaitMultiplierCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How fast the slope change updates - set to 0 for no smoothing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How fast the slope change updates - set to 0 for no smoothing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate = { "SlopeSmoothingRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeSmoothingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How far ahead to trace when predicting the impending slope */" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How far ahead to trace when predicting the impending slope" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist = { "SlopeTraceAheadDist", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceAheadDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How many times to sample tracing ahead when predicting the impending slope */" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How many times to sample tracing ahead when predicting the impending slope" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount = { "SlopeTraceAheadTraceCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceAheadTraceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How far above the mesh to trace from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How far above the mesh to trace from" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh = { "SlopeTraceStartHeightAboveMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceStartHeightAboveMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How far below the mesh to trace to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How far below the mesh to trace to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh = { "SlopeTraceLengthBelowMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceLengthBelowMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel = { "SlopeTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Higher values require feet to move farther from ground when starting to move */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Higher values require feet to move farther from ground when starting to move" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias = { "MinSpeedFootHeightBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MinSpeedFootHeightBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Lower values require feet to move closer to ground when moving at max speed */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Lower values require feet to move closer to ground when moving at max speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias = { "MaxSpeedFootHeightBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MaxSpeedFootHeightBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Pelvis spring: How much displacement occurs */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Pelvis spring: How much displacement occurs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement = { "PelvisDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Pelvis spring: How tight (responsive) the spring is */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Pelvis spring: How tight (responsive) the spring is" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness = { "PelvisTightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisTightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Pelvis spring: How much damping to apply (reducing overall effect) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Pelvis spring: How much damping to apply (reducing overall effect)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping = { "PelvisDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** If true, the IK length wont exceed the base bone length */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "If true, the IK length wont exceed the base bone length" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_SetBit(void* Obj)
	{
		((FAnimNode_Gait*)Obj)->bClampIKLengthToBoneLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength = { "bClampIKLengthToBoneLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Gait), &Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_Gait",
		sizeof(FAnimNode_Gait),
		alignof(FAnimNode_Gait),
		Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Gait()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Gait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Gait.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Gait.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Gait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Gait_h_Statics::ScriptStructInfo[] = {
		{ FMIGait_Foot::StaticStruct, Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewStructOps, TEXT("MIGait_Foot"), &Z_Registration_Info_UScriptStruct_MIGait_Foot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIGait_Foot), 1418139390U) },
		{ FAnimNode_Gait::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewStructOps, TEXT("AnimNode_Gait"), &Z_Registration_Info_UScriptStruct_AnimNode_Gait, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Gait), 3549214978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Gait_h_3453537560(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Gait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Gait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
