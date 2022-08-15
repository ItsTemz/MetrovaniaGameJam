// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_LandingCompression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LandingCompression() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LandingCompression_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LandingCompression();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingCompression();
// End Cross Module References
	void UAnimGraphNode_LandingCompression::StaticRegisterNativesUAnimGraphNode_LandingCompression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LandingCompression);
	UClass* Z_Construct_UClass_UAnimGraphNode_LandingCompression_NoRegister()
	{
		return UAnimGraphNode_LandingCompression::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_LandingCompression.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LandingCompression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LandingCompression.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_LandingCompression, Node), Z_Construct_UScriptStruct_FAnimNode_LandingCompression, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::NewProp_Node_MetaData)) }; // 4076745822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LandingCompression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::ClassParams = {
		&UAnimGraphNode_LandingCompression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LandingCompression()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LandingCompression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LandingCompression.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LandingCompression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LandingCompression.OuterSingleton;
	}
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_LandingCompression>()
	{
		return UAnimGraphNode_LandingCompression::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LandingCompression);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_LandingCompression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_LandingCompression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LandingCompression, UAnimGraphNode_LandingCompression::StaticClass, TEXT("UAnimGraphNode_LandingCompression"), &Z_Registration_Info_UClass_UAnimGraphNode_LandingCompression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LandingCompression), 2021036537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_LandingCompression_h_1484126084(TEXT("/Script/MoveItEditor"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_LandingCompression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_LandingCompression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
