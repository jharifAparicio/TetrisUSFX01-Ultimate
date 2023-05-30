// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Scenaries.h"
#include "Scenary01.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AScenary01 : public AScenaries
{
	GENERATED_BODY()
protected:
// Called when the game starts or when spawned
	virtual void BeginPlay () override;
public:
	//Brew the potion
	virtual void Elaborate () override;
};
