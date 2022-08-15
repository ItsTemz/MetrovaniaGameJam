// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_OffHandWeaponGrip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OffHandWeaponGrip() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OffHandWeaponGrip>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_OffHandWeaponGrip cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip;
class UScriptStruct* FAnimNode_OffHandWeaponGrip::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_OffHandWeaponGrip"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_OffHandWeaponGrip>()
{
	return FAnimNode_OffHandWeaponGrip::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponHandBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponHandBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally places the off-hand on a weapon\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Procedurally places the off-hand on a weapon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OffHandWeaponGrip>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Bone holding weapon (not IK) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Bone holding weapon (not IK)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone = { "WeaponHandBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, WeaponHandBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Bone used for OffHand IK */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Bone used for OffHand IK" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone = { "OffHandIKBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, OffHandIKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "OffHand" },
		{ "Comment", "/** Weapon character is currently holding */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Weapon character is currently holding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, Weapon), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData)) }; // 1647259094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_OffHandWeaponGrip",
		sizeof(FAnimNode_OffHandWeaponGrip),
		alignof(FAnimNode_OffHandWeaponGrip),
		Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_OffHandWeaponGrip_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_OffHandWeaponGrip_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_OffHandWeaponGrip::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewStructOps, TEXT("AnimNode_OffHandWeaponGrip"), &Z_Registration_Info_UScriptStruct_AnimNode_OffHandWeaponGrip, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_OffHandWeaponGrip), 1790479797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_OffHandWeaponGrip_h_1513355206(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_OffHandWeaponGrip_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_OffHandWeaponGrip_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
