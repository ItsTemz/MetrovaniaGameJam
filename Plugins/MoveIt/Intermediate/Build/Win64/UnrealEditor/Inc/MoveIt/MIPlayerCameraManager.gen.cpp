// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPlayerCameraManager() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_AMIPlayerCameraManager_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMIPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMIPlayerCameraManager::execOnFailSanityCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFailSanityCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMIPlayerCameraManager::execOnStopMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopMontage(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMIPlayerCameraManager::execOnStartMontage)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartMontage(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMIPlayerCameraManager::execClearAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMIPlayerCameraManager::execOnCharacterUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterUpdated();
		P_NATIVE_END;
	}
	static FName NAME_AMIPlayerCameraManager_OnFailSanityCheck = FName(TEXT("OnFailSanityCheck"));
	void AMIPlayerCameraManager::OnFailSanityCheck()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMIPlayerCameraManager_OnFailSanityCheck),NULL);
	}
	void AMIPlayerCameraManager::StaticRegisterNativesAMIPlayerCameraManager()
	{
		UClass* Class = AMIPlayerCameraManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAnimInstance", &AMIPlayerCameraManager::execClearAnimInstance },
			{ "OnCharacterUpdated", &AMIPlayerCameraManager::execOnCharacterUpdated },
			{ "OnFailSanityCheck", &AMIPlayerCameraManager::execOnFailSanityCheck },
			{ "OnStartMontage", &AMIPlayerCameraManager::execOnStartMontage },
			{ "OnStopMontage", &AMIPlayerCameraManager::execOnStopMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** \n\x09 * Use this to unbind from the anim instance, will cease functionality until OnCharacterUpdated() is called again \n\x09 * This is not intended for enable / disable however, bClampYawDuringRootMotion does that\n\x09 * and during possession changes OnCharacterUpdated() will do this anyway\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "Use this to unbind from the anim instance, will cease functionality until OnCharacterUpdated() is called again\nThis is not intended for enable / disable however, bClampYawDuringRootMotion does that\nand during possession changes OnCharacterUpdated() will do this anyway" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerCameraManager, nullptr, "ClearAnimInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/**\n\x09 * Call this if anim instance or player controller's pawn is changed \n\x09 * @see : AMIPlayerController::SetPawn()\n\x09 * @see : AMICharacter::OnAnimInstanceChanged()\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "Call this if anim instance or player controller's pawn is changed\n@see : AMIPlayerController::SetPawn()\n@see : AMICharacter::OnAnimInstanceChanged()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerCameraManager, nullptr, "OnCharacterUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerCameraManager" },
		{ "Comment", "/** For optional usage if pawn not properly set - not used by default */" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "For optional usage if pawn not properly set - not used by default" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerCameraManager, nullptr, "OnFailSanityCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics
	{
		struct MIPlayerCameraManager_eventOnStartMontage_Parms
		{
			UAnimMontage* Montage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIPlayerCameraManager_eventOnStartMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound function for montage starting */" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "Bound function for montage starting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerCameraManager, nullptr, "OnStartMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::MIPlayerCameraManager_eventOnStartMontage_Parms), Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics
	{
		struct MIPlayerCameraManager_eventOnStopMontage_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIPlayerCameraManager_eventOnStopMontage_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((MIPlayerCameraManager_eventOnStopMontage_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIPlayerCameraManager_eventOnStopMontage_Parms), &Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Bound function for montage stopping */" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "Bound function for montage stopping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerCameraManager, nullptr, "OnStopMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::MIPlayerCameraManager_eventOnStopMontage_Parms), Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMIPlayerCameraManager);
	UClass* Z_Construct_UClass_AMIPlayerCameraManager_NoRegister()
	{
		return AMIPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AMIPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampYawDuringRootMotion_MetaData[];
#endif
		static void NewProp_bClampYawDuringRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampYawDuringRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewYawMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultViewYawMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewYawMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultViewYawMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MICharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMIPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMIPlayerCameraManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIPlayerCameraManager_ClearAnimInstance, "ClearAnimInstance" }, // 136820529
		{ &Z_Construct_UFunction_AMIPlayerCameraManager_OnCharacterUpdated, "OnCharacterUpdated" }, // 3326472703
		{ &Z_Construct_UFunction_AMIPlayerCameraManager_OnFailSanityCheck, "OnFailSanityCheck" }, // 3070359594
		{ &Z_Construct_UFunction_AMIPlayerCameraManager_OnStartMontage, "OnStartMontage" }, // 4020370362
		{ &Z_Construct_UFunction_AMIPlayerCameraManager_OnStopMontage, "OnStopMontage" }, // 1234005356
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Optionally used to clamp camera angle to turn in place limit while root motion is playing to prevent teleport after it ends\n */" },
		{ "IncludePath", "MIPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
		{ "ToolTip", "Optionally used to clamp camera angle to turn in place limit while root motion is playing to prevent teleport after it ends" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion_SetBit(void* Obj)
	{
		((AMIPlayerCameraManager*)Obj)->bClampYawDuringRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion = { "bClampYawDuringRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMIPlayerCameraManager), &Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((AMIPlayerCameraManager*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMIPlayerCameraManager), &Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMin = { "DefaultViewYawMin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMIPlayerCameraManager, DefaultViewYawMin), METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMax = { "DefaultViewYawMax", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMIPlayerCameraManager, DefaultViewYawMax), METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_CurrentAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_CurrentAnimInstance = { "CurrentAnimInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMIPlayerCameraManager, CurrentAnimInstance), Z_Construct_UClass_UMIAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_CurrentAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_CurrentAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_MICharacter_MetaData[] = {
		{ "Category", "PlayerCameraManager" },
		{ "ModuleRelativePath", "Public/MIPlayerCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_MICharacter = { "MICharacter", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMIPlayerCameraManager, MICharacter), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_MICharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_MICharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMIPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bClampYawDuringRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_DefaultViewYawMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_CurrentAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIPlayerCameraManager_Statics::NewProp_MICharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMIPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIPlayerCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMIPlayerCameraManager_Statics::ClassParams = {
		&AMIPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMIPlayerCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMIPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMIPlayerCameraManager()
	{
		if (!Z_Registration_Info_UClass_AMIPlayerCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMIPlayerCameraManager.OuterSingleton, Z_Construct_UClass_AMIPlayerCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMIPlayerCameraManager.OuterSingleton;
	}
	template<> MOVEIT_API UClass* StaticClass<AMIPlayerCameraManager>()
	{
		return AMIPlayerCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMIPlayerCameraManager);
	struct Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMIPlayerCameraManager, AMIPlayerCameraManager::StaticClass, TEXT("AMIPlayerCameraManager"), &Z_Registration_Info_UClass_AMIPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMIPlayerCameraManager), 1120838224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_169371710(TEXT("/Script/MoveIt"),
		Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
