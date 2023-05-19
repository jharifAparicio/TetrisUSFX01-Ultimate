// Fill out your copyright notice in the Description page of Project Settings.


#include "ArchitecturalEngineer.h"
#include "GenericBlock.h"

// Sets default values
AArchitecturalEngineer::AArchitecturalEngineer () {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArchitecturalEngineer::BeginPlay () {
	Super::BeginPlay ();

}

// Called every frame
void AArchitecturalEngineer::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);

}

void AArchitecturalEngineer::ConstructBlock () {
	if (!BlockBuilder) {
		UE_LOG (LogTemp, Error, TEXT ("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized.")); return;
	}
	BlockBuilder->ColorBlock ();
	BlockBuilder->MaterialBlock ();
	BlockBuilder->SizeBlock ();

}

void AArchitecturalEngineer::SetBlockBuilder (AActor *ExplosiveBuilder) {
	BlockBuilder = Cast<IBlockBuilder> (ExplosiveBuilder);
	if (!BlockBuilder) {
		GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Red,
		TEXT ("Invalid Cast! See Output log for more details"));
		UE_LOG (LogTemp, Error, TEXT ("SetLodgingBuilder(): The Actor is not a LodgingBuilder!Are you sure that the Actor implements that interface ? "));
	}
}

AGenericBlock *AArchitecturalEngineer::GetGenericBlock () {

	if (BlockBuilder) {
	//Returns the Lodging of the Builder
		return BlockBuilder->GetGenericBlock ();
	}
	//Log if the Builder is NULL
	UE_LOG (LogTemp, Error, TEXT ("GetLodging(): Return nullptr"));
	return nullptr;
}

