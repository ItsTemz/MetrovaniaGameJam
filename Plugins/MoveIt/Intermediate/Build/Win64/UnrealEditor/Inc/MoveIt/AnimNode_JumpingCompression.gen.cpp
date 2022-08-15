// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_JumpingCompression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_JumpingCompression() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpingCompression();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_JumpingCompression>() == std::is_polymorphic<FAnimNode_SpringBase>(), "USTRUCT FAnimNode_JumpingCompression cannot be polymorphic unless super FAnimNode_SpringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression;
class UScriptStruct* FAnimNode_JumpingCompression::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_JumpingCompression"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_JumpingCompression>()
{
	return FAnimNode_JumpingCompression::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityZThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityZThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityForMaxJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityForMaxJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxImpactVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxImpactVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Applies physics spring to extend the character using acceleration velocity when jumping\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Applies physics spring to extend the character using acceleration velocity when jumping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_JumpingCompression>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Jumping velocity applied to spring */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Jumping velocity applied to spring" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocityScale_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Scale the incoming impact velocity */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Scale the incoming impact velocity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocityScale = { "ImpactVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, ImpactVelocityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityZThreshold_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Should be lower than CharacterMovementComponent JumpZVelocity while being high enough to cut out compression from tiny bumps */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Should be lower than CharacterMovementComponent JumpZVelocity while being high enough to cut out compression from tiny bumps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityZThreshold = { "VelocityZThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, VelocityZThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityZThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityZThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MinJumpTime_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Shortest duration for jumping impulse (at 0 velocity) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Shortest duration for jumping impulse (at 0 velocity)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MinJumpTime = { "MinJumpTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, MinJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MinJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MinJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxJumpTime_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Maximum duration for landing impulse (at VelocityForMaxLandTime) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Maximum duration for landing impulse (at VelocityForMaxLandTime)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxJumpTime = { "MaxJumpTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, MaxJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityForMaxJumpTime_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Minimum Velocity required to reach MaxLandTime */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Minimum Velocity required to reach MaxLandTime" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityForMaxJumpTime = { "VelocityForMaxJumpTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, VelocityForMaxJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityForMaxJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityForMaxJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxImpactVelocity_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** \n\x09 * Max magnitude to actually apply from ImpactVelocity \n\x09 * If the character jitters when landing, this is too high or your spring isn't customized correctly\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "ToolTip", "Max magnitude to actually apply from ImpactVelocity\nIf the character jitters when landing, this is too high or your spring isn't customized correctly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxImpactVelocity = { "MaxImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, MaxImpactVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_JumpingCompression*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_JumpingCompression), &Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpingCompression.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpingCompression, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_ImpactVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityZThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MinJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_VelocityForMaxJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_MaxImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_bWorkOutsidePIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SpringBase,
		&NewStructOps,
		"AnimNode_JumpingCompression",
		sizeof(FAnimNode_JumpingCompression),
		alignof(FAnimNode_JumpingCompression),
		Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpingCompression()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpingCompression_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpingCompression_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_JumpingCompression::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_JumpingCompression_Statics::NewStructOps, TEXT("AnimNode_JumpingCompression"), &Z_Registration_Info_UScriptStruct_AnimNode_JumpingCompression, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_JumpingCompression), 3764200124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpingCompression_h_325179140(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpingCompression_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_JumpingCompression_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
