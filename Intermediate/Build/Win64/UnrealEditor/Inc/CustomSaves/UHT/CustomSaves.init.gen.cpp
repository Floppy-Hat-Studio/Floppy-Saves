// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSaves_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CustomSaves;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CustomSaves()
	{
		if (!Z_Registration_Info_UPackage__Script_CustomSaves.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CustomSaves",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFEC9D738,
				0x928F43DF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CustomSaves.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CustomSaves.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CustomSaves(Z_Construct_UPackage__Script_CustomSaves, TEXT("/Script/CustomSaves"), Z_Registration_Info_UPackage__Script_CustomSaves, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFEC9D738, 0x928F43DF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
