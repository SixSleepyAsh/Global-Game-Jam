// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_OppossumPlayer.generated.h"

UCLASS()
class GGJ_API ACPP_OppossumPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_OppossumPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UCameraComponent* CameraComp;

	UFUNCTION(BlueprintCallable)
		void MoveForward(float InputAxis);

	UFUNCTION(BlueprintCallable)
		void MoveRight(float InputAxis);

	UFUNCTION(BlueprintCallable)
		void Dash();

	UFUNCTION(BlueprintCallable)
		void StopDash();

	UFUNCTION(BlueprintCallable)
		void ApplyRecoil(float amount);

	// Timer for dash duration
	FTimerHandle dashTimerHandle;

	// direction we are facing
	FVector moveDirection;

private:

	// update our properties
	void Update();

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		float speed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	   bool isDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		bool isJumping = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		float dashSpeed = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		float dashDuration = 0.5f;

	UFUNCTION(BlueprintCallable)
		AActor* GetGun();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
