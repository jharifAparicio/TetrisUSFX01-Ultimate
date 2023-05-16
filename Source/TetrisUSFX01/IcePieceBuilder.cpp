// Fill out your copyright notice in the Description page of Project Settings.


#include "IcePieceBuilder.h"
#include "Materials/Material.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
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
	UMaterial* LoadedTexture = LoadObject <UMaterial>(nullptr,TEXT( "Material'/Game/Mesh/SpecialPieces/Ice.Ice'"));

	if (LoadedTexture) {
	// El material se ha cargado correctamente
		Texture = LoadedTexture;
	} else {
		// No se pudo cargar el material
		UE_LOG (LogTemp, Warning, TEXT ("No se pudo cargar el material: %s"),TEXT("Material'/Game/Mesh/SpecialPieces/Ice.Ice'"));
	}
}

APiece2 *AIcePieceBuilder::GetPiece2 () {
	return Piece2;
}
