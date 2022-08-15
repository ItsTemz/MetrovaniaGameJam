// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MIBlendSpacePlayer() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncMethod();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MIBlendSpacePlayer>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_MIBlendSpacePlayer cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer;
class UScriptStruct* FAnimNode_MIBlendSpacePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_MIBlendSpacePlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_MIBlendSpacePlayer>()
{
	return FAnimNode_MIBlendSpacePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[];
#endif
		static void NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayTimeWhenBlendSpaceChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousBlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MIBlendSpacePlayer>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The group name (NAME_None if it is not part of any group)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "ToolTip", "The group name (NAME_None if it is not part of any group)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Sync" },
		{ "Comment", "// How synchronization is determined\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "ToolTip", "How synchronization is determined" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, Method), Z_Construct_UEnum_Engine_EAnimSyncMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method_MetaData)) }; // 2704058953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_MIBlendSpacePlayer*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_MIBlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The X coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "Comment", "// The Y coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Y_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The play rate multiplier. Can be negative, which will cause the animation to play in reverse.\n" },
		{ "DefaultValue", "1.0" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the animation loop back to the start when it reaches the end?\n" },
		{ "DefaultValue", "true" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation loop back to the start when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimNode_MIBlendSpacePlayer*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_MIBlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether we should reset the current play time when the blend space changes\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether we should reset the current play time when the blend space changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj)
	{
		((FAnimNode_MIBlendSpacePlayer*)Obj)->bResetPlayTimeWhenBlendSpaceChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges = { "bResetPlayTimeWhenBlendSpaceChanges", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_MIBlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end.\n" },
		{ "DefaultValue", "0.f" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start position in [0, 1] to use when initializing. When looping, play will still jump back to the beginning when reaching the end." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The blendspace asset to play\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The blendspace asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/UnrealBase/AnimNode_MIBlendSpacePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace = { "PreviousBlendSpace", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MIBlendSpacePlayer, PreviousBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_Y,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_BlendSpace,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewProp_PreviousBlendSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_MIBlendSpacePlayer",
		sizeof(FAnimNode_MIBlendSpacePlayer),
		alignof(FAnimNode_MIBlendSpacePlayer),
		Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_UnrealBase_AnimNode_MIBlendSpacePlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_UnrealBase_AnimNode_MIBlendSpacePlayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MIBlendSpacePlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MIBlendSpacePlayer_Statics::NewStructOps, TEXT("AnimNode_MIBlendSpacePlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_MIBlendSpacePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MIBlendSpacePlayer), 593760773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_UnrealBase_AnimNode_MIBlendSpacePlayer_h_1095821135(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_UnrealBase_AnimNode_MIBlendSpacePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_UnrealBase_AnimNode_MIBlendSpacePlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
