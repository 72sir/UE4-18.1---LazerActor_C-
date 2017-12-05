// Fill out your copyright notice in the Description page of Project Settings.

#include "LazerActorGameModeBase.h"
#include "Engine.h"
ALazerActorGameModeBase::ALazerActorGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Character/BP_FPSCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}



