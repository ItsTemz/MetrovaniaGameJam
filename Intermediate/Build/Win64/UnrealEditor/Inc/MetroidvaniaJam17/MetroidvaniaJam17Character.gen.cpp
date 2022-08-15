// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetroidvaniaJam17/MetroidvaniaJam17Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetroidvaniaJam17Character() {}
// Cross Module References
	METROIDVANIAJAM17_API UClass* Z_Construct_UClass_AMetroidvaniaJam17Character_NoRegister();
	METROIDVANIAJAM17_API UClass* Z_Construct_UClass_AMetroidvaniaJam17Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MetroidvaniaJam17();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AMetroidvaniaJam17Character::StaticRegisterNativesAMetroidvaniaJam17Character()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMetroidvaniaJam17Character);
	UClass* Z_Construct_UClass_AMetroidvaniaJam17Character_NoRegister()
	{
		return AMetroidvaniaJam17Character::StaticClass();
	}
	struct Z_Construct_UClass_AMetroidvaniaJam17Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MetroidvaniaJam17,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MetroidvaniaJam17Character.h" },
		{ "ModuleRelativePath", "MetroidvaniaJam17Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MetroidvaniaJam17Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMetroidvaniaJam17Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MetroidvaniaJam17Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMetroidvaniaJam17Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MetroidvaniaJam17Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMetroidvaniaJam17Character, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetroidvaniaJam17Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::ClassParams = {
		&AMetroidvaniaJam17Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetroidvaniaJam17Character()
	{
		if (!Z_Registration_Info_UClass_AMetroidvaniaJam17Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMetroidvaniaJam17Character.OuterSingleton, Z_Construct_UClass_AMetroidvaniaJam17Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMetroidvaniaJam17Character.OuterSingleton;
	}
	template<> METROIDVANIAJAM17_API UClass* StaticClass<AMetroidvaniaJam17Character>()
	{
		return AMetroidvaniaJam17Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetroidvaniaJam17Character);
	struct Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMetroidvaniaJam17Character, AMetroidvaniaJam17Character::StaticClass, TEXT("AMetroidvaniaJam17Character"), &Z_Registration_Info_UClass_AMetroidvaniaJam17Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMetroidvaniaJam17Character), 298913057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17Character_h_2556880793(TEXT("/Script/MetroidvaniaJam17"),
		Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetroidvaniaJam17_Source_MetroidvaniaJam17_MetroidvaniaJam17Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
