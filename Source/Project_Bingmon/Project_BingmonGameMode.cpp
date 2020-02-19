// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project_BingmonGameMode.h"
#include "Project_BingmonPlayerController.h"
#include "Project_BingmonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_BingmonGameMode::AProject_BingmonGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProject_BingmonPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}