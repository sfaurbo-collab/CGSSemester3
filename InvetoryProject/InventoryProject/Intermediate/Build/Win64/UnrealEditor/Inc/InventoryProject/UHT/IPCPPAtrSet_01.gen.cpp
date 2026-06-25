// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPCPPAtrSet_01.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIPCPPAtrSet_01() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UIPCPPAtrSet_01();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UIPCPPAtrSet_01_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIPCPPAtrSet_01 **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIPCPPAtrSet_01;
UClass* UIPCPPAtrSet_01::GetPrivateStaticClass()
{
	using TClass = UIPCPPAtrSet_01;
	if (!Z_Registration_Info_UClass_UIPCPPAtrSet_01.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IPCPPAtrSet_01"),
			Z_Registration_Info_UClass_UIPCPPAtrSet_01.InnerSingleton,
			StaticRegisterNativesUIPCPPAtrSet_01,
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
	return Z_Registration_Info_UClass_UIPCPPAtrSet_01.InnerSingleton;
}
UClass* Z_Construct_UClass_UIPCPPAtrSet_01_NoRegister()
{
	return UIPCPPAtrSet_01::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIPCPPAtrSet_01_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IPCPPAtrSet_01.h" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_01_MetaData[] = {
		{ "Category", "ATR_01" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_01_MetaData[] = {
		{ "Category", "ATR_01" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_01_MetaData[] = {
		{ "Category", "ATR_01" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_01.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperMagic_01_MetaData[] = {
		{ "Category", "ATR_01" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_01.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIPCPPAtrSet_01 constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health_01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shield_01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Magic_01;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuperMagic_01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIPCPPAtrSet_01 constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIPCPPAtrSet_01>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIPCPPAtrSet_01_Statics

// ********** Begin Class UIPCPPAtrSet_01 Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Health_01 = { "Health_01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_01, Health_01), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_01_MetaData), NewProp_Health_01_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Shield_01 = { "Shield_01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_01, Shield_01), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_01_MetaData), NewProp_Shield_01_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Magic_01 = { "Magic_01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_01, Magic_01), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_01_MetaData), NewProp_Magic_01_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_SuperMagic_01 = { "SuperMagic_01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_01, SuperMagic_01), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperMagic_01_MetaData), NewProp_SuperMagic_01_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIPCPPAtrSet_01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Health_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Shield_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_Magic_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_01_Statics::NewProp_SuperMagic_01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_01_Statics::PropPointers) < 2048);
// ********** End Class UIPCPPAtrSet_01 Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UIPCPPAtrSet_01_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_01_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPCPPAtrSet_01_Statics::ClassParams = {
	&UIPCPPAtrSet_01::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIPCPPAtrSet_01_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_01_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_01_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPCPPAtrSet_01_Statics::Class_MetaDataParams)
};
void UIPCPPAtrSet_01::StaticRegisterNativesUIPCPPAtrSet_01()
{
}
UClass* Z_Construct_UClass_UIPCPPAtrSet_01()
{
	if (!Z_Registration_Info_UClass_UIPCPPAtrSet_01.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPCPPAtrSet_01.OuterSingleton, Z_Construct_UClass_UIPCPPAtrSet_01_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPCPPAtrSet_01.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIPCPPAtrSet_01);
UIPCPPAtrSet_01::~UIPCPPAtrSet_01() {}
// ********** End Class UIPCPPAtrSet_01 ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_01_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPCPPAtrSet_01, UIPCPPAtrSet_01::StaticClass, TEXT("UIPCPPAtrSet_01"), &Z_Registration_Info_UClass_UIPCPPAtrSet_01, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPCPPAtrSet_01), 2555594878U) },
	};
}; // Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_01_h__Script_InventoryProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_01_h__Script_InventoryProject_3846768628{
	TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_01_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_01_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
