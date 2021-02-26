// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Final_Project_FCGameMode.h"
#include "Final_Project_FCHUD.h"
#include "Final_Project_FCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinal_Project_FCGameMode::AFinal_Project_FCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFinal_Project_FCHUD::StaticClass();
}
