// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Randommove_ActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API URandommove_ActorComponent : public UActorComponent {
	GENERATED_BODY ()

public:
	// Sets default values for this component's properties
	URandommove_ActorComponent ();

protected:
	// Called when the game starts
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void TickComponent (float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	float MovementRadius;

	float MovementBroad;
	float MovementHeight;
	float MovementDepth;

	float AcumulateTime;
	float LimitedTime;
};
