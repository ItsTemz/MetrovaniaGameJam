// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "MICharacter.h"
#include "MISpringArmComponent.h"
#include "ActorComponents/AttributeSetBase.h"
#include "GameFramework/Character.h"
#include "BossAI.generated.h"

UCLASS()
class METROIDVANIAJAM17_API ABossAI : public AMICharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABossAI(const FObjectInitializer& OA);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UMISpringArmComponent* CameraBoom;

#pragma region GameplayAbilitySystem
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS")
	UAttributeSetBase* AttributeSet;

	UFUNCTION(BlueprintCallable, Category = "GAS", meta = (DisplayName = "Give Ability"))
	void GiveAbility(TSubclassOf<UGameplayAbility> AbilityToGive);

#pragma endregion GameplayAbilitySystem

#pragma region PlayerDeath

	FOnHealthChangedDelegate HealthChangedDelegate;
	// The players current death state
	bool bIsDead = false;
	UFUNCTION(BlueprintCallable, Category = "Character")
	void SetIsDeath(bool isDead) { bIsDead = isDead; }
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

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Character")
	UAnimMontage* DeathAnimation;

#pragma endregion PlayerDeath


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

#pragma endregion Input
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* FollowCamera;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PreInitializeComponents() override;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {return AbilitySystemComponent; }
	
};
