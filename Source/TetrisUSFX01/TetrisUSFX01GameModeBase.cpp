// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

#include "ExplosiveBlock.h"
#include "ArchitecturalEngineer.h"
#include "GenericBlock.h"

ATetrisUSFX01GameModeBase::ATetrisUSFX01GameModeBase () {
	 // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ABoard::StaticClass ();
	siguientePosicionZ = 0;
}

void ATetrisUSFX01GameModeBase::BeginPlay () {
	// Call the parent class version of this function
	Super::BeginPlay ();

	FRotator Rotacion (0.0, 0.0, 0.0);
	/*FVector Ubicacion1 (0.0, 50.0, 200.0);
	SpawnedBlock1 = GetWorld ()->SpawnActor<ABlock> (Ubicacion1, Rotacion);
	AdaptadorMovimientoAleatorio1 = NewObject<UAdapterMovementCA> (SpawnedBlock1);
	AdaptadorMovimientoAleatorio1->RegisterComponent ();*/

	FVector Ubicacion2 (0.0, -70.0, 100.0);
	SpawnedBlock1 = GetWorld ()->SpawnActor<ABlock> (Ubicacion2, Rotacion);
	AdaptadorMovimientoAleatorio1 = NewObject<UAdapterMovementCA> (SpawnedBlock1);
	AdaptadorMovimientoAleatorio1->SetLimiteMovimiento (10.0f, 20.0f, 20.0f);
	AdaptadorMovimientoAleatorio1->RegisterComponent ();

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
		ExplosiveBlockBuilder = GetWorld ()->SpawnActor<AExplosiveBlock>
		(AExplosiveBlock::StaticClass ());
	Engineer = GetWorld ()->SpawnActor<AArchitecturalEngineer>
		(AArchitecturalEngineer::StaticClass ());
		//Set the Builder for the Engineer and create the buildings
	Engineer->SetBlockBuilder (ExplosiveBlockBuilder);
	Engineer->ConstructBlock ();
	//Get the Engineer's Lodging and Logs the created buildings
	AGenericBlock* GenericBlock = Engineer->GetGenericBlock ();
	GenericBlock->BlockCharacteristics();
	//Destroy the Engineer
	Engineer->Destroy ();
	//Destroy the Lodging
	GenericBlock->Destroy ();
}

// Called every frame
void ATetrisUSFX01GameModeBase::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);
}


void ATetrisUSFX01GameModeBase::DestroyActorFunction () {
	if (SpawnedBlock1 != nullptr) {
	  // Displays a red message on the screen for 10 seconds
		GEngine->AddOnScreenDebugMessage (-1, 10, FColor::Red, TEXT ("Actor Block destruido"));
		SpawnedBlock1->Destroy ();
	}
}
