// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRandomStream;
#ifdef MOVEIT_MICharacterMovementComponent_generated_h
#error "MICharacterMovementComponent.generated.h already included, missing '#pragma once' in MICharacterMovementComponent.h"
#endif
#define MOVEIT_MICharacterMovementComponent_generated_h

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_SPARSE_DATA
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerPing); \
	DECLARE_FUNCTION(execSyncRandomSeed); \
	DECLARE_FUNCTION(execGetCurrentSyncTime); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execIsCrouchRunning); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execK2_GetMoveForwardNormal); \
	DECLARE_FUNCTION(execK2_GetMoveForwardAngle); \
	DECLARE_FUNCTION(execSetMoveForwardNormal); \
	DECLARE_FUNCTION(execSetMoveForwardAngle); \
	DECLARE_FUNCTION(execK2_GetMaxSprintDirectionInputNormal); \
	DECLARE_FUNCTION(execK2_GetMaxSprintDirectionInputAngle); \
	DECLARE_FUNCTION(execSetMaxSprintDirectionInputNormal); \
	DECLARE_FUNCTION(execSetMaxSprintDirectionInputAngle); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetTraversalVelocity); \
	DECLARE_FUNCTION(execGetImpactVelocity);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerPing); \
	DECLARE_FUNCTION(execSyncRandomSeed); \
	DECLARE_FUNCTION(execGetCurrentSyncTime); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execIsCrouchRunning); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execK2_GetMoveForwardNormal); \
	DECLARE_FUNCTION(execK2_GetMoveForwardAngle); \
	DECLARE_FUNCTION(execSetMoveForwardNormal); \
	DECLARE_FUNCTION(execSetMoveForwardAngle); \
	DECLARE_FUNCTION(execK2_GetMaxSprintDirectionInputNormal); \
	DECLARE_FUNCTION(execK2_GetMaxSprintDirectionInputAngle); \
	DECLARE_FUNCTION(execSetMaxSprintDirectionInputNormal); \
	DECLARE_FUNCTION(execSetMaxSprintDirectionInputAngle); \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetTraversalVelocity); \
	DECLARE_FUNCTION(execGetImpactVelocity);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMICharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UMICharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMICharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMICharacterMovementComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUMICharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UMICharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMICharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMICharacterMovementComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMICharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMICharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMICharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMICharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMICharacterMovementComponent(UMICharacterMovementComponent&&); \
	NO_API UMICharacterMovementComponent(const UMICharacterMovementComponent&); \
public:


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMICharacterMovementComponent(UMICharacterMovementComponent&&); \
	NO_API UMICharacterMovementComponent(const UMICharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMICharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMICharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMICharacterMovementComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_37_PROLOG
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_RPC_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_INCLASS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class UMICharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacterMovementComponent_h


#define FOREACH_ENUM_EMIPIVOTTYPE(op) \
	op(EMIPivotType::PT_Velocity) \
	op(EMIPivotType::PT_Acceleration) \
	op(EMIPivotType::PT_Disabled) 

enum class EMIPivotType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIPivotType>();

#define FOREACH_ENUM_EMIFLOORSLIDE(op) \
	op(EMIFloorSlide::FSR_Sprinting) \
	op(EMIFloorSlide::FSR_SpeedThreshold) \
	op(EMIFloorSlide::FSR_SprintAndSpeedThreshold) \
	op(EMIFloorSlide::FSR_Disabled) \
	op(EMIFloorSlide::FSR_NeverUsed) 

enum class EMIFloorSlide : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIFloorSlide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
