// Fill out your copyright notice in the Description page of Project Settings.


#include "CP_ChickenCharacter.h"

// Sets default values
ACP_ChickenCharacter::ACP_ChickenCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Loop through the world and find the score

     // Find the score in the world
    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACP_Score::StaticClass(), FoundActors);

    if (FoundActors.Num() > 0)
    {
        score = Cast<ACP_Score>(FoundActors[0]);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Found Stats")));
    }
    else
    {
        score = nullptr;
        UE_LOG(LogTemp, Warning, TEXT("Score actor not found in the world!"));
    }
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
    if (score != nullptr)
    {
		score->ScoreBonus(1);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Score actor not found in the world!"));
	}

	Destroy();
}

void ACP_ChickenCharacter::UpdateScore()
{
    
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

