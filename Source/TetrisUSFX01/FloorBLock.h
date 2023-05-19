// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FloorBLock.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFloorBLock : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IFloorBLock
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SetSizeBlock (FString SizeBlock) = 0;
	virtual void SetColorBlock (FString ColorBlock) = 0;
	virtual void SetMaterialBlock (FString MaterialBlock) = 0;
};
