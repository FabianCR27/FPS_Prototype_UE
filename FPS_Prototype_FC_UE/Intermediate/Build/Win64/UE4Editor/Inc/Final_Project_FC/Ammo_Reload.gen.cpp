// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Project_FC/Ammo_Reload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmo_Reload() {}
// Cross Module References
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AAmmo_Reload_NoRegister();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AAmmo_Reload();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_APower_Up();
	UPackage* Z_Construct_UPackage__Script_Final_Project_FC();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AAmmo_Reload::StaticRegisterNativesAAmmo_Reload()
	{
	}
	UClass* Z_Construct_UClass_AAmmo_Reload_NoRegister()
	{
		return AAmmo_Reload::StaticClass();
	}
	struct Z_Construct_UClass_AAmmo_Reload_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmo_Reload_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APower_Up,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Project_FC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmo_Reload_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Ammo_Reload.h" },
		{ "ModuleRelativePath", "Ammo_Reload.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_ReloadSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Ammo_Reload.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_ReloadSound = { "ReloadSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmo_Reload, ReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_ReloadSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_ReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active_MetaData[] = {
		{ "ModuleRelativePath", "Ammo_Reload.h" },
	};
#endif
	void Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active_SetBit(void* Obj)
	{
		((AAmmo_Reload*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmo_Reload), &Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmo_Reload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_ReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmo_Reload_Statics::NewProp_active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmo_Reload_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmo_Reload>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmo_Reload_Statics::ClassParams = {
		&AAmmo_Reload::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmo_Reload_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAmmo_Reload_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmo_Reload_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAmmo_Reload_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmo_Reload()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmo_Reload_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmmo_Reload, 3051932598);
	template<> FINAL_PROJECT_FC_API UClass* StaticClass<AAmmo_Reload>()
	{
		return AAmmo_Reload::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmo_Reload(Z_Construct_UClass_AAmmo_Reload, &AAmmo_Reload::StaticClass, TEXT("/Script/Final_Project_FC"), TEXT("AAmmo_Reload"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmo_Reload);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
