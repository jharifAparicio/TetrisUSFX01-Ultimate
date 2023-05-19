// Fill out your copyright notice in the Description page of Project Settings.


#include "Randommove_ActorComponent.h"

// Sets default values for this component's properties
URandommove_ActorComponent::URandommove_ActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	//MovementRadius = 5.0f;
}


// Called when the game starts
void URandommove_ActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URandommove_ActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AcumulateTime = LimitedTime + DeltaTime;

	if (AcumulateTime >= LimitedTime) {
		AcumulateTime = 0.f;

		AActor *Parent = GetOwner ();
		if (Parent) {
		// Find a new position for the object to go to
			auto NewPos = Parent->GetActorLocation () +
				FVector
				(
				FMath::FRandRange (-1, 1) *
				MovementBroad,
				FMath::FRandRange (-1, 1) *
				MovementDepth,
				FMath::FRandRange (-1, 1) *
				MovementHeight
				);
				// Update the object's position
			Parent->SetActorLocation (NewPos);
		}
	}
}

