// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedInputComponent.h"
#include "Gun.generated.h"

UCLASS()
class GGJ_API AGun : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGun();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool firing = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float fireDelay = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float currentFireDelay = 0;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AEggBomb> ProjectileClass;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void startShooting();
	void stopShooting();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
