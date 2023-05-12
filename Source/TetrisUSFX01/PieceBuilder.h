// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PieceBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPieceBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IPieceBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildMaterial () = 0;
	virtual void BuildNumBlocks () = 0;
	virtual void BuildNamePiece () = 0;

	virtual class APiece* GetPiece () = 0;
};
