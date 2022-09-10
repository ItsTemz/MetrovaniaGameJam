// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetroidvaniaJam17GameMode.h"

#include "EngineUtils.h"
#include "MetroidvaniaJam17Character.h"
#include "ActorComponents/CombatComponent.h"
#include "GameMode/MetroidGameState.h"
#include "UObject/ConstructorHelpers.h"

AMetroidvaniaJam17GameMode::AMetroidvaniaJam17GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	GameStateClass = AMetroidGameState::StaticClass();
	
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;

	
}

void AMetroidvaniaJam17GameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}


void AMetroidvaniaJam17GameMode::StartWave()
{
	WaveCount++;
	
	NumOfBotsToSpawn = 2 * WaveCount;
	
	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &AMetroidvaniaJam17GameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);

	SetWaveState(EWaveState::WaveInProgress);
}

void AMetroidvaniaJam17GameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);

	SetWaveState(EWaveState::WaitingToComplete);

	//StopWaveSpawning();
}

void AMetroidvaniaJam17GameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this , &AMetroidvaniaJam17GameMode::StartWave, TimerBetweenWaves,false);
	SetWaveState(EWaveState::WaitingToStart);

}

void AMetroidvaniaJam17GameMode::StopWaveSpawning()
{
	if(WaveCount >= MaxWaves)
	{
		WaveCount = 0;
		NumOfBotsToSpawn = 0;
	}
	else
	{
		PrepareForNextWave();
	}
}

void AMetroidvaniaJam17GameMode::CheckWaveState()
{
	
	const bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);
	
	if(NumOfBotsToSpawn > 0 || bIsPreparingForWave) return;
	
	bool bIsAnyBotAlive = false;
	for(FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		const APawn* TestPawn = It->Get();
		if(TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}

		const UCombatComponent* CombatComponent = Cast<UCombatComponent>(TestPawn->GetComponentByClass(UCombatComponent::StaticClass()));
		if(CombatComponent && CombatComponent->GetHealth() > 0.0f)
		{
			bIsAnyBotAlive = true;
			break;
		}
	}
	if(!bIsAnyBotAlive)
	{
		SetWaveState(EWaveState::WaveComplete);

		StopWaveSpawning();
	}
}

void AMetroidvaniaJam17GameMode::CheckAnyPlayerAlive()
{
	for(FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if(PC  && PC->GetPawn())
		{
			const APawn* MyPawn = PC->GetPawn();
			const UCombatComponent* CombatComponent = Cast<UCombatComponent>(MyPawn->GetComponentByClass(UCombatComponent::StaticClass()));
			if(ensure(CombatComponent) && CombatComponent->GetHealth() > 0.0f)
			{
				return;
			}
		}
	}

	GameOver();
}

void AMetroidvaniaJam17GameMode::GameOver()
{
	EndWave();

	SetWaveState(EWaveState::GameOver);
	//TODO: Finish up the game , present "Game over" to the player

}

void AMetroidvaniaJam17GameMode::SetWaveState(EWaveState NewWaveState)
{
	AMetroidGameState* GS = GetGameState<AMetroidGameState>();
	if(ensureAlways(GS))
	{
		GS->SetWaveState(NewWaveState);
	}
}

void AMetroidvaniaJam17GameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();

	NumOfBotsToSpawn--;
	if(NumOfBotsToSpawn <= 0)
	{
		EndWave();
	}
}

void AMetroidvaniaJam17GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	CheckWaveState();
	CheckAnyPlayerAlive();
	
}
