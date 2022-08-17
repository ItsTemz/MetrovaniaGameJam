// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MetroidController.generated.h"

UCLASS()
class METROIDVANIAJAM17_API AMetroidController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMetroidController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	class ACameraVolume* CurrentCameraVolume;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetCurrentCameraVolume(ACameraVolume* CameraVolume) {CurrentCameraVolume = CameraVolume; }
	
};
