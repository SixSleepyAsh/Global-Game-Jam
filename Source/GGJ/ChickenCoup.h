// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ChickenCoup.generated.h"

UCLASS()
class GGJ_API AChickenCoup : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AChickenCoup();

protected:
  // Called when the game starts or when spawned
  virtual void BeginPlay() override;

public:
  // Called every frame
  virtual void Tick(float DeltaTime) override;

private:
  // Function to spawn a chicken
  void SpawnChicken();

  // Timer handle for spawning chickens
  FTimerHandle SpawnTimer;

  // The chicken actor to spawn
  UPROPERTY(EditDefaultsOnly, Category = "Spawning")
  TSubclassOf<AActor> ChickenClass;

  // Spawn interval
  UPROPERTY(EditDefaultsOnly, Category = "Spawning")
  float SpawnInterval = 1.0f;
};