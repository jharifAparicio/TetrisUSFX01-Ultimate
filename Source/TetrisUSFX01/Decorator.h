// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EstructuraPiece.h"
#include "Decorator.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ADecorator : public AEstructuraPiece
{
	GENERATED_BODY()
	
public:
// Sets default values for this actor's properties
	ADecorator ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void Tick (float DeltaTime) override;

	virtual void Rotar ();
	virtual void SpawnBlocks ();

	virtual void CambiarColor ();

	void SetEstructura (AEstructuraPiece* _Estructura) {
		Estructura = _Estructura;
	}

	UStaticMeshComponent* EstructuraMesh;

private:
	AEstructuraPiece* Estructura;
};
