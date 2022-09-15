// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "BossSplineActor.generated.h"

UCLASS()
class METROIDVANIAJAM17_API ABossSplineActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABossSplineActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RootComp")
	USceneComponent* RootComp;
	
	UPROPERTY(EditAnywhere, Category ="Spline")
	USplineComponent* Spline;

	
	UFUNCTION(BlueprintCallable, Category= "Spline")
	void MoveActor(
		const float DeltaTime,
		AActor* ActorToMove,
		AActor* ActorToFocus,
		const float FollowSpeed,
		const float RotationSpeed,
		FVector& Location,
		FRotator& LookAtRotation
		);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
