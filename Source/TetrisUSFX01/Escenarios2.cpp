// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenarios2.h"

void AEscenarios2::BeginPlay () {
	Super::BeginPlay ();

	ScenarioName = "Escenario 2";
	ColorScenario = "Azul";
	StructurScenario = "Cilindrica";
	Properties.Add ("Paredes");
	Properties.Add ("Piso");
	Properties.Add ("Techo");
	Properties.Add ("Puerta");
	Properties.Add ("Ventana");
}

void AEscenarios2::Elaboration () {
	Super::Elaboration ();
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Blue,
	TEXT ("Elaborando escenario 2"));
}
