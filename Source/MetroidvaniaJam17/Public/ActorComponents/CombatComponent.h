// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayData.h"
#include "MITypes.h"
#include "Actors/TargetActor.h"
#include "Components/ActorComponent.h"
#include "Components/CapsuleComponent.h"
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

	UPROPERTY(BlueprintReadOnly)
	AWeapon* EquippedWeapon;

	/**
		 *	Textures For the Weapon Cross-hairs
		 */
    
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrossHairsCenter;
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrossHairsLeft;
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrossHairsRight;
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrossHairsTop;
	UPROPERTY(EditAnywhere, Category = Crosshairs)
	UTexture2D* CrossHairsBottom;

	float GetHealth() const;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SetActionMode(const EActionMode InActionMode);

#pragma region Weapon

	bool bHasWeapon;
	
	void EquipWeapon(AWeapon* Weapon);
	UFUNCTION(BlueprintCallable, Category = "Weapons", meta =(DisplayName = "EquipWeapon"))
	void ChangeWeapon(AWeapon* Weapon);

	FOnWeaponChangedDelegate WeaponChangedDelegate;

#pragma endregion Weapon

#pragma region Movement

	UPROPERTY()
	bool bAiming;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Combat")
	EActionMode ActionMode;
		

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SetStrafeOrientation(EMIStrafeOrientation inStrafeOrientation, EMIMovementSystem inMovementSystem);

#pragma endregion Movement

#pragma region Targetting
public:
	// Combat State
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	EPlayerState PlayerState;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Constants")
	float TargetingRange = 900.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Targeting|Constants")
	float TargetingConeAngle = 35.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	AActor* CurrentTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Targeting")
	AActor* TargetActor;
	TSubclassOf<ATargetActor*> TargetMarker;
	
	UFUNCTION(BlueprintCallable, Category = "Targeting")
	AActor* GetBestTarget();

	UFUNCTION(BlueprintCallable, Category = "Targeting")
	void SetCurrentTarget(AActor* Target);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Targeting")
	void EndTarget();
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Targeting")
	void BeginTarget();

#pragma endregion Targetting
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

#pragma region HUDAndCrosshairs
	/**
	* HUD And Crosshairs
	*/
	class AMetroidHUD* HUD;
	class AMetroidController* Controller;
	void SetHUDCrosshairs(float DeltaTime);
	float CrosshairVelocityFactor;
	float CrosshairInAirFactor;

#pragma endregion HUDAndCrosshairs
};
