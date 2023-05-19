// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PieceBuilder.h"
#include "StonePieceBuilder.generated.h"

UCLASS()
class TETRISUSFX01_API AStonePieceBuilder : public AActor, public IPieceBuilder {
	GENERATED_BODY ()

public:
	// Sets default values for this actor's properties
	AStonePieceBuilder ();
private:
	class APiece2 *Piece2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void Tick (float DeltaTime) override;

	virtual void BuildMaterial () override;
	/*virtual void BuildNumBlocks () override;
	virtual void BuildNamePiece () override;*/

	virtual APiece2 *GetPiece2 () override;
};
