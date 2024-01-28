// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CP_ChickenCharacter.generated.h"

UCLASS()
class GGJ_API ACP_ChickenCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACP_ChickenCharacter();

	// To be called when a chicken dies
	UFUNCTION(BlueprintCallable)
	void Hurt(int damage);

	// When a chicken dies
	UFUNCTION(BlueprintCallable)
	void Die();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Add a Scene Root Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* SceneRoot = nullptr;

	// Add a Box Collision Component
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	UBoxComponent* CollisionMesh = nullptr;

public:	


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chicken")
	int health = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chicken")
	int Damage = 5;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};