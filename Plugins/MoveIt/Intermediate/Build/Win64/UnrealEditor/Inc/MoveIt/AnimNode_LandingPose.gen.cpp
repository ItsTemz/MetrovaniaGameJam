// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandingPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandingPose() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingPose();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LandingPose>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_LandingPose cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LandingPose;
class UScriptStruct* FAnimNode_LandingPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandingPose, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandingPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandingPose>()
{
	return FAnimNode_LandingPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateralInterpUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralInterpUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateralInterpDownRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LateralInterpDownRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Predicts where the character will land and adapts pose based on distance to ground and movement direction\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Predicts where the character will land and adapts pose based on distance to ground and movement direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandingPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Predicted landing result calculated by MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Predicted landing result calculated by MIAnimInstance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding = { "PredictedLanding", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, PredictedLanding), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData)) }; // 1819844526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Z Velocity must be less than this amount while in the air to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Z Velocity must be less than this amount while in the air to begin landing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity = { "JumpStartZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, JumpStartZVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Must be this close to ground to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Must be this close to ground to begin landing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround = { "StartMinDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, StartMinDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the lateral velocity interpolates going up - 0 for no interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "How fast the lateral velocity interpolates going up - 0 for no interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate = { "LateralInterpUpRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, LateralInterpUpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the lateral velocity interpolates going down (to neutral pose) - 0 for no interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "How fast the lateral velocity interpolates going down (to neutral pose) - 0 for no interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate = { "LateralInterpDownRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, LateralInterpDownRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_LandingPose*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LandingPose), &Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_LandingPose",
		sizeof(FAnimNode_LandingPose),
		alignof(FAnimNode_LandingPose),
		Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LandingPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LandingPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewStructOps, TEXT("AnimNode_LandingPose"), &Z_Registration_Info_UScriptStruct_AnimNode_LandingPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LandingPose), 2929267481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingPose_h_3366714499(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
