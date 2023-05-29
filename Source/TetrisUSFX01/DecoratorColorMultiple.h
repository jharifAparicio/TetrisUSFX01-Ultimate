// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator.h"
#include "DecoratorColorMultiple.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ADecoratorColorMultiple : public ADecorator
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ADecoratorColorMultiple();

	void CambiarColor() override;

	void Tick(float DeltaTime) override;

	TArray<class UMaterial *> Colors;
};