// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenary01.h"

void AScenary01::BeginPlay () {
	NameScenary = "Scenary01";
	Structure = "Solida";
	Position = "Principal";
	//Add the herbs
	Material.Add ("Hierro");
}

void AScenary01::Elaborate () {
	//Brew the potion
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Elaborando el escenario"));
}
