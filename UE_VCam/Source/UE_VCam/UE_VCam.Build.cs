// Some copyright should be here...

using UnrealBuildTool;
using System.IO;


public class UE_VCam : ModuleRules
{
	//¹¤³ÌÄ¿Â¼
    public string ProjectPath
    {
        get
        {
            return Path.GetFullPath(
                  Path.Combine(ModuleDirectory, "../../../../")
            );
        }
    }

    private void CopyDLLToBinaries(string Filepath, ReadOnlyTargetRules Target)
    {
        string BinariesDirectory = Path.Combine(ProjectPath, "Binaries", Target.Platform.ToString());

        string Filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(BinariesDirectory))
        {
            Directory.CreateDirectory(BinariesDirectory);
        }

        File.Copy(Filepath, Path.Combine(BinariesDirectory, Filename), true);

        RuntimeDependencies.Add(Path.Combine(BinariesDirectory, Filename));
    }

	private string UE_VCamSDKPath { get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../UE_VCamSDK/")); } }

	public UE_VCam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
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
				"MovieSceneCapture",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        if (Target.Type == TargetRules.TargetType.Editor)
        {
            PrivateDependencyModuleNames.Add("UnrealEd");
        }

		CopyDLLToBinaries(Path.Combine(UE_VCamSDKPath, "register.bat"), Target);
		CopyDLLToBinaries(Path.Combine(UE_VCamSDKPath, "unregister.bat"), Target);
		CopyDLLToBinaries(Path.Combine(UE_VCamSDKPath, "Vcam_SDK.dll"), Target);
		CopyDLLToBinaries(Path.Combine(UE_VCamSDKPath, "VCam32.dll"), Target);
		CopyDLLToBinaries(Path.Combine(UE_VCamSDKPath, "VCam64.dll"), Target);
    }
}
