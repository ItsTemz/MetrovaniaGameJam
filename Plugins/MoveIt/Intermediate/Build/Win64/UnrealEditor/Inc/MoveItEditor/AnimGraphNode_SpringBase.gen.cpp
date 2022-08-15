// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_SpringBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SpringBase() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SpringBase_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SpringBase();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase();
// End Cross Module References
	void UAnimGraphNode_SpringBase::StaticRegisterNativesUAnimGraphNode_SpringBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SpringBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_SpringBase_NoRegister()
	{
		return UAnimGraphNode_SpringBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LocalSkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_SpringBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SpringBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SpringBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_SpringBase, Node), Z_Construct_UScriptStruct_FAnimNode_SpringBase, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::NewProp_Node_MetaData)) }; // 924472077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SpringBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::ClassParams = {
		&UAnimGraphNode_SpringBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SpringBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SpringBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SpringBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SpringBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SpringBase.OuterSingleton;
	}
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_SpringBase>()
	{
		return UAnimGraphNode_SpringBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SpringBase);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_SpringBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_SpringBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SpringBase, UAnimGraphNode_SpringBase::StaticClass, TEXT("UAnimGraphNode_SpringBase"), &Z_Registration_Info_UClass_UAnimGraphNode_SpringBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SpringBase), 2306824936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_SpringBase_h_309745582(TEXT("/Script/MoveItEditor"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_SpringBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_SpringBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
