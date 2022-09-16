// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/CharacterBase.h"

#include "AbilitySystemComponent.h"
#include "MIViewComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Weapons/Weapon.h"

ACharacterBase::ACharacterBase(const FObjectInitializer& OA)
	: AMICharacter(OA)
{
	// So that we can use tick
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<UMISpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 360.f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SetupAttachment(GetCapsuleComponent());

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	AdventureCameraBoom = CreateDefaultSubobject<UMISpringArmComponent>(TEXT("AdventureCameraBoom"));
	AdventureCameraBoom->SetupAttachment(GetRootComponent());
	AdventureCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("AdventureCamera"));
	AdventureCamera->SetupAttachment(AdventureCameraBoom);

	ViewComponent = CreateDefaultSubobject<UMIViewComponent>(TEXT("ViewComponent"));
	
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AttributeSet = CreateDefaultSubobject<UAttributeSetBase>(TEXT("AttributeSet"));

	CombatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComp"));

	MouseCursorDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("MouseCursorDecal"));
	MouseCursorDecal->SetupAttachment(GetRootComponent());
	MouseCursorDecal->DecalSize = FVector(16.f, 32.f, 32.f);
	MouseCursorDecal->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));

	// CosmeticMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CosmeticMesh"));
	// CosmeticMesh->SetupAttachment(GetMesh());
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//DrawCursor(); //I WILL CRASH EDITOR SOWI
}

void ACharacterBase::PreInitializeComponents()
{
	Super::PreInitializeComponents();
	if(CombatComponent)
	{
		CombatComponent->Character = this;
	}
}

void ACharacterBase::GiveAbility(TSubclassOf<UGameplayAbility> AbilityToGive)
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


AWeapon* ACharacterBase::GetEquippedWeapon()
{
	if(CombatComponent == nullptr) return nullptr;
	return CombatComponent->EquippedWeapon;
}

void ACharacterBase::EquipWeapon()
{
	if(OverlappingItem)
	{
		OverlappingItem->Interact();
		
		if(AWeapon* Weapon = Cast<AWeapon>(OverlappingItem)) CombatComponent->ChangeWeapon(Weapon);
	}
}

void ACharacterBase::SetOverlappingActor(AInteractable* Item)
{
	if(OverlappingItem)
	{
		OverlappingItem->ShowPickUpWidget(false);
	}
	OverlappingItem = Item;
	if(IsLocallyControlled())
	{
		if(OverlappingItem)
		{
			OverlappingItem->ShowPickUpWidget(true);
		}
	}
}

#pragma region Inputs
void ACharacterBase::MoveForward(float Value)
{
	// if (Controller != nullptr && Value != 0.f)
	// {
	// 	//const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	// 	FRotator YawRotation;
	// 	FVector Direction;
	// 	if(bUseViewRot)
	// 	{
	// 		YawRotation = FRotator(0.f, ViewRot.Yaw, 0.f);
	// 		Direction = UKismetMathLibrary::GetForwardVector(YawRotation);
	// 	}
	// 	else
	// 	{
	// 		YawRotation = FRotator(0.f, Controller->GetViewTarget()->GetActorRotation().Yaw, 0.f);
	// 		Direction = UKismetMathLibrary::GetForwardVector(YawRotation);
	// 	}
	//
	// 	//const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
	// 	AddForwardMovementInput(Direction, Value);
	// }

	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X));
		AddForwardMovementInput(Direction, Value);
	}
}

void ACharacterBase::MoveRight(float Value)
{
	// if (Controller != nullptr && Value != 0.f)
	// {
	// 	//const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	// 	FRotator YawRotation;
	// 	FVector Direction;
	// 	if(bUseViewRot)
	// 	{
	// 		YawRotation = FRotator(0.f, ViewRot.Yaw, 0.f);
	// 		Direction = UKismetMathLibrary::GetRightVector(YawRotation);
	// 	}
	// 	else
	// 	{
	// 		YawRotation = FRotator(0.f, Controller->GetViewTarget()->GetActorRotation().Yaw, 0.f);
	// 		Direction = UKismetMathLibrary::GetRightVector(YawRotation);
	// 	}
	// 	
	// 	//const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
	// 	AddRightMovementInput(Direction, Value);
	// }

	if (Controller != nullptr && Value != 0.f)
	{
		const FRotator YawRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
		const FVector Direction(FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y));
		AddRightMovementInput(Direction, Value);
	}
}

void ACharacterBase::Turn(float Value)
{
	if(!bUseMousePointer)
	{
		AddControllerYawInput(Value);
	}
	else
	{
		//ReceiveMouseTurnInput(Value);
		if(!UKismetMathLibrary::NearlyEqual_FloatFloat(Value, 0.f) && MouseCursorDecal)
		{
			MouseCursorDecal->SetHiddenInGame(false);
		}
	}
}

void ACharacterBase::LookUp(float Value)
{
	if(!bUseMousePointer)
	{
		AddControllerPitchInput(Value);
	}
}

void ACharacterBase::TurnAtRate(float value)
{
	AddControllerYawInput(value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::LookUpAtRate(float value)
{
	AddControllerPitchInput(value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
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
	bToggleSprint = !bToggleSprint;
}

void ACharacterBase::SprintButtonReleased()
{
	if(!bToggleSprint)
	{
		StopSprinting();
	}
}

void ACharacterBase::DrawCursor()
{
	if(!Controller)
	{
		Controller = Cast<AMetroidController>(GetWorld()->GetFirstPlayerController());
	}
	if(Controller && Controller->IsLocalController() && MouseCursorDecal)
	{
		FHitResult HitResult;
		//TArray<ECollisionChannel> ObjectTypes;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery1);
		ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));

		
		
		PlayerController->GetHitResultUnderCursorForObjects(ObjectTypes, true, HitResult);
		if(HitResult.bBlockingHit)
		{
			const FRotator RotFromX = UKismetMathLibrary::MakeRotFromX(HitResult.ImpactNormal);
			FTransform NewTransform;
			NewTransform.SetLocation(HitResult.Location);
			NewTransform.SetRotation(FQuat(RotFromX));
			MouseCursorDecal->SetWorldTransform(NewTransform);
		}
	}
}


void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ACharacterBase::CrouchButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACharacterBase::SprintButtonPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACharacterBase::SprintButtonReleased);
	PlayerInputComponent->BindAction("Equip", IE_Released, this, &ACharacterBase::EquipWeapon);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ACharacterBase::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterBase::LookUp);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACharacterBase::LookUpAtRate);
}
#pragma endregion Inputs
