// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Final_Project_FCHUD.generated.h"

UCLASS()
class AFinal_Project_FCHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFinal_Project_FCHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

