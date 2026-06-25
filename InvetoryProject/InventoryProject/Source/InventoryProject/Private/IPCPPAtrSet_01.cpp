// Fill out your copyright notice in the Description page of Project Settings.


#include "IPCPPAtrSet_01.h"

UIPCPPAtrSet_01::UIPCPPAtrSet_01() 
{
	InitHealth_01(65536); // Init + property name works because of having macros 
	InitShield_01(8192); // Init + property name works because of having macros 
	InitMagic_01(524288); // Init + property NOT works because of no macros 
	InitSuperMagic_01(512); // Init + property NOT works because of no macros 
}