// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Power_Up.generated.h"

UCLASS()
class FINAL_PROJECT_FC_API APower_Up : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	APower_Up();

	UPROPERTY(EditAnywhere)
		class USceneComponent* Power_UpRoot;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Power_UpMesh;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Power_UpMesh2;

	UPROPERTY(EditAnywhere)
		class USphereComponent* Power_UpCollision;

	UPROPERTY(EditAnywhere)
		class UCharacterMovementComponent* CharacterMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		virtual void OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void DisablePUP();

};
