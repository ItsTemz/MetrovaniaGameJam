// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Strafe.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Strafe() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Strafe();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Strafe>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_Strafe cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Strafe;
class UScriptStruct* FAnimNode_Strafe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Strafe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Strafe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Strafe, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Strafe"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Strafe.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Strafe>()
{
	return FAnimNode_Strafe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootIKRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootIKRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeadBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOrientScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootOrientScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOrientScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PelvisOrientScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyOrientScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyOrientScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadOrientScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadOrientScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally generates strafing animations by reorienting the feet and body\n *\x09""Applies intelligent logic from animation instance to change orientations\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Procedurally generates strafing animations by reorienting the feet and body\nApplies intelligent logic from animation instance to change orientations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Strafe>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData[] = {
		{ "Category", "Strafe" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone = { "FootIKRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, FootIKRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Strafe" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Optionally add spine bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Optionally add spine bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData)) }; // 831728502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_Inner = { "HeadBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Optionally add head/neck bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Optionally add head/neck bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones = { "HeadBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, HeadBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Strafe direction, computed in MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Strafe direction, computed in MIAnimInstance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Strafe orientation, computed in MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Strafe orientation, computed in MIAnimInstance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, Orientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData)) }; // 3422588749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for foot orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for foot orientation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale = { "FootOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, FootOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for pelvis orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for pelvis orientation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale = { "PelvisOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, PelvisOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for body orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for body orientation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale = { "BodyOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, BodyOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for head orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for head orientation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale = { "HeadOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, HeadOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_Strafe",
		sizeof(FAnimNode_Strafe),
		alignof(FAnimNode_Strafe),
		Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Strafe()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Strafe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Strafe.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Strafe.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Strafe_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Strafe_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_Strafe::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewStructOps, TEXT("AnimNode_Strafe"), &Z_Registration_Info_UScriptStruct_AnimNode_Strafe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Strafe), 2231729979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Strafe_h_2642953684(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Strafe_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_Strafe_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
