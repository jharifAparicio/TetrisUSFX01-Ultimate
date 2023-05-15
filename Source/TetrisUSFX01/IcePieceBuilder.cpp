// Fill out your copyright notice in the Description page of Project Settings.


#include "IcePieceBuilder.h"
#include "Piece2.h"

// Sets default values
AIcePieceBuilder::AIcePieceBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIcePieceBuilder::BeginPlay()
{
	Super::BeginPlay();

	Piece2 = GetWorld ()->SpawnActor<APiece2> (APiece2::StaticClass ());
	Piece2->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AIcePieceBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIcePieceBuilder::BuildMaterial () {
	Piece2->SetMaterial ("Hielo");
	//asigna una texura a la pieza de hielo

}

//void AIcePieceBuilder::BuildNumBlocks () {
//	Piece2->SetNumBlocks ("4");
//}
//
//void AIcePieceBuilder::BuildNamePiece () {
//	Piece2->SetNamePiece ("PieceIce");
//}

APiece2 *AIcePieceBuilder::GetPiece2 () {
	return Piece2;
}
