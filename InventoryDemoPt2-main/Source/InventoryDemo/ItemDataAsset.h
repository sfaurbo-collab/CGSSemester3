// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDataAsset.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYDEMO_API UItemDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	//have UI display name here
	//static mesh as well
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName UIName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<class UStaticMesh> StaticMesh;
	
};
