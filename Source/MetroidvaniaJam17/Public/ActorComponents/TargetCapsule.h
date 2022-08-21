// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "TargetCapsule.generated.h"

UCLASS()
class METROIDVANIAJAM17_API ATargetCapsule : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATargetCapsule();

	UPROPERTY(VisibleAnywhere, Category = "Root")
	USceneComponent* RootComp;
	UPROPERTY(EditAnywhere, Category ="Targeting")
	UCapsuleComponent* TargetCapsule;

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAllOverlappingActors();

	UFUNCTION(BlueprintCallable)
	AActor* GetNearestOverlappingActor();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	float CheckDistance(FVector Actor1, FVector Actor2);
	UPROPERTY(BlueprintReadOnly)
	float LastClosestDistance = 100000000000;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
