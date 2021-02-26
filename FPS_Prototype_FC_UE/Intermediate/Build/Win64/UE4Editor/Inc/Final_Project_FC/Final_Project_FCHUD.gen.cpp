// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Project_FC/Final_Project_FCHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinal_Project_FCHUD() {}
// Cross Module References
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AFinal_Project_FCHUD_NoRegister();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AFinal_Project_FCHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Final_Project_FC();
// End Cross Module References
	void AFinal_Project_FCHUD::StaticRegisterNativesAFinal_Project_FCHUD()
	{
	}
	UClass* Z_Construct_UClass_AFinal_Project_FCHUD_NoRegister()
	{
		return AFinal_Project_FCHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFinal_Project_FCHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinal_Project_FCHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Project_FC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinal_Project_FCHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Final_Project_FCHUD.h" },
		{ "ModuleRelativePath", "Final_Project_FCHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinal_Project_FCHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinal_Project_FCHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinal_Project_FCHUD_Statics::ClassParams = {
		&AFinal_Project_FCHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinal_Project_FCHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFinal_Project_FCHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinal_Project_FCHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinal_Project_FCHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinal_Project_FCHUD, 1142335221);
	template<> FINAL_PROJECT_FC_API UClass* StaticClass<AFinal_Project_FCHUD>()
	{
		return AFinal_Project_FCHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinal_Project_FCHUD(Z_Construct_UClass_AFinal_Project_FCHUD, &AFinal_Project_FCHUD::StaticClass, TEXT("/Script/Final_Project_FC"), TEXT("AFinal_Project_FCHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinal_Project_FCHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
