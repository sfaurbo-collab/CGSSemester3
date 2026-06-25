// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h" // <-- must be included
#include "IPCPPAtrSet_02.generated.h"

#define ATRB_ACCESS_02(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class INVENTORYPROJECT_API UIPCPPAtrSet_02 : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UIPCPPAtrSet_02();

	UPROPERTY(BlueprintReadOnly, Category = "ATR_02")
	FGameplayAttributeData Level_01_Multiplier;
	ATRB_ACCESS_02(UIPCPPAtrSet_02, Level_01_Multiplier);

	UPROPERTY(BlueprintReadOnly, Category = "ATR_02")
	FGameplayAttributeData Level_02_Multiplier;
	ATRB_ACCESS_02(UIPCPPAtrSet_02, Level_02_Multiplier);
};
