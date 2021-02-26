// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "DoorScript.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINAL_PROJECT_FC_API UDoorScript : public UBoxComponent  
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorScript();

	UPROPERTY(EditAnywhere)
		class USceneComponent* Door_Root;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Door_Mesh1;

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* Door_Mesh2;

	UPROPERTY(EditAnywhere)
		class UBoxComponent* Door_Collision;

	UPROPERTY(EditAnywhere)
		class UBoxComponent* DoorMesh_Collision;

	UPROPERTY(EditAnywhere)
		class UCharacterMovementComponent* CharacterMovement;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
