// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Estructura.h"
#include "EstructuraConcret.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEstructuraConcret : public AActor, public AEstructura {
	GENERATED_BODY ()
public:
	// Sets default values for this actor's properties'
	AEstructuraConcret ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	virtual void Tick (float DeltaTime) override;

	virtual void Rotar ();
	virtual void SpawnBlocks ();

private:
	float TiempoAcumulado;
	
};
