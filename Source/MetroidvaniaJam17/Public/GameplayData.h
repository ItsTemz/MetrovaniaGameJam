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


UENUM(BlueprintType)
enum class EWeaponLocation : uint8
{
	EWL_Back UMETA(DisplayName = "Back"),
	EWL_RightHand UMETA(DisplayName = "RightHand"),
	EWL_LeftHand UMETA(DisplayName = "LeftHand"),

	EWL_DEFAULT UMETA(DisplayName = "DEFAULT")
};

UENUM(BlueprintType)
enum class EWeaponProjectileType : uint8
{
	EWPT_HitScanWeapon UMETA(DisplayName = "HitScanWeapon"),
	EWPT_ProjectileWeapon UMETA(DisplayName = "ProjectileWeapon"),

	EWPT_DEFAULT UMETA(DisplayName = "DEFAULT")
};

UENUM(BlueprintType)
enum class EPlayerState :uint8
{
	EPS_Normal UMETA(DisplayName = "Normal"),
	EPS_Targeting UMETA(DisplayName = "Targeting"),
	EPS_Combat UMETA(DisplayName = "Combat"),

	EPS_Default UMETA(DisplayName = "Default")
	
};



















/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UGameplayData : public UObject
{
	GENERATED_BODY()

	
};
