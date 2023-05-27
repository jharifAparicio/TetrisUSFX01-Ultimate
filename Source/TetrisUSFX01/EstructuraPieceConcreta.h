// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "GameFramework/Actor.h"
#include "EstructuraPiece.h"
#include "EstructuraPieceConcreta.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEstructuraPieceConcreta : public AEstructuraPiece {
	GENERATED_BODY()
	
public:
// Sets default values for this actor's properties
	AEstructuraPieceConcreta ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void Tick (float DeltaTime) override;

	virtual void Rotar ();
	virtual void SpawnBlocks ();

private:
	float AcumulatedTime;
};
