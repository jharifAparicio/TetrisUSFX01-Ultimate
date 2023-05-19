// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterMovementCA.h"

void UAdapterMovementCA::SetLimiteMovimiento (float XMovimiento, float YMovimiento, float ZMovimiento) {
	MovementBroad = XMovimiento;
	MovementHeight = YMovimiento;
	MovementDepth = ZMovimiento;
}
