// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Block.h"
#include "FloorPiece.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFloorPiece : public UInterface {
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IFloorPiece 
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	void SetMaterial (FString _Material) PURE_VIRTUAL(SetMaterial,);
	/*void SetNumBlocks (FString _NumBlocks) PURE_VIRTUAL (SetNumBlocks, );
	void SetNamePiece (FString NamePiece) PURE_VIRTUAL(SetNamePiece,);*/

	//class UMaterial* SetTexture = 0;
};
