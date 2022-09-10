// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MetroidvaniaJam17 : ModuleRules
{
	public MetroidvaniaJam17(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayAbilities", "GameplayTags",
			"GameplayTasks", "MoveIt", "UMG", "NavigationSystem", "AIModule"
		});
	}
}