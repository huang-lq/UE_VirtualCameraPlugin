// Fill out your copyright notice in the Description page of Project Settings.


#include "GetGameData.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "IAssetViewport.h"
#endif




// Sets default values
AGetGameData::AGetGameData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetGameData::BeginPlay()
{
	Super::BeginPlay();	
	//OpenVCamBatFile(true);
    LoadDll_VCam();

}

void AGetGameData::BeginDestroy()
{
	Super::BeginDestroy();
	//OpenVCamBatFile(false);
	FreeDll_VCam();

}

// Called every frame
void AGetGameData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (FrameGrabber.IsValid() && VCam_Init_Successful == true)
	{
	     CaptureGameViewPort();
	}
}

bool AGetGameData::StartGetData()
{
	TSharedPtr<FSceneViewport> SceneViewport;
	//»ñÈ¡´°¿Ú
#if WITH_EDITOR
	if (GIsEditor)
	{
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			if (Context.WorldType == EWorldType::PIE)
			{
				FSlatePlayInEditorInfo* SlatePlayInEditorSession = GEditor->SlatePlayInEditorMap.Find(Context.ContextHandle);
				if (SlatePlayInEditorSession)
				{
					if (SlatePlayInEditorSession->DestinationSlateViewport.IsValid())
					{
						TSharedPtr<IAssetViewport> DestinationLevelViewport = SlatePlayInEditorSession->DestinationSlateViewport.Pin();
						SceneViewport = DestinationLevelViewport->GetSharedActiveViewport();
					}
					else if (SlatePlayInEditorSession->SlatePlayInEditorWindowViewport.IsValid())
					{
						SceneViewport = SlatePlayInEditorSession->SlatePlayInEditorWindowViewport;
					}
				}
			}
		}
	}
	else
#endif
	{
		UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
		SceneViewport = GameEngine->SceneViewport;
	}
	if (!SceneViewport.IsValid())
	{
		return false;
	}

	ReleaseFrameGrabber();
	FrameGrabber = MakeShareable(new FFrameGrabber(SceneViewport.ToSharedRef(), SceneViewport->GetSize()));
	FrameGrabber->StartCapturingFrames();
	Viewport_width = SceneViewport.Get()->GetSize().X;
	Viewport_height = SceneViewport.Get()->GetSize().Y;
	int BufferSize = Viewport_width * Viewport_height * 4;
	Screen_data = new unsigned char[BufferSize];
	VCam_Init(Viewport_width,Viewport_height);
	return true;
}

void AGetGameData::StopGetData()
{
	ReleaseFrameGrabber();
	VCam_End();
	delete[] Screen_data;
}

void AGetGameData::ReleaseFrameGrabber()
{
	if (FrameGrabber.IsValid())
	{
		FrameGrabber->StopCapturingFrames();
		FrameGrabber->Shutdown();
		FrameGrabber.Reset();
	}
}

void AGetGameData::CaptureGameViewPort()
{
	if (FrameGrabber.IsValid())
	{
		FrameGrabber->CaptureThisFrame(FFramePayloadPtr());
		TArray<FCapturedFrameData> Frames = FrameGrabber->GetCapturedFrames();

		if (Frames.Num())
		{
			FCapturedFrameData& LastFrame = Frames.Last();

			int index = LastFrame.ColorBuffer.Num();
			for (int32 i = 0; i < index; i++)
			{
				//FColor (R,G,B,A)->BGRA 
				//CaptureFrameData.Add(LastFrame.ColorBuffer[i].B);
				//CaptureFrameData.Add(LastFrame.ColorBuffer[i].G);
				//CaptureFrameData.Add(LastFrame.ColorBuffer[i].R);
				//CaptureFrameData.Add(LastFrame.ColorBuffer[i].A);

				Screen_data[i * 4] = LastFrame.ColorBuffer[index - i - 1].R;
				Screen_data[i * 4 + 1] = LastFrame.ColorBuffer[index - i - 1].G;
				Screen_data[i * 4 + 2] = LastFrame.ColorBuffer[index - i - 1].B;
				Screen_data[i * 4 + 3] = LastFrame.ColorBuffer[index - i - 1].A;
			}
			VCam_InputData(Screen_data,Viewport_width,Viewport_height,30);
        }
    }
}



