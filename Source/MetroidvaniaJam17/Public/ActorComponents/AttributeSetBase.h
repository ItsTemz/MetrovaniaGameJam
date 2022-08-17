// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "AttributeSetBase.generated.h"

/**
 * 
 */
 
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChangedDelegate, float, Value, float, MaxValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedDelegate, float, Value, float, MaxValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSectResourceChangedDelegate, float, Value, float, MaxValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnergyChangedDelegate, float, Value, float, MaxValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeDeltaDelegate, float, Value);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChangedDelegate1, float, Value);

UCLASS()
class METROIDVANIAJAM17_API UAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	UAttributeSetBase();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
public:
#pragma region DefensveAttributes
	// Defensive attributes 
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AttributeVariables|DefensiveValues|Healing",
		ReplicatedUsing = OnRep_Health)

	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, Health);
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AttributeVariables|DefensiveValues|Healing",
		ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, MaxHealth);
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldAttribute);
	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldAttribute);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHealthChangedDelegate OnHealthChanged;

#pragma endregion DefensveAttributes
	//Damage Variables Values are set from ClassTypes DataAsset
	UPROPERTY(BlueprintReadWrite, Category = "AttributeVariables|OffensiveValues|Damage",
		ReplicatedUsing = OnRep_StrikeDamage)
	FGameplayAttributeData StrikeDamage;
	ATTRIBUTE_ACCESSORS(UAttributeSetBase, StrikeDamage);
	UFUNCTION()
	virtual void OnRep_StrikeDamage(const FGameplayAttributeData& OldStrikeDamage);
	
};
