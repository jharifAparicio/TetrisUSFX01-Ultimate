// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorColorMultiple.h"

ADecoratorColorMultiple::ADecoratorColorMultiple () {
	PrimaryActorTick.bCanEverTick = true;

	struct FConstructorStatics {
		ConstructorHelpers::FObjectFinderOptional<UMaterial> MaterialTNT;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> MaterialIce;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> MaterialMetal;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> MaterialStone;
		ConstructorHelpers::FObjectFinderOptional<UMaterial> MaterialWood;

		FConstructorStatics () :
			MaterialTNT (TEXT ("Material'/Game/Mesh/SpecialPieces/TNT.TNT'")),
			MaterialIce (TEXT ("Material'/Game/Mesh/SpecialPieces/Ice.Ice'")),
			MaterialMetal (TEXT ("Material'/Game/Mesh/SpecialPieces/Metal.Metal'")),
			MaterialStone (TEXT ("Material'/Game/Mesh/SpecialPieces/Stone.Stone'")),
			MaterialWood (TEXT ("Material'/Game/Mesh/SpecialPieces/Wood.Wood'")) {
		}
	};

	static FConstructorStatics ConstructorStatics;

	Colors.Add (ConstructorStatics.MaterialTNT.Get ());
	Colors.Add (ConstructorStatics.MaterialIce.Get ());
	Colors.Add (ConstructorStatics.MaterialMetal.Get ());
	Colors.Add (ConstructorStatics.MaterialStone.Get ());
	Colors.Add (ConstructorStatics.MaterialWood.Get ());
}

void ADecoratorColorMultiple::CambiarColor () {
	UE_LOG (LogTemp, Warning, TEXT ("now can rotate Estructura multirotacional"));

	const int ColorIndex = FMath::RandRange (0, 5 - 1);

	//Cambia el color del material de la estructura
	UMaterialInstanceDynamic *MaterialInstance = UMaterialInstanceDynamic::Create (Colors[ColorIndex], this);
	EstructuraMesh ->SetMaterial (0, MaterialInstance);
}

void ADecoratorColorMultiple::Tick (float DeltaTime) {
}
