// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_Real.generated.h"

UCLASS()
class FINAL_PROJECT_FC_API ADoor_Real : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ADoor_Real();

	UPROPERTY(EditAnywhere)
		class USceneComponent* Door_Root;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Door_Mesh1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Door_Mesh2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* Door_Collision;


	UPROPERTY(EditAnywhere)
		class UCharacterMovementComponent* CharacterMovement;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
