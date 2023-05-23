// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericBlock.h"

// Sets default values
AGenericBlock::AGenericBlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent> ("Block Mesh");
	RootComponent = Mesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockFinder (TEXT ("StaticMesh'/Game/Mesh/block.block'"));
	if (BlockFinder.Succeeded ()) {
		Mesh->SetStaticMesh (BlockFinder.Object);
	} else {
		UE_LOG (LogTemp, Warning, TEXT ("mesh not found"));
	}
}

// Called when the game starts or when spawned
void AGenericBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGenericBlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGenericBlock::SetSizeBlock (FString GSizeBlock) {
	SizeBlock = GSizeBlock;
}

void AGenericBlock::SetColorBlock (FString GColorBlock) {
	ColorBlock = GColorBlock;
}

void AGenericBlock::SetMaterialBlock (FString GMaterialBlock) {
	MaterialBlock = GMaterialBlock;
}

void AGenericBlock::BlockCharacteristics () {
	UE_LOG (LogTemp, Warning, TEXT ("Size: %s"), *SizeBlock);
	UE_LOG (LogTemp, Warning, TEXT ("Color: %s"), *ColorBlock);
	UE_LOG (LogTemp, Warning, TEXT ("Material: %s"), *MaterialBlock);
}

