// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScenariesShop.h"
#include "ScenariesShop01.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AScenariesShop01 : public AScenariesShop
{
	GENERATED_BODY()

public:
	virtual AScenaries* MakerScenaries (FString ScenariesSKU);
};
