// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AI.h"


AAI::AAI(const FObjectInitializer& OA) : ACharacterBase(OA)
{
	PrimaryActorTick.bCanEverTick = true;
	FollowCamera = nullptr;
	CameraBoom = nullptr;
}

// Called when the game starts or when spawned
void AAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

