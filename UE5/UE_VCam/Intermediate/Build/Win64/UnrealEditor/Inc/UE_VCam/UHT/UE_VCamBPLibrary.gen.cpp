// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VCam/Public/UE_VCamBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_VCamBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UE_VCAM_API UClass* Z_Construct_UClass_UUE_VCamBPLibrary();
	UE_VCAM_API UClass* Z_Construct_UClass_UUE_VCamBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE_VCam();
// End Cross Module References
	DEFINE_FUNCTION(UUE_VCamBPLibrary::execOpenVCamBatFile)
	{
		P_GET_UBOOL(Z_Param_OpenFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUE_VCamBPLibrary::OpenVCamBatFile(Z_Param_OpenFile);
		P_NATIVE_END;
	}
	void UUE_VCamBPLibrary::StaticRegisterNativesUUE_VCamBPLibrary()
	{
		UClass* Class = UUE_VCamBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenVCamBatFile", &UUE_VCamBPLibrary::execOpenVCamBatFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics
	{
		struct UE_VCamBPLibrary_eventOpenVCamBatFile_Parms
		{
			bool OpenFile;
		};
		static void NewProp_OpenFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile_SetBit(void* Obj)
	{
		((UE_VCamBPLibrary_eventOpenVCamBatFile_Parms*)Obj)->OpenFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile = { "OpenFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UE_VCamBPLibrary_eventOpenVCamBatFile_Parms), &Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE_VCam" },
		{ "DisplayName", "OpenVCamBatFile" },
		{ "Keywords", "OpenVCamBatFile" },
		{ "ModuleRelativePath", "Public/UE_VCamBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUE_VCamBPLibrary, nullptr, "OpenVCamBatFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::UE_VCamBPLibrary_eventOpenVCamBatFile_Parms), Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUE_VCamBPLibrary);
	UClass* Z_Construct_UClass_UUE_VCamBPLibrary_NoRegister()
	{
		return UUE_VCamBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUE_VCamBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_VCamBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VCam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUE_VCamBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile, "OpenVCamBatFile" }, // 2412563366
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_VCamBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*\x09""CSDN:   https://blog.csdn.net/weixin_44346103?type=blog\n*/" },
		{ "IncludePath", "UE_VCamBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UE_VCamBPLibrary.h" },
		{ "ToolTip", "*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*      CSDN:   https://blog.csdn.net/weixin_44346103?type=blog" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_VCamBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_VCamBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUE_VCamBPLibrary_Statics::ClassParams = {
		&UUE_VCamBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUE_VCamBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUE_VCamBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUE_VCamBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UUE_VCamBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUE_VCamBPLibrary.OuterSingleton, Z_Construct_UClass_UUE_VCamBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUE_VCamBPLibrary.OuterSingleton;
	}
	template<> UE_VCAM_API UClass* StaticClass<UUE_VCamBPLibrary>()
	{
		return UUE_VCamBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_VCamBPLibrary);
	UUE_VCamBPLibrary::~UUE_VCamBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_UE_VCamBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_UE_VCamBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUE_VCamBPLibrary, UUE_VCamBPLibrary::StaticClass, TEXT("UUE_VCamBPLibrary"), &Z_Registration_Info_UClass_UUE_VCamBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUE_VCamBPLibrary), 2015387221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_UE_VCamBPLibrary_h_3234989780(TEXT("/Script/UE_VCam"),
		Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_UE_VCamBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_UE_VCamBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
