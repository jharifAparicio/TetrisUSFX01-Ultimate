// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorRotationMultiple.h"
#include "Block.h"

ADecoratorRotationMultiple::ADecoratorRotationMultiple () {
	AcumulatedTime = 0.0f;
}

void ADecoratorRotationMultiple::Rotar () {
	UE_LOG (LogTemp, Warning, TEXT ("now can rotate Estructura multirotacional"));
	FRotator NewRotation = this->GetActorRotation () + FRotator (-1.0, 0.0, 0.0);
	this->SetActorRelativeRotation (NewRotation);
}

void ADecoratorRotationMultiple::SpawnBlocks () {
}

void ADecoratorRotationMultiple::Tick (float DeltaTime) {
	Super::Tick (DeltaTime);
	//if (AcumulatedTime >= 0.2) {
	//	UE_LOG (LogTemp, Warning, TEXT ("now can move Estructura concreta"));
	//	//this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
	//	Rotar ();
	//	AcumulatedTime = 0.0;
	//} else {
	//	AcumulatedTime += DeltaTime;
	//}

	UE_LOG (LogTemp, Warning, TEXT ("now can move Estructura concreta"));
		//this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
	Rotar ();
}
