// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/MetroidGameplayAbility.h"

#include "AbilitySystemComponent.h"
#include "DataAssets/AbilityDataSet.h"


UMetroidGameplayAbility::UMetroidGameplayAbility()
{
}

const FGameplayTagContainer* UMetroidGameplayAbility::GetCooldownTags() const
{
	if(IsValid(ReferenceData) && ReferenceData->bActivateDynamicCooldown)
	{
		FGameplayTagContainer* MutableTags = const_cast<FGameplayTagContainer*>(&TempCooldownTags);
		MutableTags->Reset(); // MutableTags writes to the TempCooldownTags on the CDO so clear it in case the ability cooldown tags change (moved to a different slot)
		const FGameplayTagContainer* ParentTags = Super::GetCooldownTags();
		if (ParentTags)
		{
			MutableTags->AppendTags(*ParentTags);
		}
		MutableTags->AppendTags(this->ReferenceData->CooldownTags);
		return MutableTags;
	}
	
	return Super::GetCooldownTags();
}

void UMetroidGameplayAbility::ApplyCooldown(FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
	FGameplayAbilityActivationInfo ActivationInfo) const
{
	float CooldownReduction = 1.f;
	int32 StackCount		= 0;
	if(IsValid(ReferenceData) && ReferenceData->bActivateDynamicCooldown)
	{
		UGameplayEffect* CooldownGE = GetCooldownGameplayEffect();
		if (CooldownGE)
		{
			//Prepare the cooldown effect we need to apply
			FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGE->GetClass(), GetAbilityLevel());
			//Add all required tags
			SpecHandle.Data.Get()->DynamicGrantedTags.AppendTags(this->ReferenceData->CooldownTags);
			SpecHandle.Data.Get()->AppendDynamicAssetTags(this->AbilityTags);
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *this->AbilityTags.ToString());

			//Get the time from the Reference Asset
			float Time = this->ReferenceData->CooldownDuration.GetValueAtLevel(GetAbilityLevel());

			//Check if we have cooldown reduction, either by using general alacrity OR specific alacrity
			FGameplayTagContainer CooldownReductionTags = FGameplayTagContainer(FGameplayTag::RequestGameplayTag(FName("Boons.Alacrity")));;
			//add the specific to the table
			FGameplayTag AlacritySpecificTag;
			//GetAlacrityByType(ReferenceData->AbilityType, AlacritySpecificTag);
			//= AlacrityTagsByType.Find(ReferenceData->AbilityType);

			//@TODO : Check if empty first
			CooldownReductionTags.AddTag(AlacritySpecificTag);
			
			UAbilitySystemComponent* ASC = GetAbilitySystemComponentFromActorInfo();

			TArray<FActiveGameplayEffectHandle> CooldownReductions = ASC->GetActiveEffectsWithAllTags(CooldownReductionTags);
			for (auto& CDEffect : CooldownReductions)
			{
				StackCount += ASC->GetCurrentStackCount(CDEffect);
			}
			//We found some reduction !
			if(StackCount)
			{
				//Clamp in case the number is strange or more than 100.
				CooldownReduction = 1 - FMath::Clamp(StackCount, 0, 1) / 100.f;
				//Keep X Percent of the time
				Time *= CooldownReduction;
			}
			
			if(Time>0)
			{
				SpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Cooldown")), Time);
				FActiveGameplayEffectHandle ActiveHandle = ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);
			}
			
			//OnCoolDownStart.Broadcast(this->ReferenceData->CooldownTags, SpecHandle, ActiveHandle);
		}
	} else
	{
		Super::ApplyCooldown(Handle, ActorInfo, ActivationInfo);
	}
}

bool UMetroidGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
{
	if(IsValid(ReferenceData) && ReferenceData->bActivateDynamicCost && this->ReferenceData->AttributeCost.IsValid())
	{
		//Check that user can afford the cost based on the characteristic choosen
		const float AttributeToCheck = ActorInfo->AbilitySystemComponent->GetNumericAttribute(this->ReferenceData->AttributeCost);
		float CostFloat = this->ReferenceData->Cost.GetValueAtLevel(GetAbilityLevel());
		return AttributeToCheck >= CostFloat;
	}

	//Else use the standard UE calculation
	return Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags);
}

void UMetroidGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	if(IsValid(ReferenceData) && ReferenceData->bActivateDynamicCost)
	{
		
		if(const UGameplayEffect* CostGE = GetCostGameplayEffect())
		{
			const FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CostGE->GetClass(), GetAbilityLevel());
			SpecHandle.Data.Get()->AppendDynamicAssetTags(this->AbilityTags);
			const float Cost = this->ReferenceData->Cost.GetValueAtLevel(GetAbilityLevel());
			SpecHandle.Data.Get()->SetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Cost")), Cost);
			ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);
		}
	} else
	{
		Super::ApplyCost(Handle, ActorInfo, ActivationInfo);
	}
}
