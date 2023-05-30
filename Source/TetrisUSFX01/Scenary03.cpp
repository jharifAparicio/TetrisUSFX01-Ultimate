// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenary03.h"

void AScenary03::BeginPlay () {
	NameScenary = "Scenary03";
	Structure = "Solida";
	Position = "Principal";
	//Add the herbs
	Material.Add ("Hierro");
}

void AScenary03::Elaborate () {
	//Brew the potion
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Elaborando el escenario"));
}
