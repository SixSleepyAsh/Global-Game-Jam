// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenCoup.h"

// Sets default values
AChickenCoup::AChickenCoup()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChickenCoup::BeginPlay()
{
	Super::BeginPlay();

  GetWorld()->GetTimerManager().SetTimer(SpawnTimer, this, &AChickenCoup::SpawnChicken, SpawnInterval, true);

  SpawnChicken();
}

void AChickenCoup::SpawnChicken()
{
  if (ChickenClass != nullptr)
  {
    // Define the spawn parameters
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.Owner = this;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Get the location for the new chicken
    FVector SpawnLocation = GetActorLocation();
    FRotator SpawnRotation = GetActorRotation();

    // Spawn the chicken
    GetWorld()->SpawnActor<AActor>(ChickenClass, SpawnLocation, SpawnRotation, SpawnParameters);
  }
}

// Called every frame
void AChickenCoup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

