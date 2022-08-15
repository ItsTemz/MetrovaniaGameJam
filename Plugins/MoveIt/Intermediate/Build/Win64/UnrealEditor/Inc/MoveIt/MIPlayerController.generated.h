// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MOVEIT_MIPlayerController_generated_h
#error "MIPlayerController.generated.h already included, missing '#pragma once' in MIPlayerController.h"
#endif
#define MOVEIT_MIPlayerController_generated_h

#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_SPARSE_DATA
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_RPC_WRAPPERS
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_EVENT_PARMS \
	struct MIPlayerController_eventK2_SetPawn_Parms \
	{ \
		APawn* InPawn; \
	};


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIPlayerController(); \
	friend struct Z_Construct_UClass_AMIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMIPlayerController)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMIPlayerController(); \
	friend struct Z_Construct_UClass_AMIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMIPlayerController)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPlayerController(AMIPlayerController&&); \
	NO_API AMIPlayerController(const AMIPlayerController&); \
public:


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPlayerController(AMIPlayerController&&); \
	NO_API AMIPlayerController(const AMIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMIPlayerController)


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_12_PROLOG \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_EVENT_PARMS


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_RPC_WRAPPERS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_INCLASS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_SPARSE_DATA \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class AMIPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
