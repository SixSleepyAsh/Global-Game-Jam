// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_ChickenCharacter.h"

// Sets default values
ACP_ChickenCharacter::ACP_ChickenCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACP_ChickenCharacter::Hurt(int damage)
{
	health -= damage;

	if (health <= 0)
	{
		Die();
	}
}

void ACP_ChickenCharacter::Die()
{
	///Add To Score

	

	Destroy();
}

// Called when the game starts or when spawned
void ACP_ChickenCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_ChickenCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACP_ChickenCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

