// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/CombatComponent.h"

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

	// ...
	
}

#pragma region Weapon
void UCombatComponent::EquipWeapon(AWeapon* Weapon)
{
	ChangeWeapon(Weapon);
}

void UCombatComponent::ChangeWeapon(AWeapon* Weapon)
{
	if(!Character)
	{
		Character = Cast<ACharacterBase>(GetOwner());
	}
	if(Weapon && Character)
	{
		EquippedWeapon = Weapon;
		EquippedWeapon->SetWeaponState(EWeaponState::EWS_Equipped);

		if(const USkeletalMeshSocket* HandSocket = Character->GetMesh()->GetSocketByName(FName("RightHandSocket")))
		{
			HandSocket->AttachActor(EquippedWeapon, Character->GetMesh());
		}
		EquippedWeapon->SetOwner(Character);
		//Character->GetCharacterMovement()->bOrientRotationToMovement = false;
		//Character->bUseControllerRotationYaw = true;
	}

}

#pragma endregion Weapon
// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                     FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

