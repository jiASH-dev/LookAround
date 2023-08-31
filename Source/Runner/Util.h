// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Util.generated.h"

/**
 * 
 */
UCLASS()
class RUNNER_API UUtil : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	//Default actor's transfrom to the all actors in the game
	static const FTransform DefaultActorTransform;

	static const float SideStrategyXShift;
	static const float SideStrategyYShift;
	static const float BarrierUpAndDownShift;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetSideStrategyXShift();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetSideStrategyYShift();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetBarrierUpAndDownShift();
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FTransform GetDefaultActorTransform();
};
