// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BossAI.h"

#include "MISpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ABossAI::ABossAI(const FObjectInitializer& OA)
	: AMICharacter(OA)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
	SetRootComponent(RootComp);
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>(TEXT("AttributeSet"));

	CameraBoom = CreateDefaultSubobject<UMISpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	GetCapsuleComponent()->SetupAttachment(GetRootComponent());
}

void ABossAI::GiveAbility(TSubclassOf<UGameplayAbility> AbilityToGive)
{
	if (AbilitySystemComponent)
	{
		if (HasAuthority() && AbilityToGive)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGive, 1, 0));
		}
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

bool ABossAI::isDead()
{
	return bIsDead;
}

void ABossAI::HandleDeath()
{
	bIsDead = true;
}

void ABossAI::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddForwardMovementInput(Direction, Value);
	}
}

void ABossAI::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddRightMovementInput(Direction, Value);
	}
}

void ABossAI::Turn(float Rate)
{
	AddControllerYawInput(Rate);
}

void ABossAI::LookUp(float Rate)
{
	AddControllerPitchInput(Rate);
}

void ABossAI::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

// Called when the game starts or when spawned
void ABossAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABossAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABossAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ABossAI::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABossAI::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ABossAI::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ABossAI::LookUp);
}

