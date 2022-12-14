// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_SpringBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SpringBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLimits();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLimits;
class UScriptStruct* FAnimLimits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLimits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLimits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLimits, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimLimits"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLimits.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimLimits>()
{
	return FAnimLimits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimLimits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLimits>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"AnimLimits",
		sizeof(FAnimLimits),
		alignof(FAnimLimits),
		Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLimits()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimLimits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLimits.InnerSingleton, Z_Construct_UScriptStruct_FAnimLimits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimLimits.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_SpringBase>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_SpringBase cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SpringBase;
class UScriptStruct* FAnimNode_SpringBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_SpringBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_SpringBase>()
{
	return FAnimNode_SpringBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpringBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorResetThresh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorResetThresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateInComponentSpace_MetaData[];
#endif
		static void NewProp_bSimulateInComponentSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateInComponentSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMinTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMinTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMaxTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMaxTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTranslationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinTranslationLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTranslationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxTranslationLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitDisplacement_MetaData[];
#endif
		static void NewProp_bLimitDisplacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateX_MetaData[];
#endif
		static void NewProp_bTranslateX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateY_MetaData[];
#endif
		static void NewProp_bTranslateY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTranslateZ_MetaData[];
#endif
		static void NewProp_bTranslateZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslateZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateX_MetaData[];
#endif
		static void NewProp_bRotateX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateY_MetaData[];
#endif
		static void NewProp_bRotateY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateZ_MetaData[];
#endif
		static void NewProp_bRotateZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n *  With added ability to limit individual translation axis\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone.\nWith added ability to limit individual translation axis" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SpringBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** External velocity applied to spring (component space simulation only) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "External velocity applied to spring (component space simulation only)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringBone_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringBone = { "SpringBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, SpringBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose. */" },
		{ "EditCondition", "bLimitDisplacement" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxDisplacement = { "MaxDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, MaxDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, SpringStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Stiffness of spring */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Stiffness of spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Damping of spring */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Damping of spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_ErrorResetThresh_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** If spring stretches more than this, reset it. Useful for catching teleports etc */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If spring stretches more than this, reset it. Useful for catching teleports etc" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_ErrorResetThresh = { "ErrorResetThresh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, ErrorResetThresh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_ErrorResetThresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_ErrorResetThresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SimulationFrequency_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SimulationFrequency = { "SimulationFrequency", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, SimulationFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SimulationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SimulationFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bSimulateInComponentSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace = { "bSimulateInComponentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMinTranslation_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMinTranslation = { "LimitMinTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, LimitMinTranslation), Z_Construct_UScriptStruct_FAnimLimits, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMinTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMinTranslation_MetaData)) }; // 4174723735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMaxTranslation_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMaxTranslation = { "LimitMaxTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, LimitMaxTranslation), Z_Construct_UScriptStruct_FAnimLimits, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMaxTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMaxTranslation_MetaData)) }; // 4174723735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MinTranslationLimits_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MinTranslationLimits = { "MinTranslationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, MinTranslationLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MinTranslationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MinTranslationLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxTranslationLimits_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxTranslationLimits = { "MaxTranslationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SpringBase, MaxTranslationLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxTranslationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxTranslationLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bLimitDisplacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement = { "bLimitDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in X */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for translation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bTranslateX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX = { "bTranslateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Y */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bTranslateY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY = { "bTranslateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for translation in Z */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bTranslateZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ = { "bTranslateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in X */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bRotateX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX = { "bRotateX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Y */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bRotateY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY = { "bRotateY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "Comment", "/** If true take the spring calculation for rotation in Z */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_SpringBase.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBase*)Obj)->bRotateZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ = { "bRotateZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_SpringBase), &Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SpringDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_ErrorResetThresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_SimulationFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bSimulateInComponentSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMinTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_LimitMaxTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MinTranslationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_MaxTranslationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bLimitDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bTranslateZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewProp_bRotateZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_SpringBase",
		sizeof(FAnimNode_SpringBase),
		alignof(FAnimNode_SpringBase),
		Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SpringBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_SpringBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_SpringBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimLimits::StaticStruct, Z_Construct_UScriptStruct_FAnimLimits_Statics::NewStructOps, TEXT("AnimLimits"), &Z_Registration_Info_UScriptStruct_AnimLimits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLimits), 4174723735U) },
		{ FAnimNode_SpringBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SpringBase_Statics::NewStructOps, TEXT("AnimNode_SpringBase"), &Z_Registration_Info_UScriptStruct_AnimNode_SpringBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SpringBase), 924472077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_SpringBase_h_2624748979(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_SpringBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_SpringBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
