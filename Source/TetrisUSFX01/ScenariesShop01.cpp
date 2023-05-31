// Fill out your copyright notice in the Description page of Project Settings.


#include "ScenariesShop01.h"

#include "Scenary01.h"
#include "Scenary02.h"
#include "Scenary03.h"

AScenaries *AScenariesShop01::MakerScenaries (FString ScenariesSKU) {
	if (ScenariesSKU.Equals ("Escenario_1")) {
		return GetWorld ()->SpawnActor<AScenary01> (AScenary01::StaticClass ());
	} else
		if (ScenariesSKU.Equals ("Escenario_2")) {
			return GetWorld ()->SpawnActor<AScenary02> (AScenary02::StaticClass ());
		} else
			if (ScenariesSKU.Equals ("Escenario_3")) {
				return GetWorld ()->SpawnActor<AScenary03> (AScenary03::StaticClass ());
			} else return nullptr;
}