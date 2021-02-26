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
#ifdef FINAL_PROJECT_FC_DoorScript_generated_h
#error "DoorScript.generated.h already included, missing '#pragma once' in DoorScript.h"
#endif
#define FINAL_PROJECT_FC_DoorScript_generated_h

#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorScript(); \
	friend struct Z_Construct_UClass_UDoorScript_Statics; \
public: \
	DECLARE_CLASS(UDoorScript, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(UDoorScript)


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDoorScript(); \
	friend struct Z_Construct_UClass_UDoorScript_Statics; \
public: \
	DECLARE_CLASS(UDoorScript, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(UDoorScript)


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorScript(UDoorScript&&); \
	NO_API UDoorScript(const UDoorScript&); \
public:


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorScript(UDoorScript&&); \
	NO_API UDoorScript(const UDoorScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorScript); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorScript)


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_PRIVATE_PROPERTY_OFFSET
#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_11_PROLOG
#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_RPC_WRAPPERS \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_INCLASS \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_INCLASS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_DoorScript_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_PROJECT_FC_API UClass* StaticClass<class UDoorScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Final_Project_FC_Source_Final_Project_FC_DoorScript_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
