// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AirLean.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AirLean() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AirLean();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AirLean>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_AirLean cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AirLean;
class UScriptStruct* FAnimNode_AirLean::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AirLean.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AirLean.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AirLean, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AirLean"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AirLean.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AirLean>()
{
	return FAnimNode_AirLean::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Additive leaning while in air to compensate for velocity\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AirLean.h" },
		{ "ToolTip", "Additive leaning while in air to compensate for velocity" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AirLean>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AirLean.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AirLean, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_AirLean",
		sizeof(FAnimNode_AirLean),
		alignof(FAnimNode_AirLean),
		Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AirLean()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AirLean.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AirLean.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AirLean.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AirLean_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AirLean_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AirLean::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewStructOps, TEXT("AnimNode_AirLean"), &Z_Registration_Info_UScriptStruct_AnimNode_AirLean, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AirLean), 1449645162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AirLean_h_1012887398(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AirLean_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AirLean_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
