// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_OppossumPlayer.h"
#include "CP_Launcher.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACPP_OppossumPlayer::ACPP_OppossumPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/// Instantiate the camera component
	//springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));

	/// Set the Location and Rotation of the Character
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -90.0f), FQuat(FRotator(0.0f, -90.0f, 0.0f)));

	/// Create a camera boom (pulls in towards the player if there is a collision)
	springArm->SetupAttachment(GetMesh());

	CameraComp->SetupAttachment(springArm, USpringArmComponent::SocketName);

	GetCharacterMovement()->bOrientRotationToMovement = false;

	GetCharacterMovement()->bUseControllerDesiredRotation = false;

	GetCharacterMovement()->bIgnoreBaseRotation = false;
}

// Called when the game starts or when spawned
void ACPP_OppossumPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPP_OppossumPlayer::MoveForward(float InputAxis)
{
	if ((Controller != nullptr) && (InputAxis != 0.0f))
	{
		// Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, InputAxis);
	}
}

void ACPP_OppossumPlayer::MoveRight(float InputAxis)
{
	if ((Controller != nullptr) && (InputAxis != 0.0f))
	{
		// Find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Add movement in that direction
		AddMovementInput(Direction, InputAxis);
	}
}

AActor* ACPP_OppossumPlayer::GetGun()
{
	TArray<AActor*> FoundActors;

	GetAttachedActors(FoundActors);

	for (AActor* Actor : FoundActors)
	{
		ACP_Launcher* Launcher = Cast<ACP_Launcher>(Actor);
		if (!Launcher)
		{
			continue;
		}

		return Launcher;
	}

	return nullptr;
	
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


	PlayerInputComponent->BindAxis("MoveForward", this, &ACPP_OppossumPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveBackwards", this, &ACPP_OppossumPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACPP_OppossumPlayer::MoveRight);
	PlayerInputComponent->BindAxis("MoveLeft", this, &ACPP_OppossumPlayer::MoveRight);
}

