// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenarios1.h"

void AEscenarios1::BeginPlay () {
	Super::BeginPlay ();

	ScenarioName = "Escenario 1";
	ColorScenario = "Amarillo";
	StructurScenario = "Cubic";
	Properties.Add ("Paredes");
	Properties.Add ("Piso");
	Properties.Add ("Techo");
	Properties.Add ("Puerta");
	Properties.Add ("Ventana");
}

void AEscenarios1::Elaboration () {
	Super::Elaboration ();
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
	TEXT ("Elaborando escenario 1"));
}
