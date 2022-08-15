// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LookTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookTarget() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMILookTargetInput();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMILookTargetBone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookTarget();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMILookTargetInput;
	static UEnum* EMILookTargetInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMILookTargetInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMILookTargetInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMILookTargetInput, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMILookTargetInput"));
		}
		return Z_Registration_Info_UEnum_EMILookTargetInput.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMILookTargetInput>()
	{
		return EMILookTargetInput_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enumerators[] = {
		{ "EMILookTargetInput::LTI_Actor", (int64)EMILookTargetInput::LTI_Actor },
		{ "EMILookTargetInput::LTI_Location", (int64)EMILookTargetInput::LTI_Location },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LTI_Actor.DisplayName", "Actor" },
		{ "LTI_Actor.Name", "EMILookTargetInput::LTI_Actor" },
		{ "LTI_Location.DisplayName", "Location" },
		{ "LTI_Location.Name", "EMILookTargetInput::LTI_Location" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMILookTargetInput",
		"EMILookTargetInput",
		Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMILookTargetInput()
	{
		if (!Z_Registration_Info_UEnum_EMILookTargetInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMILookTargetInput.InnerSingleton, Z_Construct_UEnum_MoveIt_EMILookTargetInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMILookTargetInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MILookTargetBone;
class UScriptStruct* FMILookTargetBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MILookTargetBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MILookTargetBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMILookTargetBone, Z_Construct_UPackage__Script_MoveIt(), TEXT("MILookTargetBone"));
	}
	return Z_Registration_Info_UScriptStruct_MILookTargetBone.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMILookTargetBone>()
{
	return FMILookTargetBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMILookTargetBone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMILookTargetBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MILookTargetBone",
		sizeof(FMILookTargetBone),
		alignof(FMILookTargetBone),
		Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMILookTargetBone()
	{
		if (!Z_Registration_Info_UScriptStruct_MILookTargetBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MILookTargetBone.InnerSingleton, Z_Construct_UScriptStruct_FMILookTargetBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MILookTargetBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_LookTarget>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_LookTarget cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LookTarget;
class UScriptStruct* FAnimNode_LookTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookTarget, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LookTarget"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LookTarget>()
{
	return FAnimNode_LookTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArchLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchZOffsetLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArchZOffsetLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeLevelSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EyeLevelSocket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally looks at a given target or location\n *\x09""Applies a spring for organic, realistic, natural motion\n *\x09Runs more or less on black magic\n *\x09Thanks to p@t from Unreal Slackers for major help with the math (he came up with almost all of it)\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "Procedurally looks at a given target or location\nApplies a spring for organic, realistic, natural motion\nRuns more or less on black magic\nThanks to p@t from Unreal Slackers for major help with the math (he came up with almost all of it)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookTarget>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/**\n\x09 * What the character should look at\n\x09 * @param Actor Look at an actor\n\x09 * @param Location Look at a position in world space\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "What the character should look at\n@param Actor Look at an actor\n@param Location Look at a position in world space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType = { "TargetInputType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, TargetInputType), Z_Construct_UEnum_MoveIt_EMILookTargetInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData)) }; // 2499402859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Location in world space to look at */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Location in world space to look at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Actor to look at */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Actor to look at" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** How much strength applied when moving against the resistance of the spring (aka displacement, mass) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much strength applied when moving against the resistance of the spring (aka displacement, mass)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** How stiff the spring is (aka tightness) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How stiff the spring is (aka tightness)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/**\n\x09 * Traversing between linear result and spring result\n\x09 * 1 is no damping\n\x09 * 0 is completely damped\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Traversing between linear result and spring result\n1 is no damping\n0 is completely damped" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/**\n\x09 * The frequency at which the solver plays\n\x09 * Lower frequencies are prone to issues but are more performant\n\x09 * Changing the frequency will greatly impact the outcome\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "The frequency at which the solver plays\nLower frequencies are prone to issues but are more performant\nChanging the frequency will greatly impact the outcome" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Twisting motion along the aim axis (X) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Twisting motion along the aim axis (X)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, TwistLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Side-to-side motion along the roll axis (Z) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Side-to-side motion along the roll axis (Z)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit = { "RollLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, RollLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Back and forward motion along the forward axis (Y) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Back and forward motion along the forward axis (Y)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit = { "ArchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, ArchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Z Height Limit for Arching */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Z Height Limit for Arching" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit = { "ArchZOffsetLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, ArchZOffsetLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** The socket that represents where the character's eyes are */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "The socket that represents where the character's eyes are" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket = { "EyeLevelSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, EyeLevelSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMILookTargetBone, METADATA_PARAMS(nullptr, 0) }; // 2805948680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Bones that look at the target. Result is averaged between all added bones and can be re-biased using the Weight */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "Bones that look at the target. Result is averaged between all added bones and can be re-biased using the Weight" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData)) }; // 2805948680
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_LookTarget*)Obj)->bWorkOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LookTarget), &Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_bWorkOutsidePIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_LookTarget",
		sizeof(FAnimNode_LookTarget),
		alignof(FAnimNode_LookTarget),
		Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LookTarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::EnumInfo[] = {
		{ EMILookTargetInput_StaticEnum, TEXT("EMILookTargetInput"), &Z_Registration_Info_UEnum_EMILookTargetInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2499402859U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::ScriptStructInfo[] = {
		{ FMILookTargetBone::StaticStruct, Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewStructOps, TEXT("MILookTargetBone"), &Z_Registration_Info_UScriptStruct_MILookTargetBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMILookTargetBone), 2805948680U) },
		{ FAnimNode_LookTarget::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewStructOps, TEXT("AnimNode_LookTarget"), &Z_Registration_Info_UScriptStruct_AnimNode_LookTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LookTarget), 3108620331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_3742037214(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
