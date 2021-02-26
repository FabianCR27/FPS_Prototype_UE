// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINAL_PROJECT_FC_Final_Project_FCCharacter_generated_h
#error "Final_Project_FCCharacter.generated.h already included, missing '#pragma once' in Final_Project_FCCharacter.h"
#endif
#define FINAL_PROJECT_FC_Final_Project_FCCharacter_generated_h

#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoubleJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoubleJump(); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoubleJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoubleJump(); \
		P_NATIVE_END; \
	}


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinal_Project_FCCharacter(); \
	friend struct Z_Construct_UClass_AFinal_Project_FCCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinal_Project_FCCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(AFinal_Project_FCCharacter)


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFinal_Project_FCCharacter(); \
	friend struct Z_Construct_UClass_AFinal_Project_FCCharacter_Statics; \
public: \
	DECLARE_CLASS(AFinal_Project_FCCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Final_Project_FC"), NO_API) \
	DECLARE_SERIALIZER(AFinal_Project_FCCharacter)


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFinal_Project_FCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFinal_Project_FCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinal_Project_FCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinal_Project_FCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinal_Project_FCCharacter(AFinal_Project_FCCharacter&&); \
	NO_API AFinal_Project_FCCharacter(const AFinal_Project_FCCharacter&); \
public:


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFinal_Project_FCCharacter(AFinal_Project_FCCharacter&&); \
	NO_API AFinal_Project_FCCharacter(const AFinal_Project_FCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinal_Project_FCCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinal_Project_FCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFinal_Project_FCCharacter)


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFinal_Project_FCCharacter, L_MotionController); }


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_11_PROLOG
#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_RPC_WRAPPERS \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_INCLASS \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINAL_PROJECT_FC_API UClass* StaticClass<class AFinal_Project_FCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Final_Project_FC_Source_Final_Project_FC_Final_Project_FCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
