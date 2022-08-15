// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
struct FMICameraViewBlend;
enum class EAlphaBlendOption : uint8;
class UCurveFloat;
#ifdef MOVEIT_MIViewComponent_generated_h
#error "MIViewComponent.generated.h already included, missing '#pragma once' in MIViewComponent.h"
#endif
#define MOVEIT_MIViewComponent_generated_h

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_18_DELEGATE \
struct _Script_MoveIt_eventMIOnCameraChanged_Parms \
{ \
	UCameraComponent* NewCamera; \
}; \
static inline void FMIOnCameraChanged_DelegateWrapper(const FMulticastScriptDelegate& MIOnCameraChanged, UCameraComponent* NewCamera) \
{ \
	_Script_MoveIt_eventMIOnCameraChanged_Parms Parms; \
	Parms.NewCamera=NewCamera; \
	MIOnCameraChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMICharacterState_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct(); \
	typedef FAlphaBlend Super;


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMICharacterState>();

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMICameraViewBlend_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct(); \
	typedef FAlphaBlend Super;


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMICameraViewBlend>();

#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_SPARSE_DATA
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_RPC_WRAPPERS \
	virtual TArray<UCameraComponent*> GetCharacterStateCameras_Implementation() const; \
	virtual bool IsCharacterStateActive_Implementation(uint8 State) const; \
 \
	DECLARE_FUNCTION(execGetPendingCamera); \
	DECLARE_FUNCTION(execGetCurrentCamera); \
	DECLARE_FUNCTION(execK2_SetNewCamera); \
	DECLARE_FUNCTION(execSetCamera); \
	DECLARE_FUNCTION(execGetCharacterStateCameras); \
	DECLARE_FUNCTION(execIsCharacterStateActive); \
	DECLARE_FUNCTION(execOnCharacterStateChanged);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UCameraComponent*> GetCharacterStateCameras_Implementation() const; \
	virtual bool IsCharacterStateActive_Implementation(uint8 State) const; \
 \
	DECLARE_FUNCTION(execGetPendingCamera); \
	DECLARE_FUNCTION(execGetCurrentCamera); \
	DECLARE_FUNCTION(execK2_SetNewCamera); \
	DECLARE_FUNCTION(execSetCamera); \
	DECLARE_FUNCTION(execGetCharacterStateCameras); \
	DECLARE_FUNCTION(execIsCharacterStateActive); \
	DECLARE_FUNCTION(execOnCharacterStateChanged);


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_EVENT_PARMS \
	struct MIViewComponent_eventGetCharacterStateCameras_Parms \
	{ \
		TArray<UCameraComponent*> ReturnValue; \
	}; \
	struct MIViewComponent_eventIsCharacterStateActive_Parms \
	{ \
		uint8 State; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MIViewComponent_eventIsCharacterStateActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_CALLBACK_WRAPPERS
#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIViewComponent(); \
	friend struct Z_Construct_UClass_UMIViewComponent_Statics; \
public: \
	DECLARE_CLASS(UMIViewComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIViewComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUMIViewComponent(); \
	friend struct Z_Construct_UClass_UMIViewComponent_Statics; \
public: \
	DECLARE_CLASS(UMIViewComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIViewComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIViewComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIViewComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIViewComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIViewComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIViewComponent(UMIViewComponent&&); \
	NO_API UMIViewComponent(const UMIViewComponent&); \
public:


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIViewComponent(UMIViewComponent&&); \
	NO_API UMIViewComponent(const UMIViewComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIViewComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIViewComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMIViewComponent)


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_84_PROLOG \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_EVENT_PARMS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_RPC_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_INCLASS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_SPARSE_DATA \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_CALLBACK_WRAPPERS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_INCLASS_NO_PURE_DECLS \
	FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class UMIViewComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetrovaniaGameJam_Plugins_MoveIt_Source_MoveIt_Public_MIViewComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
