// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Escenarios.h"
#include "Escenarios2.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEscenarios2 : public AEscenarios
{
	GENERATED_BODY ()

protected:
	virtual void BeginPlay () override;

public:
	virtual void Elaboration () override;	
};
