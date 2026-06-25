// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPCPPAtrSet_02.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIPCPPAtrSet_02() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UIPCPPAtrSet_02();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UIPCPPAtrSet_02_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIPCPPAtrSet_02 **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UIPCPPAtrSet_02;
UClass* UIPCPPAtrSet_02::GetPrivateStaticClass()
{
	using TClass = UIPCPPAtrSet_02;
	if (!Z_Registration_Info_UClass_UIPCPPAtrSet_02.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IPCPPAtrSet_02"),
			Z_Registration_Info_UClass_UIPCPPAtrSet_02.InnerSingleton,
			StaticRegisterNativesUIPCPPAtrSet_02,
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
	return Z_Registration_Info_UClass_UIPCPPAtrSet_02.InnerSingleton;
}
UClass* Z_Construct_UClass_UIPCPPAtrSet_02_NoRegister()
{
	return UIPCPPAtrSet_02::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIPCPPAtrSet_02_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IPCPPAtrSet_02.h" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_02.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_01_Multiplier_MetaData[] = {
		{ "Category", "ATR_02" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_02.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_02_Multiplier_MetaData[] = {
		{ "Category", "ATR_02" },
		{ "ModuleRelativePath", "Public/IPCPPAtrSet_02.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIPCPPAtrSet_02 constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Level_01_Multiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Level_02_Multiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIPCPPAtrSet_02 constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIPCPPAtrSet_02>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UIPCPPAtrSet_02_Statics

// ********** Begin Class UIPCPPAtrSet_02 Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_02_Statics::NewProp_Level_01_Multiplier = { "Level_01_Multiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_02, Level_01_Multiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_01_Multiplier_MetaData), NewProp_Level_01_Multiplier_MetaData) }; // 3543875268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIPCPPAtrSet_02_Statics::NewProp_Level_02_Multiplier = { "Level_02_Multiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIPCPPAtrSet_02, Level_02_Multiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_02_Multiplier_MetaData), NewProp_Level_02_Multiplier_MetaData) }; // 3543875268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIPCPPAtrSet_02_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_02_Statics::NewProp_Level_01_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIPCPPAtrSet_02_Statics::NewProp_Level_02_Multiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_02_Statics::PropPointers) < 2048);
// ********** End Class UIPCPPAtrSet_02 Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_UIPCPPAtrSet_02_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_02_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPCPPAtrSet_02_Statics::ClassParams = {
	&UIPCPPAtrSet_02::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIPCPPAtrSet_02_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_02_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIPCPPAtrSet_02_Statics::Class_MetaDataParams), Z_Construct_UClass_UIPCPPAtrSet_02_Statics::Class_MetaDataParams)
};
void UIPCPPAtrSet_02::StaticRegisterNativesUIPCPPAtrSet_02()
{
}
UClass* Z_Construct_UClass_UIPCPPAtrSet_02()
{
	if (!Z_Registration_Info_UClass_UIPCPPAtrSet_02.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPCPPAtrSet_02.OuterSingleton, Z_Construct_UClass_UIPCPPAtrSet_02_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIPCPPAtrSet_02.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIPCPPAtrSet_02);
UIPCPPAtrSet_02::~UIPCPPAtrSet_02() {}
// ********** End Class UIPCPPAtrSet_02 ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_02_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIPCPPAtrSet_02, UIPCPPAtrSet_02::StaticClass, TEXT("UIPCPPAtrSet_02"), &Z_Registration_Info_UClass_UIPCPPAtrSet_02, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPCPPAtrSet_02), 2427834502U) },
	};
}; // Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_02_h__Script_InventoryProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_02_h__Script_InventoryProject_2351718237{
	TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_02_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPAtrSet_02_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
