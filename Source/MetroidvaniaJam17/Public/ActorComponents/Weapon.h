// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Actors/Interactable.h"
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

	

	virtual void Fire(const FVector& HitTarget);
	
public:

	UPROPERTY(EditAnywhere, Category = "Ability")
	TArray<UGameplayAbility*> AbilitiesToGive;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Weapon Properties")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, Category = "Weapon Properties", ReplicatedUsing = OnRep_WeaponState)
	EWeaponState WeaponState;
	
	UPROPERTY(EditAnywhere, Category = "WeaponProperties")
	UAnimationAsset* FireAnimation;

	UFUNCTION()
	void OnRep_WeaponState();

public:
	void SetWeaponState(EWeaponState InWeaponState);
	FORCEINLINE USphereComponent* GetAreaSphere() const { return AreaSphere; }
	FORCEINLINE USkeletalMeshComponent* GetWeaponMesh() const { return WeaponMesh; }
};
