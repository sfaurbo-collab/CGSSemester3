// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IPGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIPGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPGameModeBase();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AIPGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIPGameModeBase **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIPGameModeBase;
UClass* AIPGameModeBase::GetPrivateStaticClass()
{
	using TClass = AIPGameModeBase;
	if (!Z_Registration_Info_UClass_AIPGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IPGameModeBase"),
			Z_Registration_Info_UClass_AIPGameModeBase.InnerSingleton,
			StaticRegisterNativesAIPGameModeBase,
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
	return Z_Registration_Info_UClass_AIPGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AIPGameModeBase_NoRegister()
{
	return AIPGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIPGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/IPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AIPGameModeBase constinit property declarations **************************
// ********** End Class AIPGameModeBase constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIPGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIPGameModeBase_Statics
UObject* (*const Z_Construct_UClass_AIPGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIPGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIPGameModeBase_Statics::ClassParams = {
	&AIPGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIPGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AIPGameModeBase_Statics::Class_MetaDataParams)
};
void AIPGameModeBase::StaticRegisterNativesAIPGameModeBase()
{
}
UClass* Z_Construct_UClass_AIPGameModeBase()
{
	if (!Z_Registration_Info_UClass_AIPGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIPGameModeBase.OuterSingleton, Z_Construct_UClass_AIPGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIPGameModeBase.OuterSingleton;
}
AIPGameModeBase::AIPGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIPGameModeBase);
AIPGameModeBase::~AIPGameModeBase() {}
// ********** End Class AIPGameModeBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIPGameModeBase, AIPGameModeBase::StaticClass, TEXT("AIPGameModeBase"), &Z_Registration_Info_UClass_AIPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIPGameModeBase), 2190029687U) },
	};
}; // Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h__Script_InventoryProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h__Script_InventoryProject_2890632855{
	TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGSSemester3_InvetoryProject_InventoryProject_Source_InventoryProject_Public_IPGameModeBase_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
