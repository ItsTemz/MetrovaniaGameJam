// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/CameraVolume.h"

#include "Character/CharacterBase.h"


// Sets default values
ACameraVolume::ACameraVolume()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComp);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(GetRootComponent());
	Camera->SetRelativeLocation(FVector(0.f, 0.f, 90.f));

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(GetRootComponent());
	Spline->SetRelativeLocation(FVector(0.f, 0.f, 160.f));

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ACameraVolume::BeginPlay()
{
	Super::BeginPlay();

	if(Box)
	{
		Box->OnComponentBeginOverlap.AddDynamic(this, &ACameraVolume::BoxOverlap);
		Box->OnComponentEndOverlap.AddDynamic(this, &ACameraVolume::BoxEndOverlap);
	}

	Controller = Cast<AMetroidController>(GetWorld()->GetFirstPlayerController());

	bTurnUseSplineBackOn = bUseSpline;

	InitialCameraTransform = Camera->GetComponentTransform();

	
}

void ACameraVolume::BoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Character = Cast<ACharacterBase>(OtherActor);
	if(Character)
	{
		Character->SetCurrentCameraVolume(this);
		Character->bUseViewRot = false;
	}
	if(Controller)
	{
		Controller->SetCurrentCameraVolume(this);
		Controller->SetViewTargetWithBlend(this, ChangeViewTargetBlendTime, EViewTargetBlendFunction::VTBlend_EaseInOut, BlendExp, true);
	}
}

void ACameraVolume::BoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Character = Cast<ACharacterBase>(OtherActor);
	if(Controller && Character)
	{
		Character->bUseViewRot = true;
		Controller->SetViewTargetWithBlend(Character, ChangeViewTargetBlendTime, EViewTargetBlendFunction::VTBlend_EaseInOut, BlendExp, true);
	}
}


void ACameraVolume::MoveCamera(float Deltatime)
{
	if(bUseSpline && Character)
	{
		FVector CameraLoc = Camera->GetComponentLocation();
		FVector CharacterLoc = Character->GetActorLocation();

		FRotator LookAtRot = UKismetMathLibrary::FindLookAtRotation(CameraLoc, CharacterLoc);

		FVector ClosestSplineLoc = Spline->FindLocationClosestToWorldLocation(CharacterLoc, ESplineCoordinateSpace::World);

		FVector FinalLoc = FMath::VInterpTo(CameraLoc, ClosestSplineLoc, Deltatime, CameraFollowSpeed);
		FRotator FinalRot = FMath::RInterpTo(Camera->GetComponentRotation(), LookAtRot, Deltatime, RotationInterpSpeed);
		
		Camera->SetWorldLocationAndRotation(FinalLoc, FinalRot);
	}
}

// Called every frame
void ACameraVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveCamera(DeltaTime);
}

