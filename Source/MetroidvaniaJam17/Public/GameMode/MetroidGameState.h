// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "UObject/Object.h"
#include "MetroidGameState.generated.h"

UENUM(BlueprintType)
enum class EWaveState : uint8
{
	WaitingToStart,
	
	WaveInProgress,

	// No longer spawning new bots, waiting for players to kill remaining bots.
	WaitingToComplete,

	WaveComplete,

	GameOver
	
};
/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API AMetroidGameState : public AGameStateBase
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly,ReplicatedUsing = OnRep_WaveState, Category = "GameState")
	EWaveState WaveState;
	
	UFUNCTION()
	void OnRep_WaveState(EWaveState OldState);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameState")
	void WaveStateChanged(EWaveState NewState, EWaveState OldState);
public:
	
	void SetWaveState(EWaveState NewState);
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps)const;

};
