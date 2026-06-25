#include "IPCPPChar_TypeB.h"
#include "IPCPPAtrSet_01.h"
#include "IPCPPAtrSet_02.h"
#include "AbilitySystemComponent.h"

AIPCPPChar_TypeB::AIPCPPChar_TypeB(){
 	
	PrimaryActorTick.bCanEverTick = true;

	ASC_02 = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("GASC_02")); // GASC_02 name of this object

}

void AIPCPPChar_TypeB::BeginPlay(){
	Super::BeginPlay();

	if (IsValid(ASC_02)){
		ATRBSet_01 = ASC_02->GetSet<UIPCPPAtrSet_01>(); // get attribute set
		ATRBSet_02 = ASC_02->GetSet<UIPCPPAtrSet_02>(); // get attribute set
		UE_LOG(LogTemp, Warning, TEXT("dbug -- GASC_02 created"));
	}
	else{
		UE_LOG(LogTemp, Warning, TEXT("dbug -- GASC_02 not valid object"));
	}
}

void AIPCPPChar_TypeB::Tick(float DeltaTime){
	Super::Tick(DeltaTime);

}

void AIPCPPChar_TypeB::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent){
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

