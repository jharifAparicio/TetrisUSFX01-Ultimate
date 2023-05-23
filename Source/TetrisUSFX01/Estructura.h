// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "Estructura.generated.h"

UCLASS()
class TETRISUSFX01_API AEstructura : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstructura();

public:
	void Rotar() PURE_VIRTUAL(AEstructura::Rotar, ;);

protected:
	TArray <ABlock*> Blocks;

public:
	void SpawnBlocks() PURE_VIRTUAL(AEstructura::SpawnBlocks, ;);
};
