// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_ChickenSkySpawner.generated.h"

UCLASS()
class GGJ_API ACPP_ChickenSkySpawner : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_ChickenSkySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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
