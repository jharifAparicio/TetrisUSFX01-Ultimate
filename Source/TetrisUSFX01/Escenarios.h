// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenarios.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarios : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarios();

protected:
//The name of this Potion
	FString ScenarioName;
	//The Gooeyness of this Potion
	FString ColorScenario;
	//The Blood of this Potion
	FString StructurScenario;
	//The herbs contained in this Potion
	TArray<FString> Properties;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Create ();
	void Ensamble ();
	virtual void Elaboration ();
	void Finalizate();
	FString GetScenarioName ();

};
