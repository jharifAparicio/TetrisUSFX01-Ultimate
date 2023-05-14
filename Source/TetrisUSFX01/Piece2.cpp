// Fill out your copyright notice in the Description page of Project Settings.


#include "Piece2.h"

// Sets default values
APiece2::APiece2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiece2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiece2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiece2::SetMaterial (FString _Material) {
	Material = _Material;
}

void APiece2::SetNamePiece (FString _NamePiece) {
	NamePiece = _NamePiece;
}

void APiece2::SetNumBlocks (FString _NumBlocks) {
	NumBlocks = _NumBlocks;
}

void APiece2::Piece2Characteristics () {
	GEngine->AddOnScreenDebugMessage (-1, 5.0f, FColor::Yellow, FString::Printf (TEXT ("%s"), *Material));
	GEngine->AddOnScreenDebugMessage (-1, 5.0f, FColor::Yellow, FString::Printf (TEXT ("%s"), *NamePiece));
	GEngine->AddOnScreenDebugMessage (-1, 5.0f, FColor::Yellow, FString::Printf (TEXT ("%s"), *NumBlocks));
}

