// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_VCamBPLibrary.h"
#include "UE_VCam.h"

UUE_VCamBPLibrary::UUE_VCamBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


void UUE_VCamBPLibrary::OpenVCamBatFile(bool OpenFile)
{
	FString ProjectPath = FPaths::ProjectDir();
	FString Platform = TEXT("Win64");
#if WITH_EDITOR

	FString VCamRegPath = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("register.bat"));
	FString VCamUnRegPath = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("unregister.bat"));
#endif
#if !WITH_EDITOR

	FString VCamRegPath = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("register.bat"));
	FString VCamUnRegPath = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("unregister.bat"));
#endif

	if (OpenFile)
	{
		FPlatformProcess::ExecElevatedProcess(*VCamRegPath, nullptr, nullptr);
	}
	else
	{
		FPlatformProcess::ExecElevatedProcess(*VCamUnRegPath, nullptr, nullptr);
		//FPlatformProcess::CreateProc(*VCamUnRegPath, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);

	}

}
