// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Weapon.h"

#include "Character/CharacterBase.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Net/UnrealNetwork.h"
#include "Weapons/Projectile.h"


// Sets default values
AWeapon::AWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(GetRootComponent());

	WeaponMesh->SetCollisionResponseToAllChannels(ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	InitDataAsset();
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AWeapon, WeaponState);
}

void AWeapon::InitDataAsset()
{
	if(WeaponDataAsset)
	{
		WeaponMesh->SetSkeletalMesh(WeaponDataAsset->WeaponMesh);
		WeaponMesh->SetAnimClass(WeaponDataAsset->WeaponAnimBP);
		
		if(ACharacterBase* Character = Cast<ACharacterBase>(GetOwner()))
		{
			// Give Abilities
		}

		bIsRangedWeapon = WeaponDataAsset->bIsRangedWeapon;
		if(bIsRangedWeapon)
		{
			FireSound = WeaponDataAsset->FireSound;
			AmmoCapacity = WeaponDataAsset->AmmoCapacity;
			bAutomatic = WeaponDataAsset->bAutomatic;
			FireRate = WeaponDataAsset->FireRate;
			ReloadMontage = WeaponDataAsset->ReloadMontage;
			AttachLocation = GetSocketName();

			WeaponDamageType =  WeaponDataAsset->WeaponDamageType;
			ProjectileClass = WeaponDataAsset->ProjectileClass;
			MuzzleEffect = WeaponDataAsset->MuzzleEffect;
			TracerEffect = WeaponDataAsset->TracerEffect;
		}
	}
}

FName AWeapon::GetSocketName() const
{
	if(WeaponDataAsset)
	{
		switch (WeaponDataAsset->WeaponLocation)
		{
		case EWeaponLocation::EWL_Back:
			return FName("BackSocket");
			break;
		case EWeaponLocation::EWL_LeftHand:
			return FName("LeftHandSocket");
			break;
		case EWeaponLocation::EWL_RightHand:
			return FName("RightHandSocket");
			break;
		case EWeaponLocation::EWL_DEFAULT:
			return FName("RightHandSocket");
			break;
		}
	}
	return FName("RightHandSocket");
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



void AWeapon::Fire(const FVector& HitTarget)
{
	if(FireAnimation)
	{
		WeaponMesh->PlayAnimation(FireAnimation, false);
	}
	
	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	
	const USkeletalMeshSocket* MuzzleSocket  = GetWeaponMesh()->GetSocketByName(MuzzleSocketName);

	if(MuzzleSocket)
	{
		const FTransform SocketTransform = MuzzleSocket->GetSocketTransform(GetWeaponMesh());

		//From Muzzle Location To Hit Location from trace under Mouse
		const FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		const FRotator TargetRotation = ToTarget.Rotation();
		if(ProjectileClass && InstigatorPawn)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = GetOwner();
			SpawnParams.Instigator = InstigatorPawn;
			UWorld* World = GetWorld();
			if(World)
			{
				AProjectile* Projectile = World->SpawnActor<AProjectile>(
					ProjectileClass,
					SocketTransform.GetLocation(),
					TargetRotation,
					SpawnParams
					);
				Projectile->SetOwner(GetOwner());
				
			}
		}
	}
}

void AWeapon::OnRep_WeaponState()
{
	switch (WeaponState)
	{
	case EWeaponState::EWS_Initial:
		ShowPickUpWidget(false);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EWeaponState::EWS_Equipped:
		ShowPickUpWidget(false);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	case EWeaponState::EWS_Dropped:
		ShowPickUpWidget(false);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	}
}

void AWeapon::SetWeaponState(EWeaponState InWeaponState)
{
	WeaponState = InWeaponState;
	switch (WeaponState)
	{
	case EWeaponState::EWS_Equipped:
		ShowPickUpWidget(false);
		AreaSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ShowPickUpWidget(false);
		GetAreaSphere()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		break;
	}
}

