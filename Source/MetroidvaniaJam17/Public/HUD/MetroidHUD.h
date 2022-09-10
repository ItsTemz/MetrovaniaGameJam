// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterHUD.h"
#include "MetroidHUD.generated.h"

USTRUCT(BlueprintType)
struct FHUDPackage
{
	GENERATED_BODY()
public:
	UTexture2D* CrossHairsCenter;
	UTexture2D* CrossHairsLeft;
	UTexture2D* CrossHairsRight;
	UTexture2D* CrossHairsTop;
	UTexture2D* CrossHairsBottom;

	float CrosshairSpread;
};
/**
/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API AMetroidHUD : public ACharacterHUD
{
	GENERATED_BODY()
public:
	virtual void DrawHUD() override;
private:
	FHUDPackage HUDPackage;

	void DrawCrosshair(UTexture2D* Texture, FVector2D ViewportCenter, FVector2D Spread );

	UPROPERTY(EditAnywhere)
	float CrosshairSpreadMax;
public:
	FORCEINLINE void SetHudPackage(const FHUDPackage& Package){HUDPackage = Package; }
};
