// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorScript.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Final_Project_FCCharacter.h"
#include "Final_Project_FCProjectile.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"

// Sets default values for this component's properties
UDoorScript::UDoorScript()
{
	PrimaryComponentTick.bCanEverTick = true;

	Door_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Door_Root"));

	Door_Mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Mesh"));
	Door_Mesh1->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Door_Mesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door_Mesh2"));
	Door_Mesh2->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);

	Door_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Door_Collision"));
	Door_Collision->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	Door_Collision->SetCollisionProfileName("OverlapAll");
	Door_Collision->SetGenerateOverlapEvents(true);
	Door_Collision->OnComponentBeginOverlap.AddDynamic(this, &UDoorScript::OnComponentOverlap);
	Door_Collision->AttachToComponent(Door_Root, FAttachmentTransformRules::SnapToTargetIncludingScale);
}


// Called when the game starts
void UDoorScript::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDoorScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDoorScript::OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AFinal_Project_FCProjectile::StaticClass())) {
		UE_LOG(LogTemp, Warning, TEXT("True"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("True"));
	}

}



