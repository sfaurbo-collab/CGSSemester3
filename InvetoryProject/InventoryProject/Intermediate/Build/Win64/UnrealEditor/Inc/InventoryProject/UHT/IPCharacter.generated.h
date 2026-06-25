// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPCharacter.h"

#ifdef INVENTORYPROJECT_IPCharacter_generated_h
#error "IPCharacter.generated.h already included, missing '#pragma once' in IPCharacter.h"
#endif
#define INVENTORYPROJECT_IPCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIPCharacter *************************************************************
struct Z_Construct_UClass_AIPCharacter_Statics;
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPCharacter_NoRegister();

#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIPCharacter(); \
	friend struct ::Z_Construct_UClass_AIPCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYPROJECT_API UClass* ::Z_Construct_UClass_AIPCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AIPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryProject"), Z_Construct_UClass_AIPCharacter_NoRegister) \
	DECLARE_SERIALIZER(AIPCharacter)


#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIPCharacter(AIPCharacter&&) = delete; \
	AIPCharacter(const AIPCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIPCharacter) \
	NO_API virtual ~AIPCharacter();


#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_9_PROLOG
#define FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIPCharacter;

// ********** End Class AIPCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
