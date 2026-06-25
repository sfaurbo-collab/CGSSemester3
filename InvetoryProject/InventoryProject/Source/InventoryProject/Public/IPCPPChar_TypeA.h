// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h" // ability system interface
#include "IPCPPChar_TypeA.generated.h"

UCLASS()
class INVENTORYPROJECT_API AIPCPPChar_TypeA : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIPCPPChar_TypeA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_01", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* ASC_01;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return ASC_01;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS_01", meta = (AllowPrivateAccess = "true"))
	const class UIPCPPAtrSet_01* ATRBSet_01;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
