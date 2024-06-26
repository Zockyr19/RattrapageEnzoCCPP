// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_CoumelEnzooGameMode.h"
#include "FPS_CoumelEnzooCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_CoumelEnzooGameMode::AFPS_CoumelEnzooGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/FPS_CoumeEnzo.AFPSCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
