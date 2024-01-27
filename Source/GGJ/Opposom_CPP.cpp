// Fill out your copyright notice in the Description page of Project Settings.


#include "Opposom_CPP.h"

// Sets default values
AOpposom_CPP::AOpposom_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpposom_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpposom_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOpposom_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

