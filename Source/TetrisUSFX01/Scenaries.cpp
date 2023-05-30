// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenaries.h"

// Sets default values
AScenaries::AScenaries()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScenaries::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScenaries::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScenaries::Create () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, FString::Printf (TEXT ("Creando %s de la clase Escenario"), *GetNameScenary ()));
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Creando materiales"));
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, ("Definiendo posiciones"));
}

void AScenaries::dessign () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Construyendo por 3 dias"));
}

void AScenaries::Elaborate () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Elaborando Escenario"));
}

void AScenaries::Finalized () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Escenario Finalizado"));
}

FString AScenaries::GetNameScenary () {
	return NameScenary;
}

