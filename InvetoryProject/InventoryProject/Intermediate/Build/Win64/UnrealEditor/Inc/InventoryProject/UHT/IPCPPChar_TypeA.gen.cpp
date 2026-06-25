// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPCPPChar_TypeA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIPCPPChar_TypeA() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPCPPChar_TypeA();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPCPPChar_TypeA_NoRegister();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UIPCPPAtrSet_01_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIPCPPChar_TypeA *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIPCPPChar_TypeA;
UClass* AIPCPPChar_TypeA::GetPrivateStaticClass()
{
	using TClass = AIPCPPChar_TypeA;
	if (!Z_Registration_Info_UClass_AIPCPPChar_TypeA.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IPCPPChar_TypeA"),
			Z_Registration_Info_UClass_AIPCPPChar_TypeA.InnerSingleton,
			StaticRegisterNativesAIPCPPChar_TypeA,
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
	return Z_Registration_Info_UClass_AIPCPPChar_TypeA.InnerSingleton;
}
UClass* Z_Construct_UClass_AIPCPPChar_TypeA_NoRegister()
{
	return AIPCPPChar_TypeA::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIPCPPChar_TypeA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IPCPPChar_TypeA.h" },
		{ "ModuleRelativePath", "Public/IPCPPChar_TypeA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_01_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_01" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IPCPPChar_TypeA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ATRBSet_01_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_01" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IPCPPChar_TypeA.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIPCPPChar_TypeA constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC_01;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ATRBSet_01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AIPCPPChar_TypeA constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIPCPPChar_TypeA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIPCPPChar_TypeA_Statics

// ********** Begin Class AIPCPPChar_TypeA Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIPCPPChar_TypeA_Statics::NewProp_ASC_01 = { "ASC_01", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPCPPChar_TypeA, ASC_01), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_01_MetaData), NewProp_ASC_01_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIPCPPChar_TypeA_Statics::NewProp_ATRBSet_01 = { "ATRBSet_01", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPCPPChar_TypeA, ATRBSet_01), Z_Construct_UClass_UIPCPPAtrSet_01_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ATRBSet_01_MetaData), NewProp_ATRBSet_01_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIPCPPChar_TypeA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIPCPPChar_TypeA_Statics::NewProp_ASC_01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIPCPPChar_TypeA_Statics::NewProp_ATRBSet_01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIPCPPChar_TypeA_Statics::PropPointers) < 2048);
// ********** End Class AIPCPPChar_TypeA Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AIPCPPChar_TypeA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIPCPPChar_TypeA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIPCPPChar_TypeA_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AIPCPPChar_TypeA, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIPCPPChar_TypeA_Statics::ClassParams = {
	&AIPCPPChar_TypeA::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIPCPPChar_TypeA_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIPCPPChar_TypeA_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIPCPPChar_TypeA_Statics::Class_MetaDataParams), Z_Construct_UClass_AIPCPPChar_TypeA_Statics::Class_MetaDataParams)
};
void AIPCPPChar_TypeA::StaticRegisterNativesAIPCPPChar_TypeA()
{
}
UClass* Z_Construct_UClass_AIPCPPChar_TypeA()
{
	if (!Z_Registration_Info_UClass_AIPCPPChar_TypeA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIPCPPChar_TypeA.OuterSingleton, Z_Construct_UClass_AIPCPPChar_TypeA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIPCPPChar_TypeA.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIPCPPChar_TypeA);
AIPCPPChar_TypeA::~AIPCPPChar_TypeA() {}
// ********** End Class AIPCPPChar_TypeA ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPChar_TypeA_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIPCPPChar_TypeA, AIPCPPChar_TypeA::StaticClass, TEXT("AIPCPPChar_TypeA"), &Z_Registration_Info_UClass_AIPCPPChar_TypeA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIPCPPChar_TypeA), 1277078910U) },
	};
}; // Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPChar_TypeA_h__Script_InventoryProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPChar_TypeA_h__Script_InventoryProject_3165556986{
	TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPChar_TypeA_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPCPPChar_TypeA_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
