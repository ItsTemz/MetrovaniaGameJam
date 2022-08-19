// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/CombatComponent.h"

#include "MICharacterMovementComponent.h"
#include "MIViewComponent.h"
#include "Character/CharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	//SetActionMode(ActionMode);
}

#pragma region Weapon
void UCombatComponent::EquipWeapon(AWeapon* Weapon)
{
	ChangeWeapon(Weapon);
}

void UCombatComponent::ChangeWeapon(AWeapon* Weapon)
{
	if (!Character)
	{
		Character = Cast<ACharacterBase>(GetOwner());
	}
	if (Weapon && Character)
	{
		EquippedWeapon = Weapon;
		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

		if (const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(FName("RightHandSocket")))
		{
			HandSocket->AttachActor(EquippedWeapon, Character->GetMesh());
		}
		EquippedWeapon->SetOwner(Character);
	}
}

#pragma endregion Weapon
void UCombatComponent::SetActionMode(const EActionMode InActionMode)
{
	if (!bAiming && Character)
	{
		FMICameraViewBlend CameraSettings;
		CameraSettings.bScaleTimeOverViewDistance = true;
		CameraSettings.bIgnoreZDistance = false;
		CameraSettings.DistanceScalar = 1000.f;
		switch (InActionMode)
		{
		case EActionMode::EAM_Default:
			ActionMode = EActionMode::EAM_Default;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Neutral, EMIMovementSystem::MS_OrientToView);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->GetCamera(),
				CameraSettings,
				0.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Velocity;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 0.0f;

			break;
		case EActionMode::EAM_AdventureMode:
			ActionMode = EActionMode::EAM_AdventureMode;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Neutral, EMIMovementSystem::MS_CycleOrientToMovement);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->GetCamera(),
				CameraSettings,
				3.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Acceleration;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 1.0f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 1.0f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 400.0f;

			break;
		case EActionMode::EAM_MeleeMode:
			ActionMode = EActionMode::EAM_MeleeMode;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Right, EMIMovementSystem::MS_OrientToView);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->GetCamera(),
				CameraSettings,
				3.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Velocity;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 0.0f;

			break;
		case EActionMode::EAM_OverShoulderMode:
			ActionMode = EActionMode::EAM_OverShoulderMode;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Right, EMIMovementSystem::MS_OrientToView);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->GetCamera(),
				CameraSettings,
				1.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Velocity;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 0.0f;

			break;
		case EActionMode::EAM_TPSMode:
			ActionMode = EActionMode::EAM_TPSMode;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Neutral, EMIMovementSystem::MS_OrientToView);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->GetCamera(),
				CameraSettings,
				1.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Velocity;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 0.2f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 0.0f;

			break;
		}
	} //TODO PUT STOP AIMING HERE
}

void UCombatComponent::SetStrafeOrientation(EMIStrafeOrientation inStrafeOrientation,
                                            EMIMovementSystem inMovementSystem)
{
	Character->StrafeOrientation = inStrafeOrientation;
	Character->SetMovementSystem(inMovementSystem);
}

// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
