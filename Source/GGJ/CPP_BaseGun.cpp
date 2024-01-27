// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BaseGun.h"

// Sets default values
ACPP_BaseGun::ACPP_BaseGun()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_BaseGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_BaseGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_BaseGun::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