#pragma region  VCamFuntionPointer
typedef bool(*_Initial_VCam)(const char* pwd);
static _Initial_VCam VCam_PWDInput = NULL;

typedef void(*_Share_Memory_Vcam)(int w, int h);
static _Share_Memory_Vcam VCam_CreatMemory = NULL;

typedef void(*_Share_Memory_Release)();
static _Share_Memory_Release VCam_ReleaseMemory = NULL;

typedef bool(*_Input_Data_Flip_VCam)(const unsigned char* rgba_data, int w, int h, int fps, bool flip_lr);
static _Input_Data_Flip_VCam VCam_Send = NULL;

typedef bool(*_Read_Subitem_VCam_x64)();
static _Read_Subitem_VCam_x64 VCam_Check64bit = NULL;

typedef bool(*_Read_Subitem_VCam_x86)();
static _Read_Subitem_VCam_x86 VCam_Check32bit = NULL;

static void* m_DllHandle_VCam = NULL;
#pragma endregion


bool AGetGameData::LoadDll_VCam()
{
	FString ProjectPath = FPaths::ProjectDir();
	FString Platform = TEXT("Win64");
#if WITH_EDITOR
	FString FilePath_VCam = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("Vcam_SDK.dll"));
#endif
#if !WITH_EDITOR
	FString FilePath_VCam = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("Vcam_SDK.dll"));
#endif
	if (m_DllHandle_VCam != NULL) { return true; }
	else
	{
		if (FPaths::FileExists(FilePath_VCam))
		{
			m_DllHandle_VCam = FPlatformProcess::GetDllHandle(*FilePath_VCam);
			if (m_DllHandle_VCam != NULL)
			{
				VCam_PWDInput = (_Initial_VCam)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Initial_VCam"));
				VCam_CreatMemory = (_Share_Memory_Vcam)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Share_Memory_Vcam"));
				VCam_ReleaseMemory = (_Share_Memory_Release)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Share_Memory_Release"));
				VCam_Send = (_Input_Data_Flip_VCam)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Input_Data_Flip_VCam"));
				VCam_Check64bit = (_Read_Subitem_VCam_x64)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Read_Subitem_VCam_x64"));
				VCam_Check32bit = (_Read_Subitem_VCam_x86)FPlatformProcess::GetDllExport(m_DllHandle_VCam, *FString("Read_Subitem_VCam_x86"));
				return true;
			}
		}
	}
	m_DllHandle_VCam = NULL;
	return false;
}

void AGetGameData::FreeDll_VCam()
{
	if (m_DllHandle_VCam != NULL)
	{
		FPlatformProcess::FreeDllHandle(m_DllHandle_VCam);
		m_DllHandle_VCam = NULL;
	}
}

bool AGetGameData::VCam_Init(int width, int height)
{
	if (m_DllHandle_VCam == NULL)
	{
		LoadDll_VCam();
	}
	const char* pwd = "GitHub_huang-lq";
	if (VCam_PWDInput(pwd))
	{
		VCam_CreatMemory(width, height);
		VCam_Init_Successful = true;
		return true;
	}
	else
	{
		VCam_Init_Successful = false;
		return false;
	}
}

bool AGetGameData::VCam_InputData(unsigned char* VCam_data, int width, int height, int fps)
{
	if (VCam_Init_Successful)
	{
		VCam_Send(VCam_data, width, height, fps, true);

		return true;
	}
	else
	{
		return false;
	}
}

void AGetGameData::VCam_End()
{
	VCam_ReleaseMemory();
	VCam_Init_Successful = false;
}
