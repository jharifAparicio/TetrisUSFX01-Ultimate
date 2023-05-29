// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenarios.h"

// Sets default values
AEscenarios::AEscenarios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Properties = TArray<FString> ();

}

// Called when the game starts or when spawned
void AEscenarios::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscenarios::Create () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
	FString::Printf (TEXT ("Creando %s"),
					 *GetScenarioName ()));
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
	TEXT ("include elements"));
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
	TEXT ("include properties"))
}

void AEscenarios::Ensamble () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
TEXT ("Ensamblando escenario"));
}

void AEscenarios::Elaboration () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
TEXT ("Elaborando escenario"));
}

void AEscenarios::Finalizate () {
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
									  TEXT ("Finalizando escenario"));
}

FString AEscenarios::GetScenarioName () {
	return ScenarioName;
}
