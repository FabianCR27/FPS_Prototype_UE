// Fill out your copyright notice in the Description page of Project Settings.


#include "DoubleJump_PUP.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Final_Project_FCCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"


bool ADoubleJump_PUP::GetActive()
{
	return active;
}

void ADoubleJump_PUP::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AFinal_Project_FCCharacter::StaticClass())) {
		UE_LOG(LogTemp, Warning, TEXT("True"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("True"));
		active = true;
		AFinal_Project_FCCharacter* OtherCharacter = Cast<AFinal_Project_FCCharacter>(OtherActor);
		OtherCharacter->DoubleJumpActive = true;
	}
	
	Destroy();
}
