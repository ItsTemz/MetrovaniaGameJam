// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMICharacter() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementState();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature();
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings();
	MOVEIT_API UClass* Z_Construct_UClass_UMIPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIMovementState;
	static UEnum* EMIMovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIMovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIMovementState, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIMovementState"));
		}
		return Z_Registration_Info_UEnum_EMIMovementState.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIMovementState>()
	{
		return EMIMovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIMovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enumerators[] = {
		{ "EMIMovementState::MS_None", (int64)EMIMovementState::MS_None },
		{ "EMIMovementState::MS_Sprinting", (int64)EMIMovementState::MS_Sprinting },
		{ "EMIMovementState::MS_Crouching", (int64)EMIMovementState::MS_Crouching },
		{ "EMIMovementState::MS_CrouchRunning", (int64)EMIMovementState::MS_CrouchRunning },
		{ "EMIMovementState::MS_FloorSliding", (int64)EMIMovementState::MS_FloorSliding },
		{ "EMIMovementState::MS_Ragdoll", (int64)EMIMovementState::MS_Ragdoll },
		{ "EMIMovementState::MS_MAX", (int64)EMIMovementState::MS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "MS_Crouching.DisplayName", "Crouching" },
		{ "MS_Crouching.Name", "EMIMovementState::MS_Crouching" },
		{ "MS_CrouchRunning.DisplayName", "Crouch Running" },
		{ "MS_CrouchRunning.Name", "EMIMovementState::MS_CrouchRunning" },
		{ "MS_FloorSliding.DisplayName", "Floor Sliding" },
		{ "MS_FloorSliding.Name", "EMIMovementState::MS_FloorSliding" },
		{ "MS_MAX.Hidden", "" },
		{ "MS_MAX.Name", "EMIMovementState::MS_MAX" },
		{ "MS_None.DisplayName", "None" },
		{ "MS_None.Name", "EMIMovementState::MS_None" },
		{ "MS_Ragdoll.DisplayName", "Ragdoll" },
		{ "MS_Ragdoll.Name", "EMIMovementState::MS_Ragdoll" },
		{ "MS_Sprinting.DisplayName", "Sprinting" },
		{ "MS_Sprinting.Name", "EMIMovementState::MS_Sprinting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIMovementState",
		"EMIMovementState",
		Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIMovementState()
	{
		if (!Z_Registration_Info_UEnum_EMIMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIMovementState.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIMovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIMovementState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIHitWallDelegate_Parms
		{
			FVector ImpactVelocity;
			FVector ImpactNormal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIHitWallDelegate_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIHitWallDelegate_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::NewProp_ImpactNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIHitWallDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::_Script_MoveIt_eventMIHitWallDelegate_Parms), Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIScuffWallDelegate_Parms
		{
			FVector ImpactVelocity;
			FVector ImpactNormal;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIScuffWallDelegate_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIScuffWallDelegate_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::NewProp_ImpactNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIScuffWallDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::_Script_MoveIt_eventMIScuffWallDelegate_Parms), Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIHitCharacterDelegate_Parms
		{
			AMICharacter* OtherCharacter;
			FVector ImpactVelocity;
			FVector ImpactNormal;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherCharacter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_OtherCharacter = { "OtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIHitCharacterDelegate_Parms, OtherCharacter), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIHitCharacterDelegate_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIHitCharacterDelegate_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_OtherCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_ImpactVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::NewProp_ImpactNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIHitCharacterDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::_Script_MoveIt_eventMIHitCharacterDelegate_Parms), Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMICharacter::execCanHitCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHitCharacter_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanScuffWall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanScuffWall_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanHitWall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHitWall_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanPlayHitByCharacterVoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayHitByCharacterVoice_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnCapsuleComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetOrientToFloorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOrientToFloorSettings*)Z_Param__Result=P_THIS->GetOrientToFloorSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsCurrentFloorMovable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentFloorMovable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsOnWalkableFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnWalkableFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execShouldOrientToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOrientToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execShouldCycleMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldCycleMovement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_IsFloorSliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsFloorSliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execShouldAutoFloorSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldAutoFloorSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsFloorSliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFloorSliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanContinueFloorSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanContinueFloorSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStartFloorSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartFloorSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_IsCrouchRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsCrouchRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanCrouchRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCrouchRun_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_IsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStopSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSprint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execServerReceiveRagdoll)
	{
		P_GET_STRUCT(FVector,Z_Param_NewRagdollActorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReceiveRagdoll_Validate(Z_Param_NewRagdollActorLocation))
		{
			RPC_ValidateFailed(TEXT("ServerReceiveRagdoll_Validate"));
			return;
		}
		P_THIS->ServerReceiveRagdoll_Implementation(Z_Param_NewRagdollActorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRagdollStandUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRagdollStandUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStopRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStartRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_Ragdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Ragdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStopRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStopRagdoll_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStartRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartRagdoll_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsRagdollStandingUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRagdollStandingUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsAimingWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAimingWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execTakeShotPhysicsImpact)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HitMesh);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitMagnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeShotPhysicsImpact(Z_Param_BoneName,Z_Param_HitMesh,Z_Param_Out_HitNormal,Z_Param_HitMagnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_SimulatedPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SimulatedPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnStopMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopMontage(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSendInputToServer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendInputToServer_Validate(Z_Param_X,Z_Param_Y))
		{
			RPC_ValidateFailed(TEXT("SendInputToServer_Validate"));
			return;
		}
		P_THIS->SendInputToServer_Implementation(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execAddRightMovementInput)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRightMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execAddForwardMovementInput)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForwardMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSetMovementSystem)
	{
		P_GET_ENUM(EMIMovementSystem,Z_Param_NewMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSystem(EMIMovementSystem(Z_Param_NewMovement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetViewComponentStateCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCameraComponent*>*)Z_Param__Result=P_THIS->GetViewComponentStateCameras_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsViewComponentStateActive)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsViewComponentStateActive_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetPhysicalMaterialOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMIPhysicalMaterial**)Z_Param__Result=P_THIS->GetPhysicalMaterialOverride_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetWeaponAnimInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMIWeapon*)Z_Param__Result=P_THIS->GetWeaponAnimInfo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetMIMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMIMovementState*)Z_Param__Result=P_THIS->GetMIMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_InitialOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_InitialOffset();
		P_NATIVE_END;
	}
	static FName NAME_AMICharacter_CanContinueFloorSlide = FName(TEXT("CanContinueFloorSlide"));
	bool AMICharacter::CanContinueFloorSlide() const
	{
		MICharacter_eventCanContinueFloorSlide_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanContinueFloorSlide),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanCrouchRun = FName(TEXT("CanCrouchRun"));
	bool AMICharacter::CanCrouchRun() const
	{
		MICharacter_eventCanCrouchRun_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanCrouchRun),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanHitCharacter = FName(TEXT("CanHitCharacter"));
	bool AMICharacter::CanHitCharacter()
	{
		MICharacter_eventCanHitCharacter_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanHitCharacter),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanHitWall = FName(TEXT("CanHitWall"));
	bool AMICharacter::CanHitWall() const
	{
		MICharacter_eventCanHitWall_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanHitWall),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanPlayHitByCharacterVoice = FName(TEXT("CanPlayHitByCharacterVoice"));
	bool AMICharacter::CanPlayHitByCharacterVoice() const
	{
		MICharacter_eventCanPlayHitByCharacterVoice_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanPlayHitByCharacterVoice),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanScuffWall = FName(TEXT("CanScuffWall"));
	bool AMICharacter::CanScuffWall() const
	{
		MICharacter_eventCanScuffWall_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanScuffWall),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanSprint = FName(TEXT("CanSprint"));
	bool AMICharacter::CanSprint() const
	{
		MICharacter_eventCanSprint_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanSprint),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStartFloorSlide = FName(TEXT("CanStartFloorSlide"));
	bool AMICharacter::CanStartFloorSlide() const
	{
		MICharacter_eventCanStartFloorSlide_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStartFloorSlide),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStartRagdoll = FName(TEXT("CanStartRagdoll"));
	bool AMICharacter::CanStartRagdoll() const
	{
		MICharacter_eventCanStartRagdoll_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStartRagdoll),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStopRagdoll = FName(TEXT("CanStopRagdoll"));
	bool AMICharacter::CanStopRagdoll() const
	{
		MICharacter_eventCanStopRagdoll_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStopRagdoll),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetOrientToFloorSettings = FName(TEXT("GetOrientToFloorSettings"));
	FOrientToFloorSettings AMICharacter::GetOrientToFloorSettings() const
	{
		MICharacter_eventGetOrientToFloorSettings_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetOrientToFloorSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetPhysicalMaterialOverride = FName(TEXT("GetPhysicalMaterialOverride"));
	UMIPhysicalMaterial* AMICharacter::GetPhysicalMaterialOverride() const
	{
		MICharacter_eventGetPhysicalMaterialOverride_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetPhysicalMaterialOverride),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetViewComponentStateCameras = FName(TEXT("GetViewComponentStateCameras"));
	TArray<UCameraComponent*> AMICharacter::GetViewComponentStateCameras() const
	{
		MICharacter_eventGetViewComponentStateCameras_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetViewComponentStateCameras),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetWeaponAnimInfo = FName(TEXT("GetWeaponAnimInfo"));
	FMIWeapon AMICharacter::GetWeaponAnimInfo() const
	{
		MICharacter_eventGetWeaponAnimInfo_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetWeaponAnimInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_IsAimingWeapon = FName(TEXT("IsAimingWeapon"));
	bool AMICharacter::IsAimingWeapon() const
	{
		MICharacter_eventIsAimingWeapon_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_IsAimingWeapon),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_IsSprinting = FName(TEXT("IsSprinting"));
	bool AMICharacter::IsSprinting() const
	{
		MICharacter_eventIsSprinting_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_IsSprinting),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_IsViewComponentStateActive = FName(TEXT("IsViewComponentStateActive"));
	bool AMICharacter::IsViewComponentStateActive(uint8 State) const
	{
		MICharacter_eventIsViewComponentStateActive_Parms Parms;
		Parms.State=State;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_IsViewComponentStateActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetBoneImpactNiagara = FName(TEXT("K2_GetBoneImpactNiagara"));
	UNiagaraSystem* AMICharacter::K2_GetBoneImpactNiagara(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetBoneImpactNiagara_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetBoneImpactNiagara),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetBoneImpactParticle = FName(TEXT("K2_GetBoneImpactParticle"));
	UParticleSystem* AMICharacter::K2_GetBoneImpactParticle(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetBoneImpactParticle_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetBoneImpactParticle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetBoneImpactSound = FName(TEXT("K2_GetBoneImpactSound"));
	USoundBase* AMICharacter::K2_GetBoneImpactSound(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetBoneImpactSound_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetBoneImpactSound),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetHitNiagara = FName(TEXT("K2_GetHitNiagara"));
	UNiagaraSystem* AMICharacter::K2_GetHitNiagara(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetHitNiagara_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetHitNiagara),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetHitParticle = FName(TEXT("K2_GetHitParticle"));
	UParticleSystem* AMICharacter::K2_GetHitParticle(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetHitParticle_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetHitParticle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetHitSound = FName(TEXT("K2_GetHitSound"));
	USoundBase* AMICharacter::K2_GetHitSound(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetHitSound_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetHitSound),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetScuffNiagara = FName(TEXT("K2_GetScuffNiagara"));
	UNiagaraSystem* AMICharacter::K2_GetScuffNiagara(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetScuffNiagara_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetScuffNiagara),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetScuffParticle = FName(TEXT("K2_GetScuffParticle"));
	UParticleSystem* AMICharacter::K2_GetScuffParticle(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetScuffParticle_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetScuffParticle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_GetScuffSound = FName(TEXT("K2_GetScuffSound"));
	USoundBase* AMICharacter::K2_GetScuffSound(const UMIPhysicalMaterial* PhysMat)
	{
		MICharacter_eventK2_GetScuffSound_Parms Parms;
		Parms.PhysMat=PhysMat;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_GetScuffSound),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_OnAnimInstanceChanged = FName(TEXT("K2_OnAnimInstanceChanged"));
	void AMICharacter::K2_OnAnimInstanceChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnAnimInstanceChanged),NULL);
	}
	static FName NAME_AMICharacter_K2_OnPivot = FName(TEXT("K2_OnPivot"));
	void AMICharacter::K2_OnPivot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnPivot),NULL);
	}
	static FName NAME_AMICharacter_K2_OnRagdollStandUp = FName(TEXT("K2_OnRagdollStandUp"));
	void AMICharacter::K2_OnRagdollStandUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnRagdollStandUp),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartCrouchRun = FName(TEXT("K2_OnStartCrouchRun"));
	void AMICharacter::K2_OnStartCrouchRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartCrouchRun),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartFloorSlide = FName(TEXT("K2_OnStartFloorSlide"));
	void AMICharacter::K2_OnStartFloorSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartFloorSlide),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartRagdoll = FName(TEXT("K2_OnStartRagdoll"));
	void AMICharacter::K2_OnStartRagdoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartRagdoll),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartSprint = FName(TEXT("K2_OnStartSprint"));
	void AMICharacter::K2_OnStartSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartSprint),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopCrouchRun = FName(TEXT("K2_OnStopCrouchRun"));
	void AMICharacter::K2_OnStopCrouchRun()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopCrouchRun),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopFloorSlide = FName(TEXT("K2_OnStopFloorSlide"));
	void AMICharacter::K2_OnStopFloorSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopFloorSlide),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopRagdoll = FName(TEXT("K2_OnStopRagdoll"));
	void AMICharacter::K2_OnStopRagdoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopRagdoll),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopSprint = FName(TEXT("K2_OnStopSprint"));
	void AMICharacter::K2_OnStopSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopSprint),NULL);
	}
	static FName NAME_AMICharacter_SendInputToServer = FName(TEXT("SendInputToServer"));
	void AMICharacter::SendInputToServer(float X, float Y)
	{
		MICharacter_eventSendInputToServer_Parms Parms;
		Parms.X=X;
		Parms.Y=Y;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_SendInputToServer),&Parms);
	}
	static FName NAME_AMICharacter_ServerReceiveRagdoll = FName(TEXT("ServerReceiveRagdoll"));
	void AMICharacter::ServerReceiveRagdoll(FVector const& NewRagdollActorLocation)
	{
		MICharacter_eventServerReceiveRagdoll_Parms Parms;
		Parms.NewRagdollActorLocation=NewRagdollActorLocation;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ServerReceiveRagdoll),&Parms);
	}
	static FName NAME_AMICharacter_ShouldAutoFloorSlide = FName(TEXT("ShouldAutoFloorSlide"));
	bool AMICharacter::ShouldAutoFloorSlide() const
	{
		MICharacter_eventShouldAutoFloorSlide_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ShouldAutoFloorSlide),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_ShouldCycleMovement = FName(TEXT("ShouldCycleMovement"));
	bool AMICharacter::ShouldCycleMovement() const
	{
		MICharacter_eventShouldCycleMovement_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ShouldCycleMovement),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_ShouldOrientToFloor = FName(TEXT("ShouldOrientToFloor"));
	bool AMICharacter::ShouldOrientToFloor() const
	{
		MICharacter_eventShouldOrientToFloor_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ShouldOrientToFloor),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMICharacter::StaticRegisterNativesAMICharacter()
	{
		UClass* Class = AMICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForwardMovementInput", &AMICharacter::execAddForwardMovementInput },
			{ "AddRightMovementInput", &AMICharacter::execAddRightMovementInput },
			{ "CanContinueFloorSlide", &AMICharacter::execCanContinueFloorSlide },
			{ "CanCrouchRun", &AMICharacter::execCanCrouchRun },
			{ "CanHitCharacter", &AMICharacter::execCanHitCharacter },
			{ "CanHitWall", &AMICharacter::execCanHitWall },
			{ "CanPlayHitByCharacterVoice", &AMICharacter::execCanPlayHitByCharacterVoice },
			{ "CanScuffWall", &AMICharacter::execCanScuffWall },
			{ "CanSprint", &AMICharacter::execCanSprint },
			{ "CanStartFloorSlide", &AMICharacter::execCanStartFloorSlide },
			{ "CanStartRagdoll", &AMICharacter::execCanStartRagdoll },
			{ "CanStopRagdoll", &AMICharacter::execCanStopRagdoll },
			{ "GetMIMovementState", &AMICharacter::execGetMIMovementState },
			{ "GetOrientToFloorSettings", &AMICharacter::execGetOrientToFloorSettings },
			{ "GetPhysicalMaterialOverride", &AMICharacter::execGetPhysicalMaterialOverride },
			{ "GetViewComponentStateCameras", &AMICharacter::execGetViewComponentStateCameras },
			{ "GetWeaponAnimInfo", &AMICharacter::execGetWeaponAnimInfo },
			{ "IsAimingWeapon", &AMICharacter::execIsAimingWeapon },
			{ "IsCurrentFloorMovable", &AMICharacter::execIsCurrentFloorMovable },
			{ "IsFloorSliding", &AMICharacter::execIsFloorSliding },
			{ "IsOnWalkableFloor", &AMICharacter::execIsOnWalkableFloor },
			{ "IsRagdoll", &AMICharacter::execIsRagdoll },
			{ "IsRagdollStandingUp", &AMICharacter::execIsRagdollStandingUp },
			{ "IsSprinting", &AMICharacter::execIsSprinting },
			{ "IsViewComponentStateActive", &AMICharacter::execIsViewComponentStateActive },
			{ "OnCapsuleComponentHit", &AMICharacter::execOnCapsuleComponentHit },
			{ "OnRagdollStandUp", &AMICharacter::execOnRagdollStandUp },
			{ "OnRep_InitialOffset", &AMICharacter::execOnRep_InitialOffset },
			{ "OnRep_IsCrouchRunning", &AMICharacter::execOnRep_IsCrouchRunning },
			{ "OnRep_IsFloorSliding", &AMICharacter::execOnRep_IsFloorSliding },
			{ "OnRep_IsSprinting", &AMICharacter::execOnRep_IsSprinting },
			{ "OnRep_Ragdoll", &AMICharacter::execOnRep_Ragdoll },
			{ "OnRep_SimulatedPivot", &AMICharacter::execOnRep_SimulatedPivot },
			{ "OnStopMontage", &AMICharacter::execOnStopMontage },
			{ "SendInputToServer", &AMICharacter::execSendInputToServer },
			{ "ServerReceiveRagdoll", &AMICharacter::execServerReceiveRagdoll },
			{ "SetMovementSystem", &AMICharacter::execSetMovementSystem },
			{ "ShouldAutoFloorSlide", &AMICharacter::execShouldAutoFloorSlide },
			{ "ShouldCycleMovement", &AMICharacter::execShouldCycleMovement },
			{ "ShouldOrientToFloor", &AMICharacter::execShouldOrientToFloor },
			{ "Sprint", &AMICharacter::execSprint },
			{ "StartRagdoll", &AMICharacter::execStartRagdoll },
			{ "StopRagdoll", &AMICharacter::execStopRagdoll },
			{ "StopSprinting", &AMICharacter::execStopSprinting },
			{ "TakeShotPhysicsImpact", &AMICharacter::execTakeShotPhysicsImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics
	{
		struct MICharacter_eventAddForwardMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddForwardMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddForwardMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((MICharacter_eventAddForwardMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventAddForwardMovementInput_Parms), &Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_ScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Call instead of AddMovementInput when applying forward input \n\x09 * Pass the exact same information you would pass to AddMovementInput\n\n\x09* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\n\x09 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call instead of AddMovementInput when applying forward input\nPass the exact same information you would pass to AddMovementInput\n\nAdd movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "AddForwardMovementInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::MICharacter_eventAddForwardMovementInput_Parms), Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_AddForwardMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics
	{
		struct MICharacter_eventAddRightMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddRightMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddRightMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((MICharacter_eventAddRightMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventAddRightMovementInput_Parms), &Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_ScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Call instead of AddMovementInput when applying right input\n\x09 * Pass the exact same information you would pass to AddMovementInput\n\n\x09* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\n\x09 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call instead of AddMovementInput when applying right input\nPass the exact same information you would pass to AddMovementInput\n\nAdd movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "AddRightMovementInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::MICharacter_eventAddRightMovementInput_Parms), Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_AddRightMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanContinueFloorSlide_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanContinueFloorSlide_Parms), &Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanContinueFloorSlide", nullptr, nullptr, sizeof(MICharacter_eventCanContinueFloorSlide_Parms), Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanCrouchRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanCrouchRun_Parms), &Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouch Run" },
		{ "Comment", "/** \n\x09 * Override to change when character can crouch run\n\x09 \n\x09 * Default conditions:\n\x09 * - bCanEverCrouchRun is true\n\x09 * - Not being destroyed\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to change when character can crouch run\n\nDefault conditions:\n- bCanEverCrouchRun is true\n- Not being destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanCrouchRun", nullptr, nullptr, sizeof(MICharacter_eventCanCrouchRun_Parms), Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanCrouchRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanCrouchRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanHitCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanHitCharacter_Parms), &Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Always returns true by default, used for custom logic to override */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Always returns true by default, used for custom logic to override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanHitCharacter", nullptr, nullptr, sizeof(MICharacter_eventCanHitCharacter_Parms), Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanHitCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanHitCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanHitWall_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanHitWall_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanHitWall_Parms), &Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** Always returns true by default, used for custom logic to override */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Always returns true by default, used for custom logic to override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanHitWall", nullptr, nullptr, sizeof(MICharacter_eventCanHitWall_Parms), Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanHitWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanHitWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanPlayHitByCharacterVoice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanPlayHitByCharacterVoice_Parms), &Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact|Character" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanPlayHitByCharacterVoice", nullptr, nullptr, sizeof(MICharacter_eventCanPlayHitByCharacterVoice_Parms), Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanScuffWall_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanScuffWall_Parms), &Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** Always returns true by default, used for custom logic to override */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Always returns true by default, used for custom logic to override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanScuffWall", nullptr, nullptr, sizeof(MICharacter_eventCanScuffWall_Parms), Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanScuffWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanScuffWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanSprint_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanSprint_Parms), &Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/** \n\x09 * Override to change when character can sprint\n\x09 \n\x09 * Default conditions:\n\x09 * - Not being destroyed\n\x09 * - Is providing input\n\x09 * - Input is suitably in direction of character facing direction @see UMICharacterMovement::GetMaxSprintDirectionInputNormal()\n\x09 * - When strafing orientation is set to right, Input isn't moving backwards\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to change when character can sprint\n\nDefault conditions:\n- Not being destroyed\n- Is providing input\n- Input is suitably in direction of character facing direction @see UMICharacterMovement::GetMaxSprintDirectionInputNormal()\n- When strafing orientation is set to right, Input isn't moving backwards" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanSprint", nullptr, nullptr, sizeof(MICharacter_eventCanSprint_Parms), Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStartFloorSlide_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStartFloorSlide_Parms), &Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "// Floor sliding\n" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Floor sliding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStartFloorSlide", nullptr, nullptr, sizeof(MICharacter_eventCanStartFloorSlide_Parms), Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStartFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStartRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStartRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Override to return true if we can enter ragdoll. Always true by default. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return true if we can enter ragdoll. Always true by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStartRagdoll", nullptr, nullptr, sizeof(MICharacter_eventCanStartRagdoll_Parms), Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStopRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStopRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Override to return true if we can leave ragdoll and stand back up. Always true by default. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return true if we can leave ragdoll and stand back up. Always true by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStopRagdoll", nullptr, nullptr, sizeof(MICharacter_eventCanStopRagdoll_Parms), Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics
	{
		struct MICharacter_eventGetMIMovementState_Parms
		{
			EMIMovementState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetMIMovementState_Parms, ReturnValue), Z_Construct_UEnum_MoveIt_EMIMovementState, METADATA_PARAMS(nullptr, 0) }; // 2714741395
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetMIMovementState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::MICharacter_eventGetMIMovementState_Parms), Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetMIMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_GetMIMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetOrientToFloorSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(nullptr, 0) }; // 911318808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Settings for currently orienting to the floor */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Settings for currently orienting to the floor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetOrientToFloorSettings", nullptr, nullptr, sizeof(MICharacter_eventGetOrientToFloorSettings_Parms), Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetPhysicalMaterialOverride_Parms, ReturnValue), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * If returning a physical material, will take absolute priority\n\x09 * Perfect for having footsteps with special FX / etc. for when playing abilities\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If returning a physical material, will take absolute priority\nPerfect for having footsteps with special FX / etc. for when playing abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetPhysicalMaterialOverride", nullptr, nullptr, sizeof(MICharacter_eventGetPhysicalMaterialOverride_Parms), Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetViewComponentStateCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Must return all cameras used by the character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Must return all cameras used by the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetViewComponentStateCameras", nullptr, nullptr, sizeof(MICharacter_eventGetViewComponentStateCameras_Parms), Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetWeaponAnimInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(nullptr, 0) }; // 1647259094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**\n\x09 * Override to return information about current weapon\n\x09 * Used by animation instance to offset the weapon position and grip with left hand properly\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return information about current weapon\nUsed by animation instance to offset the weapon position and grip with left hand properly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetWeaponAnimInfo", nullptr, nullptr, sizeof(MICharacter_eventGetWeaponAnimInfo_Parms), Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsAimingWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsAimingWeapon_Parms), &Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Override to notify when weapon is being aimed (used by animation blueprint) */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to notify when weapon is being aimed (used by animation blueprint)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsAimingWeapon", nullptr, nullptr, sizeof(MICharacter_eventIsAimingWeapon_Parms), Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsAimingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics
	{
		struct MICharacter_eventIsCurrentFloorMovable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsCurrentFloorMovable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsCurrentFloorMovable_Parms), &Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsCurrentFloorMovable", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::MICharacter_eventIsCurrentFloorMovable_Parms), Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics
	{
		struct MICharacter_eventIsFloorSliding_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsFloorSliding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsFloorSliding_Parms), &Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsFloorSliding", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::MICharacter_eventIsFloorSliding_Parms), Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics
	{
		struct MICharacter_eventIsOnWalkableFloor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsOnWalkableFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsOnWalkableFloor_Parms), &Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterMovement" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsOnWalkableFloor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::MICharacter_eventIsOnWalkableFloor_Parms), Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics
	{
		struct MICharacter_eventIsRagdoll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * True if currently in ragdoll\n\x09 * Available to everyone (simulated, auton, server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if currently in ragdoll\nAvailable to everyone (simulated, auton, server)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsRagdoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::MICharacter_eventIsRagdoll_Parms), Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics
	{
		struct MICharacter_eventIsRagdollStandingUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsRagdollStandingUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsRagdollStandingUp_Parms), &Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * True if ragdoll is currently standing up\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if ragdoll is currently standing up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsRagdollStandingUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::MICharacter_eventIsRagdollStandingUp_Parms), Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsSprinting_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/** True if sprinting and moving fast enough to actually enter sprinting state (always true by default) */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if sprinting and moving fast enough to actually enter sprinting state (always true by default)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsSprinting", nullptr, nullptr, sizeof(MICharacter_eventIsSprinting_Parms), Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventIsViewComponentStateActive_Parms, State), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsViewComponentStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsViewComponentStateActive_Parms), &Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** \n\x09 * Must return whether each applicable character state is active\n\x09 * @see CharacterStates\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Must return whether each applicable character state is active\n@see CharacterStates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsViewComponentStateActive", nullptr, nullptr, sizeof(MICharacter_eventIsViewComponentStateActive_Parms), Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactNiagara_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactNiagara_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Bone Impact Niagara" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetBoneImpactNiagara", nullptr, nullptr, sizeof(MICharacter_eventK2_GetBoneImpactNiagara_Parms), Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactParticle_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Bone Impact Particle" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetBoneImpactParticle", nullptr, nullptr, sizeof(MICharacter_eventK2_GetBoneImpactParticle_Parms), Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactSound_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetBoneImpactSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/** \n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a \n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Bone Impact Sound" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetBoneImpactSound", nullptr, nullptr, sizeof(MICharacter_eventK2_GetBoneImpactSound_Parms), Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitNiagara_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitNiagara_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Hit Niagara" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetHitNiagara", nullptr, nullptr, sizeof(MICharacter_eventK2_GetHitNiagara_Parms), Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitParticle_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Hit Particle" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetHitParticle", nullptr, nullptr, sizeof(MICharacter_eventK2_GetHitParticle_Parms), Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetHitParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetHitParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitSound_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetHitSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/** \n\x09 * If the physical material has LookupType \"Blueprint\" then this function is used to override on a \n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Hit Sound" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If the physical material has LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetHitSound", nullptr, nullptr, sizeof(MICharacter_eventK2_GetHitSound_Parms), Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetHitSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetHitSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffNiagara_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffNiagara_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Scuff Niagara" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetScuffNiagara", nullptr, nullptr, sizeof(MICharacter_eventK2_GetScuffNiagara_Parms), Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffParticle_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/**\n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a\n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Scuff Particle" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetScuffParticle", nullptr, nullptr, sizeof(MICharacter_eventK2_GetScuffParticle_Parms), Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_PhysMat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffSound_Parms, PhysMat), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_PhysMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_PhysMat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventK2_GetScuffSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_PhysMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/** \n\x09 * Requires physical material LookupType \"Blueprint\" then this function is used to override on a \n\x09 * per-character basis which asset is used\n\x09 * @warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN\n\x09 */" },
		{ "DisplayName", "Get Scuff Sound" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Requires physical material LookupType \"Blueprint\" then this function is used to override on a\nper-character basis which asset is used\n@warning: NOT RECOMMENDED - CALLED FREQUENTLY AND NOT PERFORMANT - LAST RESORT FOR BP ONLY USERS REQUIRING PER-CHARACTER RETURN" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_GetScuffSound", nullptr, nullptr, sizeof(MICharacter_eventK2_GetScuffSound_Parms), Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_GetScuffSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_GetScuffSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Called whenever anim instance changes\n\x09 */" },
		{ "DisplayName", "On Anim Instance Changed" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called whenever anim instance changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnAnimInstanceChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Called any time the character pivots (changes direction, causing animation and brief movement changes */" },
		{ "DisplayName", "On Pivot" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called any time the character pivots (changes direction, causing animation and brief movement changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when ragdoll finishes standing up */" },
		{ "DisplayName", "On Ragdoll Stand Up" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when ragdoll finishes standing up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnRagdollStandUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouch Run" },
		{ "Comment", "/** Called when character starts to Crouch Run */" },
		{ "DisplayName", "On Start Crouch Run" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character starts to Crouch Run" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartCrouchRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "/** Called when character starts to floor slide */" },
		{ "DisplayName", "On Start Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character starts to floor slide" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartFloorSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when starting to ragdoll */" },
		{ "DisplayName", "On Start Ragdoll" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when starting to ragdoll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/** Called when character starts to sprint */" },
		{ "DisplayName", "On Start Sprint" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character starts to sprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crouch Run" },
		{ "Comment", "/** Called when character stops Crouch Runing */" },
		{ "DisplayName", "On Stop Crouch Run" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character stops Crouch Runing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopCrouchRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "/** Called when character stops floor sliding */" },
		{ "DisplayName", "On Stop Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character stops floor sliding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopFloorSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when stopping ragdoll and standing up */" },
		{ "DisplayName", "On Stop Ragdoll" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when stopping ragdoll and standing up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/** Called when character stops sprinting */" },
		{ "DisplayName", "On Stop Sprint" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character stops sprinting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics
	{
		struct MICharacter_eventOnCapsuleComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnCapsuleComponentHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::MICharacter_eventOnCapsuleComponentHit_Parms), Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRagdollStandUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRagdollStandUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_InitialOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Crouch running replicated from server */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Handle Crouch running replicated from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_IsCrouchRunning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Floor Sliding replicated from server */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Handle Floor Sliding replicated from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_IsFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Sprinting replicated from server */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Handle Sprinting replicated from server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_IsSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_Ragdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_SimulatedPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics
	{
		struct MICharacter_eventOnStopMontage_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnStopMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((MICharacter_eventOnStopMontage_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventOnStopMontage_Parms), &Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Used to interpolate back to facing direction */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Used to interpolate back to facing direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnStopMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::MICharacter_eventOnStopMontage_Parms), Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnStopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_OnStopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSendInputToServer_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSendInputToServer_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sends compressed local inputs to server, which is then replicated to proxies */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sends compressed local inputs to server, which is then replicated to proxies" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "SendInputToServer", nullptr, nullptr, sizeof(MICharacter_eventSendInputToServer_Parms), Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_SendInputToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRagdollActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRagdollActorLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation = { "NewRagdollActorLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventServerReceiveRagdoll_Parms, NewRagdollActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send actor location to server during ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Send actor location to server during ragdoll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ServerReceiveRagdoll", nullptr, nullptr, sizeof(MICharacter_eventServerReceiveRagdoll_Parms), Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics
	{
		struct MICharacter_eventSetMovementSystem_Parms
		{
			EMIMovementSystem NewMovement;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovement_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement = { "NewMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSetMovementSystem_Parms, NewMovement), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(nullptr, 0) }; // 595102587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/**\n\x09 * Change the current movement system\n\x09 * NOT replicated (you should handle this yourself)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Change the current movement system\nNOT replicated (you should handle this yourself)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "SetMovementSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::MICharacter_eventSetMovementSystem_Parms), Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_SetMovementSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventShouldAutoFloorSlide_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventShouldAutoFloorSlide_Parms), &Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "/**\n\x09 * If true and conditions for floor sliding are met, will floor slide regardless of input\n\x09 * @see CanContinueFloorSlide() - you will need to make sure it can floor slide when it should\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true and conditions for floor sliding are met, will floor slide regardless of input\n@see CanContinueFloorSlide() - you will need to make sure it can floor slide when it should" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ShouldAutoFloorSlide", nullptr, nullptr, sizeof(MICharacter_eventShouldAutoFloorSlide_Parms), Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventShouldCycleMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventShouldCycleMovement_Parms), &Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/**\n\x09 * @return True if movement should be cycled\n\x09 * Cycling provides a minimum turning circle preventing spinning on the spot\n\x09 * By default is True if MovementSystem is CycleOrientToMovement\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "@return True if movement should be cycled\nCycling provides a minimum turning circle preventing spinning on the spot\nBy default is True if MovementSystem is CycleOrientToMovement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ShouldCycleMovement", nullptr, nullptr, sizeof(MICharacter_eventShouldCycleMovement_Parms), Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ShouldCycleMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventShouldOrientToFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventShouldOrientToFloor_Parms), &Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** @return True if character should orient to the floor */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "@return True if character should orient to the floor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ShouldOrientToFloor", nullptr, nullptr, sizeof(MICharacter_eventShouldOrientToFloor_Parms), Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**\n\x09 * Request the character to start sprinting.\n\x09 * @see OnStartSprinting\n\x09 * @see IsSprinting\n\x09 * @see MICharacterMovement->WantsToSprint\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Request the character to start sprinting.\n@see OnStartSprinting\n@see IsSprinting\n@see MICharacterMovement->WantsToSprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Call this to enter ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call this to enter ragdoll" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StartRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Call this to stop ragdoll and stand back up */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call this to stop ragdoll and stand back up" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StopRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/**\n\x09 * Request the character to stop sprinting.\n\x09 * @see OnStopSprinting\n\x09 * @see IsSprinting\n\x09 * @see MICharacterMovement->WantsToSprint\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Request the character to stop sprinting.\n@see OnStopSprinting\n@see IsSprinting\n@see MICharacterMovement->WantsToSprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics
	{
		struct MICharacter_eventTakeShotPhysicsImpact_Parms
		{
			FName BoneName;
			USkeletalMeshComponent* HitMesh;
			FVector HitNormal;
			float HitMagnitude;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh = { "HitMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude = { "HitMagnitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitMagnitude), METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physical Impact|Take Shot" },
		{ "Comment", "/** Call to trigger physical animation from being hit or shot */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call to trigger physical animation from being hit or shot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "TakeShotPhysicsImpact", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::MICharacter_eventTakeShotPhysicsImpact_Parms), Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMICharacter);
	UClass* Z_Construct_UClass_AMICharacter_NoRegister()
	{
		return AMICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MICharacterMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRootYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialRootYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientDefaultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrientDefaultSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientMatchGround_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrientMatchGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopRootInitialRotationYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopRootInitialRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopRootMotionOrientTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopRootMotionOrientTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSystemChangeOrientRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSystemChangeOrientRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StrafeOrientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StrafeOrientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableControlRotationDuringRootMotion_MetaData[];
#endif
		static void NewProp_bDisableControlRotationDuringRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableControlRotationDuringRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollStandUpTimeFromAnimation_MetaData[];
#endif
		static void NewProp_bRagdollStandUpTimeFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollStandUpTimeFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitWallEnabled_MetaData[];
#endif
		static void NewProp_bHitWallEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitWallEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHitWallWhileMontagePlaying_MetaData[];
#endif
		static void NewProp_bCanHitWallWhileMontagePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHitWallWhileMontagePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHitWallWhileRootMotionPlaying_MetaData[];
#endif
		static void NewProp_bCanHitWallWhileRootMotionPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHitWallWhileRootMotionPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitCharacterEnabled_MetaData[];
#endif
		static void NewProp_bHitCharacterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitCharacterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHitCharacterWhileMontagePlaying_MetaData[];
#endif
		static void NewProp_bCanHitCharacterWhileMontagePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHitCharacterWhileMontagePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData[];
#endif
		static void NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHitCharacterWhileRootMotionPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatedPivot_MetaData[];
#endif
		static void NewProp_bSimulatedPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatedPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnGround_MetaData[];
#endif
		static void NewProp_bRagdollOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollStandUpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpFace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RagdollStandUpFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpBack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RagdollStandUpBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollPelvisBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollPelvisBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollAggressiveSyncTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollAggressiveSyncTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollAggressiveSyncRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollAggressiveSyncRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollNormalSyncRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollNormalSyncRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollSmallDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollSmallDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollLargeDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollLargeDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitWallMinInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitWallMinInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitWall_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnScuffWall_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScuffWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactLODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImpactLODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitWallImpactVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitWallImpactVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitImpactVelocityToPhysicsImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitImpactVelocityToPhysicsImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitImpactPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitImpactPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotImpactPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotImpactPhysics;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShotImpactBoneRedirects_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShotImpactBoneRedirects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotImpactBoneRedirects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ShotImpactBoneRedirects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacterImpactPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitCharacterImpactPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterImpactPhysics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitByCharacterImpactPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacterVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCharacterVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacterGrunt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCharacterGrunt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterGrunt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitByCharacterGrunt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterVoice_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitByCharacterVoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCharacterMinInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCharacterMinInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterMinInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterMinInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterMinVoiceInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterMinVoiceInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffWallSoundVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuffWallSoundVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffWallSoundMinInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuffWallSoundMinInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffWallParticleMinInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuffWallParticleMinInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMaxUpNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitMaxUpNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitMaxMovementNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitMaxMovementNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffMaxUpNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuffMaxUpNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScuffMaxMovementNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScuffMaxMovementNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitWallAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitWallAudioComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotBonePhysicsImpacts_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShotBonePhysicsImpacts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotBonePhysicsImpacts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ShotBonePhysicsImpacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFloorSliding_MetaData[];
#endif
		static void NewProp_bIsFloorSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouchRunning_MetaData[];
#endif
		static void NewProp_bIsCrouchRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouchRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEverCrouchRun_MetaData[];
#endif
		static void NewProp_bCanEverCrouchRun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEverCrouchRun;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AirCrouchBehaviour_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirCrouchBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AirCrouchBehaviour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingCrouch_MetaData[];
#endif
		static void NewProp_bPendingCrouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingCrouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNonZeroInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousNonZeroInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRagdoll_MetaData[];
#endif
		static void NewProp_bRagdoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRagdoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RagdollActorLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCameras_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameras_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCameras;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMICharacter_AddForwardMovementInput, "AddForwardMovementInput" }, // 2958633056
		{ &Z_Construct_UFunction_AMICharacter_AddRightMovementInput, "AddRightMovementInput" }, // 39332018
		{ &Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide, "CanContinueFloorSlide" }, // 1893081441
		{ &Z_Construct_UFunction_AMICharacter_CanCrouchRun, "CanCrouchRun" }, // 2066190273
		{ &Z_Construct_UFunction_AMICharacter_CanHitCharacter, "CanHitCharacter" }, // 2277335835
		{ &Z_Construct_UFunction_AMICharacter_CanHitWall, "CanHitWall" }, // 93597730
		{ &Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice, "CanPlayHitByCharacterVoice" }, // 712008167
		{ &Z_Construct_UFunction_AMICharacter_CanScuffWall, "CanScuffWall" }, // 1280396821
		{ &Z_Construct_UFunction_AMICharacter_CanSprint, "CanSprint" }, // 251703453
		{ &Z_Construct_UFunction_AMICharacter_CanStartFloorSlide, "CanStartFloorSlide" }, // 1633654813
		{ &Z_Construct_UFunction_AMICharacter_CanStartRagdoll, "CanStartRagdoll" }, // 3782353464
		{ &Z_Construct_UFunction_AMICharacter_CanStopRagdoll, "CanStopRagdoll" }, // 2302628404
		{ &Z_Construct_UFunction_AMICharacter_GetMIMovementState, "GetMIMovementState" }, // 3610436802
		{ &Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings, "GetOrientToFloorSettings" }, // 3560823922
		{ &Z_Construct_UFunction_AMICharacter_GetPhysicalMaterialOverride, "GetPhysicalMaterialOverride" }, // 879085533
		{ &Z_Construct_UFunction_AMICharacter_GetViewComponentStateCameras, "GetViewComponentStateCameras" }, // 1110440477
		{ &Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo, "GetWeaponAnimInfo" }, // 1941629944
		{ &Z_Construct_UFunction_AMICharacter_IsAimingWeapon, "IsAimingWeapon" }, // 2313448551
		{ &Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable, "IsCurrentFloorMovable" }, // 4010434221
		{ &Z_Construct_UFunction_AMICharacter_IsFloorSliding, "IsFloorSliding" }, // 4104574040
		{ &Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor, "IsOnWalkableFloor" }, // 572806842
		{ &Z_Construct_UFunction_AMICharacter_IsRagdoll, "IsRagdoll" }, // 3104961137
		{ &Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp, "IsRagdollStandingUp" }, // 4116166014
		{ &Z_Construct_UFunction_AMICharacter_IsSprinting, "IsSprinting" }, // 3186574764
		{ &Z_Construct_UFunction_AMICharacter_IsViewComponentStateActive, "IsViewComponentStateActive" }, // 295464867
		{ &Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactNiagara, "K2_GetBoneImpactNiagara" }, // 1815777354
		{ &Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactParticle, "K2_GetBoneImpactParticle" }, // 2704958188
		{ &Z_Construct_UFunction_AMICharacter_K2_GetBoneImpactSound, "K2_GetBoneImpactSound" }, // 2718677709
		{ &Z_Construct_UFunction_AMICharacter_K2_GetHitNiagara, "K2_GetHitNiagara" }, // 3033163299
		{ &Z_Construct_UFunction_AMICharacter_K2_GetHitParticle, "K2_GetHitParticle" }, // 3435185502
		{ &Z_Construct_UFunction_AMICharacter_K2_GetHitSound, "K2_GetHitSound" }, // 3424516828
		{ &Z_Construct_UFunction_AMICharacter_K2_GetScuffNiagara, "K2_GetScuffNiagara" }, // 2756954440
		{ &Z_Construct_UFunction_AMICharacter_K2_GetScuffParticle, "K2_GetScuffParticle" }, // 2314898603
		{ &Z_Construct_UFunction_AMICharacter_K2_GetScuffSound, "K2_GetScuffSound" }, // 2462288696
		{ &Z_Construct_UFunction_AMICharacter_K2_OnAnimInstanceChanged, "K2_OnAnimInstanceChanged" }, // 1540804376
		{ &Z_Construct_UFunction_AMICharacter_K2_OnPivot, "K2_OnPivot" }, // 4082481299
		{ &Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp, "K2_OnRagdollStandUp" }, // 2827401020
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartCrouchRun, "K2_OnStartCrouchRun" }, // 2377342012
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide, "K2_OnStartFloorSlide" }, // 2013459827
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll, "K2_OnStartRagdoll" }, // 691480024
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartSprint, "K2_OnStartSprint" }, // 33087641
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopCrouchRun, "K2_OnStopCrouchRun" }, // 2417573039
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide, "K2_OnStopFloorSlide" }, // 2981847757
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll, "K2_OnStopRagdoll" }, // 4084999745
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopSprint, "K2_OnStopSprint" }, // 1575490261
		{ &Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit, "OnCapsuleComponentHit" }, // 4029276097
		{ &Z_Construct_UFunction_AMICharacter_OnRagdollStandUp, "OnRagdollStandUp" }, // 3709649550
		{ &Z_Construct_UFunction_AMICharacter_OnRep_InitialOffset, "OnRep_InitialOffset" }, // 3727193785
		{ &Z_Construct_UFunction_AMICharacter_OnRep_IsCrouchRunning, "OnRep_IsCrouchRunning" }, // 717081550
		{ &Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding, "OnRep_IsFloorSliding" }, // 241323160
		{ &Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting, "OnRep_IsSprinting" }, // 221497830
		{ &Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll, "OnRep_Ragdoll" }, // 1619497195
		{ &Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot, "OnRep_SimulatedPivot" }, // 2404002124
		{ &Z_Construct_UFunction_AMICharacter_OnStopMontage, "OnStopMontage" }, // 20411301
		{ &Z_Construct_UFunction_AMICharacter_SendInputToServer, "SendInputToServer" }, // 3317960725
		{ &Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll, "ServerReceiveRagdoll" }, // 1077862352
		{ &Z_Construct_UFunction_AMICharacter_SetMovementSystem, "SetMovementSystem" }, // 2574352525
		{ &Z_Construct_UFunction_AMICharacter_ShouldAutoFloorSlide, "ShouldAutoFloorSlide" }, // 3917931807
		{ &Z_Construct_UFunction_AMICharacter_ShouldCycleMovement, "ShouldCycleMovement" }, // 1621711294
		{ &Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor, "ShouldOrientToFloor" }, // 2740617080
		{ &Z_Construct_UFunction_AMICharacter_Sprint, "Sprint" }, // 2163979922
		{ &Z_Construct_UFunction_AMICharacter_StartRagdoll, "StartRagdoll" }, // 2242198904
		{ &Z_Construct_UFunction_AMICharacter_StopRagdoll, "StopRagdoll" }, // 2908985489
		{ &Z_Construct_UFunction_AMICharacter_StopSprinting, "StopSprinting" }, // 3350532008
		{ &Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact, "TakeShotPhysicsImpact" }, // 3378828914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MICharacter.h" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Movement component used for movement logic in various movement modes (walking, sprinting, falling, etc), containing relevant settings and functions to control movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement component used for movement logic in various movement modes (walking, sprinting, falling, etc), containing relevant settings and functions to control movement." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement = { "MICharacterMovement", nullptr, (EPropertyFlags)0x00400000000a201d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MICharacterMovement), Z_Construct_UClass_UMICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_InitialRootYawOffset_MetaData[] = {
		{ "Comment", "/** Replicated to late joiners (or as they become relevant? docs unclear) to somewhat sync up the facing rotation */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Replicated to late joiners (or as they become relevant? docs unclear) to somewhat sync up the facing rotation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_InitialRootYawOffset = { "InitialRootYawOffset", "OnRep_InitialOffset", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, InitialRootYawOffset), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_InitialRootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_InitialRootYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Default settings that are passed to GetOrientToFloorSettings() */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Default settings that are passed to GetOrientToFloorSettings()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings = { "OrientDefaultSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OrientDefaultSettings), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData)) }; // 911318808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** \n\x09 * Convenience settings to pass to GetOrientToFloorSettings() to make the character orient to the floor\n\x09 * Helpful for floor sliding\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Convenience settings to pass to GetOrientToFloorSettings() to make the character orient to the floor\nHelpful for floor sliding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround = { "OrientMatchGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OrientMatchGround), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData)) }; // 911318808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootInitialRotationYaw_MetaData[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootInitialRotationYaw = { "StopRootInitialRotationYaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, StopRootInitialRotationYaw), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootInitialRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootInitialRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootMotionOrientTime_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** How long it takes for character to face control rotation yaw (if enabled) after finishing a root motion montage */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How long it takes for character to face control rotation yaw (if enabled) after finishing a root motion montage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootMotionOrientTime = { "StopRootMotionOrientTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, StopRootMotionOrientTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootMotionOrientTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootMotionOrientTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** How fast the character turns back to face the camera when switching MovementSystem back to OrientToView */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast the character turns back to face the camera when switching MovementSystem back to OrientToView" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate = { "MovementSystemChangeOrientRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MovementSystemChangeOrientRate), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** \n\x09 * Direction to orient in when strafing left\n\x09 * Great for over the shoulder movement\n\x09 * NOT replicated - you must handle this yourself if you want to change it during runtime and other players to see it\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Direction to orient in when strafing left\nGreat for over the shoulder movement\nNOT replicated - you must handle this yourself if you want to change it during runtime and other players to see it" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation = { "StrafeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, StrafeOrientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData)) }; // 3422588749
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData[] = {
		{ "BlueprintSetter", "SetMovementSystem" },
		{ "Category", "CharacterMovement" },
		{ "Comment", "/**\n\x09 * General type of movement used\n\x09 * OrientToView faces the camera\n\x09 * OrientToMovement is similar to Third Person Template\n\x09 * CycleOrientToMovement is same as OrientToMovement but has a minimum turning circle like Zelda BOTW or Mario Odyssey so they can't simply spin on the spot, combines with pivot to allow direction change on the spot\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "General type of movement used\nOrientToView faces the camera\nOrientToMovement is similar to Third Person Template\nCycleOrientToMovement is same as OrientToMovement but has a minimum turning circle like Zelda BOTW or Mario Odyssey so they can't simply spin on the spot, combines with pivot to allow direction change on the spot" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem = { "MovementSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MovementSystem), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData)) }; // 595102587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If false, will not rotate during root motion montage */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If false, will not rotate during root motion montage" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bDisableControlRotationDuringRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion = { "bDisableControlRotationDuringRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * If true, the amount of time to stand up will be taken from the animation played\n\x09 * Note that this can cause desync when used online due to server and client possibly playing different animations\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, the amount of time to stand up will be taken from the animation played\nNote that this can cause desync when used online due to server and client possibly playing different animations" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdollStandUpTimeFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation = { "bRagdollStandUpTimeFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** Whether Hit Wall can occur */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Whether Hit Wall can occur" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bHitWallEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled = { "bHitWallEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** If true, can apply hit wall effect when montage is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit wall effect when montage is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitWallWhileMontagePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying = { "bCanHitWallWhileMontagePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** If true, can apply hit wall effect when root motion is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit wall effect when root motion is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitWallWhileRootMotionPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying = { "bCanHitWallWhileRootMotionPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Whether Hit Character can occur */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Whether Hit Character can occur" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bHitCharacterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled = { "bHitCharacterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** If true, can apply hit character effect when montage is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit character effect when montage is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitCharacterWhileMontagePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying = { "bCanHitCharacterWhileMontagePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** If true, can apply hit character effect when root motion is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit character effect when root motion is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitCharacterWhileRootMotionPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying = { "bCanHitCharacterWhileRootMotionPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData[] = {
		{ "Comment", "/** Used for simulated proxies to know when to pivot */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Used for simulated proxies to know when to pivot" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bSimulatedPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot = { "bSimulatedPivot", "OnRep_SimulatedPivot", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** True if in ragdoll and ragdoll is currently on the ground. Valid updating character only (usually local, or if unpossessed, server). */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if in ragdoll and ragdoll is currently on the ground. Valid updating character only (usually local, or if unpossessed, server)." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdollOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround = { "bRagdollOnGround", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * How long it takes to stand up if bRagdollStandUpTimeFromAnimation is false\n\x09 */" },
		{ "EditCondition", "!bRagdollStandUpTimeFromAnimation" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How long it takes to stand up if bRagdollStandUpTimeFromAnimation is false" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime = { "RagdollStandUpTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Animation to play when standing up from lying down on face */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Animation to play when standing up from lying down on face" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace = { "RagdollStandUpFace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpFace), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Animation to play when standing up from lying down on back */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Animation to play when standing up from lying down on back" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack = { "RagdollStandUpBack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpBack), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollPelvisBoneName_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Name of pelvis bone used by ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Name of pelvis bone used by ragdoll" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollPelvisBoneName = { "RagdollPelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollPelvisBoneName), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollPelvisBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollPelvisBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncTime_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long the ragdoll will aggressively sync position for after entering ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How long the ragdoll will aggressively sync position for after entering ragdoll" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncTime = { "RagdollAggressiveSyncTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollAggressiveSyncTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncRate_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncRate = { "RagdollAggressiveSyncRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollAggressiveSyncRate), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollNormalSyncRate_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollNormalSyncRate = { "RagdollNormalSyncRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollNormalSyncRate), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollNormalSyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollNormalSyncRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollSmallDistanceThreshold_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Ragdoll must exceed this distance to be pushed towards replicated location */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Ragdoll must exceed this distance to be pushed towards replicated location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollSmallDistanceThreshold = { "RagdollSmallDistanceThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollSmallDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollSmallDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollSmallDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLargeDistanceThreshold_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Ragdoll must exceed this distance to be teleported to replicated location */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Ragdoll must exceed this distance to be teleported to replicated location" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLargeDistanceThreshold = { "RagdollLargeDistanceThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollLargeDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLargeDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLargeDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData[] = {
		{ "Category", "Physical Impact" },
		{ "Comment", "/** Physical material to use when none is assigned to the material being interacted with */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Physical material to use when none is assigned to the material being interacted with" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial = { "DefaultPhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, DefaultPhysicalMaterial), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallMinInterval_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** Minimum time to pass before we hit a wall again */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Minimum time to pass before we hit a wall again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallMinInterval = { "HitWallMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitWallMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallMinInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Sprint" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently sprinting. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently sprinting." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", "OnRep_IsSprinting", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitWall_MetaData[] = {
		{ "Comment", "/** Delegate for hitting a wall */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Delegate for hitting a wall" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitWall = { "OnHitWall", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OnHitWall), Z_Construct_UDelegateFunction_MoveIt_MIHitWallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitWall_MetaData)) }; // 3619079399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OnScuffWall_MetaData[] = {
		{ "Comment", "/** Delegate for scuffing a wall */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Delegate for scuffing a wall" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OnScuffWall = { "OnScuffWall", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OnScuffWall), Z_Construct_UDelegateFunction_MoveIt_MIScuffWallDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnScuffWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnScuffWall_MetaData)) }; // 4168284200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitCharacter_MetaData[] = {
		{ "Comment", "/** Delegate for hitting a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Delegate for hitting a character" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitCharacter = { "OnHitCharacter", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OnHitCharacter), Z_Construct_UDelegateFunction_MoveIt_MIHitCharacterDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitCharacter_MetaData)) }; // 1082698036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/**\n\x09* Max LOD that wall impact is allowed to run\n\x09* For example if you have ImpactLODThreshold at 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop\n\x09*/" },
		{ "DisplayName", "Impact LOD Threshold" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Max LOD that wall impact is allowed to run\nFor example if you have ImpactLODThreshold at 2, it will run until LOD 2 (based on 0 index)\nwhen the component LOD becomes 3, it will stop" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold = { "ImpactLODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ImpactLODThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/**\n\x09 * Impact velocity must exceed this when running into a wall for a \"wall hit\" to occur\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Impact velocity must exceed this when running into a wall for a \"wall hit\" to occur" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold = { "HitWallImpactVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitWallImpactVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** How much Impact Velocity [Time] results in how much Physics Impulse [Value] to play physical animation on the character */" },
		{ "DisplayName", "Hit [Impact Velocity -> Physics Impulse]" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How much Impact Velocity [Time] results in how much Physics Impulse [Value] to play physical animation on the character" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse = { "HitImpactVelocityToPhysicsImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitImpactVelocityToPhysicsImpulse), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall" },
		{ "Comment", "/** Blending for impact from hitting a wall */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from hitting a wall" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics = { "HitImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData)) }; // 2635983691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData[] = {
		{ "Category", "Physical Impact|Take Shot" },
		{ "Comment", "/** \n\x09 * Blending settings for bone impact from being shot\n\x09 * @note BoneName is not used \n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending settings for bone impact from being shot\n@note BoneName is not used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics = { "ShotImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData)) }; // 2635983691
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_ValueProp = { "ShotImpactBoneRedirects", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_Key_KeyProp = { "ShotImpactBoneRedirects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData[] = {
		{ "Category", "Physical Impact|Take Shot" },
		{ "Comment", "/** Primarily used to stop simulation on pelvis and hands/feet (they don't look good) */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Primarily used to stop simulation on pelvis and hands/feet (they don't look good)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects = { "ShotImpactBoneRedirects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotImpactBoneRedirects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Blending for impact from hitting another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from hitting another character" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics = { "HitCharacterImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData)) }; // 2635983691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Blending for impact from being hit by another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from being hit by another character" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics = { "HitByCharacterImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData)) }; // 2635983691
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** How fast we have to be moving to apply hit another character effects */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast we have to be moving to apply hit another character effects" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold = { "HitCharacterVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** How fast other character has to be moving to apply hit another character effects */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast other character has to be moving to apply hit another character effects" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold = { "HitByCharacterVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Sound to play when hitting a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sound to play when hitting a character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt = { "HitCharacterGrunt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterGrunt), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Sound to play when hit by a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sound to play when hit by a character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt = { "HitByCharacterGrunt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterGrunt), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Voice sound to play when hit by a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Voice sound to play when hit by a character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice = { "HitByCharacterVoice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Minimum time to pass before we can hit a character again */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Minimum time to pass before we can hit a character again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval = { "HitCharacterMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** Minimum time to pass before we can be hit by a character again */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Minimum time to pass before we can be hit by a character again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval = { "HitByCharacterMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData[] = {
		{ "Category", "Physical Impact|Character" },
		{ "Comment", "/** How often a voice will play instead of a grunt when hit by another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How often a voice will play instead of a grunt when hit by another character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval = { "HitByCharacterMinVoiceInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterMinVoiceInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData[] = {
		{ "Category", "Physical Impact|Scuff Wall" },
		{ "Comment", "/** \n\x09 * Impact velocity must exceed this when walking into a wall to play a scuffing sound (set in physical material)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Impact velocity must exceed this when walking into a wall to play a scuffing sound (set in physical material)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold = { "ScuffWallSoundVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallSoundVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData[] = {
		{ "Category", "Physical Impact|Scuff Wall" },
		{ "Comment", "/** Minimum time to pass before we can play scuff wall sound again */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Minimum time to pass before we can play scuff wall sound again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval = { "ScuffWallSoundMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallSoundMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData[] = {
		{ "Category", "Physical Impact|Scuff Wall" },
		{ "Comment", "/** Minimum time to pass before we can play scuff wall particle again */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Minimum time to pass before we can play scuff wall particle again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval = { "ScuffWallParticleMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallParticleMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall|Advanced" },
		{ "Comment", "/** Up normal of the wall surface relative to wall up before it wont allow us to hit it */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Up normal of the wall surface relative to wall up before it wont allow us to hit it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal = { "HitMaxUpNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitMaxUpNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData[] = {
		{ "Category", "Physical Impact|Hit Wall|Advanced" },
		{ "Comment", "/** \n\x09 * Movement vector (acceleration) difference to the wall before it wont allow us to hit it \n\x09 * Lower is easier to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement vector (acceleration) difference to the wall before it wont allow us to hit it\nLower is easier to trigger" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal = { "HitMaxMovementNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitMaxMovementNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData[] = {
		{ "Category", "Physical Impact|Scuff Wall|Advanced" },
		{ "Comment", "/** Up normal of the wall surface relative to wall up before it wont allow us to scuff it */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Up normal of the wall surface relative to wall up before it wont allow us to scuff it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal = { "ScuffMaxUpNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffMaxUpNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData[] = {
		{ "Category", "Physical Impact|Scuff Wall|Advanced" },
		{ "Comment", "/** \n\x09 * Movement vector (acceleration) difference to the wall before it wont allow us to scuff it \n\x09 * Lower is easier to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement vector (acceleration) difference to the wall before it wont allow us to scuff it\nLower is easier to trigger" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal = { "ScuffMaxMovementNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffMaxMovementNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent = { "HitWallAudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitWallAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_ValueProp = { "ShotBonePhysicsImpacts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMIShotImpact, METADATA_PARAMS(nullptr, 0) }; // 2524616891
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_Key_KeyProp = { "ShotBonePhysicsImpacts_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData[] = {
		{ "Comment", "/** Mesh -> Impact Struct -> BoneName -> PhysicsBlend */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Mesh -> Impact Struct -> BoneName -> PhysicsBlend" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts = { "ShotBonePhysicsImpacts", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotBonePhysicsImpacts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData)) }; // 2524616891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Game time when sprinting started */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Game time when sprinting started" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime = { "SprintStartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, SprintStartTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently floor sliding. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently floor sliding." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bIsFloorSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding = { "bIsFloorSliding", "OnRep_IsFloorSliding", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning_MetaData[] = {
		{ "Category", "Crouch Run" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently crouch running. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently crouch running." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bIsCrouchRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning = { "bIsCrouchRunning", "OnRep_IsCrouchRunning", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun_MetaData[] = {
		{ "Category", "Crouch Run" },
		{ "Comment", "/** Used to disable crouch running if it doesn't exist in your game */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Used to disable crouch running if it doesn't exist in your game" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanEverCrouchRun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun = { "bCanEverCrouchRun", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** What happens if you press crouch while in the air */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "What happens if you press crouch while in the air" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour = { "AirCrouchBehaviour", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, AirCrouchBehaviour), Z_Construct_UEnum_MoveIt_EMICrouchInAirBehaviour, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour_MetaData)) }; // 1771137444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** True if in air and waiting for landing before crouching */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if in air and waiting for landing before crouching" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bPendingCrouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch = { "bPendingCrouch", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Current input vector. Replicated to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Current input vector. Replicated to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Previous input vector. Available to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Previous input vector. Available to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput = { "PreviousInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, PreviousInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Previous input vector that wasn't zero. Available to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Previous input vector that wasn't zero. Available to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput = { "PreviousNonZeroInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, PreviousNonZeroInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if currently in ragdoll\n\x09 * Available to all valid net roles\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if currently in ragdoll\nAvailable to all valid net roles" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll = { "bRagdoll", "OnRep_Ragdoll", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData[] = {
		{ "Comment", "/** THe current ragdoll location on local client */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "THe current ragdoll location on local client" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation = { "RagdollLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData[] = {
		{ "Comment", "/** \n\x09 * The current actor location while in ragdoll\n\x09 * Available to everyone (simulated, auton, server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "The current actor location while in ragdoll\nAvailable to everyone (simulated, auton, server)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation = { "RagdollActorLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras_Inner = { "CachedCameras", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras = { "CachedCameras", nullptr, (EPropertyFlags)0x0020088000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, CachedCameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_InitialRootYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootInitialRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StopRootMotionOrientTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bDisableControlRotationDuringRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollPelvisBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollAggressiveSyncRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollNormalSyncRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollSmallDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLargeDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallMinInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OnScuffWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OnHitCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsCrouchRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanEverCrouchRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_AirCrouchBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bPendingCrouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_CachedCameras,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMICharacter_Statics::ClassParams = {
		&AMICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMICharacter()
	{
		if (!Z_Registration_Info_UClass_AMICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMICharacter.OuterSingleton, Z_Construct_UClass_AMICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMICharacter.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<AMICharacter>()
	{
		return AMICharacter::StaticClass();
	}

	void AMICharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InitialRootYawOffset(TEXT("InitialRootYawOffset"));
		static const FName Name_bSimulatedPivot(TEXT("bSimulatedPivot"));
		static const FName Name_bIsSprinting(TEXT("bIsSprinting"));
		static const FName Name_bIsFloorSliding(TEXT("bIsFloorSliding"));
		static const FName Name_bIsCrouchRunning(TEXT("bIsCrouchRunning"));
		static const FName Name_Input(TEXT("Input"));
		static const FName Name_bRagdoll(TEXT("bRagdoll"));
		static const FName Name_RagdollActorLocation(TEXT("RagdollActorLocation"));

		const bool bIsValid = true
			&& Name_InitialRootYawOffset == ClassReps[(int32)ENetFields_Private::InitialRootYawOffset].Property->GetFName()
			&& Name_bSimulatedPivot == ClassReps[(int32)ENetFields_Private::bSimulatedPivot].Property->GetFName()
			&& Name_bIsSprinting == ClassReps[(int32)ENetFields_Private::bIsSprinting].Property->GetFName()
			&& Name_bIsFloorSliding == ClassReps[(int32)ENetFields_Private::bIsFloorSliding].Property->GetFName()
			&& Name_bIsCrouchRunning == ClassReps[(int32)ENetFields_Private::bIsCrouchRunning].Property->GetFName()
			&& Name_Input == ClassReps[(int32)ENetFields_Private::Input].Property->GetFName()
			&& Name_bRagdoll == ClassReps[(int32)ENetFields_Private::bRagdoll].Property->GetFName()
			&& Name_RagdollActorLocation == ClassReps[(int32)ENetFields_Private::RagdollActorLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMICharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMICharacter);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::EnumInfo[] = {
		{ EMIMovementState_StaticEnum, TEXT("EMIMovementState"), &Z_Registration_Info_UEnum_EMIMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2714741395U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMICharacter, AMICharacter::StaticClass, TEXT("AMICharacter"), &Z_Registration_Info_UClass_AMICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMICharacter), 2840511878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_3053060850(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
