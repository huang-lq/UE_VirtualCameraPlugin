// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "UE_VCamBPLibrary.generated.h"

/*
*   If you have any questions, please contact me
*   Github: https://github.com/huang-lq
*	CSDN:   https://blog.csdn.net/weixin_44346103?type=blog
*/

UCLASS()
class UUE_VCamBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "OpenVCamBatFile", Keywords = "OpenVCamBatFile"), Category = "UE_VCam")
		static void OpenVCamBatFile(bool OpenFile);
};
