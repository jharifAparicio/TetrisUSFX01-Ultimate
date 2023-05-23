// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BlockBuilder.h"
#include "BlockBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBlockBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IBlockBuilder {

	GENERATED_BODY ()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SizeBlock () = 0;
	virtual void ColorBlock () = 0;
	virtual void MaterialBlock () = 0;

	virtual class AGenericBlock* GetGenericBlock () = 0;
};
