// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomSavesBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGame;
#ifdef CUSTOMSAVES_CustomSavesBlueprintLibrary_generated_h
#error "CustomSavesBlueprintLibrary.generated.h already included, missing '#pragma once' in CustomSavesBlueprintLibrary.h"
#endif
#define CUSTOMSAVES_CustomSavesBlueprintLibrary_generated_h

#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_SPARSE_DATA
#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomLoadGameFromSlot); \
	DECLARE_FUNCTION(execCustomSaveGameToSlot); \
	DECLARE_FUNCTION(execDeleteCustomSaveGameExist); \
	DECLARE_FUNCTION(execDoesCustomSaveGameExist); \
	DECLARE_FUNCTION(execGetCustomSaveGameLocation); \
	DECLARE_FUNCTION(execSetCustomSaveGameLocation);


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomLoadGameFromSlot); \
	DECLARE_FUNCTION(execCustomSaveGameToSlot); \
	DECLARE_FUNCTION(execDeleteCustomSaveGameExist); \
	DECLARE_FUNCTION(execDoesCustomSaveGameExist); \
	DECLARE_FUNCTION(execGetCustomSaveGameLocation); \
	DECLARE_FUNCTION(execSetCustomSaveGameLocation);


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_ACCESSORS
#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomSavesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomSavesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSaves"), NO_API) \
	DECLARE_SERIALIZER(UCustomSavesBlueprintLibrary)


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCustomSavesBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCustomSavesBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCustomSavesBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSaves"), NO_API) \
	DECLARE_SERIALIZER(UCustomSavesBlueprintLibrary)


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomSavesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomSavesBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomSavesBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomSavesBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomSavesBlueprintLibrary(UCustomSavesBlueprintLibrary&&); \
	NO_API UCustomSavesBlueprintLibrary(const UCustomSavesBlueprintLibrary&); \
public: \
	NO_API virtual ~UCustomSavesBlueprintLibrary();


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomSavesBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomSavesBlueprintLibrary(UCustomSavesBlueprintLibrary&&); \
	NO_API UCustomSavesBlueprintLibrary(const UCustomSavesBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomSavesBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomSavesBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomSavesBlueprintLibrary) \
	NO_API virtual ~UCustomSavesBlueprintLibrary();


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_9_PROLOG
#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_SPARSE_DATA \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_RPC_WRAPPERS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_ACCESSORS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_INCLASS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_SPARSE_DATA \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_ACCESSORS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomSavesBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMSAVES_API UClass* StaticClass<class UCustomSavesBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomSavePlugin_Plugins_CustomSaves_Source_CustomSaves_Public_CustomSavesBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
