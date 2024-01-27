// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ChickenSkySpawner.h"
#include <Math/UnrealMathUtility.h>

// Sets default values
ACPP_ChickenSkySpawner::ACPP_ChickenSkySpawner()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_ChickenSkySpawner::BeginPlay()
{
	Super::BeginPlay();
  GetWorld()->GetTimerManager().SetTimer(SpawnTimer, this, &ACPP_ChickenSkySpawner::SpawnChicken, SpawnInterval, true);

}

// Called every frame
void ACPP_ChickenSkySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// spawn chickens every

}

// Called to bind functionality to input
void ACPP_ChickenSkySpawner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Spawn a chicken
void ACPP_ChickenSkySpawner::SpawnChicken()
{
  if (ChickenClass != nullptr)
  {
    // Define the spawn parameters
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.Owner = this;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Get the location for the new chicken
    FVector spawnOffset = { (float)FMath::RandRange(-5000,5000),(float)FMath::RandRange(-5000,5000),500.f };

    FVector SpawnLocation = GetActorLocation()+spawnOffset;
    FRotator SpawnRotation = GetActorRotation();

    // Spawn the chicken
    GetWorld()->SpawnActor<AActor>(ChickenClass, SpawnLocation, SpawnRotation, SpawnParameters);
  }
}

