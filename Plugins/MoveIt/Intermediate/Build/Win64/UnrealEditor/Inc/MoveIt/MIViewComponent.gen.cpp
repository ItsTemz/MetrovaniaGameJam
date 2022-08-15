// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIViewComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIViewComponent() {}
// Cross Module References
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICharacterState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICameraViewBlend();
	MOVEIT_API UClass* Z_Construct_UClass_UMIViewComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIViewComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIOnCameraChanged_Parms
		{
			UCameraComponent* NewCamera;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnCameraChanged_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIOnCameraChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::_Script_MoveIt_eventMIOnCameraChanged_Parms), Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}

static_assert(std::is_polymorphic<FMICharacterState>() == std::is_polymorphic<FAlphaBlend>(), "USTRUCT FMICharacterState cannot be polymorphic unless super FAlphaBlend is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MICharacterState;
class UScriptStruct* FMICharacterState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MICharacterState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MICharacterState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICharacterState, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICharacterState"));
	}
	return Z_Registration_Info_UScriptStruct_MICharacterState.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICharacterState>()
{
	return FMICharacterState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMICharacterState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICharacterState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICharacterState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/**\n\x09 * Default Character State will be set to first active spring arm (based on camera that is first used - change this by marking only one camera as \"AutoActivate\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Default Character State will be set to first active spring arm (based on camera that is first used - change this by marking only one camera as \"AutoActivate\")" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset = { "ViewOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICharacterState, ViewOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICharacterState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAlphaBlend,
		&NewStructOps,
		"MICharacterState",
		sizeof(FMICharacterState),
		alignof(FMICharacterState),
		Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICharacterState()
	{
		if (!Z_Registration_Info_UScriptStruct_MICharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MICharacterState.InnerSingleton, Z_Construct_UScriptStruct_FMICharacterState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MICharacterState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMICameraViewBlend>() == std::is_polymorphic<FAlphaBlend>(), "USTRUCT FMICameraViewBlend cannot be polymorphic unless super FAlphaBlend is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MICameraViewBlend;
class UScriptStruct* FMICameraViewBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MICameraViewBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MICameraViewBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICameraViewBlend, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICameraViewBlend"));
	}
	return Z_Registration_Info_UScriptStruct_MICameraViewBlend.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICameraViewBlend>()
{
	return FMICameraViewBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMICameraViewBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleTimeOverViewDistance_MetaData[];
#endif
		static void NewProp_bScaleTimeOverViewDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleTimeOverViewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZDistance_MetaData[];
#endif
		static void NewProp_bIgnoreZDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceScalar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICameraViewBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Time is affected by how much distance the transition needs to traverse */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Time is affected by how much distance the transition needs to traverse" },
	};
