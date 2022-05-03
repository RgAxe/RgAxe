// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FData_Player.h"
#include "Character_Player.generated.h"

UCLASS()
class PORTFOLIO_API ACharacter_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere) class USpringArmComponent* PlayerSpringArm;
	UPROPERTY(EditAnywhere) class UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere) FData_Player PlayerData;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);
};
