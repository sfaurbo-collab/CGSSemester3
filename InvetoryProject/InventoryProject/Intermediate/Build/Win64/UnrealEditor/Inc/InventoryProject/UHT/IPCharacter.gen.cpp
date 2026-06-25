// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIPCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPCharacter();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIPCharacter *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIPCharacter;
UClass* AIPCharacter::GetPrivateStaticClass()
{
	using TClass = AIPCharacter;
	if (!Z_Registration_Info_UClass_AIPCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IPCharacter"),
			Z_Registration_Info_UClass_AIPCharacter.InnerSingleton,
			StaticRegisterNativesAIPCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AIPCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AIPCharacter_NoRegister()
{
	return AIPCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IPCharacter.h" },
		{ "ModuleRelativePath", "Public/IPCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIPCharacter constinit property declarations *****************************
// ********** End Class AIPCharacter constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIPCharacter_Statics
UObject* (*const Z_Construct_UClass_AIPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIPCharacter_Statics::ClassParams = {
	&AIPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AIPCharacter_Statics::Class_MetaDataParams)
};
void AIPCharacter::StaticRegisterNativesAIPCharacter()
{
}
UClass* Z_Construct_UClass_AIPCharacter()
{
	if (!Z_Registration_Info_UClass_AIPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIPCharacter.OuterSingleton, Z_Construct_UClass_AIPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIPCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIPCharacter);
AIPCharacter::~AIPCharacter() {}
// ********** End Class AIPCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIPCharacter, AIPCharacter::StaticClass, TEXT("AIPCharacter"), &Z_Registration_Info_UClass_AIPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIPCharacter), 3979550129U) },
	};
}; // Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h__Script_InventoryProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h__Script_InventoryProject_4232556765{
	TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCharacter_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
