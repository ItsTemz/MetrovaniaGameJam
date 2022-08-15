// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterBase.h"

#include "MIViewComponent.h"
#include "Camera/CameraComponent.h"

ACharacterBase::ACharacterBase(const FObjectInitializer& OA)
	:AMICharacter(OA)
{
	// So that we can use tick
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<UMISpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetMesh());
	CameraBoom->TargetArmLength = 360.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	ViewComponent = CreateDefaultSubobject<UMIViewComponent>(TEXT("ViewComponent"));

}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

#pragma region Inputs
void ACharacterBase::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddForwardMovementInput(Direction, Value);
	}
}

void ACharacterBase::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddRightMovementInput(Direction, Value);
	}
}


void ACharacterBase::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ACharacterBase::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ACharacterBase::CrouchButtonPressed()
{
	if (bIsCrouched)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

void ACharacterBase::SprintButtonPressed()
{
	Sprint();
}

void ACharacterBase::SprintButtonReleased()
{
	StopSprinting();
}

void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ACharacterBase::CrouchButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACharacterBase::SprintButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACharacterBase::SprintButtonReleased);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ACharacterBase::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterBase::LookUp);
}
#pragma endregion Inputs