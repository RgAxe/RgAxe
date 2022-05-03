// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FData_Player.generated.h"
/**
 * 
 */

USTRUCT(Atomic)
struct FData_Player
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	int a;
	int b;
};