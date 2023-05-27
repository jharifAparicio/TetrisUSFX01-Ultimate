// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Block.h"
#include "Piece.h"

#include "EstructuraPiece.h"
#include "EstructuraPieceConcreta.h"
#include "Decorator.h"
#include "DecoratorRotationMultiple.h"

#include "AdapterMovementCA.h"
#include "TetrisUSFX01GameModeBase.generated.h"

UCLASS()
class TETRISUSFX01_API ATetrisUSFX01GameModeBase : public AGameModeBase
{
	GENERATED_BODY ()

protected:
	virtual void BeginPlay () override;

public:
	ATetrisUSFX01GameModeBase ();

	UPROPERTY ()
		ABlock *SpawnedBlock1;

	UPROPERTY ()
		APiece *SpawnedPiece;

	UAdapterMovementCA* AdaptadorMovimientoAleatorio1;


	AEstructuraPiece* EstructuraActual;
	AEstructuraPieceConcreta* EstructuraConcretaActual;
	ADecoratorRotationMultiple* EstructuraMultirotacionActual;

	UFUNCTION ()
		void DestroyActorFunction ();
private:
	virtual void Tick (float DeltaTime) override;

	class AExplosiveBlock *ExplosiveBlockBuilder;
	class AArchitecturalEngineer *Engineer;

private:
	float siguientePosicionZ;
};
