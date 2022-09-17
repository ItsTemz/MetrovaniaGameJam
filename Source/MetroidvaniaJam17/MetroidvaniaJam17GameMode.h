// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameMode/MetroidGameState.h"
#include "Weapons/Weapon.h"
#include "MetroidvaniaJam17GameMode.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	MainMenu,
	Playing,
	Paused,
	BossFight,
	GameComplete
};

UCLASS(minimalapi)
class AMetroidvaniaJam17GameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	FTimerHandle TimerHandle_BotSpawner;
	
	FTimerHandle TimerHandle_NextWaveStart;

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	// Bots to spawn in current wave
	int32 NumOfBotsToSpawn;

	int32 WaveCount;

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	float TimerBetweenWaves = 5.f;
	
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	int32 MaxWaves = 3;
	
public:
	AMetroidvaniaJam17GameMode();

	virtual void StartPlay() override;

	virtual  void Tick(float DeltaSeconds) override;

	EGameState StateOfTheGame;

protected:
	// Look for BP to spawn a single bot
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();

	void SpawnBotTimerElapsed();
	
	// Start Spawning Bots
	void StartWave();

	// Stop Spawning Bots
	void EndWave();

	// Set timer for next start wave
	void PrepareForNextWave();

	// Stops the wave Spawning
	void StopWaveSpawning();

	// Check if any bots are still alive
	UFUNCTION(BlueprintCallable)
	void CheckWaveState();

	// Check if any players are still alive
	UFUNCTION(BlueprintCallable)
	void CheckAnyPlayerAlive();

	// Gameover when the player dies
	void GameOver();

	void SetWaveState(EWaveState NewWaveState);
public:
	UPROPERTY(BlueprintReadWrite, Category ="CollectedWeapons")
	TArray<TSubclassOf<AWeapon>> CollectedWeapons;
};
