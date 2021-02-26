// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Project_FC/Door_Real.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor_Real() {}
// Cross Module References
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_ADoor_Real_NoRegister();
	FINAL_PROJECT_FC_API UClass* Z_Construct_UClass_ADoor_Real();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Final_Project_FC();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ADoor_Real::StaticRegisterNativesADoor_Real()
	{
	}
	UClass* Z_Construct_UClass_ADoor_Real_NoRegister()
	{
		return ADoor_Real::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Real_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Mesh2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Mesh2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Mesh1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Mesh1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Real_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Project_FC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door_Real.h" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "Category", "Door_Real" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Real_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor_Real, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::NewProp_CharacterMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::NewProp_CharacterMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Collision_MetaData[] = {
		{ "Category", "Door_Real" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Collision = { "Door_Collision", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor_Real, Door_Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Collision_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh2_MetaData[] = {
		{ "Category", "Door_Real" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh2 = { "Door_Mesh2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor_Real, Door_Mesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh1_MetaData[] = {
		{ "Category", "Door_Real" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh1 = { "Door_Mesh1", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor_Real, Door_Mesh1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Root_MetaData[] = {
		{ "Category", "Door_Real" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Real.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Root = { "Door_Root", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor_Real, Door_Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Real_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Real_Statics::NewProp_CharacterMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Mesh1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Real_Statics::NewProp_Door_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Real_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor_Real>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Real_Statics::ClassParams = {
		&ADoor_Real::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoor_Real_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Real_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoor_Real_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor_Real()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoor_Real_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoor_Real, 1042069058);
	template<> FINAL_PROJECT_FC_API UClass* StaticClass<ADoor_Real>()
	{
		return ADoor_Real::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoor_Real(Z_Construct_UClass_ADoor_Real, &ADoor_Real::StaticClass, TEXT("/Script/Final_Project_FC"), TEXT("ADoor_Real"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor_Real);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
