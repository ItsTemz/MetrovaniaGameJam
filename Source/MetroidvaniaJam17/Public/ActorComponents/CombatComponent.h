// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"
class AWeapon;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponChangedDelegate, AWeapon*, ChangedWeapon);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class METROIDVANIAJAM17_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCombatComponent();
	friend class ACharacterBase;

	UPROPERTY(BlueprintReadOnly, Category = "Character")
	ACharacterBase* Character;

	UPROPERTY()
	AWeapon* EquippedWeapon;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

#pragma region Weapon

	bool bHasWeapon;
	
	void EquipWeapon(AWeapon* Weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapons", meta =(DisplayName = "EquipWeapon"))
	void ChangeWeapon(AWeapon* Weapon);

	FOnWeaponChangedDelegate WeaponChangedDelegate;

#pragma endregion Weapon
	
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
