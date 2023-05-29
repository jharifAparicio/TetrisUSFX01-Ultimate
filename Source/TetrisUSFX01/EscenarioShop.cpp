// Fill out your copyright notice in the Description page of Project Settings.


#include "EscenarioShop.h"

// Sets default values
AEscenarioShop::AEscenarioShop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscenarioShop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscenarioShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEscenarios* AEscenarioShop::OrderScenario (FString Category) {

	AEscenarios* Escenarios = ConcoctScenario (Category);

	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow,
	FString::Printf (TEXT ("Concocting %s"),
					 *Escenarios->GetScenarioName ()));
	Escenarios->Create();
	Escenarios->Ensamble ();
	Escenarios->Elaboration ();
	Escenarios->Finalizate ();

	return Escenarios;
}
