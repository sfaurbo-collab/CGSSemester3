// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Item_Usable.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UInventoryComponent::AddItem(AItem_Usable* InItem)
{
	//important if we are referencing actor pointers that we listen to when they get destroyed
	//so we are not left with empty pointers
	if (InItem)
	{
		ItemEquippedDelegate.ExecuteIfBound(InItem);
		InItem->OnDestroyed.AddDynamic(this, &UInventoryComponent::OnItemDestroyed);
		Items.Add(InItem);
	}
}

void UInventoryComponent::RemoveItem(AItem_Usable* InItem)
{
	if (InItem)
	{
		int32 numRemoved = Items.Remove(InItem);
		if (numRemoved > 0)
		{
			ItemRemovedDelegate.ExecuteIfBound(InItem);
			InItem->OnDestroyed.RemoveAll(this);
		}
	}
}


void UInventoryComponent::OnItemDestroyed(AActor* DestroyedItem)
{
	RemoveItem(static_cast<AItem_Usable*>(DestroyedItem));
}

TArray<AItem_Usable*> UInventoryComponent::GetItems() const
{
	return Items;
}