// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/AIAnimInstance.h"

#include "AI/BossAI.h"
#include "GameFramework/CharacterMovementComponent.h"

void UAIAnimInstance::UpdateAnimationProperties(float DeltaTime)
{
	if(BossAI == nullptr)
	{
		BossAI = Cast<ABossAI>(TryGetPawnOwner());
	}
	if(BossAI)
	{
		//Get the speed of the character from velocity
		FVector Velocity{BossAI->GetVelocity()};
		Velocity.Z = 0;

		Speed = Velocity.Size();

		// Is the character in the air ?
		bIsInAir = BossAI->GetCharacterMovement()->IsFalling();

		// is the character acceleration
		if(BossAI->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f)
		{
			bIsAccelerating = true;
		}
		else
		{
			bIsAccelerating = false;
		}

		bIsDead = BossAI->GetIsDead();
	}
}

void UAIAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	BossAI = Cast<ABossAI>(TryGetPawnOwner());
}
