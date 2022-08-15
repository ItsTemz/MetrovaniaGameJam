// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_AdditiveBlendSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AdditiveBlendSpace() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
// End Cross Module References
	void UAnimGraphNode_AdditiveBlendSpace::StaticRegisterNativesUAnimGraphNode_AdditiveBlendSpace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AdditiveBlendSpace);
	UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_NoRegister()
	{
		return UAnimGraphNode_AdditiveBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SyncGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_AdditiveBlendSpace.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AdditiveBlendSpace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sync group settings for this player.  Sync groups keep related animations with different lengths synchronized.\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "Sync group settings for this player.  Sync groups keep related animations with different lengths synchronized." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_AdditiveBlendSpace, SyncGroup), Z_Construct_UScriptStruct_FAnimationGroupReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup_MetaData)) }; // 2133857765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::NewProp_SyncGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AdditiveBlendSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::ClassParams = {
		&UAnimGraphNode_AdditiveBlendSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AdditiveBlendSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AdditiveBlendSpace.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AdditiveBlendSpace.OuterSingleton;
	}
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_AdditiveBlendSpace>()
	{
		return UAnimGraphNode_AdditiveBlendSpace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AdditiveBlendSpace);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_AdditiveBlendSpace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_AdditiveBlendSpace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AdditiveBlendSpace, UAnimGraphNode_AdditiveBlendSpace::StaticClass, TEXT("UAnimGraphNode_AdditiveBlendSpace"), &Z_Registration_Info_UClass_UAnimGraphNode_AdditiveBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AdditiveBlendSpace), 899088407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_AdditiveBlendSpace_h_1699883846(TEXT("/Script/MoveItEditor"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_AdditiveBlendSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveItEditor_Public_AnimGraphNode_AdditiveBlendSpace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
