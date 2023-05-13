// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"

#include "TNTPieceBuilder.h"
#include "IcePieceBuilder.h"
#include "MetalPieceBuilder.h"
#include "StonePieceBuilder.h"
#include "WoodPieceBuilder.h"

#include "ArchitecturalEngineer.h"
#include "Piece2.h"

#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase () {
	 // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ABoard::StaticClass ();
	siguientePosicionZ = 0;
}

void ATetrisUSFX01GameModeBase::BeginPlay () {
	// Call the parent class version of this function
	Super::BeginPlay ();

	//patron singleton
	ABoard *BoardInstance = ABoard::GetInstance ();

	for (TActorIterator<ACameraActor> it (GetWorld ()); it; ++it) {
		UE_LOG (LogTemp, Warning, TEXT ("Find camera: %s"), *(it->GetFName ().ToString ()));
		if (it->GetFName () == TEXT ("BoardCamera")) {
			APlayerController *PC = UGameplayStatics::GetPlayerController (this, 0);
			PC->SetViewTargetWithBlend (*it, 0.5);
			break;
		}
	}



	TNTBuilder = GetWorld ()->SpawnActor<ATNTPieceBuilder> (ATNTPieceBuilder::StaticClass());
	IceBuilder = GetWorld ()->SpawnActor<AIcePieceBuilder> (AIcePieceBuilder::StaticClass());
	MetalBuilder = GetWorld ()->SpawnActor<AMetalPieceBuilder> (AMetalPieceBuilder::StaticClass());
	StoneBuilder = GetWorld ()->SpawnActor<AStonePieceBuilder> (AStonePieceBuilder::StaticClass());
	WoodBuilder = GetWorld ()->SpawnActor<AWoodPieceBuilder> (AWoodPieceBuilder::StaticClass());


	EngineerTNT = GetWorld ()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass ());
	EngineerIce = GetWorld ()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass ());
	EngineerMetal = GetWorld ()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass ());
	EngineerStone = GetWorld ()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass ());
	EngineerWood = GetWorld ()->SpawnActor<AArchitecturalEngineer>(AArchitecturalEngineer::StaticClass ());

	////pieza de TNT
	//EngineerTNT->SetPieceBuilder (TNTBuilder);
	//EngineerTNT->ConstructPiece ();
	//APiece2* Piece2TNT = EngineerTNT->GetPiece2 ();
	//Piece2TNT->Piece2Characteristics ();

	////pieza de hielo
	//EngineerIce->SetPieceBuilder (IceBuilder);
	//EngineerIce->ConstructPiece ();
	//APiece2* Piece2Ice = EngineerIce->GetPiece2 ();
	//Piece2Ice->Piece2Characteristics ();

	//pieza de metal
	EngineerMetal->SetPieceBuilder (MetalBuilder);
	EngineerMetal->ConstructPiece ();
	APiece2* Piece2Metal = EngineerMetal->GetPiece2 ();
	Piece2Metal->Piece2Characteristics ();

	////pieza de piedra
	//EngineerStone->SetPieceBuilder (StoneBuilder);
	//EngineerStone->ConstructPiece ();
	//APiece2 *Piece2Stone = EngineerStone->GetPiece2 ();
	//Piece2Stone->Piece2Characteristics ();

	////pieza de madera
	//EngineerWood->SetPieceBuilder (WoodBuilder);
	//EngineerWood->ConstructPiece ();
	//APiece2 *Piece2Wood = EngineerWood->GetPiece2 ();
	//Piece2Wood->Piece2Characteristics ();

}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);
}


void ATetrisUSFX01GameModeBase::DestroyActorFunction () {
	if (SpawnedActor != nullptr) {
	  // Displays a red message on the screen for 10 seconds
		GEngine->AddOnScreenDebugMessage (-1, 10, FColor::Red, TEXT ("Actor Block destruido"));
		SpawnedActor->Destroy ();
	}
}
