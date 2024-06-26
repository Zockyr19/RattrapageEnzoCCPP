#include "AFPSCharacter.h"
#include "GameFramework/Actor.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

AFPSCharacter::AFPSCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
    Camera->SetupAttachment(RootComponent);
    Camera->bUsePawnControlRotation = true;

    /*MuzzleOffset = FVector(100.0f, 0.0f, 0.0f);*/
}

void AFPSCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void AFPSCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

    PlayerInputComponent->BindAxis("TurnCamera", this, &AFPSCharacter::TurnCamera);
    PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::LookUp);

    /*PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);*/
}

void AFPSCharacter::MoveForward(float InputValue)
{
    FVector ForwardDirection = GetActorForwardVector();
    AddMovementInput(ForwardDirection, InputValue);
    
}

void AFPSCharacter::MoveRight(float InputValue)
{
    FVector RightDirection = GetActorRightVector();
    AddMovementInput(RightDirection, InputValue);
}

void AFPSCharacter::TurnCamera(float InputValue)
{
    AddControllerYawInput(InputValue);
}

void AFPSCharacter::LookUp(float InputValue)
{
    AddControllerPitchInput(InputValue);
}

//void AFPSCharacter::Fire()
//{
//    if (ProjectileClass)
//    {
//        FVector MuzzleLocation = Camera->GetComponentLocation() + FTransform(Camera->GetComponentRotation()).TransformVector(MuzzleOffset);
//        FRotator MuzzleRotation = Camera->GetComponentRotation();
//
//        UWorld* World = GetWorld();
//        if (World)
//        {
//            World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation);
//        }
//    }
//}