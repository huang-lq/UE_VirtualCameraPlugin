// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VCam/Public/UE_VCamBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE_VCamBPLibrary() {}
// Cross Module References
	UE_VCAM_API UClass* Z_Construct_UClass_UUE_VCamBPLibrary_NoRegister();
	UE_VCAM_API UClass* Z_Construct_UClass_UUE_VCamBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
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
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OpenFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile_SetBit(void* Obj)
	{
		((UE_VCamBPLibrary_eventOpenVCamBatFile_Parms*)Obj)->OpenFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile = { "OpenFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UE_VCamBPLibrary_eventOpenVCamBatFile_Parms), &Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::NewProp_OpenFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE_VCam" },
		{ "DisplayName", "OpenVCamBatFile" },
		{ "Keywords", "OpenVCamBatFile" },
		{ "ModuleRelativePath", "Public/UE_VCamBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUE_VCamBPLibrary, nullptr, "OpenVCamBatFile", nullptr, nullptr, sizeof(UE_VCamBPLibrary_eventOpenVCamBatFile_Parms), Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUE_VCamBPLibrary_NoRegister()
	{
		return UUE_VCamBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUE_VCamBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUE_VCamBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VCam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUE_VCamBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUE_VCamBPLibrary_OpenVCamBatFile, "OpenVCamBatFile" }, // 3938746074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUE_VCamBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*\x09""CSDN:   https://blog.csdn.net/weixin_44346103?type=blog\n*/" },
		{ "IncludePath", "UE_VCamBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UE_VCamBPLibrary.h" },
		{ "ToolTip", "*   If you have any questions, please contact me\n*   Github: https://github.com/huang-lq\n*      CSDN:   https://blog.csdn.net/weixin_44346103?type=blog" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUE_VCamBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUE_VCamBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUE_VCamBPLibrary_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUE_VCamBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUE_VCamBPLibrary, 3686729709);
	template<> UE_VCAM_API UClass* StaticClass<UUE_VCamBPLibrary>()
	{
		return UUE_VCamBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUE_VCamBPLibrary(Z_Construct_UClass_UUE_VCamBPLibrary, &UUE_VCamBPLibrary::StaticClass, TEXT("/Script/UE_VCam"), TEXT("UUE_VCamBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE_VCamBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
