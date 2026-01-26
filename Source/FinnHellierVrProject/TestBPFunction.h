// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestBPFunction.generated.h"

UCLASS()
class FINNHELLIERVRPROJECT_API UTestBPFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// Simple test function
	UFUNCTION(BlueprintCallable, Category = "Test")
	static void PrintHello();
};