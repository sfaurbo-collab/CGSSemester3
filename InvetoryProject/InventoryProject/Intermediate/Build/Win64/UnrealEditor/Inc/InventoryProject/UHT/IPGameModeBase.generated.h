// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPGameModeBase.h"

#ifdef INVENTORYPROJECT_IPGameModeBase_generated_h
#error "IPGameModeBase.generated.h already included, missing '#pragma once' in IPGameModeBase.h"
#endif
#define INVENTORYPROJECT_IPGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIPGameModeBase **********************************************************
struct Z_Construct_UClass_AIPGameModeBase_Statics;
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPGameModeBase_NoRegister();

#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIPGameModeBase(); \
	friend struct ::Z_Construct_UClass_AIPGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYPROJECT_API UClass* ::Z_Construct_UClass_AIPGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AIPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryProject"), Z_Construct_UClass_AIPGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AIPGameModeBase)


#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIPGameModeBase(AIPGameModeBase&&) = delete; \
	AIPGameModeBase(const AIPGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIPGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIPGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIPGameModeBase) \
	NO_API virtual ~AIPGameModeBase();


#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_12_PROLOG
#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIPGameModeBase;

// ********** End Class AIPGameModeBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
