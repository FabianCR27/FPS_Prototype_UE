// Fill out your copyright notice in the Description page of Project Settings.


#include "Door_Real.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Final_Project_FCProjectile.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"

// Sets default values
ADoor_Real::ADoor_Real()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Door_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Door_Root"));
	RootComponent = Door_Root;

	Door_Mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Mesh"));
	Door_Mesh1->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Door_Mesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Mesh2"));
	Door_Mesh2->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Door_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Door_Collision"));
	Door_Collision->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	Door_Collision->SetCollisionProfileName("OverlapAll");
	Door_Collision->SetGenerateOverlapEvents(true);
	Door_Collision->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);



}

// Called when the game starts or when spawned
void ADoor_Real::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor_Real::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



