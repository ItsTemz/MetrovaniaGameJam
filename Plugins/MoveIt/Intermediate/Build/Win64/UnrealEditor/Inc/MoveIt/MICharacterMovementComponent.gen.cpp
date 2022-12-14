// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MICharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMICharacterMovementComponent() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIPivotType();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIFloorSlide();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIPivotType;
	static UEnum* EMIPivotType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIPivotType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIPivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIPivotType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIPivotType"));
		}
		return Z_Registration_Info_UEnum_EMIPivotType.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIPivotType>()
	{
		return EMIPivotType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIPivotType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enumerators[] = {
		{ "EMIPivotType::PT_Velocity", (int64)EMIPivotType::PT_Velocity },
		{ "EMIPivotType::PT_Acceleration", (int64)EMIPivotType::PT_Acceleration },
		{ "EMIPivotType::PT_Disabled", (int64)EMIPivotType::PT_Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "PT_Acceleration.DisplayName", "Acceleration" },
		{ "PT_Acceleration.Name", "EMIPivotType::PT_Acceleration" },
		{ "PT_Acceleration.ToolTip", "Pivot based on input (camera can not result in pivot" },
		{ "PT_Disabled.DisplayName", "Disabled" },
		{ "PT_Disabled.Name", "EMIPivotType::PT_Disabled" },
		{ "PT_Disabled.ToolTip", "Pivot disabled" },
		{ "PT_Velocity.DisplayName", "Velocity" },
		{ "PT_Velocity.Name", "EMIPivotType::PT_Velocity" },
		{ "PT_Velocity.ToolTip", "Pivot based on Velocity (and turning camera can cause pivot)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIPivotType",
		"EMIPivotType",
		Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIPivotType()
	{
		if (!Z_Registration_Info_UEnum_EMIPivotType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIPivotType.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIPivotType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIPivotType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMIFloorSlide;
	static UEnum* EMIFloorSlide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMIFloorSlide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMIFloorSlide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIFloorSlide, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIFloorSlide"));
		}
		return Z_Registration_Info_UEnum_EMIFloorSlide.OuterSingleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIFloorSlide>()
	{
		return EMIFloorSlide_StaticEnum();
	}
	struct Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enumerators[] = {
		{ "EMIFloorSlide::FSR_Sprinting", (int64)EMIFloorSlide::FSR_Sprinting },
		{ "EMIFloorSlide::FSR_SpeedThreshold", (int64)EMIFloorSlide::FSR_SpeedThreshold },
		{ "EMIFloorSlide::FSR_SprintAndSpeedThreshold", (int64)EMIFloorSlide::FSR_SprintAndSpeedThreshold },
		{ "EMIFloorSlide::FSR_Disabled", (int64)EMIFloorSlide::FSR_Disabled },
		{ "EMIFloorSlide::FSR_NeverUsed", (int64)EMIFloorSlide::FSR_NeverUsed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FSR_Disabled.DisplayName", "Currently Disabled" },
		{ "FSR_Disabled.Hidden", "" },
		{ "FSR_Disabled.Name", "EMIFloorSlide::FSR_Disabled" },
		{ "FSR_Disabled.ToolTip", "Floor slide is currently disabled" },
		{ "FSR_NeverUsed.DisplayName", "Never Used" },
		{ "FSR_NeverUsed.Name", "EMIFloorSlide::FSR_NeverUsed" },
		{ "FSR_NeverUsed.ToolTip", "Floor slide is never used" },
		{ "FSR_SpeedThreshold.DisplayName", "Speed Threshold" },
		{ "FSR_SpeedThreshold.Name", "EMIFloorSlide::FSR_SpeedThreshold" },
		{ "FSR_SpeedThreshold.ToolTip", "Must exceed speed threshold to floor slide" },
		{ "FSR_SprintAndSpeedThreshold.DisplayName", "Sprinting and Speed Threshold" },
		{ "FSR_SprintAndSpeedThreshold.Name", "EMIFloorSlide::FSR_SprintAndSpeedThreshold" },
		{ "FSR_SprintAndSpeedThreshold.ToolTip", "Must be sprinting and exceeding speed threshold to floor slide" },
		{ "FSR_Sprinting.DisplayName", "Sprinting" },
		{ "FSR_Sprinting.Name", "EMIFloorSlide::FSR_Sprinting" },
		{ "FSR_Sprinting.ToolTip", "Must be sprinting to floor slide" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		"EMIFloorSlide",
		"EMIFloorSlide",
		Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoveIt_EMIFloorSlide()
	{
		if (!Z_Registration_Info_UEnum_EMIFloorSlide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMIFloorSlide.InnerSingleton, Z_Construct_UEnum_MoveIt_EMIFloorSlide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMIFloorSlide.InnerSingleton;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execGetPlayerPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayerPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execSyncRandomSeed)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncRandomSeed(Z_Param_Out_Stream);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execGetCurrentSyncTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentSyncTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execIsFloorSliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFloorSliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execIsCrouchRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrouchRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execK2_GetMoveForwardNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetMoveForwardNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execK2_GetMoveForwardAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetMoveForwardAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execSetMoveForwardNormal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMoveForwardNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveForwardNormal(Z_Param_InMoveForwardNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execSetMoveForwardAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMoveForwardAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveForwardAngle(Z_Param_InMoveForwardAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execK2_GetMaxSprintDirectionInputNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetMaxSprintDirectionInputNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execK2_GetMaxSprintDirectionInputAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetMaxSprintDirectionInputAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execSetMaxSprintDirectionInputNormal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxSprintDirectionInputNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSprintDirectionInputNormal(Z_Param_InMaxSprintDirectionInputNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execSetMaxSprintDirectionInputAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxSprintDirectionInputAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSprintDirectionInputAngle(Z_Param_InMaxSprintDirectionInputAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execGetAngularVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAngularVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execGetTraversalVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTraversalVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMICharacterMovementComponent::execGetImpactVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetImpactVelocity();
		P_NATIVE_END;
	}
	void UMICharacterMovementComponent::StaticRegisterNativesUMICharacterMovementComponent()
	{
		UClass* Class = UMICharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngularVelocity", &UMICharacterMovementComponent::execGetAngularVelocity },
			{ "GetCurrentSyncTime", &UMICharacterMovementComponent::execGetCurrentSyncTime },
			{ "GetImpactVelocity", &UMICharacterMovementComponent::execGetImpactVelocity },
			{ "GetPlayerPing", &UMICharacterMovementComponent::execGetPlayerPing },
			{ "GetTraversalVelocity", &UMICharacterMovementComponent::execGetTraversalVelocity },
			{ "IsCrouchRunning", &UMICharacterMovementComponent::execIsCrouchRunning },
			{ "IsFloorSliding", &UMICharacterMovementComponent::execIsFloorSliding },
			{ "IsSprinting", &UMICharacterMovementComponent::execIsSprinting },
			{ "K2_GetMaxSprintDirectionInputAngle", &UMICharacterMovementComponent::execK2_GetMaxSprintDirectionInputAngle },
			{ "K2_GetMaxSprintDirectionInputNormal", &UMICharacterMovementComponent::execK2_GetMaxSprintDirectionInputNormal },
			{ "K2_GetMoveForwardAngle", &UMICharacterMovementComponent::execK2_GetMoveForwardAngle },
			{ "K2_GetMoveForwardNormal", &UMICharacterMovementComponent::execK2_GetMoveForwardNormal },
			{ "SetMaxSprintDirectionInputAngle", &UMICharacterMovementComponent::execSetMaxSprintDirectionInputAngle },
			{ "SetMaxSprintDirectionInputNormal", &UMICharacterMovementComponent::execSetMaxSprintDirectionInputNormal },
			{ "SetMoveForwardAngle", &UMICharacterMovementComponent::execSetMoveForwardAngle },
			{ "SetMoveForwardNormal", &UMICharacterMovementComponent::execSetMoveForwardNormal },
			{ "SyncRandomSeed", &UMICharacterMovementComponent::execSyncRandomSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics
	{
		struct MICharacterMovementComponent_eventGetAngularVelocity_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventGetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** @return Angular Velocity */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "@return Angular Velocity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "GetAngularVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::MICharacterMovementComponent_eventGetAngularVelocity_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics
	{
		struct MICharacterMovementComponent_eventGetCurrentSyncTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventGetCurrentSyncTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Return synchronized time (timestamp currently being used on server, timestamp being sent on client) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Return synchronized time (timestamp currently being used on server, timestamp being sent on client)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "GetCurrentSyncTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::MICharacterMovementComponent_eventGetCurrentSyncTime_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics
	{
		struct MICharacterMovementComponent_eventGetImpactVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventGetImpactVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** @return Velocity acceleration computed from the past 3 frames */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "@return Velocity acceleration computed from the past 3 frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "GetImpactVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::MICharacterMovementComponent_eventGetImpactVelocity_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics
	{
		struct MICharacterMovementComponent_eventGetPlayerPing_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventGetPlayerPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Return player ping - requires player state */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Return player ping - requires player state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "GetPlayerPing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::MICharacterMovementComponent_eventGetPlayerPing_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics
	{
		struct MICharacterMovementComponent_eventGetTraversalVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventGetTraversalVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** @return Velocity acceleration computed from the past 3 frames */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "@return Velocity acceleration computed from the past 3 frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "GetTraversalVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::MICharacterMovementComponent_eventGetTraversalVelocity_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics
	{
		struct MICharacterMovementComponent_eventIsCrouchRunning_Parms
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
	void Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacterMovementComponent_eventIsCrouchRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacterMovementComponent_eventIsCrouchRunning_Parms), &Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** True if crouch running */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "True if crouch running" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "IsCrouchRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::MICharacterMovementComponent_eventIsCrouchRunning_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics
	{
		struct MICharacterMovementComponent_eventIsFloorSliding_Parms
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
	void Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacterMovementComponent_eventIsFloorSliding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacterMovementComponent_eventIsFloorSliding_Parms), &Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** True if sliding (on floor or in air) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "True if sliding (on floor or in air)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "IsFloorSliding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::MICharacterMovementComponent_eventIsFloorSliding_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics
	{
		struct MICharacterMovementComponent_eventIsSprinting_Parms
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
	void Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacterMovementComponent_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacterMovementComponent_eventIsSprinting_Parms), &Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** True if sprinting or attempting to sprint */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "True if sprinting or attempting to sprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "IsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::MICharacterMovementComponent_eventIsSprinting_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics
	{
		struct MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the max angle in degrees for sprint input. */" },
		{ "DisplayName", "GetMaxSprintDirectionInputAngle" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ScriptName", "GetMaxSprintDirectionInputAngle" },
		{ "ToolTip", "Get the max angle in degrees for sprint input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "K2_GetMaxSprintDirectionInputAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputAngle_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics
	{
		struct MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputNormal_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputNormal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max normal for sprint input. */" },
		{ "DisplayName", "GetMaxSprintDirectionInputNormal" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ScriptName", "GetMaxSprintDirectionInputNormal" },
		{ "ToolTip", "Set the max normal for sprint input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "K2_GetMaxSprintDirectionInputNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::MICharacterMovementComponent_eventK2_GetMaxSprintDirectionInputNormal_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics
	{
		struct MICharacterMovementComponent_eventK2_GetMoveForwardAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventK2_GetMoveForwardAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the max angle in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied. */" },
		{ "DisplayName", "GetMoveForwardAngle" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ScriptName", "GetMoveForwardAngle" },
		{ "ToolTip", "Get the max angle in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "K2_GetMoveForwardAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::MICharacterMovementComponent_eventK2_GetMoveForwardAngle_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics
	{
		struct MICharacterMovementComponent_eventK2_GetMoveForwardNormal_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventK2_GetMoveForwardNormal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Get the max normal in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied. */" },
		{ "DisplayName", "GetMoveForwardNormal" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ScriptName", "GetMoveForwardNormal" },
		{ "ToolTip", "Get the max normal in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "K2_GetMoveForwardNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::MICharacterMovementComponent_eventK2_GetMoveForwardNormal_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics
	{
		struct MICharacterMovementComponent_eventSetMaxSprintDirectionInputAngle_Parms
		{
			float InMaxSprintDirectionInputAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxSprintDirectionInputAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::NewProp_InMaxSprintDirectionInputAngle = { "InMaxSprintDirectionInputAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventSetMaxSprintDirectionInputAngle_Parms, InMaxSprintDirectionInputAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::NewProp_InMaxSprintDirectionInputAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max angle in degrees for sprint input. Also computes MaxSprintDirectionInputNormal. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Set the max angle in degrees for sprint input. Also computes MaxSprintDirectionInputNormal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "SetMaxSprintDirectionInputAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::MICharacterMovementComponent_eventSetMaxSprintDirectionInputAngle_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics
	{
		struct MICharacterMovementComponent_eventSetMaxSprintDirectionInputNormal_Parms
		{
			float InMaxSprintDirectionInputNormal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxSprintDirectionInputNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::NewProp_InMaxSprintDirectionInputNormal = { "InMaxSprintDirectionInputNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventSetMaxSprintDirectionInputNormal_Parms, InMaxSprintDirectionInputNormal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::NewProp_InMaxSprintDirectionInputNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max normal for sprint input. Also computes MaxSprintDirectionInputAngle. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Set the max normal for sprint input. Also computes MaxSprintDirectionInputAngle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "SetMaxSprintDirectionInputNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::MICharacterMovementComponent_eventSetMaxSprintDirectionInputNormal_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics
	{
		struct MICharacterMovementComponent_eventSetMoveForwardAngle_Parms
		{
			float InMoveForwardAngle;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMoveForwardAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::NewProp_InMoveForwardAngle = { "InMoveForwardAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventSetMoveForwardAngle_Parms, InMoveForwardAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::NewProp_InMoveForwardAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max angle in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Set the max angle in degrees for moving forward (as opposed to moving backward). When outside this angle, move backward speed is applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "SetMoveForwardAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::MICharacterMovementComponent_eventSetMoveForwardAngle_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics
	{
		struct MICharacterMovementComponent_eventSetMoveForwardNormal_Parms
		{
			float InMoveForwardNormal;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMoveForwardNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::NewProp_InMoveForwardNormal = { "InMoveForwardNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventSetMoveForwardNormal_Parms, InMoveForwardNormal), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::NewProp_InMoveForwardNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CharacterMovement" },
		{ "Comment", "/** Set the max normal in degrees for moving forward (as opposed to moving backward). When outside this normal, move backward speed is applied. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Set the max normal in degrees for moving forward (as opposed to moving backward). When outside this normal, move backward speed is applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "SetMoveForwardNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::MICharacterMovementComponent_eventSetMoveForwardNormal_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics
	{
		struct MICharacterMovementComponent_eventSyncRandomSeed_Parms
		{
			FRandomStream Stream;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacterMovementComponent_eventSyncRandomSeed_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::NewProp_Stream,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Return synchronized random stream */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Return synchronized random stream" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMICharacterMovementComponent, nullptr, "SyncRandomSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::MICharacterMovementComponent_eventSyncRandomSeed_Parms), Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMICharacterMovementComponent);
	UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister()
	{
		return UMICharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMICharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningRadiusRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningRadiusRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTurningRadiusSpeedPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningRadiusSpeedPct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UphillSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UphillSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownhillSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownhillSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UphillAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UphillAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownhillAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownhillAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UphillBrakingDecelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UphillBrakingDecelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownhillBrakingDecelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownhillBrakingDecelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UphillGroundFrictionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UphillGroundFrictionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownhillGroundFrictionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DownhillGroundFrictionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCyclePivotChangesDirection_MetaData[];
#endif
		static void NewProp_bCyclePivotChangesDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCyclePivotChangesDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCycleUseRotationRate_MetaData[];
#endif
		static void NewProp_bCycleUseRotationRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleUseRotationRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotUseMaxSpeedMultiplier_MetaData[];
#endif
		static void NewProp_bPivotUseMaxSpeedMultiplier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotUseMaxSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceWalkOffLedge_MetaData[];
#endif
		static void NewProp_bForceWalkOffLedge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWalkOffLedge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceWalkOntoLedge_MetaData[];
#endif
		static void NewProp_bForceWalkOntoLedge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWalkOntoLedge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateBrakingFrictionInAir_MetaData[];
#endif
		static void NewProp_bUseSeparateBrakingFrictionInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateBrakingFrictionInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToLastInputDirection_MetaData[];
#endif
		static void NewProp_bRotateToLastInputDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToLastInputDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateIdleRotationRate_MetaData[];
#endif
		static void NewProp_bUseSeparateIdleRotationRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateIdleRotationRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FloorSlideConditions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideConditions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FloorSlideConditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloorSlideCanStartFromAir_MetaData[];
#endif
		static void NewProp_bFloorSlideCanStartFromAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloorSlideCanStartFromAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloorSlideCanContinueInAir_MetaData[];
#endif
		static void NewProp_bFloorSlideCanContinueInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloorSlideCanContinueInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_MetaData[];
#endif
		static void NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalkOffLedgesWhenFloorSliding_MetaData[];
#endif
		static void NewProp_bCanWalkOffLedgesWhenFloorSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalkOffLedgesWhenFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToSprint_MetaData[];
#endif
		static void NewProp_bWantsToSprint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToSprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivot_MetaData[];
#endif
		static void NewProp_bPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotAnimTrigger_MetaData[];
#endif
		static void NewProp_bPivotAnimTrigger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotAnimTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCycle_MetaData[];
#endif
		static void NewProp_bCycle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardsSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveBackwardsSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardsCrouchSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveBackwardsCrouchSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveBackwardsSprintSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveBackwardsSprintSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdleRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedSprinting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationSprinting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationSprinting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFrictionSprinting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFrictionSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedCrouchRun_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedCrouchRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationCrouchRun_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationCrouchRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationCrouchRun_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationCrouchRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFrictionCrouchRun_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFrictionCrouchRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMinVelocityDifference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMinVelocityDifference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMinInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMinInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMinSpeedPct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMinSpeedPct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMinSpeedMaintainTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMinSpeedMaintainTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotCooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotCooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotDirectionLockTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotDirectionLockTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotBrakingDecelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotBrakingDecelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotBonusAccelerationOnStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotBonusAccelerationOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotBonusAccelerationOnEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotBonusAccelerationOnEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceWalkOffLedgeImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceWalkOffLedgeImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceWalkOntoLedgeImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceWalkOntoLedgeImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSprintDirectionInputAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSprintDirectionInputAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSprintDirectionInputNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSprintDirectionInputNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideMinStartSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideMinStartSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideMinConditionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideMinConditionDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideCooldownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideCooldownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideMinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideMinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeedFloorSliding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeedFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAccelerationFloorSliding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAccelerationFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationFloorSliding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFrictionFloorSliding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFrictionFloorSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideGroundSpeedBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideGroundSpeedBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideAirSpeedBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideAirSpeedBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideUphillAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideUphillAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideDownhillAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideDownhillAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideUphillSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideUphillSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideDownhillSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideDownhillSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideUphillBrakingDecelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideUphillBrakingDecelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideDownhillBrakingDecelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideDownhillBrakingDecelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideUphillFrictionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideUphillFrictionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorSlideDownhillFrictionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorSlideDownhillFrictionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoyoteTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CoyoteTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BunnyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BunnyTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MICharacterOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleEndDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CycleEndDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotMovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentServerMoveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentServerMoveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSentTimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSentTimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMICharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMICharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_GetAngularVelocity, "GetAngularVelocity" }, // 1260444764
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_GetCurrentSyncTime, "GetCurrentSyncTime" }, // 3579296332
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_GetImpactVelocity, "GetImpactVelocity" }, // 2585805894
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_GetPlayerPing, "GetPlayerPing" }, // 3837976429
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_GetTraversalVelocity, "GetTraversalVelocity" }, // 2063416361
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_IsCrouchRunning, "IsCrouchRunning" }, // 273413422
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_IsFloorSliding, "IsFloorSliding" }, // 3392951242
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_IsSprinting, "IsSprinting" }, // 3766980870
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputAngle, "K2_GetMaxSprintDirectionInputAngle" }, // 205270733
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMaxSprintDirectionInputNormal, "K2_GetMaxSprintDirectionInputNormal" }, // 3061806285
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardAngle, "K2_GetMoveForwardAngle" }, // 1489900540
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_K2_GetMoveForwardNormal, "K2_GetMoveForwardNormal" }, // 2619599769
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputAngle, "SetMaxSprintDirectionInputAngle" }, // 91799788
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_SetMaxSprintDirectionInputNormal, "SetMaxSprintDirectionInputNormal" }, // 1184298446
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardAngle, "SetMoveForwardAngle" }, // 956042465
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_SetMoveForwardNormal, "SetMoveForwardNormal" }, // 431574182
		{ &Z_Construct_UFunction_UMICharacterMovementComponent_SyncRandomSeed, "SyncRandomSeed" }, // 4168100446
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds advanced movement features to CharacterMovementComponent\n */" },
		{ "IncludePath", "MICharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds advanced movement features to CharacterMovementComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_TurningRadiusRate_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/**\n\x09 * How fast the character can turn (results in a minimum turning radius when above MinTurningRadiusSpeedPct)\n\x09 * Can help provide more realistic motion when moving around while oriented to camera\n\x09 * Set to 0.0 to disable turning radius\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "How fast the character can turn (results in a minimum turning radius when above MinTurningRadiusSpeedPct)\nCan help provide more realistic motion when moving around while oriented to camera\nSet to 0.0 to disable turning radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_TurningRadiusRate = { "TurningRadiusRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, TurningRadiusRate), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_TurningRadiusRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_TurningRadiusRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MinTurningRadiusSpeedPct_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** \n\x09 * Must be moving faster than this percentage of current max speed to turn in a radius\n\x09 * It is advisable to use this, because if its disabled then turning radius will always apply and make avoiding obstacles you're walking into very difficult\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Must be moving faster than this percentage of current max speed to turn in a radius\nIt is advisable to use this, because if its disabled then turning radius will always apply and make avoiding obstacles you're walking into very difficult" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MinTurningRadiusSpeedPct = { "MinTurningRadiusSpeedPct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MinTurningRadiusSpeedPct), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MinTurningRadiusSpeedPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MinTurningRadiusSpeedPct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Speed Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Speed Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillSpeedMultiplier = { "UphillSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, UphillSpeedMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillSpeedMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Speed Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Speed Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillSpeedMultiplier = { "DownhillSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, DownhillSpeedMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillSpeedMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Acceleration Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Acceleration Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillAccelerationMultiplier = { "UphillAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, UphillAccelerationMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillAccelerationMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Acceleration Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Acceleration Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillAccelerationMultiplier = { "DownhillAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, DownhillAccelerationMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillAccelerationMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillBrakingDecelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Braking Deceleration Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Braking Deceleration Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillBrakingDecelerationMultiplier = { "UphillBrakingDecelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, UphillBrakingDecelerationMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillBrakingDecelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillBrakingDecelerationMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillBrakingDecelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Braking Deceleration Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Braking Deceleration Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillBrakingDecelerationMultiplier = { "DownhillBrakingDecelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, DownhillBrakingDecelerationMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillBrakingDecelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillBrakingDecelerationMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillGroundFrictionMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Friction Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Friction Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillGroundFrictionMultiplier = { "UphillGroundFrictionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, UphillGroundFrictionMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillGroundFrictionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillGroundFrictionMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillGroundFrictionMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Slope" },
		{ "Comment", "/** \n\x09 * Ground Normal [Time] -> Friction Multiplier [Value]\n\x09 * 0 is flat ground\n\x09 * -1 is vertical uphill\n\x09 * 1 is vertical downhill\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Ground Normal [Time] -> Friction Multiplier [Value]\n0 is flat ground\n-1 is vertical uphill\n1 is vertical downhill" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillGroundFrictionMultiplier = { "DownhillGroundFrictionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, DownhillGroundFrictionMultiplier), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillGroundFrictionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillGroundFrictionMultiplier_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection_MetaData[] = {
		{ "Category", "Character Movement: Walking|Cycle" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bCyclePivotChangesDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection = { "bCyclePivotChangesDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate_MetaData[] = {
		{ "Category", "Character Movement: Walking|Cycle" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bCycleUseRotationRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate = { "bCycleUseRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotType), Z_Construct_UEnum_MoveIt_EMIPivotType, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType_MetaData)) }; // 2458836929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "15" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "UIMin", "15" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bPivotUseMaxSpeedMultiplier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier = { "bPivotUseMaxSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge_MetaData[] = {
		{ "Category", "Character Movement: Walking|Ledge" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bForceWalkOffLedge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge = { "bForceWalkOffLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge_MetaData[] = {
		{ "Category", "Character Movement: Walking|Ledge" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bForceWalkOntoLedge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge = { "bForceWalkOntoLedge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\n\x09 * If false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\n\x09 * This setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n\x09 * @see BrakingFriction\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, BrakingFriction will be used to slow the character to a stop (when there is no Acceleration).\nIf false, braking uses the same friction passed to CalcVelocity() (ie GroundFriction when walking), multiplied by BrakingFrictionFactor.\nThis setting applies to all movement modes; if only desired in certain modes, consider toggling it when movement modes change.\n@see BrakingFriction" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bUseSeparateBrakingFrictionInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir = { "bUseSeparateBrakingFrictionInAir", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "Comment", "/**\n\x09 * If true, when input is released will continue rotating in that direction \n\x09 * Only applied if bOrientRotationToMovement is true\n\x09 */" },
		{ "EditCondition", "bOrientRotationToMovement" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, when input is released will continue rotating in that direction\nOnly applied if bOrientRotationToMovement is true" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bRotateToLastInputDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection = { "bRotateToLastInputDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bUseSeparateIdleRotationRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate = { "bUseSeparateIdleRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** What conditions are required to floor slide */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "What conditions are required to floor slide" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions = { "FloorSlideConditions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideConditions), Z_Construct_UEnum_MoveIt_EMIFloorSlide, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions_MetaData)) }; // 1294169710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** If true, can initiate floor sliding while in air */" },
		{ "EditCondition", "FloorSlideConditions != EMIFloorSlide::FSR_NeverUsed" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, can initiate floor sliding while in air" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bFloorSlideCanStartFromAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir = { "bFloorSlideCanStartFromAir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** If true, can continue floor sliding while in air */" },
		{ "EditCondition", "FloorSlideConditions != EMIFloorSlide::FSR_NeverUsed" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, can continue floor sliding while in air" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bFloorSlideCanContinueInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir = { "bFloorSlideCanContinueInAir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed boosts only apply if we were sprinting */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Speed boosts only apply if we were sprinting" },
		{ "UIMin", "0" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bFloorSlideGroundSpeedBoostOnlyFromSprint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint = { "bFloorSlideGroundSpeedBoostOnlyFromSprint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** If true, Character can walk off a ledge when crouching. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, Character can walk off a ledge when crouching." },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bCanWalkOffLedgesWhenFloorSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding = { "bCanWalkOffLedgesWhenFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "Comment", "/** If true, try to sprint (or keep sprinting) on next update. If false, try to stop sprinting on next update. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If true, try to sprint (or keep sprinting) on next update. If false, try to stop sprinting on next update." },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bWantsToSprint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint = { "bWantsToSprint", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot = { "bPivot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bPivotAnimTrigger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger = { "bPivotAnimTrigger", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle_SetBit(void* Obj)
	{
		((UMICharacterMovementComponent*)Obj)->bCycle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle = { "bCycle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMICharacterMovementComponent), &Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Speed loss or gain when moving backwards. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Speed loss or gain when moving backwards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSpeedMultiplier = { "MoveBackwardsSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MoveBackwardsSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsCrouchSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Speed loss or gain when moving backwards while crouching. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Speed loss or gain when moving backwards while crouching." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsCrouchSpeedMultiplier = { "MoveBackwardsCrouchSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MoveBackwardsCrouchSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsCrouchSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsCrouchSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSprintSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Speed loss or gain when moving backwards while sprinting. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Speed loss or gain when moving backwards while sprinting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSprintSpeedMultiplier = { "MoveBackwardsSprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MoveBackwardsSprintSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSprintSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSprintSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleRotationRate_MetaData[] = {
		{ "Category", "Character Movement: Walking|Cycle" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bCycleUseRotationRate" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleRotationRate = { "CycleRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, CycleRotationRate), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_IdleRotationRate_MetaData[] = {
		{ "Category", "Character Movement (Rotation Settings)" },
		{ "EditCondition", "bUseSeparateIdleRotationRate" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_IdleRotationRate = { "IdleRotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, IdleRotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_IdleRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_IdleRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum ground speed when sprinting. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "The maximum ground speed when sprinting." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting = { "MaxWalkSpeedSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxWalkSpeedSprinting), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationSprinting_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max Acceleration (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Max Acceleration (rate of change of velocity)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationSprinting = { "MaxAccelerationSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxAccelerationSprinting), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationSprinting_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n\x09 * @see GroundFriction, MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n@see GroundFriction, MaxAcceleration" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationSprinting = { "BrakingDecelerationSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, BrakingDecelerationSprinting), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionSprinting_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting that affects movement control. Higher values allow faster changes in direction.\n\x09 * If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * This can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n\x09 * @see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Setting that affects movement control. Higher values allow faster changes in direction.\nIf bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nThis can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n@see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionSprinting = { "GroundFrictionSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, GroundFrictionSprinting), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchRun_MetaData[] = {
		{ "Category", "Character Movement: Walking|Crouch Run" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum ground speed when crouch running. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "The maximum ground speed when crouch running." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchRun = { "MaxWalkSpeedCrouchRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxWalkSpeedCrouchRun), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationCrouchRun_MetaData[] = {
		{ "Category", "Character Movement: Walking|Crouch Run" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max Acceleration (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Max Acceleration (rate of change of velocity)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationCrouchRun = { "MaxAccelerationCrouchRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxAccelerationCrouchRun), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationCrouchRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationCrouchRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationCrouchRun_MetaData[] = {
		{ "Category", "Character Movement: Walking|Crouch Run" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when crouch running and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n\x09 * @see GroundFriction, MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when crouch running and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n@see GroundFriction, MaxAcceleration" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationCrouchRun = { "BrakingDecelerationCrouchRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, BrakingDecelerationCrouchRun), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationCrouchRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationCrouchRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionCrouchRun_MetaData[] = {
		{ "Category", "Character Movement: Walking|Crouch Run" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting that affects movement control. Higher values allow faster changes in direction.\n\x09 * If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * This can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n\x09 * @see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Setting that affects movement control. Higher values allow faster changes in direction.\nIf bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nThis can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n@see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionCrouchRun = { "GroundFrictionCrouchRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, GroundFrictionCrouchRun), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionCrouchRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionCrouchRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinVelocityDifference_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "Comment", "/** Minimum velocity vs acceleration difference that is required to pivot. Higher values make it harder to pivot. */" },
		{ "EditCondition", "PivotType == EMIPivotType::PT_Velocity" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Minimum velocity vs acceleration difference that is required to pivot. Higher values make it harder to pivot." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinVelocityDifference = { "PivotMinVelocityDifference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMinVelocityDifference), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinVelocityDifference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinVelocityDifference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinInput_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Lower values make it easier to pivot with a controller by only allowing larger values for consideration through. A value that is too low may make it too easy to pivot in general. Best tested with a thumbstick. */" },
		{ "EditCondition", "PivotType == EMIPivotType::PT_Acceleration" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Lower values make it easier to pivot with a controller by only allowing larger values for consideration through. A value that is too low may make it too easy to pivot in general. Best tested with a thumbstick." },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinInput = { "PivotMinInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMinInput), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedPct_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "15" },
		{ "Comment", "/** Must be moving this fast (as a percentage of current max speed) to pivot. Values that are too low allow simulated players to pivot from not moving, therefore this will not go below 50.0 */" },
		{ "EditCondition", "bPivotUseMaxSpeedMultiplier" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Must be moving this fast (as a percentage of current max speed) to pivot. Values that are too low allow simulated players to pivot from not moving, therefore this will not go below 50.0" },
		{ "UIMin", "15" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedPct = { "PivotMinSpeedPct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMinSpeedPct), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedPct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "15" },
		{ "Comment", "/** Must be moving this fast to pivot. Values that are too low allow simulated players to pivot from not moving, be careful below 50.0 */" },
		{ "EditCondition", "!bPivotUseMaxSpeedMultiplier" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Must be moving this fast to pivot. Values that are too low allow simulated players to pivot from not moving, be careful below 50.0" },
		{ "UIMin", "15" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeed = { "PivotMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMinSpeed), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedMaintainTime_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long character must be at PivotMinSpeed for before they can pivot */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "How long character must be at PivotMinSpeed for before they can pivot" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedMaintainTime = { "PivotMinSpeedMaintainTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMinSpeedMaintainTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedMaintainTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedMaintainTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDuration_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When pivoting, penalty is recovered at this rate\n\x09 * Set to 0.0 to disable\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "When pivoting, penalty is recovered at this rate\nSet to 0.0 to disable" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDuration = { "PivotDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotDuration), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotCooldownTime_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How long character must wait before they can pivot again\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "How long character must wait before they can pivot again" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotCooldownTime = { "PivotCooldownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotCooldownTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotCooldownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDirectionLockTime_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * When pivoting, lock the facing direction for this duration\n\x09 * Not available with OrientToView\n\x09 * Set to 0.0 to disable\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "When pivoting, lock the facing direction for this duration\nNot available with OrientToView\nSet to 0.0 to disable" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDirectionLockTime = { "PivotDirectionLockTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotDirectionLockTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDirectionLockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDirectionLockTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Lowest speed multiplier when starting a moving turn\n\x09 * Interpolates back to 1.0 using PivotEndRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Lowest speed multiplier when starting a moving turn\nInterpolates back to 1.0 using PivotEndRate" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotSpeedMultiplier = { "PivotSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Lowest acceleration multiplier when starting a moving turn\n\x09 * Interpolates back to 1.0 using PivotEndRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Lowest acceleration multiplier when starting a moving turn\nInterpolates back to 1.0 using PivotEndRate" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotAccelerationMultiplier = { "PivotAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBrakingDecelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Lowest braking deceleration multiplier when starting a moving turn\n\x09 * Interpolates back to 1.0 using PivotEndRate\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Lowest braking deceleration multiplier when starting a moving turn\nInterpolates back to 1.0 using PivotEndRate" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBrakingDecelerationMultiplier = { "PivotBrakingDecelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotBrakingDecelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBrakingDecelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBrakingDecelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnStart_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Additional acceleration to apply in the pivot direction when pivot starts\n\x09 * Does not exceed current velocity\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Additional acceleration to apply in the pivot direction when pivot starts\nDoes not exceed current velocity" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnStart = { "PivotBonusAccelerationOnStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotBonusAccelerationOnStart), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnEnd_MetaData[] = {
		{ "Category", "Character Movement: Walking|Pivot" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Additional acceleration to apply in the pivot direction when pivot ends\n\x09 * Does not exceed current velocity\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Additional acceleration to apply in the pivot direction when pivot ends\nDoes not exceed current velocity" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnEnd = { "PivotBonusAccelerationOnEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotBonusAccelerationOnEnd), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOffLedgeImpulse_MetaData[] = {
		{ "Category", "Character Movement: Walking|Ledge" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOffLedgeImpulse = { "ForceWalkOffLedgeImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, ForceWalkOffLedgeImpulse), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOffLedgeImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOffLedgeImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOntoLedgeImpulse_MetaData[] = {
		{ "Category", "Character Movement: Walking|Ledge" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOntoLedgeImpulse = { "ForceWalkOntoLedgeImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, ForceWalkOntoLedgeImpulse), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOntoLedgeImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOntoLedgeImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputAngle_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Can only sprint when the angle between the input direction and movement direction is within this value\n\x09 * At 0, can sprint backwards\n\x09 * At 45, can sprint sideways but not backwards\n\x09 * At 90, can only sprint when moving directly forwards only (not recommended, needs some error tolerance)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Can only sprint when the angle between the input direction and movement direction is within this value\nAt 0, can sprint backwards\nAt 45, can sprint sideways but not backwards\nAt 90, can only sprint when moving directly forwards only (not recommended, needs some error tolerance)" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputAngle = { "MaxSprintDirectionInputAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxSprintDirectionInputAngle), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputNormal_MetaData[] = {
		{ "Category", "Character Movement: Walking|Sprint" },
		{ "Comment", "/**\n\x09 * Can only sprint when the normal between the input direction and movement direction is within this value\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Can only sprint when the normal between the input direction and movement direction is within this value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputNormal = { "MaxSprintDirectionInputNormal", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxSprintDirectionInputNormal), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinStartSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** If crouch pressed while moving at this speed, will slide */" },
		{ "EditCondition", "FloorSlideConditions == EMIFloorSlide::FSR_SpeedThreshold || FloorSlideConditions == EMIFloorSlide::FSR_SprintAndSpeedThreshold" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "If crouch pressed while moving at this speed, will slide" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinStartSpeed = { "FloorSlideMinStartSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideMinStartSpeed), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinStartSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinStartSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinConditionDuration_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** Must have met conditions for this amount of time before able to floor slide */" },
		{ "EditCondition", "FloorSlideConditions != EMIFloorSlide::FSR_NeverUsed" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Must have met conditions for this amount of time before able to floor slide" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinConditionDuration = { "FloorSlideMinConditionDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideMinConditionDuration), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinConditionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinConditionDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideCooldownTime_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** Minimum interval between floor sliding re-entry */" },
		{ "EditCondition", "FloorSlideConditions != EMIFloorSlide::FSR_NeverUsed" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Minimum interval between floor sliding re-entry" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideCooldownTime = { "FloorSlideCooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideCooldownTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideCooldownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "Comment", "/** Must remain above this speed to continue floor sliding */" },
		{ "EditCondition", "FloorSlideConditions != EMIFloorSlide::FSR_NeverUsed" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Must remain above this speed to continue floor sliding" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinSpeed = { "FloorSlideMinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideMinSpeed), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedFloorSliding_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum ground speed when floor sliding. */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "The maximum ground speed when floor sliding." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedFloorSliding = { "MaxWalkSpeedFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxWalkSpeedFloorSliding), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationFloorSliding_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Max Acceleration (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Max Acceleration (rate of change of velocity)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationFloorSliding = { "MaxAccelerationFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MaxAccelerationFloorSliding), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationFloorSliding_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n\x09 * @see GroundFriction, MaxAcceleration\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Deceleration when walking and not applying acceleration. This is a constant opposing force that directly lowers velocity by a constant value.\n@see GroundFriction, MaxAcceleration" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationFloorSliding = { "BrakingDecelerationFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, BrakingDecelerationFloorSliding), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionFloorSliding_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting that affects movement control. Higher values allow faster changes in direction.\n\x09 * If bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\n\x09 * When braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\n\x09 * This can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n\x09 * @see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Setting that affects movement control. Higher values allow faster changes in direction.\nIf bUseSeparateBrakingFriction is false, also affects the ability to stop more quickly when braking (whenever Acceleration is zero), where it is multiplied by BrakingFrictionFactor.\nWhen braking, this property allows you to control how much friction is applied when moving across the ground, applying an opposing force that scales with current velocity.\nThis can be used to simulate slippery surfaces such as ice or oil by changing the value (possibly based on the material pawn is standing on).\n@see BrakingDecelerationWalking, BrakingFriction, bUseSeparateBrakingFriction, BrakingFrictionFactor" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionFloorSliding = { "GroundFrictionFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, GroundFrictionFloorSliding), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionFloorSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideGroundSpeedBoost_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Apply a speed boost when floor sliding starts while on ground */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Apply a speed boost when floor sliding starts while on ground" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideGroundSpeedBoost = { "FloorSlideGroundSpeedBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideGroundSpeedBoost), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideGroundSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideGroundSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideAirSpeedBoost_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Apply a speed boost when floor sliding starts while in air */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Apply a speed boost when floor sliding starts while in air" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideAirSpeedBoost = { "FloorSlideAirSpeedBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideAirSpeedBoost), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideAirSpeedBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideAirSpeedBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillAccelerationMultiplier = { "FloorSlideUphillAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideUphillAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillAccelerationMultiplier = { "FloorSlideDownhillAccelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideDownhillAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillSpeedMultiplier = { "FloorSlideUphillSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideUphillSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillSpeedMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillSpeedMultiplier = { "FloorSlideDownhillSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideDownhillSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillBrakingDecelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillBrakingDecelerationMultiplier = { "FloorSlideUphillBrakingDecelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideUphillBrakingDecelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillBrakingDecelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillBrakingDecelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillBrakingDecelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillBrakingDecelerationMultiplier = { "FloorSlideDownhillBrakingDecelerationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideDownhillBrakingDecelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillBrakingDecelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillBrakingDecelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillFrictionMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillFrictionMultiplier = { "FloorSlideUphillFrictionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideUphillFrictionMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillFrictionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillFrictionMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillFrictionMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking|Floor Slide" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Multiplier for slope curve value when floor sliding */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Multiplier for slope curve value when floor sliding" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillFrictionMultiplier = { "FloorSlideDownhillFrictionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, FloorSlideDownhillFrictionMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillFrictionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillFrictionMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CoyoteTime_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long after walking off a ledge can we still jump normally (leading to more forgiving platforming / jumping) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "How long after walking off a ledge can we still jump normally (leading to more forgiving platforming / jumping)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CoyoteTime = { "CoyoteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, CoyoteTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CoyoteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CoyoteTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BunnyTime_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How long before landing does an early jump input still trigger (once landed, leading to more responsive platforming / jumping) */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "How long before landing does an early jump input still trigger (once landed, leading to more responsive platforming / jumping)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BunnyTime = { "BunnyTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, BunnyTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BunnyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BunnyTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardAngle_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The angle starting from the character's forward direction that is considered moving forward\n\x09 * At 0, only moving forward when W (or move forward key) is held and nothing else, will almost never be true with a gamepad thumbstick\n\x09 * At 90, moving forward when strafing also, but with a gamepad will often think its moving backward\n\x09 * At 135, is considered moving forward when holding A+S (or move left + move backward)\n\x09 * At 180, always thinks its moving forward\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "The angle starting from the character's forward direction that is considered moving forward\nAt 0, only moving forward when W (or move forward key) is held and nothing else, will almost never be true with a gamepad thumbstick\nAt 90, moving forward when strafing also, but with a gamepad will often think its moving backward\nAt 135, is considered moving forward when holding A+S (or move left + move backward)\nAt 180, always thinks its moving forward" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardAngle = { "MoveForwardAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MoveForwardAngle), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardNormal_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/**\n\x09 * The normal starting from the character's forward direction that is considered moving forward\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "The normal starting from the character's forward direction that is considered moving forward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardNormal = { "MoveForwardNormal", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MoveForwardNormal), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MICharacterOwner_MetaData[] = {
		{ "Comment", "/** Character movement component belongs to */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Character movement component belongs to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MICharacterOwner = { "MICharacterOwner", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, MICharacterOwner), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MICharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MICharacterOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleEndDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleEndDirection = { "CycleEndDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, CycleEndDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleEndDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleEndDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMovementDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMovementDirection = { "PivotMovementDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, PivotMovementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMovementDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMovementDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CurrentServerMoveTime_MetaData[] = {
		{ "Comment", "/** Time server is using for this move, from timestamp passed by client */" },
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
		{ "ToolTip", "Time server is using for this move, from timestamp passed by client" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CurrentServerMoveTime = { "CurrentServerMoveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, CurrentServerMoveTime), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CurrentServerMoveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CurrentServerMoveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_LastSentTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/MICharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_LastSentTimeStamp = { "LastSentTimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMICharacterMovementComponent, LastSentTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_LastSentTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_LastSentTimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMICharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_TurningRadiusRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MinTurningRadiusSpeedPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillBrakingDecelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillBrakingDecelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_UphillGroundFrictionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_DownhillGroundFrictionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCyclePivotChangesDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycleUseRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotUseMaxSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOffLedge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bForceWalkOntoLedge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateBrakingFrictionInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bRotateToLastInputDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bUseSeparateIdleRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideConditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanStartFromAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideCanContinueInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bFloorSlideGroundSpeedBoostOnlyFromSprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCanWalkOffLedgesWhenFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bWantsToSprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bPivotAnimTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_bCycle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsCrouchSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveBackwardsSprintSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_IdleRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedCrouchRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationCrouchRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationCrouchRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionCrouchRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinVelocityDifference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedPct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMinSpeedMaintainTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotDirectionLockTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBrakingDecelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotBonusAccelerationOnEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOffLedgeImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_ForceWalkOntoLedgeImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxSprintDirectionInputNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinStartSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinConditionDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideCooldownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideMinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxWalkSpeedFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MaxAccelerationFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BrakingDecelerationFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_GroundFrictionFloorSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideGroundSpeedBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideAirSpeedBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillBrakingDecelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillBrakingDecelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideUphillFrictionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_FloorSlideDownhillFrictionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CoyoteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_BunnyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MoveForwardNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_MICharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CycleEndDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_PivotMovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_CurrentServerMoveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMICharacterMovementComponent_Statics::NewProp_LastSentTimeStamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMICharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMICharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMICharacterMovementComponent_Statics::ClassParams = {
		&UMICharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMICharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMICharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMICharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMICharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UMICharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMICharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UMICharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMICharacterMovementComponent.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMICharacterMovementComponent>()
	{
		return UMICharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMICharacterMovementComponent);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::EnumInfo[] = {
		{ EMIPivotType_StaticEnum, TEXT("EMIPivotType"), &Z_Registration_Info_UEnum_EMIPivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2458836929U) },
		{ EMIFloorSlide_StaticEnum, TEXT("EMIFloorSlide"), &Z_Registration_Info_UEnum_EMIFloorSlide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1294169710U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMICharacterMovementComponent, UMICharacterMovementComponent::StaticClass, TEXT("UMICharacterMovementComponent"), &Z_Registration_Info_UClass_UMICharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMICharacterMovementComponent), 1402713209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_1151432323(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
