// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMITypes() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EPhysicsBlendState();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIStrafeOrientation;
	static UEnum* EMIStrafeOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIStrafeOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIStrafeOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIStrafeOrientation"));
		}
		return Z_Registration_Info_UEnum_EMIStrafeOrientation.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeOrientation>()
	{
		return EMIStrafeOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enumerators[] = {
		{ "EMIStrafeOrientation::SO_Neutral", (int64)EMIStrafeOrientation::SO_Neutral },
		{ "EMIStrafeOrientation::SO_Right", (int64)EMIStrafeOrientation::SO_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "SO_Neutral.DisplayName", "Neutral" },
		{ "SO_Neutral.Name", "EMIStrafeOrientation::SO_Neutral" },
		{ "SO_Right.DisplayName", "Right" },
		{ "SO_Right.Name", "EMIStrafeOrientation::SO_Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIStrafeOrientation",
		"EMIStrafeOrientation",
		Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation()
	{
		if (!Z_Registration_Info_UEnum_EMIStrafeOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIStrafeOrientation.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIStrafeOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIMovementSystem;
	static UEnum* EMIMovementSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIMovementSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIMovementSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIMovementSystem, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIMovementSystem"));
		}
		return Z_Registration_Info_UEnum_EMIMovementSystem.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIMovementSystem>()
	{
		return EMIMovementSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enumerators[] = {
		{ "EMIMovementSystem::MS_OrientToView", (int64)EMIMovementSystem::MS_OrientToView },
		{ "EMIMovementSystem::MS_OrientToMovement", (int64)EMIMovementSystem::MS_OrientToMovement },
		{ "EMIMovementSystem::MS_CycleOrientToMovement", (int64)EMIMovementSystem::MS_CycleOrientToMovement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "MS_CycleOrientToMovement.DisplayName", "Orient To Movement with Cycle" },
		{ "MS_CycleOrientToMovement.Name", "EMIMovementSystem::MS_CycleOrientToMovement" },
		{ "MS_OrientToMovement.DisplayName", "Orient To Movement" },
		{ "MS_OrientToMovement.Name", "EMIMovementSystem::MS_OrientToMovement" },
		{ "MS_OrientToView.DisplayName", "Orient To View" },
		{ "MS_OrientToView.Name", "EMIMovementSystem::MS_OrientToView" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIMovementSystem",
		"EMIMovementSystem",
		Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem()
	{
		if (!Z_Registration_Info_UEnum_EMIMovementSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIMovementSystem.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIMovementSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIMovementSystem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMICrouchInAirBehaviour;
	static UEnum* EMICrouchInAirBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMICrouchInAirBehaviour"));
		}
		return Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMICrouchInAirBehaviour>()
	{
		return EMICrouchInAirBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enumerators[] = {
		{ "EMICrouchInAirBehaviour::CAB_Allow", (int64)EMICrouchInAirBehaviour::CAB_Allow },
		{ "EMICrouchInAirBehaviour::CAB_Wait", (int64)EMICrouchInAirBehaviour::CAB_Wait },
		{ "EMICrouchInAirBehaviour::CAB_Deny", (int64)EMICrouchInAirBehaviour::CAB_Deny },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CAB_Allow.DisplayName", "Allow Crouching in Air" },
		{ "CAB_Allow.Name", "EMICrouchInAirBehaviour::CAB_Allow" },
		{ "CAB_Deny.DisplayName", "Deny Crouching in Air" },
		{ "CAB_Deny.Name", "EMICrouchInAirBehaviour::CAB_Deny" },
		{ "CAB_Wait.DisplayName", "Allow Crouching after Landed" },
		{ "CAB_Wait.Name", "EMICrouchInAirBehaviour::CAB_Wait" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMICrouchInAirBehaviour",
		"EMICrouchInAirBehaviour",
		Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour()
	{
		if (!Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.InnerSingleton, Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMICrouchInAirBehaviour.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrientToFloorSettings;
class UScriptStruct* FOrientToFloorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrientToFloorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrientToFloorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrientToFloorSettings, Z_Construct_UPackage__Script_MoveIt(), TEXT("OrientToFloorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OrientToFloorSettings.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FOrientToFloorSettings>()
{
	return FOrientToFloorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientRotateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientRotateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientResetRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientResetRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientAngleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientAngleMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientMinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientMinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientMaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientMaxAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrientToFloorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** How fast the mesh orients to the floor */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "How fast the mesh orients to the floor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate = { "OrientRotateRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientRotateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** How fast the mesh orients back to upright when leaving the floor */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "How fast the mesh orients back to upright when leaving the floor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate = { "OrientResetRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientResetRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** \n\x09 * Scale the orientation angle\n\x09 * Examples: 0.5 will remap 60 degrees as 30 degrees, halving the effect.\n\x09 * 1.0 will have the full effect. 0 will disable.\n\x09 * 2.0 will double the effect.\n\x09 * -1.0 will inverse the effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Scale the orientation angle\nExamples: 0.5 will remap 60 degrees as 30 degrees, halving the effect.\n1.0 will have the full effect. 0 will disable.\n2.0 will double the effect.\n-1.0 will inverse the effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier = { "OrientAngleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientAngleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Minimum angle before it will start orienting */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Minimum angle before it will start orienting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle = { "OrientMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientMinAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Maximum angle it will orient to */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Maximum angle it will orient to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle = { "OrientMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientMaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"OrientToFloorSettings",
		sizeof(FOrientToFloorSettings),
		alignof(FOrientToFloorSettings),
		Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OrientToFloorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrientToFloorSettings.InnerSingleton, Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OrientToFloorSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIWeapon;
class UScriptStruct* FMIWeapon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIWeapon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIWeapon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIWeapon, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIWeapon"));
	}
	return Z_Registration_Info_UScriptStruct_MIWeapon.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIWeapon>()
{
	return FMIWeapon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OffHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneHanded_MetaData[];
#endif
		static void NewProp_bIsOneHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponPose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIWeapon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, WeaponMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName = { "OffHandSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, OffHandSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_SetBit(void* Obj)
	{
		((FMIWeapon*)Obj)->bIsOneHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded = { "bIsOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIWeapon), &Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose = { "WeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, WeaponPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, AimOffset), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIWeapon",
		sizeof(FMIWeapon),
		alignof(FMIWeapon),
		Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon()
	{
		if (!Z_Registration_Info_UScriptStruct_MIWeapon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIWeapon.InnerSingleton, Z_Construct_UScriptStruct_FMIWeapon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIWeapon.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsBlendState;
	static UEnum* EPhysicsBlendState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsBlendState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsBlendState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EPhysicsBlendState, Z_Construct_UPackage__Script_MoveIt(), TEXT("EPhysicsBlendState"));
		}
		return Z_Registration_Info_UEnum_EPhysicsBlendState.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EPhysicsBlendState>()
	{
		return EPhysicsBlendState_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enumerators[] = {
		{ "EPhysicsBlendState::PBS_Inactive", (int64)EPhysicsBlendState::PBS_Inactive },
		{ "EPhysicsBlendState::PBS_In", (int64)EPhysicsBlendState::PBS_In },
		{ "EPhysicsBlendState::PBS_Out", (int64)EPhysicsBlendState::PBS_Out },
		{ "EPhysicsBlendState::PBS_MAX", (int64)EPhysicsBlendState::PBS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "PBS_In.DisplayName", "In" },
		{ "PBS_In.Name", "EPhysicsBlendState::PBS_In" },
		{ "PBS_Inactive.DisplayName", "Inactive" },
		{ "PBS_Inactive.Name", "EPhysicsBlendState::PBS_Inactive" },
		{ "PBS_MAX.Hidden", "" },
		{ "PBS_MAX.Name", "EPhysicsBlendState::PBS_MAX" },
		{ "PBS_Out.DisplayName", "Out" },
		{ "PBS_Out.Name", "EPhysicsBlendState::PBS_Out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EPhysicsBlendState",
		"EPhysicsBlendState",
		Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EPhysicsBlendState()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsBlendState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsBlendState.InnerSingleton, Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsBlendState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsBlend;
class UScriptStruct* FPhysicsBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsBlend, Z_Construct_UPackage__Script_MoveIt(), TEXT("PhysicsBlend"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsBlend.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FPhysicsBlend>()
{
	return FPhysicsBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxImpulseTaken_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxImpulseTaken;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsBlendState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PhysicsBlendState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * Bone to simulate physics on \n\x09 * Impulse application will fail if physics asset does not contain a body (capsule, box, sphere, etc)\n\x09 * @note : Set to None to disable\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Bone to simulate physics on\nImpulse application will fail if physics asset does not contain a body (capsule, box, sphere, etc)\n@note : Set to None to disable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Scale the impulse by this amount\n\x09 * @see MaxImpulseTaken will mitigate this value if it would otherwise exceed MaxImpulseTaken\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Scale the impulse by this amount\n@see MaxImpulseTaken will mitigate this value if it would otherwise exceed MaxImpulseTaken" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier = { "ImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, ImpulseMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Parameters for blending in */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Parameters for blending in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData)) }; // 1408466911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Parameters for blending out */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Parameters for blending out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData)) }; // 1408466911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum weight provided to physical animation (0 is disabled, 1 is full) */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Minimum weight provided to physical animation (0 is disabled, 1 is full)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight = { "MinBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MinBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum weight provided to physical animation (0 is disabled, 1 is full) */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Maximum weight provided to physical animation (0 is disabled, 1 is full)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight = { "MaxBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MaxBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum impulse that can be applied through a single occurrence */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Maximum impulse that can be applied through a single occurrence" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken = { "MaxImpulseTaken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MaxImpulseTaken), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState = { "PhysicsBlendState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, PhysicsBlendState), Z_Construct_UEnum_MoveIt_EPhysicsBlendState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData)) }; // 2710157042
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"PhysicsBlend",
		sizeof(FPhysicsBlend),
		alignof(FPhysicsBlend),
		Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsBlend.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsBlend.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIShotImpact;
class UScriptStruct* FMIShotImpact::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIShotImpact.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIShotImpact.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIShotImpact, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIShotImpact"));
	}
	return Z_Registration_Info_UScriptStruct_MIShotImpact.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIShotImpact>()
{
	return FMIShotImpact::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIShotImpact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIShotImpact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIShotImpact>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIShotImpact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIShotImpact",
		sizeof(FMIShotImpact),
		alignof(FMIShotImpact),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact()
	{
		if (!Z_Registration_Info_UScriptStruct_MIShotImpact.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIShotImpact.InnerSingleton, Z_Construct_UScriptStruct_FMIShotImpact_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIShotImpact.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::EnumInfo[] = {
		{ EMIStrafeOrientation_StaticEnum, TEXT("EMIStrafeOrientation"), &Z_Registration_Info_UEnum_EMIStrafeOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3422588749U) },
		{ EMIMovementSystem_StaticEnum, TEXT("EMIMovementSystem"), &Z_Registration_Info_UEnum_EMIMovementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 595102587U) },
		{ EMICrouchInAirBehaviour_StaticEnum, TEXT("EMICrouchInAirBehaviour"), &Z_Registration_Info_UEnum_EMICrouchInAirBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1771137444U) },
		{ EPhysicsBlendState_StaticEnum, TEXT("EPhysicsBlendState"), &Z_Registration_Info_UEnum_EPhysicsBlendState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2710157042U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::ScriptStructInfo[] = {
		{ FOrientToFloorSettings::StaticStruct, Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewStructOps, TEXT("OrientToFloorSettings"), &Z_Registration_Info_UScriptStruct_OrientToFloorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrientToFloorSettings), 911318808U) },
		{ FMIWeapon::StaticStruct, Z_Construct_UScriptStruct_FMIWeapon_Statics::NewStructOps, TEXT("MIWeapon"), &Z_Registration_Info_UScriptStruct_MIWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIWeapon), 1647259094U) },
		{ FPhysicsBlend::StaticStruct, Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewStructOps, TEXT("PhysicsBlend"), &Z_Registration_Info_UScriptStruct_PhysicsBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsBlend), 2635983691U) },
		{ FMIShotImpact::StaticStruct, Z_Construct_UScriptStruct_FMIShotImpact_Statics::NewStructOps, TEXT("MIShotImpact"), &Z_Registration_Info_UScriptStruct_MIShotImpact, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIShotImpact), 2524616891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_3451684277(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
