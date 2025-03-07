// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OWSPlugin : ModuleRules
{
    public OWSPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
                ModuleDirectory + "/Public"
            }
            );


        PrivateIncludePaths.AddRange(
            new string[] {
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "HTTP",
                "Json",
                "JsonUtilities",
                "Networking",
                "Sockets",
                "EnhancedInput",
                "UMG",
                "Slate",
                "SlateCore"
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "GameplayAbilities",
                "GameplayTags",
                "GameplayTasks"
				// ... add private dependencies that you statically link with here ...
			}
            );

        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "UnrealEd"
                }
            );
        }

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}