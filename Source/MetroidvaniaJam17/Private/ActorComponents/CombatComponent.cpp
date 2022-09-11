// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/CombatComponent.h"

#include "MICharacterMovementComponent.h"
#include "MIViewComponent.h"
#include "Actors/TargetComponent.h"
#include "Character/CharacterBase.h"
#include "Engine/SkeletalMeshSocket.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HUD/MetroidHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Weapons/Weapon.h"


// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


float UCombatComponent::GetHealth() const
{
	if(Character)
	{
		if(UAttributeSetBase* AttributeSet = Character->AttributeSet)
		{
			return  AttributeSet->GetHealth();
		}
	}
	return 0;
}

// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();
	//SetActionMode(ActionMode);
}

void UCombatComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
	if(EquippedWeapon) EquippedWeapon->Destroy();
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
		//EquippedWeapon->InitDataAsset();

		if (const USkeletalMeshSocket* AttachSocket = Character->GetMesh()->GetSocketByName(
			EquippedWeapon->GetSocketName()))
		{
			AttachSocket->AttachActor(EquippedWeapon, Character->GetMesh());
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
			Character->AdventureCameraBoom->bEnableOrbit = false;
			break;
		case EActionMode::EAM_AdventureMode:
			ActionMode = EActionMode::EAM_AdventureMode;
			SetStrafeOrientation(EMIStrafeOrientation::SO_Neutral, EMIMovementSystem::MS_CycleOrientToMovement);
			Character->GetViewComponent()->K2_SetNewCamera(
				Character->AdventureCamera,
				CameraSettings,
				3.0f,
				EAlphaBlendOption::HermiteCubic,
				nullptr);

			Character->GetMICharacterMovement()->PivotType = EMIPivotType::PT_Acceleration;
			Character->GetMICharacterMovement()->PivotAccelerationMultiplier = 1.0f;
			Character->GetMICharacterMovement()->PivotBrakingDecelerationMultiplier = 1.0f;
			Character->GetMICharacterMovement()->PivotBonusAccelerationOnEnd = 400.0f;
			Character->AdventureCameraBoom->bEnableOrbit = true;

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
			Character->AdventureCameraBoom->bEnableOrbit = false;
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
			Character->AdventureCameraBoom->bEnableOrbit = false;
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
			Character->AdventureCameraBoom->bEnableOrbit = false;
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

AActor* UCombatComponent::GetBestTarget()
{
	AActor* LocalBestTarget = nullptr;
	float LocalCurrentValue = 0.f;
	float LocalBestValue = 0.f;
	AActor* LocalCurrentTarget = nullptr;
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Init(GetOwner(), 1);
	TArray<AActor*> OutActors;
	UClass* SeekClass = AActor::StaticClass();
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
	TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	UKismetSystemLibrary::SphereOverlapActors(GetWorld(), Character->GetActorLocation(), TargetingRange,
	                                          TraceObjectTypes, SeekClass, IgnoreActors, OutActors);

	for(AActor* Actor : OutActors)
	{
		LocalCurrentTarget = Actor;
		if(LocalCurrentTarget->GetComponentByClass(TSubclassOf<UTargetComponent>()))
		{
			const FVector CurrentTargetLoc = LocalCurrentTarget->GetActorLocation();
			const FVector ActorLoc = GetOwner()->GetActorLocation();
			const FVector ActorForwardVector = GetOwner()->GetActorForwardVector();
			const FVector UnitDirVec = UKismetMathLibrary::GetDirectionUnitVector(ActorLoc, CurrentTargetLoc);
			LocalCurrentValue = UKismetMathLibrary::Dot_VectorVector(ActorForwardVector, UnitDirVec);
			if(LocalCurrentValue > LocalBestValue || !LocalBestTarget)
			{
				LocalBestValue = LocalCurrentValue;
				LocalBestTarget = LocalCurrentTarget;
			}
		}
	}
	if(LocalBestValue)
	{
		if(UKismetMathLibrary::DegAcos(LocalBestValue) <= TargetingConeAngle)
		{
			return LocalBestTarget;
		}
		return nullptr;
	}
	return nullptr;
}

void UCombatComponent::SetCurrentTarget(AActor* Target)
{
	if (!CurrentTarget)
	{
		EndTarget();

		CurrentTarget = Target;

		BeginTarget();
	}
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	SetHUDCrosshairs(DeltaTime);
}

void UCombatComponent::SetHUDCrosshairs(float DeltaTime)
{
	if (Character == nullptr || Character->Controller == nullptr) return;
	Controller = Controller == nullptr ? Cast<AMetroidController>(Character->Controller) : Controller;
	if (Controller)
	{
		HUD = HUD == nullptr ? Cast<AMetroidHUD>(Controller->GetHUD()) : HUD;
		if (HUD)
		{
			FHUDPackage HUDPackage;
			if (EquippedWeapon)
			{
				HUDPackage.CrossHairsCenter = CrossHairsCenter;
				HUDPackage.CrossHairsTop	= CrossHairsTop;
				HUDPackage.CrossHairsBottom = CrossHairsBottom;
				HUDPackage.CrossHairsLeft = CrossHairsLeft;
				HUDPackage.CrossHairsRight	= CrossHairsRight;
			}
			else
			{
				HUDPackage.CrossHairsCenter = nullptr;
				HUDPackage.CrossHairsTop = nullptr;
				HUDPackage.CrossHairsBottom = nullptr;
				HUDPackage.CrossHairsLeft = nullptr;
				HUDPackage.CrossHairsRight = nullptr;
			}
			// Calculate Cross-hair Spread
			// [0, 600] -> [0 , 1]
			const FVector2D WalkSpeedRange(0.f, Character->GetMICharacterMovement()->MaxWalkSpeed);
			const FVector2D VelocityMultiplierRange(0.f, 1.f);
			FVector Velocity = Character->GetVelocity();
			Velocity.Z = 0.f;

			CrosshairVelocityFactor = FMath::GetMappedRangeValueClamped(WalkSpeedRange, VelocityMultiplierRange,
																		Velocity.Size());
			if(Character->GetMICharacterMovement()->IsFalling())
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 2.25f, DeltaTime, 2.25f);
			}
			else
			{
				CrosshairInAirFactor = FMath::FInterpTo(CrosshairInAirFactor, 0.f, DeltaTime, 30.f);
			}
			
			HUDPackage.CrosshairSpread = CrosshairVelocityFactor + CrosshairInAirFactor;
			HUD->SetHudPackage(HUDPackage);
		}
	}
}

