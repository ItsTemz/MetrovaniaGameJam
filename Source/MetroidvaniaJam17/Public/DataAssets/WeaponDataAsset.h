// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityDataSet.h"
#include "GameplayData.h"
#include "Sound/SoundCue.h"
#include "UObject/Object.h"
#include "WeaponDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UWeaponDataAsset : public UUniversalDataAsset
{
	GENERATED_BODY()
	UWeaponDataAsset();
public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponDetails")
	EWeaponLocation WeaponLocation;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponDetails")
	USkeletalMesh* WeaponMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponDetails")
	TSubclassOf<UAnimInstance> WeaponAnimBP;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponDetails|Cosmetics")
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
	UTexture2D* AmmoIcon;
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon", EditConditionHides))
	EWeaponProjectileType WeaponDamageType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_ProjectileWeapon",
			EditConditionHides))
	TSubclassOf<AActor> ProjectileClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_HitScanWeapon",
			EditConditionHides))
	UParticleSystem* MuzzleEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RangedWeapon|Settings",
		meta = (EditCondition="bIsRangedWeapon && WeaponDamageType == EWeaponProjectileType::EWPT_HitScanWeapon",
			EditConditionHides))
	UParticleSystem* TracerEffect;

private:
// #if WITH_EDITOR
// 	virtual bool CanEditChange(const FProperty* InProperty) const override;
// #endif
};
