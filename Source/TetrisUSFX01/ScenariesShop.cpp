
#include "ScenariesShop.h"

// Sets default values
AScenariesShop::AScenariesShop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScenariesShop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScenariesShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AScenaries *AScenariesShop::SortStage (FString Category) {

	AScenaries* Scenaries = MakerScenaries(Category);
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, FString::Printf (TEXT ("Creando %s"),* Scenaries->GetNameScenary()));
	
	Scenaries->Create ();
	Scenaries->dessign ();
	Scenaries->Elaborate ();
	Scenaries->Finalized ();
	
	return Scenaries;
}
