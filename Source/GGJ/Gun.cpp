// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "EggBomb.h"

// Sets default values
AGun::AGun()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AGun::startShooting()
{
	firing = false;
}

void AGun::stopShooting()
{
	firing = false;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGun::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AGun::startShooting);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &AGun::stopShooting);
}

