// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorPiece.h"
//#include "Piece.h"
#include "Piece2.generated.h"

UCLASS()
class TETRISUSFX01_API APiece2 : public AActor, public IFloorPiece{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiece2();

private:
	FString Material;
	/*FString NamePiece;
	FString NumBlocks;*/
	FString DirectionTexture;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetMaterial (FString _Material);
	//virtual void SetNamePiece (FString _NamePiece);
	//virtual void SetNumBlocks (FString _NumBlocks);

	void Piece2Characteristics ();
};
