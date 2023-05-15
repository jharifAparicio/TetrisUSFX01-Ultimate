// Fill out your copyright notice in the Description page of Project Settings.
#include "StonePieceBuilder.h"
#include "Piece2.h"

// Sets default values
AStonePieceBuilder::AStonePieceBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStonePieceBuilder::BeginPlay()
{
	Super::BeginPlay();
	
	Piece2 = GetWorld ()->SpawnActor<APiece2> (APiece2::StaticClass ());
	Piece2->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AStonePieceBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AStonePieceBuilder::BuildMaterial () {
	Piece2->SetMaterial ("Piedra");

}

//void AStonePieceBuilder::BuildNumBlocks () {
//	Piece2->SetNumBlocks ("4");
//}
//
//void AStonePieceBuilder::BuildNamePiece () {
//		Piece2->SetNamePiece ("PieceStone");
//}

APiece2 *AStonePieceBuilder::GetPiece2 () {
	return Piece2;
}

