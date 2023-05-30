// Fill out your copyright notice in the Description page of Project Settings.


#include "ScenariesShop02.h"

AScenaries *AScenariesShop02::MakerScenaries (FString ScenariesSKU) {
	if (ScenariesSKU.Equals ("Escenario_1")) {
		return GetWorld ()->SpawnActor<AScenary_1> (AScenary_1::StaticClass ());
	} else
		if (ScenariesSKU.Equals ("Escenario_2")) {
			return GetWorld ()->SpawnActor<AScenary_2> (AScenary_2::StaticClass ());
		} else
			if (ScenariesSKU.Equals ("Escenario_3")) {
				return GetWorld ()->SpawnActor<AScenary_3> (AScenary_3::StaticClass ());
			} else return nullptr;
}
