// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AngularBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AngularBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularBase();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AngularBase>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_AngularBase cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AngularBase;
class UScriptStruct* FAnimNode_AngularBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AngularBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AngularBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AngularBase>()
{
	return FAnimNode_AngularBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base for nodes applying angular velocity to calculations and performing the equivalent \n * of \"Local to Component\" and \"Component to Local\" (very expensive) using a LUT (very cheap) instead.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "ToolTip", "Base for nodes applying angular velocity to calculations and performing the equivalent\nof \"Local to Component\" and \"Component to Local\" (very expensive) using a LUT (very cheap) instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AngularBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AngularBase, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "Comment", "/** Scale angular velocity by this amount */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale angular velocity by this amount" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AngularBase, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_AngularBase",
		sizeof(FAnimNode_AngularBase),
		alignof(FAnimNode_AngularBase),
		Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AngularBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AngularBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewStructOps, TEXT("AnimNode_AngularBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AngularBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AngularBase), 422299407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularBase_h_685264252(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AngularBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
