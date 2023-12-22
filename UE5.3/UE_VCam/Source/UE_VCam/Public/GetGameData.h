// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FrameGrabber.h"
#include "Engine/GameEngine.h"
#include "GetGameData.generated.h"

/*
*   If you have any questions, please contact me
*   Github: https://github.com/huang-lq
*	CSDN:   https://blog.csdn.net/weixin_44346103?type=blog
*/

class FFrameGrabber;

UCLASS()
class UE_VCAM_API AGetGameData : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGetGameData();

	~AGetGameData(){
		if (!isEnd) {
			StopGetData();
		}
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Destroy Actor
	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "StartGetData", Keywords = "StartGetData"), Category = "UE_VCam")
	bool StartGetData();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "StopGetData", Keywords = "StopGetData"), Category = "UE_VCam")
	void StopGetData();

private:
	void ReleaseFrameGrabber();
	void CaptureGameViewPort();

	bool LoadDll_VCam();
	void FreeDll_VCam();
	bool VCam_Init(int width, int height);
	bool VCam_InputData(unsigned char* VCam_data, int width, int height, int fps);
	void VCam_End();

private:
	TSharedPtr<FFrameGrabber>	FrameGrabber;
	int Viewport_width;
	int Viewport_height;
	unsigned char* Screen_data;
	bool VCam_Init_Successful = false;
	bool isEnd = true;
};
