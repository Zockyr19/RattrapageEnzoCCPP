// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_CoumelEnzoo : ModuleRules
{
	public FPS_CoumelEnzoo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
