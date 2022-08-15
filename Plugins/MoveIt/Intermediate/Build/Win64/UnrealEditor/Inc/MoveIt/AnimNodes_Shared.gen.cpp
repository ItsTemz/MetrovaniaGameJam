// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNodes_Shared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodes_Shared() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone;
class UScriptStruct* FMICopyIKBones_Bone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICopyIKBones_Bone, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICopyIKBones_Bone"));
	}
	return Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICopyIKBones_Bone>()
{
	return FMICopyIKBones_Bone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IK_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IK;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICopyIKBones_Bone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "Comment", "/** Source bone to copy from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
		{ "ToolTip", "Source bone to copy from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICopyIKBones_Bone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "Comment", "/** Target bone to copy over */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
		{ "ToolTip", "Target bone to copy over" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK = { "IK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICopyIKBones_Bone, IK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData)) }; // 831728502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MICopyIKBones_Bone",
		sizeof(FMICopyIKBones_Bone),
		alignof(FMICopyIKBones_Bone),
		Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone()
	{
		if (!Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.InnerSingleton, Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNodes_Shared_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNodes_Shared_h_Statics::ScriptStructInfo[] = {
		{ FMICopyIKBones_Bone::StaticStruct, Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewStructOps, TEXT("MICopyIKBones_Bone"), &Z_Registration_Info_UScriptStruct_MICopyIKBones_Bone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMICopyIKBones_Bone), 528709294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNodes_Shared_h_1413813663(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNodes_Shared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNodes_Shared_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
