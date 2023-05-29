// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenarios.h"
#include "EscenarioShop.generated.h"

UCLASS()
class TETRISUSFX01_API AEscenarioShop : public AActor {
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenarioShop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AEscenarios* ConcoctScenario(FString ScenarioSKU)
		PURE_VIRTUAL (AScenarioShop::ConcoctScenario, return nullptr;);

	AEscenarios* OrderScenario (FString Category);

};
