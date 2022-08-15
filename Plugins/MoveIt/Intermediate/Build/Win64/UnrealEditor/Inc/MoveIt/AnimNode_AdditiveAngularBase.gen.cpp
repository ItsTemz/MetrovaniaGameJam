// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AdditiveAngularBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AdditiveAngularBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AdditiveAngularBase>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_AdditiveAngularBase cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase;
class UScriptStruct* FAnimNode_AdditiveAngularBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AdditiveAngularBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AdditiveAngularBase>()
{
	return FAnimNode_AdditiveAngularBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Computes angular velocity for usage with a blendspace, which then does the equivalent of \"Apply Additive\"\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "ToolTip", "Computes angular velocity for usage with a blendspace, which then does the equivalent of \"Apply Additive\"" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AdditiveAngularBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveAngularBase, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "Comment", "/** Scale angular velocity by this amount */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale angular velocity by this amount" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveAngularBase, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_AdditiveAngularBase",
		sizeof(FAnimNode_AdditiveAngularBase),
		alignof(FAnimNode_AdditiveAngularBase),
		Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveAngularBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveAngularBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AdditiveAngularBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewStructOps, TEXT("AnimNode_AdditiveAngularBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AdditiveAngularBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AdditiveAngularBase), 3969307674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveAngularBase_h_1874333172(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveAngularBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveAngularBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
