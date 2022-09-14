// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BossSplineActor.h"

#include "Kismet/KismetMathLibrary.h"


// Sets default values
ABossSplineActor::ABossSplineActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComp);
	
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(GetRootComponent());
	Spline->SetRelativeLocation(FVector(0.f, 0.f, 160.f));

}

// Called when the game starts or when spawned
void ABossSplineActor::BeginPlay()
{
	Super::BeginPlay();
}


void ABossSplineActor::MoveActor(const float DeltaTime, AActor* ActorToMove, AActor* ActorToFocus,
	const float FollowSpeed, const float RotationSpeed, FVector& Location, FRotator& LookAtRotation)
{
	if (IsValid(ActorToMove) && IsValid(ActorToFocus))
	{
		const FVector ActorToMoveLoc = ActorToMove->GetActorLocation();
		const FVector ActorToFocusLoc = ActorToFocus->GetActorLocation();

		const FRotator LookAtRot = UKismetMathLibrary::FindLookAtRotation(ActorToMoveLoc, ActorToFocusLoc);
		const FVector ClosestSplineLoc = Spline->FindLocationClosestToWorldLocation(ActorToFocusLoc, ESplineCoordinateSpace::World);

		const FVector FinalLoc = FMath::VInterpTo(ActorToMoveLoc, ClosestSplineLoc, DeltaTime, FollowSpeed);
		FRotator FinalRot = FMath::RInterpTo(ActorToMove->GetActorRotation(), LookAtRot, DeltaTime, RotationSpeed);

		Location = FinalLoc;
		LookAtRotation = FinalRot;

		FinalRot.Roll = 0.f;
		ActorToMove->SetActorLocationAndRotation(FinalLoc, FinalRot);
	}
}

// Called every frame
void ABossSplineActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
