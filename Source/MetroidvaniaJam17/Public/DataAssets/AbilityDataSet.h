// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UniversalDataAsset.h"
#include "Abilities/GameplayAbility.h"
#include "GAS/MetroidGameplayAbility.h"
#include "UObject/Object.h"
#include "AbilityDataSet.generated.h"


/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UAbilityDataSet : public UUniversalDataAsset
{
	GENERATED_BODY()
	UAbilityDataSet();
	
public:
	// Defines the type of ability and where on the skill bar it should go

	FPrimaryAssetType AssetType;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Base Data")
	TSubclassOf<UMetroidGameplayAbility> GameplayAbility;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "CoolDown", meta=(EditConditionToggle))
	bool bActivateDynamicCooldown = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CoolDown",
		meta = (EditCondition="bActivateDynamicCooldown", EditConditionHides))
	FScalableFloat CooldownDuration;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CoolDown",
		meta = (EditCondition="bActivateDynamicCooldown", EditConditionHides))
	FGameplayTagContainer CooldownTags;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
	bool bActivateDynamicCost = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
	FScalableFloat Cost;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Cost")
	FGameplayAttribute AttributeCost;
};

