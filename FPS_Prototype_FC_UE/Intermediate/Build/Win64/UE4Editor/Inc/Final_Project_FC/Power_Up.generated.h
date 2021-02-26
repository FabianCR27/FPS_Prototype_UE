// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FINAL_PROJECT_FC_Power_Up_generated_h
#error "Power_Up.generated.h already included, missing '#pragma once' in Power_Up.h"
#endif
#define FINAL_PROJECT_FC_Power_Up_generated_h

#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisablePUP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisablePUP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisablePUP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisablePUP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCharacterOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPower_Up(); \
	friend struct Z_Construct_UClass_APower_Up_Statics; \
public: \
	DECLARE_CLASS(APower_Up, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(APower_Up)


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPower_Up(); \
	friend struct Z_Construct_UClass_APower_Up_Statics; \
public: \
	DECLARE_CLASS(APower_Up, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(APower_Up)


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APower_Up(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APower_Up) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APower_Up); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APower_Up); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APower_Up(APower_Up&&); \
	NO_API APower_Up(const APower_Up&); \
public:


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APower_Up(APower_Up&&); \
	NO_API APower_Up(const APower_Up&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APower_Up); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APower_Up); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APower_Up)


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_PRIVATE_PROPERTY_OFFSET
#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_9_PROLOG
#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_RPC_WRAPPERS \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_INCLASS \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_INCLASS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_Power_Up_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_PROJECT_FC_API UClass* StaticClass<class APower_Up>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Final_Project_FC_Source_Final_Project_FC_Power_Up_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
