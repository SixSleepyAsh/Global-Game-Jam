// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CP_Score.generated.h"

UCLASS()
class GGJ_API ACP_Score : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACP_Score();
	// To be called when a chicken dies
	UFUNCTION(BlueprintCallable)
		void ScoreBonus(int bonus);

	UFUNCTION(BlueprintCallable)
		void EndScore();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SCORE")
		int score = 0;

};
