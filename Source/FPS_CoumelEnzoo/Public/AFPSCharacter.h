#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AFPSCharacter.generated.h"

UCLASS()
class AFPSCharacter : public ACharacter
{
    GENERATED_BODY()

public:

    AFPSCharacter();

protected:

    virtual void BeginPlay() override;

public:

    virtual void Tick(float DeltaTime) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

    UPROPERTY(EditAnywhere)
    class UCameraComponent* Camera;


    void MoveForward(float InputValue);
    void MoveRight(float InputValue);
    void TurnCamera(float InputValue);
    void LookUp(float InputValue);

    /*void Fire();

private:

    UPROPERTY(EditDefaultsOnly, Category = "Projectile")
    TSubclassOf<class AFPSProjectile> ProjectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
    FVector MuzzleOffset;*/
};