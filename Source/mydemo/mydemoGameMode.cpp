// Copyright Epic Games, Inc. All Rights Reserved.

#include "mydemoGameMode.h"
#include "mydemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmydemoGameMode::AmydemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
