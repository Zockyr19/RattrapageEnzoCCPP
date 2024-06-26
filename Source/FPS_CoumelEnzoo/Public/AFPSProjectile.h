//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
//#include "AFPSProjectile.generated.h"
//
//UCLASS()
//class FPS_COUMELENZOO_API AAFPSProjectile : public AActor
//{
//	GENERATED_BODY()
//	
//public:	
//	// Sets default values for this actor's properties
//	AAFPSProjectile();
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//private:
//	UPROPERTY(VisibleAnywhere, Category = "Components")
//	class USphereComponent* CollisionComponent;
//
//	UPROPERTY(VisibleAnywhere, Category = "Components")
//	class UProjectileMovementComponent* ProjectileMovementComponent;
//
//	UPROPERTY(VisibleAnywhere, Category = "Components")
//	class UStaticMeshComponent* ProjectileMesh;
//
//	UFUNCTION()
//	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
//
//};
