// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMICharacter;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FOrientToFloorSettings;
class USkeletalMeshComponent;
class UAnimMontage;
enum class EMIMovementSystem : uint8;
class UCameraComponent;
class UMIPhysicalMaterial;
struct FMIWeapon;
enum class EMIMovementState : uint8;
class UNiagaraSystem;
class UParticleSystem;
class USoundBase;
#ifdef MOVEIT_MICharacter_generated_h
#error "MICharacter.generated.h already included, missing '#pragma once' in MICharacter.h"
#endif
#define MOVEIT_MICharacter_generated_h

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_34_DELEGATE \
struct _Script_MoveIt_eventMIHitWallDelegate_Parms \
{ \
	FVector ImpactVelocity; \
	FVector ImpactNormal; \
}; \
static inline void FMIHitWallDelegate_DelegateWrapper(const FMulticastScriptDelegate& MIHitWallDelegate, FVector ImpactVelocity, FVector ImpactNormal) \
{ \
	_Script_MoveIt_eventMIHitWallDelegate_Parms Parms; \
	Parms.ImpactVelocity=ImpactVelocity; \
	Parms.ImpactNormal=ImpactNormal; \
	MIHitWallDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_35_DELEGATE \
struct _Script_MoveIt_eventMIScuffWallDelegate_Parms \
{ \
	FVector ImpactVelocity; \
	FVector ImpactNormal; \
}; \
static inline void FMIScuffWallDelegate_DelegateWrapper(const FMulticastScriptDelegate& MIScuffWallDelegate, FVector ImpactVelocity, FVector ImpactNormal) \
{ \
	_Script_MoveIt_eventMIScuffWallDelegate_Parms Parms; \
	Parms.ImpactVelocity=ImpactVelocity; \
	Parms.ImpactNormal=ImpactNormal; \
	MIScuffWallDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_36_DELEGATE \
struct _Script_MoveIt_eventMIHitCharacterDelegate_Parms \
{ \
	AMICharacter* OtherCharacter; \
	FVector ImpactVelocity; \
	FVector ImpactNormal; \
}; \
static inline void FMIHitCharacterDelegate_DelegateWrapper(const FMulticastScriptDelegate& MIHitCharacterDelegate, AMICharacter* OtherCharacter, FVector ImpactVelocity, FVector ImpactNormal) \
{ \
	_Script_MoveIt_eventMIHitCharacterDelegate_Parms Parms; \
	Parms.OtherCharacter=OtherCharacter; \
	Parms.ImpactVelocity=ImpactVelocity; \
	Parms.ImpactNormal=ImpactNormal; \
	MIHitCharacterDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_SPARSE_DATA
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_RPC_WRAPPERS \
	virtual bool CanHitCharacter_Implementation(); \
	virtual bool CanScuffWall_Implementation() const; \
	virtual bool CanHitWall_Implementation() const; \
	virtual bool CanPlayHitByCharacterVoice_Implementation() const; \
	virtual FOrientToFloorSettings GetOrientToFloorSettings_Implementation() const; \
	virtual bool ShouldOrientToFloor_Implementation() const; \
	virtual bool ShouldCycleMovement_Implementation() const; \
	virtual bool ShouldAutoFloorSlide_Implementation() const; \
	virtual bool CanContinueFloorSlide_Implementation() const; \
	virtual bool CanStartFloorSlide_Implementation() const; \
	virtual bool CanCrouchRun_Implementation() const; \
	virtual bool IsSprinting_Implementation() const; \
	virtual bool CanSprint_Implementation() const; \
	virtual bool ServerReceiveRagdoll_Validate(FVector const& ); \
	virtual void ServerReceiveRagdoll_Implementation(FVector const& NewRagdollActorLocation); \
	virtual bool CanStopRagdoll_Implementation() const; \
	virtual bool CanStartRagdoll_Implementation() const; \
	virtual bool IsAimingWeapon_Implementation() const; \
	virtual bool SendInputToServer_Validate(float , float ); \
	virtual void SendInputToServer_Implementation(float X, float Y); \
	virtual TArray<UCameraComponent*> GetViewComponentStateCameras_Implementation() const; \
	virtual bool IsViewComponentStateActive_Implementation(uint8 State) const; \
	virtual UMIPhysicalMaterial* GetPhysicalMaterialOverride_Implementation() const; \
	virtual FMIWeapon GetWeaponAnimInfo_Implementation() const; \
 \
	DECLARE_FUNCTION(execCanHitCharacter); \
	DECLARE_FUNCTION(execCanScuffWall); \
	DECLARE_FUNCTION(execCanHitWall); \
	DECLARE_FUNCTION(execCanPlayHitByCharacterVoice); \
	DECLARE_FUNCTION(execOnCapsuleComponentHit); \
	DECLARE_FUNCTION(execGetOrientToFloorSettings); \
	DECLARE_FUNCTION(execIsCurrentFloorMovable); \
	DECLARE_FUNCTION(execIsOnWalkableFloor); \
	DECLARE_FUNCTION(execShouldOrientToFloor); \
	DECLARE_FUNCTION(execShouldCycleMovement); \
	DECLARE_FUNCTION(execOnRep_IsFloorSliding); \
	DECLARE_FUNCTION(execShouldAutoFloorSlide); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execCanContinueFloorSlide); \
	DECLARE_FUNCTION(execCanStartFloorSlide); \
	DECLARE_FUNCTION(execOnRep_IsCrouchRunning); \
	DECLARE_FUNCTION(execCanCrouchRun); \
	DECLARE_FUNCTION(execOnRep_IsSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execServerReceiveRagdoll); \
	DECLARE_FUNCTION(execOnRagdollStandUp); \
	DECLARE_FUNCTION(execStopRagdoll); \
	DECLARE_FUNCTION(execStartRagdoll); \
	DECLARE_FUNCTION(execOnRep_Ragdoll); \
	DECLARE_FUNCTION(execCanStopRagdoll); \
	DECLARE_FUNCTION(execCanStartRagdoll); \
	DECLARE_FUNCTION(execIsRagdollStandingUp); \
	DECLARE_FUNCTION(execIsRagdoll); \
	DECLARE_FUNCTION(execIsAimingWeapon); \
	DECLARE_FUNCTION(execTakeShotPhysicsImpact); \
	DECLARE_FUNCTION(execOnRep_SimulatedPivot); \
	DECLARE_FUNCTION(execOnStopMontage); \
	DECLARE_FUNCTION(execSendInputToServer); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execSetMovementSystem); \
	DECLARE_FUNCTION(execGetViewComponentStateCameras); \
	DECLARE_FUNCTION(execIsViewComponentStateActive); \
	DECLARE_FUNCTION(execGetPhysicalMaterialOverride); \
	DECLARE_FUNCTION(execGetWeaponAnimInfo); \
	DECLARE_FUNCTION(execGetMIMovementState); \
	DECLARE_FUNCTION(execOnRep_InitialOffset);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanPlayHitByCharacterVoice_Implementation() const; \
	virtual FOrientToFloorSettings GetOrientToFloorSettings_Implementation() const; \
	virtual bool ShouldOrientToFloor_Implementation() const; \
	virtual bool ShouldCycleMovement_Implementation() const; \
	virtual bool ShouldAutoFloorSlide_Implementation() const; \
	virtual bool CanContinueFloorSlide_Implementation() const; \
	virtual bool CanStartFloorSlide_Implementation() const; \
	virtual bool CanCrouchRun_Implementation() const; \
	virtual bool IsSprinting_Implementation() const; \
	virtual bool CanSprint_Implementation() const; \
	virtual bool ServerReceiveRagdoll_Validate(FVector const& ); \
	virtual void ServerReceiveRagdoll_Implementation(FVector const& NewRagdollActorLocation); \
	virtual bool CanStopRagdoll_Implementation() const; \
	virtual bool CanStartRagdoll_Implementation() const; \
	virtual bool IsAimingWeapon_Implementation() const; \
	virtual bool SendInputToServer_Validate(float , float ); \
	virtual void SendInputToServer_Implementation(float X, float Y); \
	virtual TArray<UCameraComponent*> GetViewComponentStateCameras_Implementation() const; \
	virtual bool IsViewComponentStateActive_Implementation(uint8 State) const; \
	virtual UMIPhysicalMaterial* GetPhysicalMaterialOverride_Implementation() const; \
	virtual FMIWeapon GetWeaponAnimInfo_Implementation() const; \
 \
	DECLARE_FUNCTION(execCanHitCharacter); \
	DECLARE_FUNCTION(execCanScuffWall); \
	DECLARE_FUNCTION(execCanHitWall); \
	DECLARE_FUNCTION(execCanPlayHitByCharacterVoice); \
	DECLARE_FUNCTION(execOnCapsuleComponentHit); \
	DECLARE_FUNCTION(execGetOrientToFloorSettings); \
	DECLARE_FUNCTION(execIsCurrentFloorMovable); \
	DECLARE_FUNCTION(execIsOnWalkableFloor); \
	DECLARE_FUNCTION(execShouldOrientToFloor); \
	DECLARE_FUNCTION(execShouldCycleMovement); \
	DECLARE_FUNCTION(execOnRep_IsFloorSliding); \
	DECLARE_FUNCTION(execShouldAutoFloorSlide); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execCanContinueFloorSlide); \
	DECLARE_FUNCTION(execCanStartFloorSlide); \
	DECLARE_FUNCTION(execOnRep_IsCrouchRunning); \
	DECLARE_FUNCTION(execCanCrouchRun); \
	DECLARE_FUNCTION(execOnRep_IsSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execServerReceiveRagdoll); \
	DECLARE_FUNCTION(execOnRagdollStandUp); \
	DECLARE_FUNCTION(execStopRagdoll); \
	DECLARE_FUNCTION(execStartRagdoll); \
	DECLARE_FUNCTION(execOnRep_Ragdoll); \
	DECLARE_FUNCTION(execCanStopRagdoll); \
	DECLARE_FUNCTION(execCanStartRagdoll); \
	DECLARE_FUNCTION(execIsRagdollStandingUp); \
	DECLARE_FUNCTION(execIsRagdoll); \
	DECLARE_FUNCTION(execIsAimingWeapon); \
	DECLARE_FUNCTION(execTakeShotPhysicsImpact); \
	DECLARE_FUNCTION(execOnRep_SimulatedPivot); \
	DECLARE_FUNCTION(execOnStopMontage); \
	DECLARE_FUNCTION(execSendInputToServer); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execSetMovementSystem); \
	DECLARE_FUNCTION(execGetViewComponentStateCameras); \
	DECLARE_FUNCTION(execIsViewComponentStateActive); \
	DECLARE_FUNCTION(execGetPhysicalMaterialOverride); \
	DECLARE_FUNCTION(execGetWeaponAnimInfo); \
	DECLARE_FUNCTION(execGetMIMovementState); \
	DECLARE_FUNCTION(execOnRep_InitialOffset);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_EVENT_PARMS \
	struct MICharacter_eventCanContinueFloorSlide_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanContinueFloorSlide_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanCrouchRun_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanCrouchRun_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanHitCharacter_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanHitCharacter_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanHitWall_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanHitWall_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanPlayHitByCharacterVoice_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanPlayHitByCharacterVoice_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanScuffWall_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanScuffWall_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanSprint_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanSprint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStartFloorSlide_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStartFloorSlide_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStartRagdoll_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStartRagdoll_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStopRagdoll_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStopRagdoll_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventGetOrientToFloorSettings_Parms \
	{ \
		FOrientToFloorSettings ReturnValue; \
	}; \
	struct MICharacter_eventGetPhysicalMaterialOverride_Parms \
	{ \
		UMIPhysicalMaterial* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventGetPhysicalMaterialOverride_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventGetViewComponentStateCameras_Parms \
	{ \
		TArray<UCameraComponent*> ReturnValue; \
	}; \
	struct MICharacter_eventGetWeaponAnimInfo_Parms \
	{ \
		FMIWeapon ReturnValue; \
	}; \
	struct MICharacter_eventIsAimingWeapon_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventIsAimingWeapon_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventIsSprinting_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventIsSprinting_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventIsViewComponentStateActive_Parms \
	{ \
		uint8 State; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventIsViewComponentStateActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetBoneImpactNiagara_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UNiagaraSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetBoneImpactNiagara_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetBoneImpactParticle_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetBoneImpactParticle_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetBoneImpactSound_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		USoundBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetBoneImpactSound_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetHitNiagara_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UNiagaraSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetHitNiagara_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetHitParticle_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetHitParticle_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetHitSound_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		USoundBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetHitSound_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetScuffNiagara_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UNiagaraSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetScuffNiagara_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetScuffParticle_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetScuffParticle_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventK2_GetScuffSound_Parms \
	{ \
		const UMIPhysicalMaterial* PhysMat; \
		USoundBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventK2_GetScuffSound_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct MICharacter_eventSendInputToServer_Parms \
	{ \
		float X; \
		float Y; \
	}; \
	struct MICharacter_eventServerReceiveRagdoll_Parms \
	{ \
		FVector NewRagdollActorLocation; \
	}; \
	struct MICharacter_eventShouldAutoFloorSlide_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventShouldAutoFloorSlide_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventShouldCycleMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventShouldCycleMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventShouldOrientToFloor_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventShouldOrientToFloor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_CALLBACK_WRAPPERS
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMICharacter(); \
	friend struct Z_Construct_UClass_AMICharacter_Statics; \
public: \
	DECLARE_CLASS(AMICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRootYawOffset=NETFIELD_REP_START, \
		bSimulatedPivot, \
		bIsSprinting, \
		bIsFloorSliding, \
		bIsCrouchRunning, \
		Input, \
		bRagdoll, \
		RagdollActorLocation, \
		NETFIELD_REP_END=RagdollActorLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAMICharacter(); \
	friend struct Z_Construct_UClass_AMICharacter_Statics; \
public: \
	DECLARE_CLASS(AMICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InitialRootYawOffset=NETFIELD_REP_START, \
		bSimulatedPivot, \
		bIsSprinting, \
		bIsFloorSliding, \
		bIsCrouchRunning, \
		Input, \
		bRagdoll, \
		RagdollActorLocation, \
		NETFIELD_REP_END=RagdollActorLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter(AMICharacter&&); \
	NO_API AMICharacter(const AMICharacter&); \
public:


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter(AMICharacter&&); \
	NO_API AMICharacter(const AMICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_38_PROLOG \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_EVENT_PARMS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_RPC_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_INCLASS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_INCLASS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class AMICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h


#define FOREACH_ENUM_EMIMOVEMENTSTATE(op) \
	op(EMIMovementState::MS_None) \
	op(EMIMovementState::MS_Sprinting) \
	op(EMIMovementState::MS_Crouching) \
	op(EMIMovementState::MS_CrouchRunning) \
	op(EMIMovementState::MS_FloorSliding) \
	op(EMIMovementState::MS_Ragdoll) 

enum class EMIMovementState : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
