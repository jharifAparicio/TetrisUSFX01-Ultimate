// Fill out your copyright notice in the Description page of Project Settings.


#include "TNTPieceBuilder.h"
#include "Piece2.h"

// Sets default values
ATNTPieceBuilder::ATNTPieceBuilder () {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATNTPieceBuilder::BeginPlay () {
	Super::BeginPlay ();

	Piece2 = GetWorld ()->SpawnActor<APiece2>(APiece2::StaticClass ());
	Piece2->AttachToActor (this,FAttachmentTransformRules::KeepRelativeTransform);



}

// Called every frame
void ATNTPieceBuilder::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);

}

void ATNTPieceBuilder::BuildMaterial () {
	Piece2->SetMaterial ("Explosivos");
}

void ATNTPieceBuilder::BuildNumBlocks () {
	Piece2->SetNumBlocks ("10");
}

void ATNTPieceBuilder::BuildNamePiece () {
	Piece2->SetNamePiece ("PieceTNT");
}

APiece2 *ATNTPieceBuilder::GetPiece2() {
	return Piece2;
}

