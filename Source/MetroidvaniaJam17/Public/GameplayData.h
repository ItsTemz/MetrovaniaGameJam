// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayData.generated.h"


UENUM(BlueprintType)
enum class EActionMode : uint8
{
	EAM_TPSMode UMETA(DisplayName = "Third Person Shooter Mode"),
	EAM_OverShoulderMode UMETA(DisplayName = "Over Shoulder Shooter Mode"),
	EAM_MeleeMode UMETA(DisplayName = "Melee Mode"),
	EAM_AdventureMode UMETA(DisplayName = "Adventure game Mode"),

	EAM_Default UMETA(DisplayName = "Default")
};


/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UGameplayData : public UObject
{
	GENERATED_BODY()

	
};
