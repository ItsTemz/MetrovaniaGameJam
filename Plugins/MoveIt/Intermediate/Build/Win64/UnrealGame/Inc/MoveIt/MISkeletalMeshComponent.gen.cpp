// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MISkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMISkeletalMeshComponent() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_UMISkeletalMeshComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMISkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister();
// End Cross Module References
	void UMISkeletalMeshComponent::StaticRegisterNativesUMISkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMISkeletalMeshComponent);
	UClass* Z_Construct_UClass_UMISkeletalMeshComponent_NoRegister()
	{
		return UMISkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMISkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerCharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerCharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MIAnimScriptInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIAnimScriptInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTurnInPlaceOutsidePIE_MetaData[];
#endif
		static void NewProp_bEnableTurnInPlaceOutsidePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTurnInPlaceOutsidePIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMISkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Skeletal mesh that applies MoveIt's TurnInPlace\n */" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "MISkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Skeletal mesh that applies MoveIt's TurnInPlace" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData[] = {
		{ "Comment", "/** Valid on server only for updating replicated value */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "Valid on server only for updating replicated value" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner = { "ServerCharacterOwner", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISkeletalMeshComponent, ServerCharacterOwner), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData[] = {
		{ "Comment", "/** The active animation graph program instance. */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "The active animation graph program instance." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance = { "MIAnimScriptInstance", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISkeletalMeshComponent, MIAnimScriptInstance), Z_Construct_UClass_UMIAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_SetBit(void* Obj)
	{
		((UMISkeletalMeshComponent*)Obj)->bEnableTurnInPlaceOutsidePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE = { "bEnableTurnInPlaceOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISkeletalMeshComponent), &Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMISkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMISkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::ClassParams = {
		&UMISkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMISkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UMISkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMISkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UMISkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMISkeletalMeshComponent.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMISkeletalMeshComponent>()
	{
		return UMISkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMISkeletalMeshComponent);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMISkeletalMeshComponent, UMISkeletalMeshComponent::StaticClass, TEXT("UMISkeletalMeshComponent"), &Z_Registration_Info_UClass_UMISkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMISkeletalMeshComponent), 53115634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISkeletalMeshComponent_h_1783767311(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
