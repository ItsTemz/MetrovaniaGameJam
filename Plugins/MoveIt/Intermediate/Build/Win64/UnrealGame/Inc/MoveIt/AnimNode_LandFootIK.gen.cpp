// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandFootIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandFootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFoot_LandFootIK();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandFootIK();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK;
class UScriptStruct* FMIFoot_LandFootIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFoot_LandFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFoot_LandFootIK"));
	}
	return Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFoot_LandFootIK>()
{
	return FMIFoot_LandFootIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFoot_LandFootIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the legs move toward the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "How fast the legs move toward the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate = { "InterpRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, InterpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData[] = {
		{ "Category", "Land" },
		{ "ClampMax", "1" },
		{ "Comment", "/** How far towards the ground the legs go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "How far towards the ground the legs go" },
		{ "UIMax", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct = { "ReachPct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, ReachPct), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFoot_LandFootIK",
		sizeof(FMIFoot_LandFootIK),
		alignof(FMIFoot_LandFootIK),
		Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFoot_LandFootIK()
	{
		if (!Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.InnerSingleton, Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_LandFootIK>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_LandFootIK cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK;
class UScriptStruct* FAnimNode_LandFootIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandFootIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandFootIK>()
{
	return FAnimNode_LandFootIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictedLanding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedLanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStartZVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpStartZVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMinDistFromGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMinDistFromGround;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Plants the feet at the predicted landing location\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Plants the feet at the predicted landing location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandFootIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictedLanding_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Predicted landing result calculated by MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Predicted landing result calculated by MIAnimInstance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictedLanding = { "PredictedLanding", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, PredictedLanding), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictedLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictedLanding_MetaData)) }; // 1819844526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Z Velocity must be less than this amount while in the air to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Z Velocity must be less than this amount while in the air to begin landing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity = { "JumpStartZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, JumpStartZVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Must be this close to ground to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Must be this close to ground to begin landing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround = { "StartMinDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, StartMinDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFoot_LandFootIK, METADATA_PARAMS(nullptr, 0) }; // 2225806337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData)) }; // 2225806337
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFoot_LandFootIK, METADATA_PARAMS(nullptr, 0) }; // 2225806337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData)) }; // 2225806337
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_LandFootIK*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LandFootIK), &Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictedLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_bWorkOutsidePIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_LandFootIK",
		sizeof(FAnimNode_LandFootIK),
		alignof(FAnimNode_LandFootIK),
		Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandFootIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandFootIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandFootIK_h_Statics::ScriptStructInfo[] = {
		{ FMIFoot_LandFootIK::StaticStruct, Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewStructOps, TEXT("MIFoot_LandFootIK"), &Z_Registration_Info_UScriptStruct_MIFoot_LandFootIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIFoot_LandFootIK), 2225806337U) },
		{ FAnimNode_LandFootIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewStructOps, TEXT("AnimNode_LandFootIK"), &Z_Registration_Info_UScriptStruct_AnimNode_LandFootIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LandFootIK), 2891302202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandFootIK_h_1172257493(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandFootIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandFootIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
