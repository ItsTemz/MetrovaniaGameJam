// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/MetroidGameState.h"

#include "Net/UnrealNetwork.h"

void AMetroidGameState::OnRep_WaveState( EWaveState OldState)
{
	WaveStateChanged(WaveState , OldState);
}

void AMetroidGameState::SetWaveState(EWaveState NewState)
{
	if(GetLocalRole() == ROLE_Authority)
	{
		const EWaveState OldState = WaveState;
		WaveState = NewState;
		//Call on Server
		OnRep_WaveState(OldState);
	}
}

void AMetroidGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMetroidGameState, WaveState);
}
