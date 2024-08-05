using System;
using System.IO;
using UnrealBuildTool;

public class RTSPService : ModuleRules
{
    public RTSPService(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));
        PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "lib", "Live555WrapperWin.lib"));
    }
}