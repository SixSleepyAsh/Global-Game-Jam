// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_Chicken.h"

// Sets default values
ACP_Chicken::ACP_Chicken()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// hurt a chicken
void ACP_Chicken::Hurt(int damage)
{
	health -= damage;

	if (health <= 0)
	{
		Die();
	}
}

// kill a chicken
void ACP_Chicken::Die()
{

}

// Called when the game starts or when spawned
void ACP_Chicken::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_Chicken::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACP_Chicken::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

