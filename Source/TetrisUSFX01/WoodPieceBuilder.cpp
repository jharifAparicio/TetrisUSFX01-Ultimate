// Fill out your copyright notice in the Description page of Project Settings.


#include "WoodPieceBuilder.h"
#include "Piece2.h"

// Sets default values
AWoodPieceBuilder::AWoodPieceBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWoodPieceBuilder::BeginPlay()
{
	Super::BeginPlay();
	
	Piece2 = GetWorld ()->SpawnActor<APiece2> (APiece2::StaticClass ());
	Piece2->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AWoodPieceBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWoodPieceBuilder::BuildMaterial () {
	Piece2->SetMaterial ("Madera");
}

//void AWoodPieceBuilder::BuildNumBlocks () {
//	Piece2->SetNumBlocks ("4");
//}
//
//void AWoodPieceBuilder::BuildNamePiece () {
//	Piece2->SetNamePiece ("PieceWood");
//}

APiece2* AWoodPieceBuilder::GetPiece2 () {
	return Piece2;
}

