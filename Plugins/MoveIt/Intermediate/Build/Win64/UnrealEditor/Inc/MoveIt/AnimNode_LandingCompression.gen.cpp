// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandingCompression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandingCompression() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingCompression();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LandingCompression>() == std::is_polymorphic<FAnimNode_SpringBase>(), "USTRUCT FAnimNode_LandingCompression cannot be polymorphic unless super FAnimNode_SpringBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression;
class UScriptStruct* FAnimNode_LandingCompression::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandingCompression, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandingCompression"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandingCompression>()
{
	return FAnimNode_LandingCompression::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLandTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLandTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLandTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLandTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityForMaxLandTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityForMaxLandTime;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Applies physics spring to compress the character using impact velocity when landing\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Applies physics spring to compress the character using impact velocity when landing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandingCompression>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Landing velocity applied to spring */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Landing velocity applied to spring" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Scale the incoming impact velocity */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Scale the incoming impact velocity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale = { "ImpactVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, ImpactVelocityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData[] = {
		{ "Category", "Landing" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold = { "VelocityZThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, VelocityZThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Shortest duration for landing impact (at 0 velocity) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Shortest duration for landing impact (at 0 velocity)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime = { "MinLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MinLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Maximum duration for landing impact (at VelocityForMaxLandTime) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Maximum duration for landing impact (at VelocityForMaxLandTime)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime = { "MaxLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MaxLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Minimum Velocity required to reach MaxLandTime */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Minimum Velocity required to reach MaxLandTime" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime = { "VelocityForMaxLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, VelocityForMaxLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** \n\x09 * Max magnitude to actually apply from ImpactVelocity \n\x09 * If the character jitters when landing, this is too high or your spring isn't customized correctly\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Max magnitude to actually apply from ImpactVelocity\nIf the character jitters when landing, this is too high or your spring isn't customized correctly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity = { "MaxImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MaxImpactVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_LandingCompression*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LandingCompression), &Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_bWorkOutsidePIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SpringBase,
		&NewStructOps,
		"AnimNode_LandingCompression",
		sizeof(FAnimNode_LandingCompression),
		alignof(FAnimNode_LandingCompression),
		Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingCompression()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingCompression_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingCompression_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LandingCompression::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewStructOps, TEXT("AnimNode_LandingCompression"), &Z_Registration_Info_UScriptStruct_AnimNode_LandingCompression, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LandingCompression), 4076745822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingCompression_h_3591611774(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingCompression_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LandingCompression_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
