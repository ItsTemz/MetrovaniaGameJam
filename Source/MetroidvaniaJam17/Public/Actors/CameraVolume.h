// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Character/MetroidController.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "CameraVolume.generated.h"

UCLASS()
class METROIDVANIAJAM17_API ACameraVolume : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACameraVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RootComp")
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spline")
	USplineComponent* Spline;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Box")
	UBoxComponent* Box;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Controller")
	AMetroidController* Controller;

	UPROPERTY(EditAnywhere, Category = "CameraSettings")
	bool bUseSpline;

	UPROPERTY(BlueprintReadOnly, Category = "Character")
	class ACharacterBase* Character;

	bool bTurnUseSplineBackOn;

	FTransform InitialCameraTransform;
	
	UFUNCTION()
	void BoxOverlap(UPrimitiveComponent* OverlappedComponent,
								 AActor* OtherActor,
								 UPrimitiveComponent* OtherComp,
								 int32 OtherBodyIndex,
								 bool bFromSweep,
								 const FHitResult& SweepResult
	);
	UFUNCTION()
	void BoxEndOverlap(UPrimitiveComponent* OverlappedComponent,
								 AActor* OtherActor,
								 UPrimitiveComponent* OtherComp,
								 int32 OtherBodyIndex
	);

	UPROPERTY(EditAnywhere, Category = "CameraSettings")
	float ChangeViewTargetBlendTime = 2.f;

	UPROPERTY(EditAnywhere, Category = "CameraSettings")
	float BlendExp = 3.f;

	UPROPERTY(EditAnywhere, Category = "CameraSettings")
	float CameraFollowSpeed = 2.f;
	
	UPROPERTY(EditAnywhere, Category = "CameraSettings")
	float RotationInterpSpeed = 2.f;

	UFUNCTION(BlueprintCallable)
	void MoveCamera(float Deltatime);
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
