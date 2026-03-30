// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/CoreNet.h"
#include "InventoryComponent.generated.h"

class AItem_Usable;

DECLARE_DELEGATE_OneParam(FItemEquippedSignature, AItem_Usable*);
DECLARE_DELEGATE_OneParam(FItemRemovedSignature, AItem_Usable*);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYDEMO_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	//we want design to go through the character or actor that owns the inventory to add/remove
	//we disable blueprint callable here
	void AddItem(AItem_Usable* InItem);
	void RemoveItem(AItem_Usable* InItem);
	
	UFUNCTION(BlueprintCallable, Category = Inventory)
	int32 GetNumItems() { return Items.Num(); }

	UFUNCTION(BlueprintCallable, Category = Inventory)
	TArray<AItem_Usable*> GetItems() const;

protected:
	UFUNCTION()
	void OnItemDestroyed(AActor* DestroyedItem);

	UPROPERTY()
	TArray<TObjectPtr<AItem_Usable>> Items;

public:	

	FItemEquippedSignature ItemEquippedDelegate;
	FItemRemovedSignature ItemRemovedDelegate;
	
};
