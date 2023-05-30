// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"
#include "Board.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

#include "ExplosiveBlock.h"
#include "ArchitecturalEngineer.h"
#include "GenericBlock.h"

#include "ScenariesShop01.h"
#include "ScenariesShop02.h"

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

	//patron adapter
	FVector Ubicacion2 (0.0, -70.0, 100.0);
	SpawnedBlock1 = GetWorld ()->SpawnActor<ABlock> (Ubicacion2, Rotacion);
	AdaptadorMovimientoAleatorio1 = NewObject<UAdapterMovementCA> (SpawnedBlock1);
	AdaptadorMovimientoAleatorio1->SetLimiteMovimiento (10.0f, 20.0f, 20.0f);
	AdaptadorMovimientoAleatorio1->RegisterComponent ();

	//patron decorator
	FVector Ubicacion3 (0.0, -140.0, 130.0);
	FRotator Rotacion3 (0.0, 0.0, 0.0);
	EstructuraConcretaActual = GetWorld ()->SpawnActor<AEstructuraPieceConcreta> (Ubicacion3, Rotacion3);
	EstructuraMultirotacionActual = GetWorld ()->SpawnActor<ADecoratorRotationMultiple> (ADecoratorRotationMultiple::StaticClass ());
	EstructuraMultirotacionActual->SetEstructura (EstructuraConcretaActual);

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

	//ExplosiveBlockBuilder = GetWorld ()->SpawnActor<AExplosiveBlock>
	//	(AExplosiveBlock::StaticClass ());
	//Engineer = GetWorld ()->SpawnActor<AArchitecturalEngineer>
	//	(AArchitecturalEngineer::StaticClass ());
	//	//Set the Builder for the Engineer and create the buildings
	//Engineer->SetBlockBuilder (ExplosiveBlockBuilder);
	//Engineer->ConstructBlock ();
	////Get the Engineer's Lodging and Logs the created buildings
	//AGenericBlock *GenericBlock = Engineer->GetGenericBlock ();
	//GenericBlock->BlockCharacteristics ();
	////Destroy the Engineer
	//Engineer->Destroy ();
	////Destroy the Lodging
	//GenericBlock->Destroy ();


	////Factory_Method

	//GetWorld()->SpawnActor<AFactoryMethod_Main>(AFactoryMethod_Main::StaticClass());

	////Haciendo aparecer los generadores de escenarios
	//AEscenarioShop* EscenarioShop_1 = GetWorld() -> SpawnActor<AEscenarioShop_1>(AEscenarioShop_1::StaticClass());
	//AEscenarioShop* EscenarioShop_2 = GetWorld()->SpawnActor<AEscenarioShop_2>(AEscenarioShop_2::StaticClass());


	////Definiendo los escenarios
	//AEscenario* Escenario = EscenarioShop_1->OrdenarEscenario("Escenario_3");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("El escenario es %s"),*Escenario->GetNombreEscenario()));
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
