// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_Score.h"

// Sets default values
ACP_Score::ACP_Score()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACP_Score::ScoreBonus(int bonus)
{
	//add chicken bonus to the score
	score += bonus;
}

void ACP_Score::EndScore()
{
	score *= 100;
}

// Called when the game starts or when spawned
void ACP_Score::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_Score::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

