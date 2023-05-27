// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator.h"
#include "DecoratorRotationMultiple.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ADecoratorRotationMultiple : public ADecorator
{
	GENERATED_BODY()
public:
	ADecoratorRotationMultiple ();

	virtual void Rotar () override;
	virtual void SpawnBlocks () override;

	virtual void Tick (float DeltaTime) override;

private:

	float AcumulatedTime;
};
