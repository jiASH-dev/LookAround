// Fill out your copyright notice in the Description page of Project Settings.


#include "Util.h"

const FTransform UUtil::DefaultActorTransform = FTransform(FQuat(FRotator(0.f, 0.f, 0.f)), FVector(0.f, 0.f, 0.f), FVector(1.f, 1.f, 1.f));

const float UUtil::SideStrategyXShift = 70.f;
const float UUtil::SideStrategyYShift = 58.f;
const float UUtil::BarrierUpAndDownShift = 2.f;

float UUtil::GetSideStrategyXShift()
{
	return SideStrategyXShift;
}

float UUtil::GetSideStrategyYShift()
{
	return SideStrategyYShift;
}

float UUtil::GetBarrierUpAndDownShift()
{
	return BarrierUpAndDownShift;
}

FTransform UUtil::GetDefaultActorTransform()
{
	return DefaultActorTransform;
}