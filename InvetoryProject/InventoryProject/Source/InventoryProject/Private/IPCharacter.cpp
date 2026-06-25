// Fill out your copyright notice in the Description page of Project Settings.


#include "IPCharacter.h"

// Sets default values
AIPCharacter::AIPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AIPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

