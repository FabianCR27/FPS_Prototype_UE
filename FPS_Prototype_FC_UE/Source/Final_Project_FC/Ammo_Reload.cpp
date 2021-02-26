// Fill out your copyright notice in the Description page of Project Settings.


#include "Ammo_Reload.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Final_Project_FCCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"


bool AAmmo_Reload::GetActive()
{
	return active;
}

void AAmmo_Reload::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->IsA(AFinal_Project_FCCharacter::StaticClass())) {
		active = true;
		AFinal_Project_FCCharacter* OtherCharacter = Cast<AFinal_Project_FCCharacter>(OtherActor);
		OtherCharacter->magazineAmmo += 12;

			UGameplayStatics::PlaySoundAtLocation(this, ReloadSound, GetActorLocation());
		
	}

	Destroy();
}
