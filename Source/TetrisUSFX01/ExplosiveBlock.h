// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Block.h"
#include "BlockBuilder.h"
#include "GenericBlock.h"

#include "ExplosiveBlock.generated.h"

UCLASS()
class TETRISUSFX01_API AExplosiveBlock : public ABlock, public IBlockBuilder
{
	GENERATED_BODY()

private:
	class AGenericBlock* GenericBlock;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay () override;

public:

	virtual void SizeBlock () override;
	virtual void ColorBlock () override;
	virtual void MaterialBlock () override;

	virtual AGenericBlock* GetGenericBlock() override;
	
public:
	class UmaterialInterface* Material;
};
