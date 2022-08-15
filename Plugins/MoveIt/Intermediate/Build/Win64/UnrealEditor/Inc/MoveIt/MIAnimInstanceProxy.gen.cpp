// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIAnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimInstanceProxy() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
// End Cross Module References

static_assert(std::is_polymorphic<FMIAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FMIAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy;
class UScriptStruct* FMIAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIAnimInstanceProxy, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.OuterSingleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIAnimInstanceProxy>()
{
	return FMIAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to pass data in/out of threaded animation nodes\n * This is used specifically to get the correct position for the offhand placed on a weapon\n */" },
		{ "DisplayName", "Native Variables" },
		{ "ModuleRelativePath", "Public/MIAnimInstanceProxy.h" },
		{ "ToolTip", "Used to pass data in/out of threaded animation nodes\nThis is used specifically to get the correct position for the offhand placed on a weapon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"MIAnimInstanceProxy",
		sizeof(FMIAnimInstanceProxy),
		alignof(FMIAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FMIAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::NewStructOps, TEXT("MIAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_MIAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMIAnimInstanceProxy), 2735899857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstanceProxy_h_1821807485(TEXT("/Script/MoveIt"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjCultivators_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
