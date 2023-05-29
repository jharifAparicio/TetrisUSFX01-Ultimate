// Fill out your copyright notice in the Description page of Project Settings.


#include "EstructuraPieceConcreta.h"
#include "Components/SceneComponent.h"
#include <vector>

AEstructuraPieceConcreta::AEstructuraPieceConcreta () {
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent> ("Escena Estructura");
	RootComponent = SceneComponent;
	AcumulatedTime = 0.0;
}

void AEstructuraPieceConcreta::BeginPlay () {
		AActor::BeginPlay ();
		SpawnBlocks ();
}

void AEstructuraPieceConcreta::Tick (float DeltaTime) {
    AActor::Tick(DeltaTime);

    //if (AcumulatedTime >= 0.3) {
    //    UE_LOG (LogTemp, Warning, TEXT ("se esta rotando Estructura Concreta"));
    //    //this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
    //    Rotar ();
    //    AcumulatedTime = 0.0;
    //} else {
    //    AcumulatedTime += DeltaTime;
    //}

    UE_LOG (LogTemp, Warning, TEXT ("se esta rotando Estructura Concreta"));
        //this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
    Rotar ();
}

void AEstructuraPieceConcreta::Rotar () {
    UE_LOG (LogTemp, Warning, TEXT ("rotacion Estructura concreta en el eje Z"));
    FRotator NewRotation = this->GetActorRotation () + FRotator (0.0, 0.0, -1.0);
    this->SetActorRelativeRotation (NewRotation);
}

void AEstructuraPieceConcreta::SpawnBlocks () {
    std::vector<std::vector<std::pair<float, float>>> Shapes =
    {
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
        {{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        {{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        {{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
    };
    const int Index = FMath::RandRange (0, Shapes.size () - 1);
    UE_LOG (LogTemp, Warning, TEXT ("numero de pieza(index)=%d"), Index);
    const std::vector<std::pair<float, float>> &YZs = Shapes[Index];
    //const int ColorIndex = FMath::RandRange(0, Colors.Num() - 1);

    for (auto &&YZ : YZs) {
        FRotator Rotation (0.0, 0.0, 0.0);
        ABlock *B = GetWorld ()->SpawnActor<ABlock> (this->GetActorLocation (), Rotation);
        Blocks.Add (B);
        B->AttachToActor (this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation (FVector (0.0, YZ.first, YZ.second));
    }
}
