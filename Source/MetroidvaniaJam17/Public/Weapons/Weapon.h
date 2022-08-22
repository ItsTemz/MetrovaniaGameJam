// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "Abilities/GameplayAbility.h"
#include "Actors/Interactable.h"
#include "DataAssets/WeaponDataAsset.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"


UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Initial UMETA(DisplayName = "InitialState"),
	EWS_Equipped UMETA(DisplayName = "Equipped"),
	EWS_Dropped UMETA(DisplayName = "Dropped"),

	EWS_Max UMETA(DisplayName = "DefaultMax"),
};
UCLASS()
class METROIDVANIAJAM17_API AWeapon : public AInteractable
{
	GENERATED_BODY()

	AWeapon();
	virtual void Tick(float DeltaTime) override;

	
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void Fire(const FVector& HitTarget, bool bShouldHome);
	
public:

	UPROPERTY(EditAnywhere, Category = "Ability")
	TArray<UGameplayAbility*> AbilitiesToGive;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UWeaponDataAsset* WeaponDataAsset;

	UFUNCTION(BlueprintCallable)
	void InitDataAsset();
	
	UPROPERTY(EditDefaultsOnly, Category = "Weapon Properties")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties", ReplicatedUsing = OnRep_WeaponState)
	EWeaponState WeaponState;
	
	UPROPERTY(EditAnywhere, Category = "WeaponProperties")
	UAnimationAsset* FireAnimation;

	UPROPERTY(EditAnywhere, Category = "WeaponProperties")
	USoundCue* HitSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponDetails|Cosmetics")
	UParticleSystem* ImpactEffect;

	/*
	 * The skills that this weapon will give the player
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skills")
	TArray<UAbilityDataSet* > Skills;

	/*
	 * Set The values if the weapon is ranged
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon", meta=(EditConditionToggle))
	bool bIsRangedWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	USoundCue* FireSound;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	int32 AmmoCapacity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	bool bAutomatic;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && bAutomatic", EditConditionHides))
	float FireRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	UAnimMontage* ReloadMontage;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	FName MuzzleSocketName = "FireSocket";

	UPROPERTY()
	FName AttachLocation;
	UFUNCTION()
	FName GetSocketName() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	EWeaponProjectileType WeaponDamageType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_ProjectileWeapon",
			EditConditionHides))
	TSubclassOf<AProjectile> ProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_HitScanWeapon",
			EditConditionHides))
	UParticleSystem* MuzzleEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_HitScanWeapon",
			EditConditionHides))
	UParticleSystem* TracerEffect;
	
	
	UFUNCTION()
	void OnRep_WeaponState();

public:
	void SetWeaponState(EWeaponState InWeaponState);
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const { return WeaponMesh; }
};
