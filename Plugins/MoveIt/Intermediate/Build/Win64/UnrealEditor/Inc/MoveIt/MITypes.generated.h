// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_MITypes_generated_h
#error "MITypes.generated.h already included, missing '#pragma once' in MITypes.h"
#endif
#define MOVEIT_MITypes_generated_h

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FOrientToFloorSettings>();

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIWeapon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMIWeapon>();

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsBlend_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FPhysicsBlend>();

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIShotImpact_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMIShotImpact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h


#define FOREACH_ENUM_EMISTRAFEORIENTATION(op) \
	op(EMIStrafeOrientation::SO_Neutral) \
	op(EMIStrafeOrientation::SO_Right) 

enum class EMIStrafeOrientation : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeOrientation>();

#define FOREACH_ENUM_EMIMOVEMENTSYSTEM(op) \
	op(EMIMovementSystem::MS_OrientToView) \
	op(EMIMovementSystem::MS_OrientToMovement) \
	op(EMIMovementSystem::MS_CycleOrientToMovement) 

enum class EMIMovementSystem : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIMovementSystem>();

#define FOREACH_ENUM_EMICROUCHINAIRBEHAVIOUR(op) \
	op(EMICrouchInAirBehaviour::CAB_Allow) \
	op(EMICrouchInAirBehaviour::CAB_Wait) \
	op(EMICrouchInAirBehaviour::CAB_Deny) 

enum class EMICrouchInAirBehaviour : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMICrouchInAirBehaviour>();

#define FOREACH_ENUM_EPHYSICSBLENDSTATE(op) \
	op(EPhysicsBlendState::PBS_Inactive) \
	op(EPhysicsBlendState::PBS_In) \
	op(EPhysicsBlendState::PBS_Out) 

enum class EPhysicsBlendState : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EPhysicsBlendState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
