// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/TargetCapsule.h"


// Sets default values
ATargetCapsule::ATargetCapsule()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComp);

	TargetCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
	TargetCapsule->SetupAttachment(GetRootComponent());
}

TArray<AActor*> ATargetCapsule::GetAllOverlappingActors()
{
	TArray<AActor*> OverlappingActors;
	TargetCapsule->GetOverlappingActors(OverlappingActors);
	return OverlappingActors;
}

AActor* ATargetCapsule::GetNearestOverlappingActor()
{
	TArray<AActor*> OverlappingActors;
	TargetCapsule->GetOverlappingActors(OverlappingActors);
	AActor* ClosestActor{nullptr};
	if (OverlappingActors.Num() > 0)
	{
		for (const auto Actor : OverlappingActors)
		{
			const float Distance  = CheckDistance(this->GetActorLocation(), Actor->GetActorLocation());
			if (Distance < LastClosestDistance)
			{
				LastClosestDistance = Distance;
				ClosestActor = Actor;
			}
		}
	}
	return ClosestActor;
}

float ATargetCapsule::CheckDistance(FVector Actor1, FVector Actor2)
{
	return (Actor1 - Actor2).Size();
}

// Called when the game starts or when spawned
void ATargetCapsule::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ATargetCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
