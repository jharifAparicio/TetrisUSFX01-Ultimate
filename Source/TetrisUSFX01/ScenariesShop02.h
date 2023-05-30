// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScenariesShop.h"
#include "ScenariesShop02.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AScenariesShop02 : public AScenariesShop
{
	GENERATED_BODY()

public:
	virtual AScenaries* MakerScenaries (FString ScenariesSKU);
};
