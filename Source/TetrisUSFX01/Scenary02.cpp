// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenary02.h"

void AScenary02::BeginPlay () {
	NameScenary = "Scenary02";
	Structure = "Solida";
	Position = "Principal";
	//Add the herbs
	Material.Add ("Hierro");
}

void AScenary02::Elaborate () {
	//Brew the potion
	GEngine->AddOnScreenDebugMessage (-1, 15.f, FColor::Yellow, TEXT ("Elaborando el escenario"));
}
