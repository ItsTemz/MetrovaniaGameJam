// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CharacterHUD.h"

#include "Character/CharacterBase.h"

void ACharacterHUD::DrawHUD()
{
	Super::DrawHUD();

	ACharacterBase* Character = Cast<ACharacterBase>(GetOwningPawn());
	if(Character)
	{
		AddFloat(L"Speed", Character->GetVelocity().Size() /100.f);
		AddFloat(L"Health", Character->AttributeSet->GetHealth());
	}
}
