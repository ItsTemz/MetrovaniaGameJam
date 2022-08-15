// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/Templates/MICharacter_TwinStick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMICharacter_TwinStick() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_TwinStick_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_TwinStick();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(AMICharacter_TwinStick::execUpdateControlRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewControlRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateControlRotation_Implementation(Z_Param_Out_NewControlRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter_TwinStick::execGetGamepadFacingRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGamepadFacingRotation_Implementation(Z_Param_WorldDirection,Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter_TwinStick::execGetMouseFacingRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_MouseWorldLocation);
		P_GET_STRUCT(FVector,Z_Param_MouseWorldDirection);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMouseFacingRotation_Implementation(Z_Param_MouseWorldLocation,Z_Param_MouseWorldDirection,Z_Param_Out_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter_TwinStick::execReceiveGamepadTurnInput)
	{
		P_GET_STRUCT(FVector2D,Z_Param_AxisValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveGamepadTurnInput(Z_Param_AxisValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter_TwinStick::execReceiveMouseTurnInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveMouseTurnInput(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter_TwinStick::execSetCustomGameInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomGameInputMode();
		P_NATIVE_END;
	}
	static FName NAME_AMICharacter_TwinStick_GetGamepadFacingRotation = FName(TEXT("GetGamepadFacingRotation"));
	bool AMICharacter_TwinStick::GetGamepadFacingRotation(FVector WorldDirection, FRotator& NewRotation) const
	{
		MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms Parms;
		Parms.WorldDirection=WorldDirection;
		Parms.NewRotation=NewRotation;
		const_cast<AMICharacter_TwinStick*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_TwinStick_GetGamepadFacingRotation),&Parms);
		NewRotation=Parms.NewRotation;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_TwinStick_GetMouseFacingRotation = FName(TEXT("GetMouseFacingRotation"));
	bool AMICharacter_TwinStick::GetMouseFacingRotation(FVector MouseWorldLocation, FVector MouseWorldDirection, FRotator& NewRotation) const
	{
		MICharacter_TwinStick_eventGetMouseFacingRotation_Parms Parms;
		Parms.MouseWorldLocation=MouseWorldLocation;
		Parms.MouseWorldDirection=MouseWorldDirection;
		Parms.NewRotation=NewRotation;
		const_cast<AMICharacter_TwinStick*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_TwinStick_GetMouseFacingRotation),&Parms);
		NewRotation=Parms.NewRotation;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_TwinStick_K2_OnReceiveController = FName(TEXT("K2_OnReceiveController"));
	void AMICharacter_TwinStick::K2_OnReceiveController(AController* NewController)
	{
		MICharacter_TwinStick_eventK2_OnReceiveController_Parms Parms;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_TwinStick_K2_OnReceiveController),&Parms);
	}
	static FName NAME_AMICharacter_TwinStick_K2_OnReceivePlayerController = FName(TEXT("K2_OnReceivePlayerController"));
	void AMICharacter_TwinStick::K2_OnReceivePlayerController(APlayerController* NewPlayerController)
	{
		MICharacter_TwinStick_eventK2_OnReceivePlayerController_Parms Parms;
		Parms.NewPlayerController=NewPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_TwinStick_K2_OnReceivePlayerController),&Parms);
	}
	static FName NAME_AMICharacter_TwinStick_UpdateControlRotation = FName(TEXT("UpdateControlRotation"));
	void AMICharacter_TwinStick::UpdateControlRotation(FRotator const& NewControlRotation)
	{
		MICharacter_TwinStick_eventUpdateControlRotation_Parms Parms;
		Parms.NewControlRotation=NewControlRotation;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_TwinStick_UpdateControlRotation),&Parms);
	}
	void AMICharacter_TwinStick::StaticRegisterNativesAMICharacter_TwinStick()
	{
		UClass* Class = AMICharacter_TwinStick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGamepadFacingRotation", &AMICharacter_TwinStick::execGetGamepadFacingRotation },
			{ "GetMouseFacingRotation", &AMICharacter_TwinStick::execGetMouseFacingRotation },
			{ "ReceiveGamepadTurnInput", &AMICharacter_TwinStick::execReceiveGamepadTurnInput },
			{ "ReceiveMouseTurnInput", &AMICharacter_TwinStick::execReceiveMouseTurnInput },
			{ "SetCustomGameInputMode", &AMICharacter_TwinStick::execSetCustomGameInputMode },
			{ "UpdateControlRotation", &AMICharacter_TwinStick::execUpdateControlRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms), &Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * @return True if NewRotation is valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "@return True if NewRotation is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "GetGamepadFacingRotation", nullptr, nullptr, sizeof(MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseWorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseWorldDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_MouseWorldLocation = { "MouseWorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventGetMouseFacingRotation_Parms, MouseWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_MouseWorldDirection = { "MouseWorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventGetMouseFacingRotation_Parms, MouseWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventGetMouseFacingRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_TwinStick_eventGetMouseFacingRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_TwinStick_eventGetMouseFacingRotation_Parms), &Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_MouseWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_MouseWorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Override if you want to attempt a line trace or similar to get different results\n\x09 * @return True if NewRotation is valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Override if you want to attempt a line trace or similar to get different results\n@return True if NewRotation is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "GetMouseFacingRotation", nullptr, nullptr, sizeof(MICharacter_TwinStick_eventGetMouseFacingRotation_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventK2_OnReceiveController_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when receiving a controller on both server & local client */" },
		{ "DisplayName", "On Receive Controller" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Called when receiving a controller on both server & local client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "K2_OnReceiveController", nullptr, nullptr, sizeof(MICharacter_TwinStick_eventK2_OnReceiveController_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::NewProp_NewPlayerController = { "NewPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventK2_OnReceivePlayerController_Parms, NewPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::NewProp_NewPlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when receiving a player controller on both server & local client */" },
		{ "DisplayName", "On Receive Player Controller" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Called when receiving a player controller on both server & local client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "K2_OnReceivePlayerController", nullptr, nullptr, sizeof(MICharacter_TwinStick_eventK2_OnReceivePlayerController_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics
	{
		struct MICharacter_TwinStick_eventReceiveGamepadTurnInput_Parms
		{
			FVector2D AxisValues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::NewProp_AxisValues = { "AxisValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventReceiveGamepadTurnInput_Parms, AxisValues), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::NewProp_AxisValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Call this from your input event for rotating the character via gamepad */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Call this from your input event for rotating the character via gamepad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "ReceiveGamepadTurnInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::MICharacter_TwinStick_eventReceiveGamepadTurnInput_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics
	{
		struct MICharacter_TwinStick_eventReceiveMouseTurnInput_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventReceiveMouseTurnInput_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Call this from your input event for rotating the character via mouse */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Call this from your input event for rotating the character via mouse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "ReceiveMouseTurnInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::MICharacter_TwinStick_eventReceiveMouseTurnInput_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Equivalent to SetInputModeGameOnly but uses SetConsumeCaptureMouseDown(false) to prevent blocking mouse click events */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Equivalent to SetInputModeGameOnly but uses SetConsumeCaptureMouseDown(false) to prevent blocking mouse click events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "SetCustomGameInputMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewControlRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::NewProp_NewControlRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::NewProp_NewControlRotation = { "NewControlRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_TwinStick_eventUpdateControlRotation_Parms, NewControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::NewProp_NewControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::NewProp_NewControlRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::NewProp_NewControlRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Override to add interpolation\n\x09 * Sets the control rotation to the final computed result\n\x09 */" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ToolTip", "Override to add interpolation\nSets the control rotation to the final computed result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter_TwinStick, nullptr, "UpdateControlRotation", nullptr, nullptr, sizeof(MICharacter_TwinStick_eventUpdateControlRotation_Parms), Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMICharacter_TwinStick);
	UClass* Z_Construct_UClass_AMICharacter_TwinStick_NoRegister()
	{
		return AMICharacter_TwinStick::StaticClass();
	}
	struct Z_Construct_UClass_AMICharacter_TwinStick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMICharacter_TwinStick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMICharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMICharacter_TwinStick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_GetGamepadFacingRotation, "GetGamepadFacingRotation" }, // 786599718
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_GetMouseFacingRotation, "GetMouseFacingRotation" }, // 1208669757
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceiveController, "K2_OnReceiveController" }, // 1140530689
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_K2_OnReceivePlayerController, "K2_OnReceivePlayerController" }, // 1142571234
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveGamepadTurnInput, "ReceiveGamepadTurnInput" }, // 2234353562
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_ReceiveMouseTurnInput, "ReceiveMouseTurnInput" }, // 3138538337
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_SetCustomGameInputMode, "SetCustomGameInputMode" }, // 139628588
		{ &Z_Construct_UFunction_AMICharacter_TwinStick_UpdateControlRotation, "UpdateControlRotation" }, // 2246567485
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_TwinStick_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Templates/MICharacter_TwinStick.h" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_TwinStick_Statics::NewProp_PlayerController_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Templates/MICharacter_TwinStick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_TwinStick_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter_TwinStick, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_TwinStick_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_TwinStick_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMICharacter_TwinStick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_TwinStick_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMICharacter_TwinStick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMICharacter_TwinStick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMICharacter_TwinStick_Statics::ClassParams = {
		&AMICharacter_TwinStick::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMICharacter_TwinStick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_TwinStick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMICharacter_TwinStick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_TwinStick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMICharacter_TwinStick()
	{
		if (!Z_Registration_Info_UClass_AMICharacter_TwinStick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMICharacter_TwinStick.OuterSingleton, Z_Construct_UClass_AMICharacter_TwinStick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMICharacter_TwinStick.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<AMICharacter_TwinStick>()
	{
		return AMICharacter_TwinStick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMICharacter_TwinStick);
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMICharacter_TwinStick, AMICharacter_TwinStick::StaticClass, TEXT("AMICharacter_TwinStick"), &Z_Registration_Info_UClass_AMICharacter_TwinStick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMICharacter_TwinStick), 2153599783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_2679466508(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
