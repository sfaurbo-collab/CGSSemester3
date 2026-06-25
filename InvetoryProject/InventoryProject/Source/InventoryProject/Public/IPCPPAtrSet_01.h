// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h" // <-- must be included
#include "IPCPPAtrSet_01.generated.h"

#define ATRB_ACCESS_01(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class INVENTORYPROJECT_API UIPCPPAtrSet_01 : public UAttributeSet
{
	GENERATED_BODY()

public:

	UIPCPPAtrSet_01();

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Health_01;
	ATRB_ACCESS_01(UIPCPPAtrSet_01, Health_01);

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Shield_01;
	ATRB_ACCESS_01(UIPCPPAtrSet_01, Shield_01);

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData Magic_01;
	ATRB_ACCESS_01(UIPCPPAtrSet_01, Magic_01);

	UPROPERTY(BlueprintReadOnly, Category = "ATR_01")
	FGameplayAttributeData SuperMagic_01;
	ATRB_ACCESS_01(UIPCPPAtrSet_01, SuperMagic_01);
	
};
