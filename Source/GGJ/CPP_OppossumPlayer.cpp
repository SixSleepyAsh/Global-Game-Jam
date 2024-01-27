// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_OppossumPlayer.h"

// Sets default values
ACPP_OppossumPlayer::ACPP_OppossumPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_OppossumPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_OppossumPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_OppossumPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

