﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "GameFramework/Actor.h"
#include "AI.generated.h"

UCLASS()
class METROIDVANIAJAM17_API AAI : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAI(const FObjectInitializer& OA);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
