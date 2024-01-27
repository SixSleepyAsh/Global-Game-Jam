// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_OppossumPlayer.generated.h"

UCLASS()
class GGJ_API ACPP_OppossumPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_OppossumPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		float speed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	   bool isDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};