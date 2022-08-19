// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MetroidGameplayAbility.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCooldownStartDelegate, FGameplayTagContainer, CD_Tags,  FGameplayEffectSpecHandle, SpecHandle, FActiveGameplayEffectHandle, Handle);

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UMetroidGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UMetroidGameplayAbility();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AbilityBase")
	class UAbilityDataSet* ReferenceData;

	UPROPERTY(VisibleAnywhere, BlueprintAssignable, Category = "Events")
	FOnCooldownStartDelegate OnCoolDownStart;
	
	// Temp container that we will return the pointer to in GetCooldownTags().
	// This will be a union of our CooldownTags and the Cooldown GE's cooldown tags.
	UPROPERTY(Transient)
	FGameplayTagContainer TempCooldownTags;
	
	virtual const FGameplayTagContainer* GetCooldownTags() const override;
	virtual void ApplyCooldown(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
					FGameplayAbilityActivationInfo ActivationInfo) const override;

	/** Checks cost. returns true if we can pay for the ability. False if not */
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	/** Applies the ability's cost to the target */
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	
};
