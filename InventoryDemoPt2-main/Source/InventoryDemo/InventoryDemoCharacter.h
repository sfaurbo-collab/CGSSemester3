// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "InventoryDemoCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UInventoryComponent;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UENUM(BlueprintType)
enum class EInventorySlotType : uint8
{
	Primary,
	Secondary,
	Count
};

UCLASS(config=Game)
class AInventoryDemoCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UInventoryComponent* InventoryComponent;

public:
	AInventoryDemoCharacter();
	

	/*********** Inventory *********/

	//component wrappers
	UFUNCTION(BlueprintCallable, Category = Inventory)
	bool AddInventoryItem(AItem_Usable* InItem);

	UFUNCTION(BlueprintCallable, Category = Inventory)
	void RemoveInventoryItem(AItem_Usable* InItem);

	//functionality
	//these will be called by events in the inventory component
	UFUNCTION(BlueprintImplementableEvent)
	void OnInventoryItemAdded(AItem_Usable* InItem);

	UFUNCTION(BlueprintImplementableEvent)
	void OnInventoryItemRemoved(AItem_Usable* InItem);


	//equip and unequip do not change the state of the inventory
	//ie if we have 2 itens in our inventory, we equip and item we still have 2 items, we unequip we still have 2 items

	//equipped item can be sheathed/holstered
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void EquipItem(EInventorySlotType Slot);

	//if we have 2 items this and one is equipped this will unequip the current item and equip the other item
	//this function makes an assumption that there will only ever be 2 items in the inventory
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void ToggleEquippedItems() {}

	//item is still in inventory but is just not currently equipped, so draw/holster do not apply to it
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void UnequipItem();

	//drop item requires just is another way of calling remove inventory item
	// in the future we can distinguish one vs the other to not play anims or perhaps use for loadout or debug
	//removes the item from our possession
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void DropItem();
	
	//drawn item is visible
	//Draw/Holster to not change the state and can only be done if an item is equipped
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void DrawItem();

	//holster/sheathe puts away the item but technically it is still equipped
	UFUNCTION(BlueprintCallable, Category = Inventory)
	void HolsterItem();


protected:

	UFUNCTION()
	void InventoryItemAdded(AItem_Usable* InItem);

	UFUNCTION()
	void InventoryItemRemoved(AItem_Usable* InItem);

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
		
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<AItem_Usable> EquippedItem;


public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Returns Inventory Component subobject **/
	FORCEINLINE UInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }
};

