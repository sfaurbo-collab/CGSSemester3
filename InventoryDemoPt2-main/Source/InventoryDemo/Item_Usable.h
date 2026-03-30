// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Item_Usable.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYDEMO_API AItem_Usable : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	FString UIName;

};
