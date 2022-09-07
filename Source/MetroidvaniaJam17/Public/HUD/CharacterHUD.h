// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DebugHUD.h"
#include "CharacterHUD.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API ACharacterHUD : public ADebugHUD
{
	GENERATED_BODY()
protected:
	virtual void DrawHUD() override;
};
