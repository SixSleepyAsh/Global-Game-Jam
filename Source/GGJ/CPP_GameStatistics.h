// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_GameStatistics.generated.h"

UCLASS()
class GGJ_API ACPP_GameStatistics : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_GameStatistics();

	// Get the chicken kill count
	int GetChickenKillCount();

	// Add to the kill count
	void AddChickenKillCount(int num);

	// How many chickens we have killed
	int chickenKillCount;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
