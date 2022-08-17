// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class METROIDVANIAJAM17_API AInteractable : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractable();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Root")
	USceneComponent* ActorRootComponent;
	UPROPERTY(EditAnywhere, Category = "Widgets")
	class UWidgetComponent* PickUpWidget;
	UPROPERTY(EditDefaultsOnly, Category = "Weapon Properties")
	class USphereComponent* AreaSphere;
	
	void ShowPickUpWidget(bool bShowWidget) const;
	
	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent,
								 AActor* OtherActor,
								 UPrimitiveComponent* OtherComp,
								 int32 OtherBodyIndex,
								 bool bFromSweep,
								 const FHitResult& SweepResult
	);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent,
							AActor* OtherActor,
							UPrimitiveComponent* OtherComp,
							int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
