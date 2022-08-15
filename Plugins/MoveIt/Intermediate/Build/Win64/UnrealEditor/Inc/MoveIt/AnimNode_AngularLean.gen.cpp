// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AngularLean.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AngularLean() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularLean();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AngularLean>() == std::is_polymorphic<FAnimNode_AdditiveAngularBase>(), "USTRUCT FAnimNode_AngularLean cannot be polymorphic unless super FAnimNode_AdditiveAngularBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AngularLean;
class UScriptStruct* FAnimNode_AngularLean::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AngularLean, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AngularLean"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AngularLean>()
{
	return FAnimNode_AngularLean::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Apply angular velocity to an additive leaning blendspace\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularLean.h" },
		{ "ToolTip", "Apply angular velocity to an additive leaning blendspace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AngularLean>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase,
		&NewStructOps,
		"AnimNode_AngularLean",
		sizeof(FAnimNode_AngularLean),
		alignof(FAnimNode_AngularLean),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularLean()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AngularLean.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularLean_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularLean_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AngularLean::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::NewStructOps, TEXT("AnimNode_AngularLean"), &Z_Registration_Info_UScriptStruct_AnimNode_AngularLean, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AngularLean), 2084623116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularLean_h_2850139629(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularLean_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularLean_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
