// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeleeSystemGameMode.h"
#include "MeleeCharacter/MeleeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeleeSystemGameMode::AMeleeSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MeleeCharacter/BP_MeleeCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
