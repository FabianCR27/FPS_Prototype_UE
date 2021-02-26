// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Power_Up.h"
#include "Ammo_Reload.generated.h"

/**
 * 
 */
UCLASS()
class FINAL_PROJECT_FC_API AAmmo_Reload : public APower_Up
{
	GENERATED_BODY()

public:
	void Interacted();
	bool GetActive();
protected:

public:

	void OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	UPROPERTY()
		bool active = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* ReloadSound;

};

