// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveBlock.h"

#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"

void AExplosiveBlock::BeginPlay () {

	// Spawn the Lodging Actors
	GenericBlock = GetWorld ()->SpawnActor<AGenericBlock>
		(AGenericBlock::StaticClass ());
	//Attach it to the Builder (this)
	GenericBlock->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
	UStaticMeshComponent *MeshComponent = Cast<UStaticMeshComponent> (GetComponentByClass (UStaticMeshComponent::StaticClass ()));
	//Material = Cast<UMaterial> (StaticLoadObject (UMaterial::StaticClass (), nullptr, TEXT ("Material'/Game/Mesh/SpecialPieces/TNT.TNT'")))
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

	//Mesh->SetMaterialBlock (0, Material);


	GenericBlock->SetMaterialBlock ("El Material del bloque explosivo");

	//FString NombreMaterial = Material->GetName ();
	//GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, FString::Printf (TEXT ("El material es %s"), *Material));
}

AGenericBlock *AExplosiveBlock::GetGenericBlock () {
	return GenericBlock;
}