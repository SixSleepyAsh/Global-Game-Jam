// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_Launcher.h"

// Sets default values
ACP_Launcher::ACP_Launcher()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACP_Launcher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_Launcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACP_Launcher::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

