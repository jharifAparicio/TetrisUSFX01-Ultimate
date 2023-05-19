// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Randommove_ActorComponent.h"
#include "MovementRandom.h"
#include "AdapterMovementCA.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API UAdapterMovementCA : public URandommove_ActorComponent, public IMovementRandom {
	GENERATED_BODY()
	
public:
	void SetLimiteMovimiento(float XMovimiento, float YMovimiento, float ZMovimiento);
};
