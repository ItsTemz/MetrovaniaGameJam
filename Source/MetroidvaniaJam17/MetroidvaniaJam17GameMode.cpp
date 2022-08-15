// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetroidvaniaJam17GameMode.h"
#include "MetroidvaniaJam17Character.h"
#include "UObject/ConstructorHelpers.h"

AMetroidvaniaJam17GameMode::AMetroidvaniaJam17GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
