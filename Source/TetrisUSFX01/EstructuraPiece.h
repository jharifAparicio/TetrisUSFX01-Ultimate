// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "EstructuraPiece.generated.h"

UCLASS()
class TETRISUSFX01_API AEstructuraPiece : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstructuraPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	class USceneComponent* SceneComponent;

	void Rotar() PURE_VIRTUAL(AEstructuraPiece::Rotar,);

protected:
	TArray<ABlock*> Blocks;

public:
	void SpawnBlock () PURE_VIRTUAL (AEstructuraPiece::SpawnBlock,);
};
