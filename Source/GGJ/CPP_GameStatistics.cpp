// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_GameStatistics.h"

// Sets default values
ACPP_GameStatistics::ACPP_GameStatistics()
	:
	chickenKillCount(0)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

int ACPP_GameStatistics::GetChickenKillCount()
{
	return chickenKillCount;
}

void ACPP_GameStatistics::AddChickenKillCount(int num)
{
	chickenKillCount += num;
}

// Called when the game starts or when spawned
void ACPP_GameStatistics::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_GameStatistics::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_GameStatistics::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

