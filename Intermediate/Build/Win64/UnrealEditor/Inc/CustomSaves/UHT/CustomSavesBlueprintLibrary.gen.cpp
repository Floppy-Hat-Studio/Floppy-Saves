// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomSaves/Public/CustomSavesBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSavesBlueprintLibrary() {}
// Cross Module References
	CUSTOMSAVES_API UClass* Z_Construct_UClass_UCustomSavesBlueprintLibrary();
	CUSTOMSAVES_API UClass* Z_Construct_UClass_UCustomSavesBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomSaves();
// End Cross Module References
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execCustomLoadGameFromSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGame**)Z_Param__Result=UCustomSavesBlueprintLibrary::CustomLoadGameFromSlot(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execCustomSaveGameToSlot)
	{
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomSavesBlueprintLibrary::CustomSaveGameToSlot(Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execDeleteCustomSaveGameExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomSavesBlueprintLibrary::DeleteCustomSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execDoesCustomSaveGameExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomSavesBlueprintLibrary::DoesCustomSaveGameExist(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execGetCustomSaveGameLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCustomSavesBlueprintLibrary::GetCustomSaveGameLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomSavesBlueprintLibrary::execSetCustomSaveGameLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UCustomSavesBlueprintLibrary::SetCustomSaveGameLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	void UCustomSavesBlueprintLibrary::StaticRegisterNativesUCustomSavesBlueprintLibrary()
	{
		UClass* Class = UCustomSavesBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomLoadGameFromSlot", &UCustomSavesBlueprintLibrary::execCustomLoadGameFromSlot },
			{ "CustomSaveGameToSlot", &UCustomSavesBlueprintLibrary::execCustomSaveGameToSlot },
			{ "DeleteCustomSaveGameExist", &UCustomSavesBlueprintLibrary::execDeleteCustomSaveGameExist },
			{ "DoesCustomSaveGameExist", &UCustomSavesBlueprintLibrary::execDoesCustomSaveGameExist },
			{ "GetCustomSaveGameLocation", &UCustomSavesBlueprintLibrary::execGetCustomSaveGameLocation },
			{ "SetCustomSaveGameLocation", &UCustomSavesBlueprintLibrary::execSetCustomSaveGameLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics
	{
		struct CustomSavesBlueprintLibrary_eventCustomLoadGameFromSlot_Parms
		{
			FString SlotName;
			int32 UserIndex;
			USaveGame* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomLoadGameFromSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomLoadGameFromSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomLoadGameFromSlot_Parms, ReturnValue), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Custom Load Game From Slot" },
		{ "Keywords", "Load Game Custom" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "CustomLoadGameFromSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::CustomSavesBlueprintLibrary_eventCustomLoadGameFromSlot_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics
	{
		struct CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms
		{
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_UserIndex_MetaData)) };
	void Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms), &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SaveGameObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Custom Save Game To Slot" },
		{ "Keywords", "Save Game Custom" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "CustomSaveGameToSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::CustomSavesBlueprintLibrary_eventCustomSaveGameToSlot_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics
	{
		struct CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData)) };
	void Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms), &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Delete Custom Save Game" },
		{ "Keywords", "Delete Custom Save Game" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "DeleteCustomSaveGameExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::CustomSavesBlueprintLibrary_eventDeleteCustomSaveGameExist_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics
	{
		struct CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_UserIndex_MetaData)) };
	void Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms), &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Does Custom Save Game Exist" },
		{ "Keywords", "Custom Save Game Exist" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "DoesCustomSaveGameExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::CustomSavesBlueprintLibrary_eventDoesCustomSaveGameExist_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics
	{
		struct CustomSavesBlueprintLibrary_eventGetCustomSaveGameLocation_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventGetCustomSaveGameLocation_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Get Custom Save Game Location" },
		{ "Keywords", "Get Save Game Custom Location" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "GetCustomSaveGameLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::CustomSavesBlueprintLibrary_eventGetCustomSaveGameLocation_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics
	{
		struct CustomSavesBlueprintLibrary_eventSetCustomSaveGameLocation_Parms
		{
			FString Location;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomSavesBlueprintLibrary_eventSetCustomSaveGameLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_Location_MetaData)) };
	void Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomSavesBlueprintLibrary_eventSetCustomSaveGameLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomSavesBlueprintLibrary_eventSetCustomSaveGameLocation_Parms), &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Saves" },
		{ "DisplayName", "Set Custom Save Game Location" },
		{ "Keywords", "Set Save Game Custom Location" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomSavesBlueprintLibrary, nullptr, "SetCustomSaveGameLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::CustomSavesBlueprintLibrary_eventSetCustomSaveGameLocation_Parms), Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomSavesBlueprintLibrary);
	UClass* Z_Construct_UClass_UCustomSavesBlueprintLibrary_NoRegister()
	{
		return UCustomSavesBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomSaves,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomLoadGameFromSlot, "CustomLoadGameFromSlot" }, // 1957946913
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_CustomSaveGameToSlot, "CustomSaveGameToSlot" }, // 1455567331
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DeleteCustomSaveGameExist, "DeleteCustomSaveGameExist" }, // 1786911912
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_DoesCustomSaveGameExist, "DoesCustomSaveGameExist" }, // 1953465487
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_GetCustomSaveGameLocation, "GetCustomSaveGameLocation" }, // 2043584263
		{ &Z_Construct_UFunction_UCustomSavesBlueprintLibrary_SetCustomSaveGameLocation, "SetCustomSaveGameLocation" }, // 3611872851
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomSavesBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/CustomSavesBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomSavesBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::ClassParams = {
		&UCustomSavesBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomSavesBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UCustomSavesBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomSavesBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomSavesBlueprintLibrary.OuterSingleton;
	}
	template<> CUSTOMSAVES_API UClass* StaticClass<UCustomSavesBlueprintLibrary>()
	{
		return UCustomSavesBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomSavesBlueprintLibrary);
	UCustomSavesBlueprintLibrary::~UCustomSavesBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomSavesBlueprintLibrary, UCustomSavesBlueprintLibrary::StaticClass, TEXT("UCustomSavesBlueprintLibrary"), &Z_Registration_Info_UClass_UCustomSavesBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomSavesBlueprintLibrary), 740316476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_2826672688(TEXT("/Script/CustomSaves"),
		Z_CompiledInDeferFile_FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
