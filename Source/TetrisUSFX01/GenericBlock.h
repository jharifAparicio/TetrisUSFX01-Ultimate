// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorBLock.h"
#include "GenericBlock.generated.h"

UCLASS()
class TETRISUSFX01_API AGenericBlock : public AActor, public IFloorBLock {
	GENERATED_BODY ()

public:
	// Sets default values for this actor's properties
	AGenericBlock ();

private:
	FString SizeBlock;
	FString ColorBlock;
	FString MaterialBlock;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetSizeBlock (FString GSizeBlock) override;
	void SetColorBlock (FString GColorBlock) override;
	void SetMaterialBlock (FString GMaterialBlock) override;

	void BlockCharacteristics ();

	UStaticMeshComponent* Mesh;
};
