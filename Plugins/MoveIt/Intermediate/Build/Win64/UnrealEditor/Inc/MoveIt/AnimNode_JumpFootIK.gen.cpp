// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_JumpFootIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_JumpFootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot;
class UScriptStruct* FMIJumpFootIK_Foot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIJumpFootIK_Foot"));
	}
	return Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIJumpFootIK_Foot>()
{
	return FMIJumpFootIK_Foot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpInterpOutRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallInterpOutRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundInterpOutRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyInterpOutRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwimInterpOutRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInterpOutRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInterpOutRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIJumpFootIK_Foot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Foot bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Foot bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, Foot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Foot IK bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Foot IK bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot = { "IKFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, IKFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** How many other bones in the same limb (for bipeds/humans, this is 2 for the thigh and calf) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "How many other bones in the same limb (for bipeds/humans, this is 2 for the thigh and calf)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, NumBonesInLimb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while jumping upward */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while jumping upward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate = { "JumpInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, JumpInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while falling downward */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while falling downward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate = { "FallInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, FallInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while on the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while on the ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate = { "GroundInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, GroundInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while flying */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while flying" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate = { "FlyInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, FlyInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while swimming */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while swimming" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate = { "SwimInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, SwimInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** For when MovementMode is disabled or custom movement mode is used */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "For when MovementMode is disabled or custom movement mode is used" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate = { "DefaultInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, DefaultInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIJumpFootIK_Foot",
		sizeof(FMIJumpFootIK_Foot),
		alignof(FMIJumpFootIK_Foot),
		Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot()
	{
		if (!Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.InnerSingleton, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_JumpFootIK>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_JumpFootIK cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK;
class UScriptStruct* FAnimNode_JumpFootIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_JumpFootIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_JumpFootIK>()
{
	return FAnimNode_JumpFootIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRearFoot_MetaData[];
#endif
		static void NewProp_bUseRearFoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRearFoot;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Compute best leg to jump off then moves it toward the ground\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Compute best leg to jump off then moves it toward the ground" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_JumpFootIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** If true, jump off the rear foot instead of front foot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "If true, jump off the rear foot instead of front foot" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_SetBit(void* Obj)
	{
		((FAnimNode_JumpFootIK*)Obj)->bUseRearFoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot = { "bUseRearFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_JumpFootIK), &Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, METADATA_PARAMS(nullptr, 0) }; // 353726875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Add every left foot that will be used for jumping */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Add every left foot that will be used for jumping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpFootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData)) }; // 353726875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, METADATA_PARAMS(nullptr, 0) }; // 353726875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Add every right foot that will be used for jumping */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Add every right foot that will be used for jumping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpFootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData)) }; // 353726875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_JumpFootIK",
		sizeof(FAnimNode_JumpFootIK),
		alignof(FAnimNode_JumpFootIK),
		Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpFootIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpFootIK_h_Statics::ScriptStructInfo[] = {
		{ FMIJumpFootIK_Foot::StaticStruct, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewStructOps, TEXT("MIJumpFootIK_Foot"), &Z_Registration_Info_UScriptStruct_MIJumpFootIK_Foot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIJumpFootIK_Foot), 353726875U) },
		{ FAnimNode_JumpFootIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewStructOps, TEXT("AnimNode_JumpFootIK"), &Z_Registration_Info_UScriptStruct_AnimNode_JumpFootIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_JumpFootIK), 1304581439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpFootIK_h_1159660121(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpFootIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpFootIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
