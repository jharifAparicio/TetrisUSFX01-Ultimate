// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PieceBuilder.h"
#include "ArchitecturalEngineer.generated.h"

UCLASS()
class TETRISUSFX01_API AArchitecturalEngineer : public AActor {
	GENERATED_BODY ()

public:
	// Sets default values for this actor's properties
	AArchitecturalEngineer ();

private:
	IPieceBuilder* PieceBuilder2;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:
	// Called every frame
	virtual void Tick (float DeltaTime) override;

	void ConstructPiece ();
	void SetPieceBuilder (AActor* Builder);

	class APiece2* GetPiece2();

};
