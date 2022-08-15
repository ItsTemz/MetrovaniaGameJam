// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_MISpringArmComponent_generated_h
#error "MISpringArmComponent.generated.h already included, missing '#pragma once' in MISpringArmComponent.h"
#endif
#define MOVEIT_MISpringArmComponent_generated_h

#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_SPARSE_DATA
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execOnCharacterJumped);


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execOnCharacterLanded); \
	DECLARE_FUNCTION(execOnCharacterJumped);


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMISpringArmComponent(); \
	friend struct Z_Construct_UClass_UMISpringArmComponent_Statics; \
public: \
	DECLARE_CLASS(UMISpringArmComponent, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMISpringArmComponent)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUMISpringArmComponent(); \
	friend struct Z_Construct_UClass_UMISpringArmComponent_Statics; \
public: \
	DECLARE_CLASS(UMISpringArmComponent, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMISpringArmComponent)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMISpringArmComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMISpringArmComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMISpringArmComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMISpringArmComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMISpringArmComponent(UMISpringArmComponent&&); \
	NO_API UMISpringArmComponent(const UMISpringArmComponent&); \
public:


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMISpringArmComponent(UMISpringArmComponent&&); \
	NO_API UMISpringArmComponent(const UMISpringArmComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMISpringArmComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMISpringArmComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMISpringArmComponent)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_51_PROLOG
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_RPC_WRAPPERS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_INCLASS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_INCLASS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class UMISpringArmComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MISpringArmComponent_h


#define FOREACH_ENUM_EMIMOVEMENTORBITTYPE(op) \
	op(EMIMovementOrbitType::MOT_Disabled) \
	op(EMIMovementOrbitType::MOT_Acceleration) \
	op(EMIMovementOrbitType::MOT_Velocity) 

enum class EMIMovementOrbitType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIMovementOrbitType>();

#define FOREACH_ENUM_EMIORBITVECTOR(op) \
	op(EMIOrbitVector::OD_RightInput) \
	op(EMIOrbitVector::OD_FacingDirection) 

enum class EMIOrbitVector : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIOrbitVector>();

#define FOREACH_ENUM_EMIZOOMTYPE(op) \
	op(EMIZoomType::ZT_Disabled) \
	op(EMIZoomType::ZT_Input) \
	op(EMIZoomType::ZT_Curve) \
	op(EMIZoomType::ZT_Both) 

enum class EMIZoomType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIZoomType>();

#define FOREACH_ENUM_EMIINPUTSOURCE(op) \
	op(EMIInputSource::IS_Character) \
	op(EMIInputSource::IS_PlayerController) 

enum class EMIInputSource : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIInputSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
