// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimInstance() {}
// Cross Module References
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMISurfaceStateType();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMICallbackSetting();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMISurfaceImpact();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIOnSurfaceImpact_Parms
		{
			FName BoneName;
			UPhysicalMaterial* PhysMat;
			FVector Location;
			FRotator Rotation;
			float BoneSpeed;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnSurfaceImpact_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnSurfaceImpact_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnSurfaceImpact_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnSurfaceImpact_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_BoneSpeed = { "BoneSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnSurfaceImpact_Parms, BoneSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::NewProp_BoneSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIOnSurfaceImpact__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::_Script_MoveIt_eventMIOnSurfaceImpact_Parms), Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIStrafeDirectionBasis;
	static UEnum* EMIStrafeDirectionBasis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIStrafeDirectionBasis"));
		}
		return Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeDirectionBasis>()
	{
		return EMIStrafeDirectionBasis_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enumerators[] = {
		{ "EMIStrafeDirectionBasis::MISB_Acceleration", (int64)EMIStrafeDirectionBasis::MISB_Acceleration },
		{ "EMIStrafeDirectionBasis::MISB_Velocity", (int64)EMIStrafeDirectionBasis::MISB_Velocity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MISB_Acceleration.DisplayName", "Acceleration" },
		{ "MISB_Acceleration.Name", "EMIStrafeDirectionBasis::MISB_Acceleration" },
		{ "MISB_Acceleration.ToolTip", "Strafe direction based on acceleration (input direction)" },
		{ "MISB_Velocity.DisplayName", "Velocity" },
		{ "MISB_Velocity.Name", "EMIStrafeDirectionBasis::MISB_Velocity" },
		{ "MISB_Velocity.ToolTip", "Strafe direction based on velocity (movement direction)" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIStrafeDirectionBasis",
		"EMIStrafeDirectionBasis",
		Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis()
	{
		if (!Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIStrafeDirectionBasis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMISurfaceStateType;
	static UEnum* EMISurfaceStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMISurfaceStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMISurfaceStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMISurfaceStateType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMISurfaceStateType"));
		}
		return Z_Registration_Info_UEnum_EMISurfaceStateType.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMISurfaceStateType>()
	{
		return EMISurfaceStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enumerators[] = {
		{ "EMISurfaceStateType::MIST_None", (int64)EMISurfaceStateType::MIST_None },
		{ "EMISurfaceStateType::MIST_Default", (int64)EMISurfaceStateType::MIST_Default },
		{ "EMISurfaceStateType::MIST_Ragdoll", (int64)EMISurfaceStateType::MIST_Ragdoll },
		{ "EMISurfaceStateType::MIST_FloorSliding", (int64)EMISurfaceStateType::MIST_FloorSliding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Used to mask surface impacts (footsteps) based on movement state\n */" },
		{ "MIST_Default.DisplayName", "Default" },
		{ "MIST_Default.Name", "EMISurfaceStateType::MIST_Default" },
		{ "MIST_FloorSliding.DisplayName", "Floor Sliding" },
		{ "MIST_FloorSliding.Name", "EMISurfaceStateType::MIST_FloorSliding" },
		{ "MIST_None.Hidden", "" },
		{ "MIST_None.Name", "EMISurfaceStateType::MIST_None" },
		{ "MIST_Ragdoll.DisplayName", "Ragdoll" },
		{ "MIST_Ragdoll.Name", "EMISurfaceStateType::MIST_Ragdoll" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used to mask surface impacts (footsteps) based on movement state" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMISurfaceStateType",
		"EMISurfaceStateType",
		Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMISurfaceStateType()
	{
		if (!Z_Registration_Info_UEnum_EMISurfaceStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMISurfaceStateType.InnerSingleton, Z_Construct_UEnum_MoveIt_EMISurfaceStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMISurfaceStateType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMICallbackSetting;
	static UEnum* EMICallbackSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMICallbackSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMICallbackSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMICallbackSetting, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMICallbackSetting"));
		}
		return Z_Registration_Info_UEnum_EMICallbackSetting.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMICallbackSetting>()
	{
		return EMICallbackSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enumerators[] = {
		{ "EMICallbackSetting::MICBS_None", (int64)EMICallbackSetting::MICBS_None },
		{ "EMICallbackSetting::MICBS_Local", (int64)EMICallbackSetting::MICBS_Local },
		{ "EMICallbackSetting::MICBS_Simulated", (int64)EMICallbackSetting::MICBS_Simulated },
		{ "EMICallbackSetting::MICBS_ListenServer", (int64)EMICallbackSetting::MICBS_ListenServer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Used to determine who receives a callback for impacts (footsteps) based on net role\n */" },
		{ "MICBS_ListenServer.DisplayName", "Authority" },
		{ "MICBS_ListenServer.Name", "EMICallbackSetting::MICBS_ListenServer" },
		{ "MICBS_ListenServer.ToolTip", "Authority receives callback if playing as listen server" },
		{ "MICBS_Local.DisplayName", "Local" },
		{ "MICBS_Local.Name", "EMICallbackSetting::MICBS_Local" },
		{ "MICBS_Local.ToolTip", "Locally controlled characters receive callback" },
		{ "MICBS_None.Hidden", "" },
		{ "MICBS_None.Name", "EMICallbackSetting::MICBS_None" },
		{ "MICBS_Simulated.DisplayName", "Simulated" },
		{ "MICBS_Simulated.Name", "EMICallbackSetting::MICBS_Simulated" },
		{ "MICBS_Simulated.ToolTip", "Simulated (other players) receive callback" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used to determine who receives a callback for impacts (footsteps) based on net role" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMICallbackSetting",
		"EMICallbackSetting",
		Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMICallbackSetting()
	{
		if (!Z_Registration_Info_UEnum_EMICallbackSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMICallbackSetting.InnerSingleton, Z_Construct_UEnum_MoveIt_EMICallbackSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMICallbackSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MISurfaceImpact;
class UScriptStruct* FMISurfaceImpact::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MISurfaceImpact.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MISurfaceImpact.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMISurfaceImpact, Z_Construct_UPackage__Script_MoveIt(), TEXT("MISurfaceImpact"));
	}
	return Z_Registration_Info_UScriptStruct_MISurfaceImpact.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMISurfaceImpact>()
{
	return FMISurfaceImpact::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMISurfaceImpact_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceStartHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistFromGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistFromGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTriggerInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTriggerInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedStates_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGlobalImpactCallback_MetaData[];
#endif
		static void NewProp_bUseGlobalImpactCallback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGlobalImpactCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callbacks_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Callbacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaySound_MetaData[];
#endif
		static void NewProp_bPlaySound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaySound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnParticle_MetaData[];
#endif
		static void NewProp_bSpawnParticle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectsToTrace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToTrace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsToTrace;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawTrace_MetaData[];
#endif
		static void NewProp_bDebugDrawTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawTrace;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMISurfaceImpact>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** The bone that is used to compute velocity */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "The bone that is used to compute velocity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData)) }; // 831728502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** The socket that is used to trace to the ground and to spawn effects from */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "The socket that is used to trace to the ground and to spawn effects from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How fast the bone must be moving to trigger a Impact */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the bone must be moving to trigger a Impact" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, MinVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How far above the socket to start the trace from */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How far above the socket to start the trace from" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight = { "TraceStartHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, TraceStartHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How far above the ground the bone can be while still triggering an impact */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How far above the ground the bone can be while still triggering an impact" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround = { "TraceDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, TraceDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How often an impact can be triggered by this bone */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How often an impact can be triggered by this bone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval = { "MinTriggerInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, MinTriggerInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_AllowedStates_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EMISurfaceStateType" },
		{ "Category", "Impact" },
		{ "Comment", "/** Will only trigger when one of these states are active */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Will only trigger when one of these states are active" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_AllowedStates = { "AllowedStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, AllowedStates), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_AllowedStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_AllowedStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/**\n\x09 * If true will use GlobalImpactCallback instead of Callbacks to determine callback options\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true will use GlobalImpactCallback instead of Callbacks to determine callback options" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bUseGlobalImpactCallback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback = { "bUseGlobalImpactCallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Callbacks_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EMICallbackSetting" },
		{ "Category", "Impact" },
		{ "Comment", "/** \n\x09 * Used to determine who receives a callback for impacts (footsteps) based on net role\n\x09 * Will never be called on dedicated server\n\x09 * Will be LOD'd out if the impact is\n\x09 */" },
		{ "EditCondition", "!bUseGlobalImpactCallback" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used to determine who receives a callback for impacts (footsteps) based on net role\nWill never be called on dedicated server\nWill be LOD'd out if the impact is" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Callbacks = { "Callbacks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, Callbacks), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Callbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Callbacks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** If using a callback to play a sound based on your custom settings, you might want to disable it here */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If using a callback to play a sound based on your custom settings, you might want to disable it here" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bPlaySound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound = { "bPlaySound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** If using a callback to spawn a particle based on your custom settings, you might want to disable it here */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If using a callback to spawn a particle based on your custom settings, you might want to disable it here" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bSpawnParticle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle = { "bSpawnParticle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/*\n\x09* Max LOD that this impact is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "* Max LOD that this impact is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Toggle surface impact */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Toggle surface impact" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_Inner = { "ObjectsToTrace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace = { "ObjectsToTrace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, ObjectsToTrace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData)) }; // 727872708
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bDebugDrawTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace = { "bDebugDrawTrace", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_AllowedStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bUseGlobalImpactCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Callbacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bPlaySound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bSpawnParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MISurfaceImpact",
		sizeof(FMISurfaceImpact),
		alignof(FMISurfaceImpact),
		Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMISurfaceImpact()
	{
		if (!Z_Registration_Info_UScriptStruct_MISurfaceImpact.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MISurfaceImpact.InnerSingleton, Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MISurfaceImpact.InnerSingleton;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execShouldDelayDirectionSwitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDelayDirectionSwitch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execResetTurnInPlace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTurnInPlace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execIsTurnInPlaceEnabled)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ResetRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTurnInPlaceEnabled_Implementation(Z_Param_Out_ResetRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execStopTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execStartTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execIsValidToEvaluate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidToEvaluate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execComputeSurfaceImpacts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeSurfaceImpacts();
		P_NATIVE_END;
	}
	static FName NAME_UMIAnimInstance_IsSprinting = FName(TEXT("IsSprinting"));
	bool UMIAnimInstance::IsSprinting() const
	{
		MIAnimInstance_eventIsSprinting_Parms Parms;
		const_cast<UMIAnimInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_IsSprinting),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMIAnimInstance_IsTurnInPlaceEnabled = FName(TEXT("IsTurnInPlaceEnabled"));
	bool UMIAnimInstance::IsTurnInPlaceEnabled(float& ResetRate) const
	{
		MIAnimInstance_eventIsTurnInPlaceEnabled_Parms Parms;
		Parms.ResetRate=ResetRate;
		const_cast<UMIAnimInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_IsTurnInPlaceEnabled),&Parms);
		ResetRate=Parms.ResetRate;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMIAnimInstance_OnStartCrouch = FName(TEXT("OnStartCrouch"));
	void UMIAnimInstance::OnStartCrouch()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartCrouch),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStartCrouchRun = FName(TEXT("OnStartCrouchRun"));
	void UMIAnimInstance::OnStartCrouchRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartCrouchRun),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStartFloorSliding = FName(TEXT("OnStartFloorSliding"));
	void UMIAnimInstance::OnStartFloorSliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartFloorSliding),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStartPivot = FName(TEXT("OnStartPivot"));
	void UMIAnimInstance::OnStartPivot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartPivot),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStartSprint = FName(TEXT("OnStartSprint"));
	void UMIAnimInstance::OnStartSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartSprint),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopCrouch = FName(TEXT("OnStopCrouch"));
	void UMIAnimInstance::OnStopCrouch()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopCrouch),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopCrouchRun = FName(TEXT("OnStopCrouchRun"));
	void UMIAnimInstance::OnStopCrouchRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopCrouchRun),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopFloorSliding = FName(TEXT("OnStopFloorSliding"));
	void UMIAnimInstance::OnStopFloorSliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopFloorSliding),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopPivot = FName(TEXT("OnStopPivot"));
	void UMIAnimInstance::OnStopPivot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopPivot),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopSprint = FName(TEXT("OnStopSprint"));
	void UMIAnimInstance::OnStopSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopSprint),NULL);
	}
	static FName NAME_UMIAnimInstance_ShouldDelayDirectionSwitch = FName(TEXT("ShouldDelayDirectionSwitch"));
	bool UMIAnimInstance::ShouldDelayDirectionSwitch() const
	{
		MIAnimInstance_eventShouldDelayDirectionSwitch_Parms Parms;
		const_cast<UMIAnimInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_ShouldDelayDirectionSwitch),&Parms);
		return !!Parms.ReturnValue;
	}
	void UMIAnimInstance::StaticRegisterNativesUMIAnimInstance()
	{
		UClass* Class = UMIAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeSurfaceImpacts", &UMIAnimInstance::execComputeSurfaceImpacts },
			{ "IsSprinting", &UMIAnimInstance::execIsSprinting },
			{ "IsTurnInPlaceEnabled", &UMIAnimInstance::execIsTurnInPlaceEnabled },
			{ "IsValidToEvaluate", &UMIAnimInstance::execIsValidToEvaluate },
			{ "ResetTurnInPlace", &UMIAnimInstance::execResetTurnInPlace },
			{ "ShouldDelayDirectionSwitch", &UMIAnimInstance::execShouldDelayDirectionSwitch },
			{ "StartTurn", &UMIAnimInstance::execStartTurn },
			{ "StopTurn", &UMIAnimInstance::execStopTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A physically accurate footstep system that can handle any and all other bones hitting the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "A physically accurate footstep system that can handle any and all other bones hitting the ground" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "ComputeSurfaceImpacts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventIsSprinting_Parms), &Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "IsSprinting", nullptr, nullptr, sizeof(MIAnimInstance_eventIsSprinting_Parms), Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetRate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ResetRate = { "ResetRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimInstance_eventIsTurnInPlaceEnabled_Parms, ResetRate), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventIsTurnInPlaceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventIsTurnInPlaceEnabled_Parms), &Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ResetRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** \n\x09 * Use ResetRate if over 0.0, otherwise will use StartMovingTurnRate\n\x09 * By default checks bNotAimingLocalPlayer is true (disables turning if local player is aiming)\n\x09 * @return true if turn in place is enabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Use ResetRate if over 0.0, otherwise will use StartMovingTurnRate\nBy default checks bNotAimingLocalPlayer is true (disables turning if local player is aiming)\n@return true if turn in place is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "IsTurnInPlaceEnabled", nullptr, nullptr, sizeof(MIAnimInstance_eventIsTurnInPlaceEnabled_Parms), Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics
	{
		struct MIAnimInstance_eventIsValidToEvaluate_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimInstance_eventIsValidToEvaluate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventIsValidToEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventIsValidToEvaluate_Parms), &Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Don't evaluate anim graph if missing references, delta too small, or movement is disabled */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Don't evaluate anim graph if missing references, delta too small, or movement is disabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "IsValidToEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::MIAnimInstance_eventIsValidToEvaluate_Parms), Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Started crouch (overlaps floor slide event) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Started crouch (overlaps floor slide event)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Started crouch run animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Started crouch run animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartCrouchRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Started floor slide */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Started floor slide" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Started pivot */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Started pivot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Started sprinting animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Started sprinting animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stopped crouch (overlaps floor slide event) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopped crouch (overlaps floor slide event)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stopped crouch run animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopped crouch run animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopCrouchRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stopped floor slide */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopped floor slide" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stopped pivot */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopped pivot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Stopped sprinting animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopped sprinting animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Completely reset the turn in place (this will cause a snap) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Completely reset the turn in place (this will cause a snap)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "ResetTurnInPlace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventShouldDelayDirectionSwitch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventShouldDelayDirectionSwitch_Parms), &Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** If true, delay settings for strafe will be taken into effect */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, delay settings for strafe will be taken into effect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "ShouldDelayDirectionSwitch", nullptr, nullptr, sizeof(MIAnimInstance_eventShouldDelayDirectionSwitch_Parms), Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Must be called when a turn animation starts via notify */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Must be called when a turn animation starts via notify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "StartTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_StartTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_StartTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Must be called when a turn animation stops via notify */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Must be called when a turn animation stops via notify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "StopTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_StopTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_StopTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIAnimInstance);
	UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister()
	{
		return UMIAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMIAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStanding_MetaData[];
#endif
		static void NewProp_bIsStanding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchingOnGround_MetaData[];
#endif
		static void NewProp_bCrouchingOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchingOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnGround_MetaData[];
#endif
		static void NewProp_bOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayingRootMotion_MetaData[];
#endif
		static void NewProp_bPlayingRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayingRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprintLanding_MetaData[];
#endif
		static void NewProp_bIsSprintLanding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprintLanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouchRunning_MetaData[];
#endif
		static void NewProp_bIsCrouchRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouchRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchRunningOnGround_MetaData[];
#endif
		static void NewProp_bCrouchRunningOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchRunningOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFloorSliding_MetaData[];
#endif
		static void NewProp_bIsFloorSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrafeEnabled_MetaData[];
#endif
		static void NewProp_bStrafeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrafeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGaitEnabled_MetaData[];
#endif
		static void NewProp_bGaitEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGaitEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotAiming_MetaData[];
#endif
		static void NewProp_bNotAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimingLocalPlayer_MetaData[];
#endif
		static void NewProp_bAimingLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimingLocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotAimingLocalPlayer_MetaData[];
#endif
		static void NewProp_bNotAimingLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotAimingLocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdoll_MetaData[];
#endif
		static void NewProp_bRagdoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFootIK_MetaData[];
#endif
		static void NewProp_bFootIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFootIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnarmed_MetaData[];
#endif
		static void NewProp_bUnarmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnarmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bArmed_MetaData[];
#endif
		static void NewProp_bArmed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bArmed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangingWeapon_MetaData[];
#endif
		static void NewProp_bChangingWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangingWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponPose_MetaData[];
#endif
		static void NewProp_bUseWeaponPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponAimPose_MetaData[];
#endif
		static void NewProp_bUseWeaponAimPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponAimPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWeaponPose_MetaData[];
#endif
		static void NewProp_bEnableWeaponPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWeaponPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHandIK_MetaData[];
#endif
		static void NewProp_bEnableHandIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHandIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponOneHanded_MetaData[];
#endif
		static void NewProp_bWeaponOneHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponOneHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimOffsetEnabled_MetaData[];
#endif
		static void NewProp_bAimOffsetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimOffsetEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLookTarget_MetaData[];
#endif
		static void NewProp_bEnableLookTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLookTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivot_MetaData[];
#endif
		static void NewProp_bPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsIdle_MetaData[];
#endif
		static void NewProp_bIsIdle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIdle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStopping_MetaData[];
#endif
		static void NewProp_bIsStopping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStopping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppingAtSpeed_MetaData[];
#endif
		static void NewProp_bIsStoppingAtSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppingAtSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppingFromCrouchRunning_MetaData[];
#endif
		static void NewProp_bIsStoppingFromCrouchRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppingFromCrouchRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppingInAir_MetaData[];
#endif
		static void NewProp_bIsStoppingInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppingInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppingBackwards_MetaData[];
#endif
		static void NewProp_bIsStoppingBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppingBackwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingWithInput_MetaData[];
#endif
		static void NewProp_bIsMovingWithInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingWithInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingBackward_MetaData[];
#endif
		static void NewProp_bIsMovingBackward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingBackward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovingForward_MetaData[];
#endif
		static void NewProp_bIsMovingForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovingForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnRight_MetaData[];
#endif
		static void NewProp_bTurnRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoTurn_MetaData[];
#endif
		static void NewProp_bDoTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnExit_MetaData[];
#endif
		static void NewProp_bTurnExit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRestartTurn_MetaData[];
#endif
		static void NewProp_bCanRestartTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRestartTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetTurn_MetaData[];
#endif
		static void NewProp_bResetTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootIKState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootIKState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StrafeOrientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StrafeOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAimOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftArmBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffHandIKTM_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffHandIKTM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetTurn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetPitch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceImpacts_MetaData[];
#endif
		static void NewProp_bEnableSurfaceImpacts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceImpacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalImpactCallback_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GlobalImpactCallback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraversalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraversalVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpingVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpingVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandingVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandingVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitSpeedRaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitSpeedRaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StoppingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_YawCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTurningCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IsTurningCurveName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepSizes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSizes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepSizes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTurnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTurnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateAtMaxTurnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateAtMaxTurnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateDirectionChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateDirectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMovingTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMovingTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRootMotionMontageResetsTurn_MetaData[];
#endif
		static void NewProp_bRootMotionMontageResetsTurn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRootMotionMontageResetsTurn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFallingDownward_MetaData[];
#endif
		static void NewProp_bIsFallingDownward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFallingDownward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanLand_MetaData[];
#endif
		static void NewProp_bCanLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionMontageTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionMontageTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovingInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovingInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrafeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppingInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppingInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppingVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppingVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoppingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictedLanding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedLanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToLandLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToLandLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousRawInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousRawInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsApplyingInput_MetaData[];
#endif
		static void NewProp_bIsApplyingInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsApplyingInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasApplyingInput_MetaData[];
#endif
		static void NewProp_bWasApplyingInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasApplyingInput;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NeutralStrafeDirectionBasis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeutralStrafeDirectionBasis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NeutralStrafeDirectionBasis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightStrafeDirectionBasis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightStrafeDirectionBasis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RightStrafeDirectionBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsVelocityDegreesTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardsVelocityDegreesTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsAccelerationDegreesTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardsAccelerationDegreesTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionChangeForwardInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionChangeForwardInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionChangeBackwardInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionChangeBackwardInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSwitchDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSwitchDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSwitchDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardSwitchDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSprintUsesProceduralStrafe_MetaData[];
#endif
		static void NewProp_bSprintUsesProceduralStrafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintUsesProceduralStrafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGaitToSprinting_MetaData[];
#endif
		static void NewProp_bApplyGaitToSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGaitToSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGaitToFloorSliding_MetaData[];
#endif
		static void NewProp_bApplyGaitToFloorSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGaitToFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFallingTooFar_MetaData[];
#endif
		static void NewProp_bFallingTooFar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallingTooFar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseGaitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseGaitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintGaitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintGaitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchGaitMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchGaitMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GaitInterpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GaitInterpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputInterpToZeroRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputInterpToZeroRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPositionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallTooFarDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallTooFarDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAimOffset_MetaData[];
#endif
		static void NewProp_bAllowAimOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAimOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetYawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetYawRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetPitchRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetPitchRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetYawCompensateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetYawCompensateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyTurnRightCompensationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyTurnRightCompensationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyTurnLeftCompensationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyTurnLeftCompensationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSurfaceImpact_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSurfaceImpact;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceImpacts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceImpacts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SurfaceImpacts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts, "ComputeSurfaceImpacts" }, // 2762321604
		{ &Z_Construct_UFunction_UMIAnimInstance_IsSprinting, "IsSprinting" }, // 1720949220
		{ &Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled, "IsTurnInPlaceEnabled" }, // 439898268
		{ &Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate, "IsValidToEvaluate" }, // 2796908486
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartCrouch, "OnStartCrouch" }, // 811574615
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartCrouchRun, "OnStartCrouchRun" }, // 3522878428
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding, "OnStartFloorSliding" }, // 89463760
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartPivot, "OnStartPivot" }, // 4061200864
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartSprint, "OnStartSprint" }, // 1305501034
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopCrouch, "OnStopCrouch" }, // 594394049
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopCrouchRun, "OnStopCrouchRun" }, // 192032814
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding, "OnStopFloorSliding" }, // 2025648391
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopPivot, "OnStopPivot" }, // 2181393312
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopSprint, "OnStopSprint" }, // 2417183958
		{ &Z_Construct_UFunction_UMIAnimInstance_ResetTurnInPlace, "ResetTurnInPlace" }, // 1847517456
		{ &Z_Construct_UFunction_UMIAnimInstance_ShouldDelayDirectionSwitch, "ShouldDelayDirectionSwitch" }, // 2193271511
		{ &Z_Construct_UFunction_UMIAnimInstance_StartTurn, "StartTurn" }, // 3313469023
		{ &Z_Construct_UFunction_UMIAnimInstance_StopTurn, "StopTurn" }, // 781063207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "States Weapon AimOffset LookTarget Movement TurnInPlace Input RootMotion" },
		{ "AutoExpandCategories", "AnimationSettings AnimationSettings|Turn In Place AnimationSettings|Strafe AnimationSettings|Gait" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MIAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Character), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Movement), Z_Construct_UClass_UMICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is not crouched */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is not crouched" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStanding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding = { "bIsStanding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is crouched */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouched" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is crouched and on the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouched and on the ground" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bCrouchingOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround = { "bCrouchingOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is jumping (falling and Velocity.Z > 0) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is jumping (falling and Velocity.Z > 0)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is in the air (can be both jumping and falling) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is in the air (can be both jumping and falling)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is on the ground (not falling) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is on the ground (not falling)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround = { "bOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is playing root motion */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is playing root motion" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bPlayingRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion = { "bPlayingRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is sprinting and over 50% of sprint speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is sprinting and over 50% of sprint speed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is sprinting and over 50% of sprint speed (and not armed) when landing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is sprinting and over 50% of sprint speed (and not armed) when landing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsSprintLanding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding = { "bIsSprintLanding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is crouch running */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouch running" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsCrouchRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning = { "bIsCrouchRunning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is crouch running and on the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouch running and on the ground" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bCrouchRunningOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround = { "bCrouchRunningOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is floor sliding */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is floor sliding" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsFloorSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding = { "bIsFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Should apply procedural strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Should apply procedural strafing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bStrafeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled = { "bStrafeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Gait is enabled when on ground and moving */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Gait is enabled when on ground and moving" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bGaitEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled = { "bGaitEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is not aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is not aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bNotAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming = { "bNotAiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is a local player who is aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is a local player who is aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAimingLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer = { "bAimingLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Is not a local player or is not aiming */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Is not a local player or is not aiming" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bNotAimingLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer = { "bNotAimingLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Character is in ragdoll */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is in ragdoll" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bRagdoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll = { "bRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** FootIK is enabled when on ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "FootIK is enabled when on ground" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bFootIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK = { "bFootIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Character has no weapon out */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character has no weapon out" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUnarmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed = { "bUnarmed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Character has a weapon out */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character has a weapon out" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bArmed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed = { "bArmed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Character is changing weapon (used to detect changes in weapon requiring a new pose snapshot for blending) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is changing weapon (used to detect changes in weapon requiring a new pose snapshot for blending)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bChangingWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon = { "bChangingWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** True if Weapon contains animation sequence to layer over animation states */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if Weapon contains animation sequence to layer over animation states" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUseWeaponPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose = { "bUseWeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** True if Weapon contains aim offset to apply */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if Weapon contains aim offset to apply" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUseWeaponAimPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose = { "bUseWeaponAimPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** True if armed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if armed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableWeaponPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose = { "bEnableWeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** True if armed and weapon is not one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if armed and weapon is not one handed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableHandIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK = { "bEnableHandIK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** True if current weapon is one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if current weapon is one handed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bWeaponOneHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded = { "bWeaponOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData[] = {
		{ "Category", "AnimationState|Aim Offset" },
		{ "Comment", "/** Aim offset is disabled when look target is enabled */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Aim offset is disabled when look target is enabled" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAimOffsetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled = { "bAimOffsetEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData[] = {
		{ "Category", "AnimationState|Look Target" },
		{ "Comment", "/** This should be set externally by the character to enable or disable look targets */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "This should be set externally by the character to enable or disable look targets" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableLookTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget = { "bEnableLookTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Is pivoting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Is pivoting" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot = { "bPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Speed is over 0.0 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed is over 0.0" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Speed is 0.0 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed is 0.0" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsIdle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle = { "bIsIdle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Has velocity but is not providing input */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Has velocity but is not providing input" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStopping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping = { "bIsStopping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Stopping after >= moving at 80% of max speed - this is used to provide a different transition duration for faster movement (as the stop animation can be much more exaggerated) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Stopping after >= moving at 80% of max speed - this is used to provide a different transition duration for faster movement (as the stop animation can be much more exaggerated)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStoppingAtSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed = { "bIsStoppingAtSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** If true, was crouch running when stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, was crouch running when stopping" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStoppingFromCrouchRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning = { "bIsStoppingFromCrouchRunning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Has velocity but is not providing input (while in air) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Has velocity but is not providing input (while in air)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStoppingInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir = { "bIsStoppingInAir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** If was moving backwards when stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If was moving backwards when stopping" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStoppingBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards = { "bIsStoppingBackwards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** (bIsApplyingInput & bIsMoving) - Used as \"has started moving after stopping\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "(bIsApplyingInput & bIsMoving) - Used as \"has started moving after stopping\"" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingWithInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput = { "bIsMovingWithInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Movement direction, also applicable to strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Movement direction, also applicable to strafing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingBackward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward = { "bIsMovingBackward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Movement direction, also applicable to strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Movement direction, also applicable to strafing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward = { "bIsMovingForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Used by anim graph to determine left or right turn animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to determine left or right turn animation" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bTurnRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight = { "bTurnRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Used by anim graph to trigger Turn state */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to trigger Turn state" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bDoTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn = { "bDoTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Used by anim graph to exit turn during recovery period (to restart turn faster) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to exit turn during recovery period (to restart turn faster)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bTurnExit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit = { "bTurnExit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Used by anim graph to restart turn after re-entering idle */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to restart turn after re-entering idle" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bCanRestartTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn = { "bCanRestartTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Gate to update curve value at start of turn */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Gate to update curve value at start of turn" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bResetTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn = { "bResetTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/**\n\x09 * Current state used for Foot IK\n\x09 * 0 if Standing\n\x09 * 1 if Crouched\n\x09 * 2 if Floor Sliding\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current state used for Foot IK\n0 if Standing\n1 if Crouched\n2 if Floor Sliding" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState = { "FootIKState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, FootIKState), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Current orientation for strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current orientation for strafing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation = { "StrafeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StrafeOrientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData)) }; // 3422588749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Current anim info for weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current anim info for weapon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Weapon), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData)) }; // 1647259094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Always Weapon.AimOffset if it is valid, if not valid, will be the last valid WeaponAimOffset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Always Weapon.AimOffset if it is valid, if not valid, will be the last valid WeaponAimOffset" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset = { "WeaponAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, WeaponAimOffset), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Blends in left arm animation if weapon is one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Blends in left arm animation if weapon is one handed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight = { "LeftArmBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LeftArmBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData[] = {
		{ "Category", "AnimationState|Weapon" },
		{ "Comment", "/** Transform applied using FABRIK to place offhand on weapon */" },
		{ "DisplayName", "OffHand IK" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Transform applied using FABRIK to place offhand on weapon" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM = { "OffHandIKTM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, OffHandIKTM), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetTurn_MetaData[] = {
		{ "Category", "AnimationState|Aim Offset" },
		{ "Comment", "/** Because Turn in Place prevents mesh from turning, need to rotate something to compensate by this amount (usually spine) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Because Turn in Place prevents mesh from turning, need to rotate something to compensate by this amount (usually spine)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetTurn = { "AimOffsetTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetTurn), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYaw_MetaData[] = {
		{ "Category", "AnimationState|Aim Offset" },
		{ "Comment", "/** Horizontal axis for aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Horizontal axis for aim offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYaw = { "AimOffsetYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetYaw), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitch_MetaData[] = {
		{ "Category", "AnimationState|Aim Offset" },
		{ "Comment", "/** Vertical axis for aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Vertical axis for aim offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitch = { "AimOffsetPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetPitch), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData[] = {
		{ "Category", "AnimationState|States" },
		{ "Comment", "/** Current movement system (affects strafing behaviour) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current movement system (affects strafing behaviour)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem = { "MovementSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MovementSystem), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData)) }; // 595102587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts_MetaData[] = {
		{ "Category", "AnimationSettings|Impacts" },
		{ "Comment", "/** Globally toggle all surface impacts */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Globally toggle all surface impacts" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableSurfaceImpacts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts = { "bEnableSurfaceImpacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GlobalImpactCallback_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EMICallbackSetting" },
		{ "Category", "AnimationSettings|Impacts" },
		{ "Comment", "/** \n\x09 * Callback settings for all surface impacts that don't define their own\n\x09 * Will never be called on dedicated server\n\x09 * Will be LOD'd\n\x09 */" },
		{ "EditCondition", "bEnableSurfaceImpacts" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Callback settings for all surface impacts that don't define their own\nWill never be called on dedicated server\nWill be LOD'd" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GlobalImpactCallback = { "GlobalImpactCallback", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GlobalImpactCallback), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GlobalImpactCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GlobalImpactCallback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData[] = {
		{ "Category", "AnimationState|Look Target" },
		{ "Comment", "/** This should be set externally by the character to assign current look target */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "This should be set externally by the character to assign current look target" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget = { "LookTarget", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LookTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** How fast the character is moving and the direction they are moving in */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the character is moving and the direction they are moving in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** How fast the character has been moving over the past few frames */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the character has been moving over the past few frames" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity = { "TraversalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TraversalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Velocity of character jump */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity of character jump" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity = { "JumpingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, JumpingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Traversal velocity of character impact when landing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Traversal velocity of character impact when landing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity = { "LandingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LandingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation = { "VelocityRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, VelocityRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Rotational velocity, used to drive turn in place and leaning, etc */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rotational velocity, used to drive turn in place and leaning, etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Non-normalized horizontal speed (original raw value) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Non-normalized horizontal speed (original raw value)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed = { "RawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RawSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeedRaw_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** @see MICharacterMovement->GetMaxGaitSpeed() */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "@see MICharacterMovement->GetMaxGaitSpeed()" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeedRaw = { "GaitSpeedRaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitSpeedRaw), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeedRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeedRaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxSpeed()) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxSpeed())" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Interpolated speed applied to the gate allowing for slower changes to the gate to cause start/stop animations and to blend nicely to and from idle */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Interpolated speed applied to the gate allowing for slower changes to the gate to cause start/stop animations and to blend nicely to and from idle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed = { "GaitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Current gait multiplier based on character state */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current gait multiplier based on character state" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier = { "GaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Speed when stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed when stopping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed = { "StoppingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Yaw direction that we are moving in */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Yaw direction that we are moving in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Motion weight is carried momentum from starting/stopping movement that is applied via the MotionWeight anim graph node */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Motion weight is carried momentum from starting/stopping movement that is applied via the MotionWeight anim graph node" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight = { "MotionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MotionWeight), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Pivot Yaw Direction */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Pivot Yaw Direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection = { "PivotDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotDirection), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Plug into animations to scale their play rate based on movement speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Plug into animations to scale their play rate based on movement speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Velocity when beginning pivoting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity when beginning pivoting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity = { "PivotVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Input resulting in pivoting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input resulting in pivoting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput = { "PivotInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Used to negate rotation from mesh (to prevent mesh turning until turn in place triggers) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used to negate rotation from mesh (to prevent mesh turning until turn in place triggers)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RootYawOffset), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Character Actor Rotation Yaw */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character Actor Rotation Yaw" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Value of the yaw curve */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Value of the yaw curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, CurveValue), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle = { "TurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepAngle_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Angle of current turn */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Angle of current turn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepAngle = { "StepAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StepAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Which step animation index to use */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Which step animation index to use" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StepSize), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnPlayRate_MetaData[] = {
		{ "Category", "AnimationState|Turn In Place" },
		{ "Comment", "/** Play rate for turn animations */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Play rate for turn animations" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnPlayRate = { "TurnPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TurnPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Curve Name for Yaw Curve */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Curve Name for Yaw Curve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName = { "YawCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, YawCurveName), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Curve Name for whether we are turning at this part of the animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Curve Name for whether we are turning at this part of the animation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName = { "IsTurningCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, IsTurningCurveName), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes_Inner = { "StepSizes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Yaw angles where different step animations occur */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Yaw angles where different step animations occur" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes = { "StepSizes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StepSizes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Angle at which turn in place will trigger */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Angle at which turn in place will trigger" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle = { "MinTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MinTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Maximum angle at which point the character will turn to maintain this value (hard clamp on angle) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Maximum angle at which point the character will turn to maintain this value (hard clamp on angle)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle = { "MaxTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MaxTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateAtMaxTurnAngle_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Turn rate multiplied when we're at max turn angle, commonly used to make animation play faster in an attempt to keep up */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Turn rate multiplied when we're at max turn angle, commonly used to make animation play faster in an attempt to keep up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateAtMaxTurnAngle = { "TurnRateAtMaxTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TurnRateAtMaxTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateAtMaxTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateAtMaxTurnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateDirectionChange_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Turn rate multiplied when we're changing from one turn animation to another (in the opposing direction), commonly used to make animation play faster in an attempt to keep up */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Turn rate multiplied when we're changing from one turn animation to another (in the opposing direction), commonly used to make animation play faster in an attempt to keep up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateDirectionChange = { "TurnRateDirectionChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TurnRateDirectionChange), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateDirectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateDirectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Rate at which character turns when starting to move from idle (or partial turn) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rate at which character turns when starting to move from idle (or partial turn)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate = { "StartMovingTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StartMovingTurnRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Rate at which character turns when starting a root motion montage */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rate at which character turns when starting a root motion montage" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bRootMotionMontageResetsTurn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn = { "bRootMotionMontageResetsTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Is falling downwards rather than upwards */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Is falling downwards rather than upwards" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsFallingDownward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward = { "bIsFallingDownward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Whether character is headed to a surface they can land on or not */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Whether character is headed to a surface they can land on or not" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bCanLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand = { "bCanLand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData[] = {
		{ "Category", "AnimationSettings|Turn In Place" },
		{ "Comment", "/** Rate at which character turns when starting a root motion montage */" },
		{ "EditCondition", "bRootMotionMontageResetsTurn" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rate at which character turns when starting a root motion montage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate = { "RootMotionMontageTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RootMotionMontageTurnRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Input as obtained from the character */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input as obtained from the character" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput = { "RawInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RawInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Input interpolated to zero (applied to gait) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input interpolated to zero (applied to gait)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Applies stopping input if stopping otherwise applies Input */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applies stopping input if stopping otherwise applies Input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput = { "MovingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MovingInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Interpolated input for smooth direction changes */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Interpolated input for smooth direction changes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput = { "DirectionInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Interpolated input direction. X is forward, Y is right, Z is not used. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Interpolated input direction. X is forward, Y is right, Z is not used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection = { "StrafeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StrafeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Input supplied when initially triggering stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input supplied when initially triggering stopping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput = { "StoppingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Velocity when initially triggering stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity when initially triggering stopping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity = { "StoppingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Rotation when initially triggering stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rotation when initially triggering stopping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation = { "StoppingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PredictedLanding_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Predicted landing motion, only valid when falling */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Predicted landing motion, only valid when falling" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PredictedLanding = { "PredictedLanding", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PredictedLanding), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PredictedLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PredictedLanding_MetaData)) }; // 1819844526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DistanceToLandLocation_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** How far from landing location (as predicted, not mere distance to ground) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How far from landing location (as predicted, not mere distance to ground)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DistanceToLandLocation = { "DistanceToLandLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DistanceToLandLocation), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DistanceToLandLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DistanceToLandLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallingDuration_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** How long character has been falling for */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How long character has been falling for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallingDuration = { "FallingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, FallingDuration), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallingDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingSpeed_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** 0 if moving backward */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "0 if moving backward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingSpeed = { "LandingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LandingSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Input from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input from the previous frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput = { "PreviousInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Raw input from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Raw input from the previous frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput = { "PreviousRawInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousRawInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Velocity rotation from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity rotation from the previous frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation = { "PreviousVelocityRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousVelocityRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsApplyingInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput = { "bIsApplyingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData[] = {
		{ "Category", "AnimationState|Input" },
		{ "Comment", "/** Was applying input on the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Was applying input on the previous frame" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bWasApplyingInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput = { "bWasApplyingInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** Whether strafing is based on Input (Acceleration) or Velocity */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Whether strafing is based on Input (Acceleration) or Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis = { "NeutralStrafeDirectionBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, NeutralStrafeDirectionBasis), Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData)) }; // 1523544279
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** Whether strafing is based on Input (Acceleration) or Velocity */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Whether strafing is based on Input (Acceleration) or Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis = { "RightStrafeDirectionBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RightStrafeDirectionBasis), Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData)) }; // 1523544279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance = { "BackwardsVelocityDegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BackwardsVelocityDegreesTolerance), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance = { "BackwardsAccelerationDegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BackwardsAccelerationDegreesTolerance), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** How fast we can change direction (strafe/blendspace direction rate) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast we can change direction (strafe/blendspace direction rate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate = { "DirectionInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeForwardInterpRate_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** How fast we can change direction when switching from moving backward->forward (strafe/blendspace direction rate) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast we can change direction when switching from moving backward->forward (strafe/blendspace direction rate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeForwardInterpRate = { "DirectionChangeForwardInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionChangeForwardInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeForwardInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeForwardInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeBackwardInterpRate_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** How fast we can change direction when switching from moving forward->backward (strafe/blendspace direction rate) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast we can change direction when switching from moving forward->backward (strafe/blendspace direction rate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeBackwardInterpRate = { "DirectionChangeBackwardInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionChangeBackwardInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeBackwardInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeBackwardInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_ForwardSwitchDelay_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** Time delay to switch from backwards to forward strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Time delay to switch from backwards to forward strafing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_ForwardSwitchDelay = { "ForwardSwitchDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, ForwardSwitchDelay), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_ForwardSwitchDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_ForwardSwitchDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardSwitchDelay_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** Time delay to switch from forward to backwards strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Time delay to switch from forward to backwards strafing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardSwitchDelay = { "BackwardSwitchDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BackwardSwitchDelay), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardSwitchDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardSwitchDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe_MetaData[] = {
		{ "Category", "AnimationSettings|Strafe" },
		{ "Comment", "/** Sprint may look bad with procedural strafe and using traditional strafe animations could be preferable */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Sprint may look bad with procedural strafe and using traditional strafe animations could be preferable" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bSprintUsesProceduralStrafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe = { "bSprintUsesProceduralStrafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** Whether to apply gait while sprinting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Whether to apply gait while sprinting" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bApplyGaitToSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting = { "bApplyGaitToSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** Whether to apply gait while floor sliding */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Whether to apply gait while floor sliding" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bApplyGaitToFloorSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding = { "bApplyGaitToFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar_MetaData[] = {
		{ "Category", "AnimationState|Movement" },
		{ "Comment", "/** Enter extended falling state (flailing) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Enter extended falling state (flailing)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bFallingTooFar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar = { "bFallingTooFar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** Applied when not sprinting or crouching */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when not sprinting or crouching" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier = { "BaseGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BaseGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** Applied when sprinting */" },
		{ "EditCondition", "bApplyGaitToSprinting" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when sprinting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier = { "SprintGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, SprintGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** Applied when crouching */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when crouching" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier = { "CrouchGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, CrouchGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** How fast gait speed catches up to actual speed - Set to 0 to disable interpolation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast gait speed catches up to actual speed - Set to 0 to disable interpolation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate = { "GaitInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData[] = {
		{ "Category", "AnimationSettings|Gait" },
		{ "Comment", "/** How fast input interpolates to zero when idle (used to smoothly transition gait node from moving to idle) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast input interpolates to zero when idle (used to smoothly transition gait node from moving to idle)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate = { "InputInterpToZeroRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, InputInterpToZeroRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData[] = {
		{ "Category", "AnimationSettings" },
		{ "Comment", "/** How long the pivot animation runs for */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How long the pivot animation runs for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration = { "PivotDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotDuration), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartPositionOffset_MetaData[] = {
		{ "Category", "AnimationSettings" },
		{ "Comment", "/** Used when starting from idle to begin at a later point in the animation (good for reducing excessive build-up based on your movement settings) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used when starting from idle to begin at a later point in the animation (good for reducing excessive build-up based on your movement settings)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartPositionOffset = { "StartPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StartPositionOffset), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartPositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartPositionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallTooFarDuration_MetaData[] = {
		{ "Category", "AnimationSettings" },
		{ "Comment", "/** How long must character fall for before entering flailing state */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How long must character fall for before entering flailing state" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallTooFarDuration = { "FallTooFarDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, FallTooFarDuration), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallTooFarDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallTooFarDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData[] = {
		{ "Category", "AnimationSettings" },
		{ "Comment", "/** Animation rate based on character speed. Not used by default. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Animation rate based on character speed. Not used by default." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate = { "MinAnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MinAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData[] = {
		{ "Category", "AnimationSettings" },
		{ "Comment", "/** Animation rate based on character speed. Not used by default. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Animation rate based on character speed. Not used by default." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate = { "MaxAnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MaxAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If true, aim offset can be used - primarily used to enable/disable aim offset externally */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, aim offset can be used - primarily used to enable/disable aim offset externally" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAllowAimOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset = { "bAllowAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawRate_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How fast the aim offset interpolates for yaw. Set to 0 to disable interpolation. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the aim offset interpolates for yaw. Set to 0 to disable interpolation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawRate = { "AimOffsetYawRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetYawRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitchRate_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How fast the aim offset interpolates for pitch. Set to 0 to disable interpolation. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the aim offset interpolates for pitch. Set to 0 to disable interpolation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitchRate = { "AimOffsetPitchRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetPitchRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitchRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitchRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawCompensateRate_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How fast the aim offset interpolates for yaw when step size is changing. Set to 0 to disable interpolation. */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the aim offset interpolates for yaw when step size is changing. Set to 0 to disable interpolation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawCompensateRate = { "AimOffsetYawCompensateRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetYawCompensateRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawCompensateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawCompensateRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnRightCompensationScale_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "Comment", "/** Scale the turn right aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Scale the turn right aim offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnRightCompensationScale = { "BodyTurnRightCompensationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BodyTurnRightCompensationScale), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnRightCompensationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnRightCompensationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnLeftCompensationScale_MetaData[] = {
		{ "Category", "AnimationSettings|Aim Offset" },
		{ "Comment", "/** Scale the turn left aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Scale the turn left aim offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnLeftCompensationScale = { "BodyTurnLeftCompensationScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BodyTurnLeftCompensationScale), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnLeftCompensationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnLeftCompensationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OnSurfaceImpact_MetaData[] = {
		{ "Category", "Impacts" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OnSurfaceImpact = { "OnSurfaceImpact", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, OnSurfaceImpact), Z_Construct_UDelegateFunction_MoveIt_MIOnSurfaceImpact__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OnSurfaceImpact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OnSurfaceImpact_MetaData)) }; // 244722918
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_Inner = { "SurfaceImpacts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMISurfaceImpact, METADATA_PARAMS(nullptr, 0) }; // 1945255345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData[] = {
		{ "Category", "AnimationSettings|Impacts" },
		{ "Comment", "/** A physically accurate footstep system that can handle any and all other bones hitting the ground */" },
		{ "EditCondition", "bEnableSurfaceImpacts" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "A physically accurate footstep system that can handle any and all other bones hitting the ground" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts = { "SurfaceImpacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, SurfaceImpacts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData)) }; // 1945255345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprintLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouchRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchRunningOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingAtSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingFromCrouchRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanRestartTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableSurfaceImpacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GlobalImpactCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeedRaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StepSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateAtMaxTurnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnRateDirectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRootMotionMontageResetsTurn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFallingDownward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCanLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PredictedLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DistanceToLandLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeForwardInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionChangeBackwardInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_ForwardSwitchDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardSwitchDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bSprintUsesProceduralStrafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bApplyGaitToFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFallingTooFar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartPositionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FallTooFarDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAllowAimOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetPitchRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetYawCompensateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnRightCompensationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BodyTurnLeftCompensationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OnSurfaceImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIAnimInstance_Statics::ClassParams = {
		&UMIAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UMIAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIAnimInstance.OuterSingleton, Z_Construct_UClass_UMIAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIAnimInstance.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMIAnimInstance>()
	{
		return UMIAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIAnimInstance);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::EnumInfo[] = {
		{ EMIStrafeDirectionBasis_StaticEnum, TEXT("EMIStrafeDirectionBasis"), &Z_Registration_Info_UEnum_EMIStrafeDirectionBasis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1523544279U) },
		{ EMISurfaceStateType_StaticEnum, TEXT("EMISurfaceStateType"), &Z_Registration_Info_UEnum_EMISurfaceStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115151948U) },
		{ EMICallbackSetting_StaticEnum, TEXT("EMICallbackSetting"), &Z_Registration_Info_UEnum_EMICallbackSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3511612091U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FMISurfaceImpact::StaticStruct, Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewStructOps, TEXT("MISurfaceImpact"), &Z_Registration_Info_UScriptStruct_MISurfaceImpact, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMISurfaceImpact), 1945255345U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIAnimInstance, UMIAnimInstance::StaticClass, TEXT("UMIAnimInstance"), &Z_Registration_Info_UClass_UMIAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIAnimInstance), 3252703718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_2915660672(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
