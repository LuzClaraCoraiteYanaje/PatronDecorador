// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronDecoradorGameMode.h"
#include "PatronDecoradorCharacter.h"
#include "UObject/ConstructorHelpers.h"

APatronDecoradorGameMode::APatronDecoradorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
