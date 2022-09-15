// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/AttributeSetBase.h"

#include "GameplayEffectExtension.h"
#include "AI/BossAI.h"
#include "Character/CharacterBase.h"

UAttributeSetBase::UAttributeSetBase()
{
	
}

void UAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
}

void UAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	const FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	const UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
		OnHealthChanged.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
		
		if(ACharacterBase* Character = Cast<ACharacterBase>(GetOwningActor()))
		{
			if(Health.GetCurrentValue() <= 0.f)
			{
				Character->HandleDeath();
			}
		}
		
		if(ABossAI* BossAI = Cast<ABossAI>(GetOwningActor()))
		{
			if(Health.GetCurrentValue() <= 0.f)
			{
				BossAI->HandleDeath();
			}
		}
	}
}

void UAttributeSetBase::OnRep_Health(const FGameplayAttributeData& Oldhealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, Health, Oldhealth);
}
void UAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, MaxHealth, OldMaxHealth);
}

void UAttributeSetBase::OnRep_StrikeDamage(const FGameplayAttributeData& OldStrikeDamage)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAttributeSetBase, StrikeDamage, OldStrikeDamage);
}
