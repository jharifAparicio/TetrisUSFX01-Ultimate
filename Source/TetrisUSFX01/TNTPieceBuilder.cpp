// Fill out your copyright notice in the Description page of Project Settings.


#include "TNTPieceBuilder.h"

// Sets default values
ATNTPieceBuilder::ATNTPieceBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATNTPieceBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATNTPieceBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATNTPieceBuilder::BuildMaterial () {
	if (!Piece2) {
		UE_LOG (LogTemp, Error, TEXT ("BuildSwimmingPool(): Lodging is NULL, make sure it's initialized."))
			; return;
	}

	Piece2->SetMaterial ("Material");
}

void ATNTPieceBuilder::BuildNumBlocks () {
}

void ATNTPieceBuilder::BuildNamePiece () {
}

APiece *ATNTPieceBuilder::GetPiece () {
	return 0;
}

