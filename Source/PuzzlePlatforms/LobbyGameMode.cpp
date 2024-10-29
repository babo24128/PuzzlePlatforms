// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	++NumberOfPlayer;

	if (NumberOfPlayer >= 3)
	{
		UE_LOG(LogTemp, Warning, TEXT("Reached 3 players!"));
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	--NumberOfPlayer;
}
