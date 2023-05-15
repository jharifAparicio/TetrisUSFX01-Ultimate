// Fill out your copyright notice in the Description page of Project Settings.


#include "MetalPieceBuilder.h"
#include "Piece2.h"

// Sets default values
AMetalPieceBuilder::AMetalPieceBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMetalPieceBuilder::BeginPlay()
{
	Super::BeginPlay();
	Piece2 = GetWorld ()->SpawnActor<APiece2> (APiece2::StaticClass ());
	Piece2->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AMetalPieceBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMetalPieceBuilder::BuildMaterial () {
	Piece2->SetMaterial ("Metal");
}

//void AMetalPieceBuilder::BuildNumBlocks () {
//	Piece2->SetNumBlocks ("4");
//}
//
//void AMetalPieceBuilder::BuildNamePiece () {
//	Piece2->SetNamePiece ("PieceMetal");
//}

APiece2 *AMetalPieceBuilder::GetPiece2 () {
	return Piece2;
}
