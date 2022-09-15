// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UAIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);
	
	virtual void NativeInitializeAnimation() override;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta =(AllowPrivateAccess = "true"))
	class ABossAI* BossAI;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta =(AllowPrivateAccess = "true"))
	float Speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta =(AllowPrivateAccess = "true"))
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta =(AllowPrivateAccess = "true"))
	bool bIsAccelerating;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Health, meta = (AllowPrivateAccess = "true"))
	bool bIsDead;
};
