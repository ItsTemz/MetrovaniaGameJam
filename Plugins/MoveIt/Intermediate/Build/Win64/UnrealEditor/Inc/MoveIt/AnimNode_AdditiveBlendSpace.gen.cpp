// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AdditiveBlendSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AdditiveBlendSpace() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIAdditiveType();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIAdditiveType;
	static UEnum* EMIAdditiveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIAdditiveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIAdditiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIAdditiveType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIAdditiveType"));
		}
		return Z_Registration_Info_UEnum_EMIAdditiveType.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIAdditiveType>()
	{
		return EMIAdditiveType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enumerators[] = {
		{ "EMIAdditiveType::MIAS_Additive", (int64)EMIAdditiveType::MIAS_Additive },
		{ "EMIAdditiveType::MIAS_MeshSpaceAdditive", (int64)EMIAdditiveType::MIAS_MeshSpaceAdditive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MIAS_Additive.DisplayName", "Additive" },
		{ "MIAS_Additive.Name", "EMIAdditiveType::MIAS_Additive" },
		{ "MIAS_MeshSpaceAdditive.DisplayName", "Mesh Space Additive" },
		{ "MIAS_MeshSpaceAdditive.Name", "EMIAdditiveType::MIAS_MeshSpaceAdditive" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIAdditiveType",
		"EMIAdditiveType",
		Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIAdditiveType()
	{
		if (!Z_Registration_Info_UEnum_EMIAdditiveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIAdditiveType.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIAdditiveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIAdditiveType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_AdditiveBlendSpace>() == std::is_polymorphic<FAnimNode_MIBlendSpacePlayer>(), "USTRUCT FAnimNode_AdditiveBlendSpace cannot be polymorphic unless super FAnimNode_MIBlendSpacePlayer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace;
class UScriptStruct* FAnimNode_AdditiveBlendSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AdditiveBlendSpace"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AdditiveBlendSpace>()
{
	return FAnimNode_AdditiveBlendSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AdditiveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Equivalent of \"Apply Additive\" with a blendspace and has additional blending options\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "Equivalent of \"Apply Additive\" with a blendspace and has additional blending options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AdditiveBlendSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType = { "AdditiveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AdditiveType), Z_Construct_UEnum_MoveIt_EMIAdditiveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData)) }; // 3864676758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 215402335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/* \n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "bAlphaBoolEnabled" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 1882139808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 3749118956
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaInputType" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_AdditiveBlendSpace*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_AdditiveBlendSpace), &Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer,
		&NewStructOps,
		"AnimNode_AdditiveBlendSpace",
		sizeof(FAnimNode_AdditiveBlendSpace),
		alignof(FAnimNode_AdditiveBlendSpace),
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::EnumInfo[] = {
		{ EMIAdditiveType_StaticEnum, TEXT("EMIAdditiveType"), &Z_Registration_Info_UEnum_EMIAdditiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3864676758U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AdditiveBlendSpace::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewStructOps, TEXT("AnimNode_AdditiveBlendSpace"), &Z_Registration_Info_UScriptStruct_AnimNode_AdditiveBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AdditiveBlendSpace), 686422442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_2120719438(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
