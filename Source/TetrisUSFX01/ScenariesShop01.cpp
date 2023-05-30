// Fill out your copyright notice in the Description page of Project Settings.


#include "ScenariesShop01.h"

AScenaries *AScenariesShop01::MakerScenaries (FString ScenariesSKU) {
	if (ScenariesSKU.Equals ("Escenario_1")) {
		return GetWorld ()->SpawnActor<AScenary_01> (AScenary_01::StaticClass ());
	} else
		if (ScenariesSKU.Equals ("Escenario_2")) {
			return GetWorld ()->SpawnActor<AScenary_02> (AScenary_02::StaticClass ());
		} else
			if (ScenariesSKU.Equals ("Escenario_3")) {
				return GetWorld ()->SpawnActor<AScenary_03> (AScenary_03::StaticClass ());
			} else return nullptr;
}
