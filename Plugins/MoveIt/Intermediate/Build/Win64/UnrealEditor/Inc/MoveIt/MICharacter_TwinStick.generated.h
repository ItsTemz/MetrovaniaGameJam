// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APlayerController;
#ifdef MOVEIT_MICharacter_TwinStick_generated_h
#error "MICharacter_TwinStick.generated.h already included, missing '#pragma once' in MICharacter_TwinStick.h"
#endif
#define MOVEIT_MICharacter_TwinStick_generated_h

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_SPARSE_DATA
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_RPC_WRAPPERS \
	virtual void UpdateControlRotation_Implementation(FRotator const& NewControlRotation); \
	virtual bool GetGamepadFacingRotation_Implementation(FVector WorldDirection, FRotator& NewRotation) const; \
	virtual bool GetMouseFacingRotation_Implementation(FVector MouseWorldLocation, FVector MouseWorldDirection, FRotator& NewRotation) const; \
 \
	DECLARE_FUNCTION(execUpdateControlRotation); \
	DECLARE_FUNCTION(execGetGamepadFacingRotation); \
	DECLARE_FUNCTION(execGetMouseFacingRotation); \
	DECLARE_FUNCTION(execReceiveGamepadTurnInput); \
	DECLARE_FUNCTION(execReceiveMouseTurnInput); \
	DECLARE_FUNCTION(execSetCustomGameInputMode);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateControlRotation_Implementation(FRotator const& NewControlRotation); \
	virtual bool GetGamepadFacingRotation_Implementation(FVector WorldDirection, FRotator& NewRotation) const; \
	virtual bool GetMouseFacingRotation_Implementation(FVector MouseWorldLocation, FVector MouseWorldDirection, FRotator& NewRotation) const; \
 \
	DECLARE_FUNCTION(execUpdateControlRotation); \
	DECLARE_FUNCTION(execGetGamepadFacingRotation); \
	DECLARE_FUNCTION(execGetMouseFacingRotation); \
	DECLARE_FUNCTION(execReceiveGamepadTurnInput); \
	DECLARE_FUNCTION(execReceiveMouseTurnInput); \
	DECLARE_FUNCTION(execSetCustomGameInputMode);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_EVENT_PARMS \
	struct MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms \
	{ \
		FVector WorldDirection; \
		FRotator NewRotation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_TwinStick_eventGetGamepadFacingRotation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_TwinStick_eventGetMouseFacingRotation_Parms \
	{ \
		FVector MouseWorldLocation; \
		FVector MouseWorldDirection; \
		FRotator NewRotation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_TwinStick_eventGetMouseFacingRotation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_TwinStick_eventK2_OnReceiveController_Parms \
	{ \
		AController* NewController; \
	}; \
	struct MICharacter_TwinStick_eventK2_OnReceivePlayerController_Parms \
	{ \
		APlayerController* NewPlayerController; \
	}; \
	struct MICharacter_TwinStick_eventUpdateControlRotation_Parms \
	{ \
		FRotator NewControlRotation; \
	};


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_CALLBACK_WRAPPERS
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMICharacter_TwinStick(); \
	friend struct Z_Construct_UClass_AMICharacter_TwinStick_Statics; \
public: \
	DECLARE_CLASS(AMICharacter_TwinStick, AMICharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter_TwinStick)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMICharacter_TwinStick(); \
	friend struct Z_Construct_UClass_AMICharacter_TwinStick_Statics; \
public: \
	DECLARE_CLASS(AMICharacter_TwinStick, AMICharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter_TwinStick)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMICharacter_TwinStick(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter_TwinStick) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter_TwinStick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter_TwinStick); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter_TwinStick(AMICharacter_TwinStick&&); \
	NO_API AMICharacter_TwinStick(const AMICharacter_TwinStick&); \
public:


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter_TwinStick(AMICharacter_TwinStick&&); \
	NO_API AMICharacter_TwinStick(const AMICharacter_TwinStick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter_TwinStick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter_TwinStick); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter_TwinStick)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_15_PROLOG \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_EVENT_PARMS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_RPC_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_INCLASS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_INCLASS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class AMICharacter_TwinStick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_Templates_MICharacter_TwinStick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
