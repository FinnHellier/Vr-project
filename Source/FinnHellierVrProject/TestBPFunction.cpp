// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBPFunction.h"
#include "Engine/Engine.h"

void UTestBPFunction::PrintHello()//AI TEST CODE
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			2.0f,
			FColor::Green,
			TEXT("Hello from C++ Blueprint Function!")
		);
	}
}