// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator.h"

ADecorator::ADecorator () {
	PrimaryActorTick.bCanEverTick = true;
}

void ADecorator::BeginPlay () {
	Super::BeginPlay ();
}

void ADecorator::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);
}

void ADecorator::Rotar () {
	Estructura->Rotar ();
}

void ADecorator::SpawnBlocks () {
	//Estructura->SpawnBlocks ();
}

void ADecorator::CambiarColor () {
	Estructura->CambiarColor ();
}
