// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE_VCam/Public/GetGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetGameData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE_VCAM_API UClass* Z_Construct_UClass_AGetGameData();
	UE_VCAM_API UClass* Z_Construct_UClass_AGetGameData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE_VCam();
// End Cross Module References
	DEFINE_FUNCTION(AGetGameData::execStopGetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopGetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGetGameData::execStartGetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartGetData();
		P_NATIVE_END;
	}
	void AGetGameData::StaticRegisterNativesAGetGameData()
	{
		UClass* Class = AGetGameData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartGetData", &AGetGameData::execStartGetData },
			{ "StopGetData", &AGetGameData::execStopGetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGetGameData_StartGetData_Statics
	{
		struct GetGameData_eventStartGetData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGetGameData_StartGetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GetGameData_eventStartGetData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGetGameData_StartGetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GetGameData_eventStartGetData_Parms), &Z_Construct_UFunction_AGetGameData_StartGetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGetGameData_StartGetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGetGameData_StartGetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGetGameData_StartGetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE_VCam" },
		{ "DisplayName", "StartGetData" },
		{ "Keywords", "StartGetData" },
		{ "ModuleRelativePath", "Public/GetGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGetGameData_StartGetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGetGameData, nullptr, "StartGetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGetGameData_StartGetData_Statics::GetGameData_eventStartGetData_Parms), Z_Construct_UFunction_AGetGameData_StartGetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGetGameData_StartGetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGetGameData_StartGetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGetGameData_StartGetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGetGameData_StartGetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGetGameData_StartGetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGetGameData_StopGetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGetGameData_StopGetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UE_VCam" },
		{ "DisplayName", "StopGetData" },
		{ "Keywords", "StopGetData" },
		{ "ModuleRelativePath", "Public/GetGameData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGetGameData_StopGetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGetGameData, nullptr, "StopGetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGetGameData_StopGetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGetGameData_StopGetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGetGameData_StopGetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGetGameData_StopGetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGetGameData);
	UClass* Z_Construct_UClass_AGetGameData_NoRegister()
	{
		return AGetGameData::StaticClass();
	}
	struct Z_Construct_UClass_AGetGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGetGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE_VCam,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGetGameData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGetGameData_StartGetData, "StartGetData" }, // 2831602224
		{ &Z_Construct_UFunction_AGetGameData_StopGetData, "StopGetData" }, // 2490342455
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGetGameData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GetGameData.h" },
		{ "ModuleRelativePath", "Public/GetGameData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGetGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGetGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGetGameData_Statics::ClassParams = {
		&AGetGameData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGetGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGetGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGetGameData()
	{
		if (!Z_Registration_Info_UClass_AGetGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGetGameData.OuterSingleton, Z_Construct_UClass_AGetGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGetGameData.OuterSingleton;
	}
	template<> UE_VCAM_API UClass* StaticClass<AGetGameData>()
	{
		return AGetGameData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGetGameData);
	struct Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_GetGameData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_GetGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGetGameData, AGetGameData::StaticClass, TEXT("AGetGameData"), &Z_Registration_Info_UClass_AGetGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGetGameData), 720348279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_GetGameData_h_188356078(TEXT("/Script/UE_VCam"),
		Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_GetGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_UEProject_UE5VC_Plugins_UE_VCam_Source_UE_VCam_Public_GetGameData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
