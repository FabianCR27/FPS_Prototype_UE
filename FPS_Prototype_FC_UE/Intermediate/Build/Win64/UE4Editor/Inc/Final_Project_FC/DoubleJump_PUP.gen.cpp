// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Project_FC/DoubleJump_PUP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoubleJump_PUP() {}
// Cross Module References
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_ADoubleJump_PUP_NoRegister();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_ADoubleJump_PUP();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_APower_Up();
	UPackage* Z_Construct_UPackage__Script_Final_Project_FC();
// End Cross Module References
	void ADoubleJump_PUP::StaticRegisterNativesADoubleJump_PUP()
	{
	}
	UClass* Z_Construct_UClass_ADoubleJump_PUP_NoRegister()
	{
		return ADoubleJump_PUP::StaticClass();
	}
	struct Z_Construct_UClass_ADoubleJump_PUP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoubleJump_PUP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APower_Up,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Project_FC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoubleJump_PUP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoubleJump_PUP.h" },
		{ "ModuleRelativePath", "DoubleJump_PUP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active_MetaData[] = {
		{ "ModuleRelativePath", "DoubleJump_PUP.h" },
	};
#endif
	void Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active_SetBit(void* Obj)
	{
		((ADoubleJump_PUP*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoubleJump_PUP), &Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoubleJump_PUP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoubleJump_PUP_Statics::NewProp_active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoubleJump_PUP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoubleJump_PUP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoubleJump_PUP_Statics::ClassParams = {
		&ADoubleJump_PUP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoubleJump_PUP_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADoubleJump_PUP_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoubleJump_PUP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoubleJump_PUP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoubleJump_PUP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoubleJump_PUP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoubleJump_PUP, 2565402847);
	template<> FINAL_PROJECT_FC_API UClass* StaticClass<ADoubleJump_PUP>()
	{
		return ADoubleJump_PUP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoubleJump_PUP(Z_Construct_UClass_ADoubleJump_PUP, &ADoubleJump_PUP::StaticClass, TEXT("/Script/Final_Project_FC"), TEXT("ADoubleJump_PUP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoubleJump_PUP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
