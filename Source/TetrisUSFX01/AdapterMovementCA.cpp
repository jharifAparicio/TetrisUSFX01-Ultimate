// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterMovementCA.h"

UAdapterMovementCA::UAdapterMovementCA () {
	PrimaryComponentTick.bCanEverTick = true;

	SetLimiteMovimiento (0.0f,5.0f,5.0f);
}

void UAdapterMovementCA::SetLimiteMovimiento (float X_Movimiento, float Y_Movimiento, float Z_Movimiento) {
	MovementBroad = Z_Movimiento;
	MovementHeight = Y_Movimiento;
	MovementDepth = X_Movimiento;
}
