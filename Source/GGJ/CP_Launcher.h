// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CP_Launcher.generated.h"

UCLASS()
class GGJ_API ACP_Launcher : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACP_Launcher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Hold a PreFab of the actor to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
	class AActor* projectile;
public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
		float fireRate = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
		float range = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
		float damage = 10.0f;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
