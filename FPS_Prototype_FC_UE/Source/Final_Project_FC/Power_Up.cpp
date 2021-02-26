// Fill out your copyright notice in the Description page of Project Settings.


#include "Power_Up.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Final_Project_FCCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APower_Up::APower_Up()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Power_UpRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Power_UpRoot"));
	RootComponent = Power_UpRoot;

	Power_UpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Power_UpMesh"));
	Power_UpMesh->AttachToComponent(Power_UpRoot, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Power_UpMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Power_UpMesh2"));
	Power_UpMesh2->AttachToComponent(Power_UpRoot, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Power_UpCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Power_UpCollision"));
	Power_UpCollision->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	Power_UpCollision->SetCollisionProfileName("OverlapAll");
	Power_UpCollision->SetGenerateOverlapEvents(true);
	Power_UpCollision->OnComponentBeginOverlap.AddDynamic(this, &APower_Up::OnCharacterOverlap);
	Power_UpCollision->AttachToComponent(Power_UpRoot, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

// Called when the game starts or when spawned
void APower_Up::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APower_Up::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APower_Up::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Destroy();
}

void APower_Up::DisablePUP()
{
	Power_UpCollision->SetGenerateOverlapEvents(false);
	Power_UpMesh->SetVisibility(false);
	Power_UpMesh->SetCollisionProfileName("NoCollision");
	Power_UpMesh2->SetVisibility(false);
	Power_UpMesh2->SetCollisionProfileName("NoCollision");
}

