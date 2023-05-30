// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Scenaries.generated.h"

UCLASS()
class TETRISUSFX01_API AScenaries : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScenaries();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FString NameScenary;
	FString Estructure;
	FString Position;
	TArray<FString> Material;

public:
	void Create ();
	void dessign ();
	virtual void Elaborate ();
	void Finalized ();
	FString GetNameScenary ();
};
