// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_MIPhysicalMaterial_generated_h
#error "MIPhysicalMaterial.generated.h already included, missing '#pragma once' in MIPhysicalMaterial.h"
#endif
#define MOVEIT_MIPhysicalMaterial_generated_h

#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_SPARSE_DATA
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_RPC_WRAPPERS
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UMIPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UMIPhysicalMaterial, UPhysicalMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIPhysicalMaterial)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMIPhysicalMaterial(); \
	friend struct Z_Construct_UClass_UMIPhysicalMaterial_Statics; \
public: \
	DECLARE_CLASS(UMIPhysicalMaterial, UPhysicalMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIPhysicalMaterial)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIPhysicalMaterial(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIPhysicalMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIPhysicalMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIPhysicalMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIPhysicalMaterial(UMIPhysicalMaterial&&); \
	NO_API UMIPhysicalMaterial(const UMIPhysicalMaterial&); \
public:


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIPhysicalMaterial(UMIPhysicalMaterial&&); \
	NO_API UMIPhysicalMaterial(const UMIPhysicalMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIPhysicalMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIPhysicalMaterial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMIPhysicalMaterial)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_40_PROLOG
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_RPC_WRAPPERS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_INCLASS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_INCLASS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class UMIPhysicalMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPhysicalMaterial_h


#define FOREACH_ENUM_EMIPARTICLESYSTEMTYPE(op) \
	op(EMIParticleSystemType::MIPST_Legacy) \
	op(EMIParticleSystemType::MIPST_Niagara) 

enum class EMIParticleSystemType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIParticleSystemType>();

#define FOREACH_ENUM_EMIPHYSMATLOOKUPTYPE(op) \
	op(EMIPhysMatLookupType::PMLT_Material) \
	op(EMIPhysMatLookupType::PMLT_CPP) \
	op(EMIPhysMatLookupType::PMLT_BP) \
	op(EMIPhysMatLookupType::PMLT_Max) 

enum class EMIPhysMatLookupType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIPhysMatLookupType>();

#define FOREACH_ENUM_EMIPHYSMATLOOKUPFALLBACK(op) \
	op(EMIPhysMatLookupFallback::PMLF_Material) \
	op(EMIPhysMatLookupFallback::PMLF_None) 

enum class EMIPhysMatLookupFallback : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIPhysMatLookupFallback>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
