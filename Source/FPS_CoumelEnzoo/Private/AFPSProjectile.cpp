//#include "AFPSProjectile.h"
//#include "GameFramework/ProjectileMovementComponent.h"
//#include "Components/SphereComponent.h"
//#include "Components/StaticMeshComponent.h"
//#include "Kismet/GameplayStatics.h"
//
//AFPSProjectile::AFPSProjectile()
//{
//    PrimaryActorTick.bCanEverTick = true;
//
//    CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
//    CollisionComponent->InitSphereRadius(15.0f);
//    CollisionComponent->SetCollisionProfileName(TEXT("Projectile"));
//    CollisionComponent->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);
//
//    RootComponent = CollisionComponent;
//
//    ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
//    ProjectileMesh->SetupAttachment(RootComponent);
//
//    ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
//    ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
//    ProjectileMovementComponent->InitialSpeed = 3000.0f;
//    ProjectileMovementComponent->MaxSpeed = 3000.0f;
//    ProjectileMovementComponent->bRotationFollowsVelocity = true;
//    ProjectileMovementComponent->bShouldBounce = true;
//}
//
//void AFPSProjectile::BeginPlay()
//{
//    Super::BeginPlay();
//}
//
//void AFPSProjectile::Tick(float DeltaTime)
//{
//    Super::Tick(DeltaTime);
//}
//
//void AFPSProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//    if (OtherActor != this)
//    {
//        UGameplayStatics::ApplyDamage(OtherActor, 10.0f, GetInstigatorController(), this, nullptr);
//        Destroy();
//    }
//}