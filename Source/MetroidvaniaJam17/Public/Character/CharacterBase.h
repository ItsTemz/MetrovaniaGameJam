// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MICharacter.h"
#include "MISpringArmComponent.h"
#include "CharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API ACharacterBase : public AMICharacter
{
	GENERATED_BODY()
	ACharacterBase(const FObjectInitializer& OA);
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UMISpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;

private:
	/**
	* Handles camera blending and character state changes
	* Allows blending smoothly between any number of cameras
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UMIViewComponent* ViewComponent;

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

	// Crouching
	void CrouchButtonPressed();

	//Sprinting
	void SprintButtonPressed();
	void SprintButtonReleased();

#pragma endregion Input

public:
	// Getter for the camera component
	FORCEINLINE UCameraComponent* GetCamera() const { return FollowCamera; }
	// Getter for the View Component
	FORCEINLINE UMIViewComponent* GetViewComponent() const { return ViewComponent; }
};