#endif
	void Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_SetBit(void* Obj)
	{
		((FMICameraViewBlend*)Obj)->bScaleTimeOverViewDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance = { "bScaleTimeOverViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMICameraViewBlend), &Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** The distance traversed will ignore the Z (up) axis */" },
		{ "EditCondition", "bScaleTimeByViewDistance" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "The distance traversed will ignore the Z (up) axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_SetBit(void* Obj)
	{
		((FMICameraViewBlend*)Obj)->bIgnoreZDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance = { "bIgnoreZDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMICameraViewBlend), &Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Scale the distance to get a desirable transition time */" },
		{ "EditCondition", "bScaleTimeByViewDistance" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Scale the distance to get a desirable transition time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar = { "DistanceScalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICameraViewBlend, DistanceScalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAlphaBlend,
		&NewStructOps,
		"MICameraViewBlend",
		sizeof(FMICameraViewBlend),
		alignof(FMICameraViewBlend),
		Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICameraViewBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_MICameraViewBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MICameraViewBlend.InnerSingleton, Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MICameraViewBlend.InnerSingleton;
	}
	DEFINE_FUNCTION(UMIViewComponent::execGetPendingCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetPendingCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execGetCurrentCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCurrentCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execK2_SetNewCamera)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_GET_STRUCT(FMICameraViewBlend,Z_Param_CameraSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_ENUM(EAlphaBlendOption,Z_Param_BlendOption);
		P_GET_OBJECT(UCurveFloat,Z_Param_CustomBlendCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetNewCamera(Z_Param_NewCamera,Z_Param_CameraSettings,Z_Param_BlendTime,EAlphaBlendOption(Z_Param_BlendOption),Z_Param_CustomBlendCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execSetCamera)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_GET_STRUCT_REF(FMICameraViewBlend,Z_Param_Out_CameraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCamera(Z_Param_NewCamera,Z_Param_Out_CameraSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execGetCharacterStateCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCameraComponent*>*)Z_Param__Result=P_THIS->GetCharacterStateCameras_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execIsCharacterStateActive)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterStateActive_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execOnCharacterStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterStateChanged();
		P_NATIVE_END;
	}
	static FName NAME_UMIViewComponent_GetCharacterStateCameras = FName(TEXT("GetCharacterStateCameras"));
	TArray<UCameraComponent*> UMIViewComponent::GetCharacterStateCameras() const
	{
		MIViewComponent_eventGetCharacterStateCameras_Parms Parms;
		const_cast<UMIViewComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIViewComponent_GetCharacterStateCameras),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMIViewComponent_IsCharacterStateActive = FName(TEXT("IsCharacterStateActive"));
	bool UMIViewComponent::IsCharacterStateActive(uint8 State) const
	{
		MIViewComponent_eventIsCharacterStateActive_Parms Parms;
		Parms.State=State;
		const_cast<UMIViewComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIViewComponent_IsCharacterStateActive),&Parms);
		return !!Parms.ReturnValue;
	}
	void UMIViewComponent::StaticRegisterNativesUMIViewComponent()
	{
		UClass* Class = UMIViewComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterStateCameras", &UMIViewComponent::execGetCharacterStateCameras },
			{ "GetCurrentCamera", &UMIViewComponent::execGetCurrentCamera },
			{ "GetPendingCamera", &UMIViewComponent::execGetPendingCamera },
			{ "IsCharacterStateActive", &UMIViewComponent::execIsCharacterStateActive },
			{ "K2_SetNewCamera", &UMIViewComponent::execK2_SetNewCamera },
			{ "OnCharacterStateChanged", &UMIViewComponent::execOnCharacterStateChanged },
			{ "SetCamera", &UMIViewComponent::execSetCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetCharacterStateCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Must return all cameras used by the character */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Must return all cameras used by the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetCharacterStateCameras", nullptr, nullptr, sizeof(MIViewComponent_eventGetCharacterStateCameras_Parms), Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics
	{
		struct MIViewComponent_eventGetCurrentCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetCurrentCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** @return Currently active camera */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "@return Currently active camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetCurrentCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::MIViewComponent_eventGetCurrentCamera_Parms), Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics
	{
		struct MIViewComponent_eventGetPendingCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetPendingCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** @return Camera being transitioned to, if a transition is in progress */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "@return Camera being transitioned to, if a transition is in progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetPendingCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::MIViewComponent_eventGetPendingCamera_Parms), Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetPendingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventIsCharacterStateActive_Parms, State), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIViewComponent_eventIsCharacterStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIViewComponent_eventIsCharacterStateActive_Parms), &Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** \n\x09 * Must return whether each applicable character state is active\n\x09 * @see CharacterStates\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Must return whether each applicable character state is active\n@see CharacterStates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "IsCharacterStateActive", nullptr, nullptr, sizeof(MIViewComponent_eventIsCharacterStateActive_Parms), Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics
	{
		struct MIViewComponent_eventK2_SetNewCamera_Parms
		{
			UCameraComponent* NewCamera;
			FMICameraViewBlend CameraSettings;
			float BlendTime;
			EAlphaBlendOption BlendOption;
			UCurveFloat* CustomBlendCurve;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, CameraSettings), Z_Construct_UScriptStruct_FMICameraViewBlend, METADATA_PARAMS(nullptr, 0) }; // 3558044931
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(nullptr, 0) }; // 2373403419
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CustomBlendCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "DisplayName", "Set New Camera" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "K2_SetNewCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::MIViewComponent_eventK2_SetNewCamera_Parms), Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Notify ViewComponent that character state has changed to a new state that it handles */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Notify ViewComponent that character state has changed to a new state that it handles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "OnCharacterStateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics
	{
		struct MIViewComponent_eventSetCamera_Parms
		{
			UCameraComponent* NewCamera;
			FMICameraViewBlend CameraSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventSetCamera_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventSetCamera_Parms, CameraSettings), Z_Construct_UScriptStruct_FMICameraViewBlend, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData)) }; // 3558044931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "DisplayName", "Set Camera" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "SetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::MIViewComponent_eventSetCamera_Parms), Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_SetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIViewComponent);
	UClass* Z_Construct_UClass_UMIViewComponent_NoRegister()
	{
		return UMIViewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMIViewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandleBaseEyeHeight_MetaData[];
#endif
		static void NewProp_bHandleBaseEyeHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandleBaseEyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCharacterState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterStates_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterStates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIViewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIViewComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras, "GetCharacterStateCameras" }, // 2471298430
		{ &Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera, "GetCurrentCamera" }, // 4077590423
		{ &Z_Construct_UFunction_UMIViewComponent_GetPendingCamera, "GetPendingCamera" }, // 497893724
		{ &Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive, "IsCharacterStateActive" }, // 2967129030
		{ &Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera, "K2_SetNewCamera" }, // 2077599122
		{ &Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged, "OnCharacterStateChanged" }, // 2023833440
		{ &Z_Construct_UFunction_UMIViewComponent_SetCamera, "SetCamera" }, // 1381279993
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Handles camera blending and character state changes\n * Allows blending smoothly between any number of cameras\n */" },
		{ "DisplayName", "MIViewComponent" },
		{ "HideCategories", "Activation Collision ComponentReplication" },
		{ "IncludePath", "MIViewComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Handles camera blending and character state changes\nAllows blending smoothly between any number of cameras" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** If true, will modify the Pawn's base eye height */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "If true, will modify the Pawn's base eye height" },
	};
#endif
	void Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_SetBit(void* Obj)
	{
		((UMIViewComponent*)Obj)->bHandleBaseEyeHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight = { "bHandleBaseEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIViewComponent), &Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Usually the character's standing state */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Usually the character's standing state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState = { "DefaultCharacterState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, DefaultCharacterState), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData)) }; // 1408466911
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_ValueProp = { "CharacterStates", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMICharacterState, METADATA_PARAMS(nullptr, 0) }; // 840286722
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_Key_KeyProp = { "CharacterStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/**\n\x09 * States available to the character\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "States available to the character" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates = { "CharacterStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, CharacterStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData)) }; // 840286722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Delegate for the camera changing */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Delegate for the camera changing" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged = { "OnCameraChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, OnCameraChanged), Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData)) }; // 354258033
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIViewComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIViewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIViewComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIViewComponent_Statics::ClassParams = {
		&UMIViewComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMIViewComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIViewComponent()
	{
		if (!Z_Registration_Info_UClass_UMIViewComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIViewComponent.OuterSingleton, Z_Construct_UClass_UMIViewComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIViewComponent.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<UMIViewComponent>()
	{
		return UMIViewComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIViewComponent);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ScriptStructInfo[] = {
		{ FMICharacterState::StaticStruct, Z_Construct_UScriptStruct_FMICharacterState_Statics::NewStructOps, TEXT("MICharacterState"), &Z_Registration_Info_UScriptStruct_MICharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMICharacterState), 840286722U) },
		{ FMICameraViewBlend::StaticStruct, Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewStructOps, TEXT("MICameraViewBlend"), &Z_Registration_Info_UScriptStruct_MICameraViewBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMICameraViewBlend), 3558044931U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIViewComponent, UMIViewComponent::StaticClass, TEXT("UMIViewComponent"), &Z_Registration_Info_UClass_UMIViewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIViewComponent), 933189421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_982232380(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
