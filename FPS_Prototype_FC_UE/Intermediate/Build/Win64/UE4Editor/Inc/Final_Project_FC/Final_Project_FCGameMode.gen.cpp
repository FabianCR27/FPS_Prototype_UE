// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Project_FC/Final_Project_FCGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinal_Project_FCGameMode() {}
// Cross Module References
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AFinal_Project_FCGameMode_NoRegister();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_AFinal_Project_FCGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Final_Project_FC();
// End Cross Module References
	void AFinal_Project_FCGameMode::StaticRegisterNativesAFinal_Project_FCGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFinal_Project_FCGameMode_NoRegister()
	{
		return AFinal_Project_FCGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFinal_Project_FCGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Project_FC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Final_Project_FCGameMode.h" },
		{ "ModuleRelativePath", "Final_Project_FCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinal_Project_FCGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::ClassParams = {
		&AFinal_Project_FCGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinal_Project_FCGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinal_Project_FCGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinal_Project_FCGameMode, 3368447489);
	template<> FINAL_PROJECT_FC_API UClass* StaticClass<AFinal_Project_FCGameMode>()
	{
		return AFinal_Project_FCGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinal_Project_FCGameMode(Z_Construct_UClass_AFinal_Project_FCGameMode, &AFinal_Project_FCGameMode::StaticClass, TEXT("/Script/Final_Project_FC"), TEXT("AFinal_Project_FCGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinal_Project_FCGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
