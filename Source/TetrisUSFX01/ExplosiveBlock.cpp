// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveBlock.h"
#include "GenericBlock.h"

AExplosiveBlock::AExplosiveBlock () {
	PrimaryActorTick.bCanEverTick = true;
}

void AExplosiveBlock::BeginPlay () {
	Super::BeginPlay ();

	GenericBlock = GetWorld ()->SpawnActor<AGenericBlock> (AGenericBlock::StaticClass ());


	GenericBlock->AttachToActor (this,FAttachmentTransformRules::KeepRelativeTransform);

	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent> (GenericBlock->GetComponentByClass (UStaticMeshComponent::StaticClass ()));
	//Material1 = LoadObject<UMaterialInterface> (NULL, TEXT ("/Game/Materials/ExplosiveBlockMaterial.ExplosiveBlockMaterial"));
}

void AExplosiveBlock::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);
}

void AExplosiveBlock::SizeBlock () {
	if (!GenericBlock) {
		UE_LOG (LogTemp, Error, TEXT ("no existe el block"));
		return;
	}
	GenericBlock->SetSizeBlock ("1.f");
}

void AExplosiveBlock::ColorBlock () {
	if (!GenericBlock) {
		UE_LOG (LogTemp, Error, TEXT ("no existe el block"));
		return;
	}
	GenericBlock->SetColorBlock ("Black");
}

void AExplosiveBlock::MaterialBlock () {
	if (!GenericBlock) {
		UE_LOG (LogTemp, Error, TEXT ("no existe el block"));
		return;
	}
	GenericBlock->SetMaterialBlock ("Explosive");
}

AGenericBlock *AExplosiveBlock::GetGenericBlock () {
	return GenericBlock;
}