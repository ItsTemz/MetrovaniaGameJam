// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Interactable.h"

#include "Character/CharacterBase.h"


// Sets default values
AInteractable::AInteractable()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// PickupWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("PickupWidget"));
}

void AInteractable::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacterBase* Character = Cast<ACharacterBase>(OtherActor);
	if (Character)
	{
		Character->SetOverlappingActor(this);
	}
}

void AInteractable::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ACharacterBase* Character = Cast<ACharacterBase>(OtherActor);
	if (Character)
	{
		Character->SetOverlappingActor(nullptr);
	}
}

void AInteractable::ShowPickUpWidget(bool bShowWidget) const
{
	// if (PickupWidget)
	// {
	// 	PickupWidget->SetVisibility(bShowWidget);
	// }
}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

