// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_MotionWeight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MotionWeight() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionWeight();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MotionWeight>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_MotionWeight cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight;
class UScriptStruct* FAnimNode_MotionWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionWeight, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_MotionWeight"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_MotionWeight>()
{
	return FAnimNode_MotionWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Apply weight shift from motion change - such as running fast then stopping suddenly, or starting suddenly\n *\x09This is just a shell that applies additive blendspace, the real magic happens elsewhere\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MotionWeight.h" },
		{ "ToolTip", "Apply weight shift from motion change - such as running fast then stopping suddenly, or starting suddenly\nThis is just a shell that applies additive blendspace, the real magic happens elsewhere" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MotionWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MotionWeight.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MotionWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_MotionWeight",
		sizeof(FAnimNode_MotionWeight),
		alignof(FAnimNode_MotionWeight),
		Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_MotionWeight_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_MotionWeight_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MotionWeight::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewStructOps, TEXT("AnimNode_MotionWeight"), &Z_Registration_Info_UScriptStruct_AnimNode_MotionWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MotionWeight), 1836608686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_MotionWeight_h_1373555993(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_MotionWeight_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_MotionWeight_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
