// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AbilitySystemInterface.h"
#include "MICharacter.h"
#include "MISpringArmComponent.h"
#include "Abilities/GameplayAbility.h"
#include "ActorComponents/AttributeSetBase.h"
#include "ActorComponents/CombatComponent.h"
#include "Actors/CameraVolume.h"
#include "Actors/Interactable.h"
#include "Templates/MICharacter_TwinStick.h"
#include "CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API ACharacterBase : public AMICharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	
	ACharacterBase(const FObjectInitializer& OA);
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PreInitializeComponents() override;
	
public:

	UPROPERTY(BlueprintReadWrite, Category = "CameraVolume")
	ACameraVolume* CurrentCameraVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CombatComponent")
	UCombatComponent* CombatComponent;

	// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CosmeticMesh")
	// USkeletalMeshComponent* CosmeticMesh;

#pragma region GameplayAbilitySystem
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	UAttributeSetBase* AttributeSet;

	UFUNCTION(BlueprintCallable, Category = "GAS", meta = (DisplayName = "Give Ability"))
	void GiveAbility(TSubclassOf<UGameplayAbility> AbilityToGive);
	
#pragma endregion GameplayAbilitySystem

#pragma region PlayerDeath
	// The players current death state
	bool bIsDead = false;
	UFUNCTION(BlueprintCallable, Category = "Character")
	void SetIsDead(bool isDead) { bIsDead = isDead; }
	/**
	 * Checks whether or not the character is dead
	 * @returns bIsDead
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Character")
	bool GetIsDead() const {return bIsDead; }
	
	/**
	 * Handles what should happen when the player health reaches 0
	 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Character")
	void HandleDeath();

	void OnHealthChanged(float Health, float MaxValue);


#pragma endregion PlayerDeath

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	bool bUseViewRot = true;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FRotator ViewRot = FRotator(0.f, 45.f, 0.f);
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UMISpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera)
	bool bUseMousePointer = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	UDecalComponent* MouseCursorDecal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bToggleSprint = true;
private:
	/**
	* Handles camera blending and character state changes
	* Allows blending smoothly between any number of cameras
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UMIViewComponent* ViewComponent;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Widget, meta = (AllowPrivateAccess = "true"))
	// UWidgetComponent* OverHeadWidget;
	UPROPERTY()
	AInteractable* OverlappingItem;
	UPROPERTY(EditAnywhere, Category = Combat)
	UAnimMontage* FireWeaponMontage;
	
	UFUNCTION()
	void EquipWeapon();

	AMetroidController* PlayerController;

#pragma region Input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void Turn(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUp(float Rate);

	void TurnAtRate(float value);

	void LookUpAtRate(float value);

	// Crouching
	void CrouchButtonPressed();

	//Sprinting
	void SprintButtonPressed();
	void SprintButtonReleased();

	void DrawCursor();
#pragma endregion Input

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera");
	float BaseTurnRate = 45.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera");
	float BaseLookUpAtRate = 45.f;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Cameras|AdventureCamera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* AdventureCamera;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "Cameras|AdventureCamera")
	UMISpringArmComponent* AdventureCameraBoom;

	
	// Getter for the camera component
	FORCEINLINE UCameraComponent* GetCamera() const { return FollowCamera; }
	// Getter for the View Component
	FORCEINLINE UMIViewComponent* GetViewComponent() const { return ViewComponent; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetCurrentCameraVolume(ACameraVolume* CameraVolume) {CurrentCameraVolume = CameraVolume; }
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {return AbilitySystemComponent; }
	AWeapon* GetEquippedWeapon();
	//FVector GetHitTarget() const;
	void SetOverlappingActor(AInteractable* Item);

	friend class ACharacterHUD;
};
