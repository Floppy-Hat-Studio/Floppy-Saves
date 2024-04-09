// Copyright 2024 Floppy Hat Studio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SaveGameSystem.h"

class FFloppySavesSaveGameSystem : public ISaveGameSystem
{
	bool bIsLocationInitialized;

public:
	FFloppySavesSaveGameSystem()
	{
		SaveGameLocation = "";
		bIsLocationInitialized = false;
	}

	virtual ~FFloppySavesSaveGameSystem()
	{

	}

	virtual bool PlatformHasNativeUI() override
	{
		return false;
	}

	virtual bool DoesSaveSystemSupportMultipleUsers() override
	{
		return false;
	}

	virtual ESaveExistsResult DoesSaveGameExistWithResult(const TCHAR* Name, const int32 UserIndex) override
	{
		if (IFileManager::Get().FileSize(*GetSaveGamePath(Name)) >= 0)
		{
			return ESaveExistsResult::OK;
		}
		return ESaveExistsResult::DoesNotExist;
	}

	virtual bool DoesSaveGameExist(const TCHAR* Name, const int32 UserIndex) override
	{
		return ESaveExistsResult::OK == DoesSaveGameExistWithResult(Name, UserIndex);
	}

	virtual bool GetSaveGameNames(TArray<FString>& FoundSaves, const int32 UserIndex) override
	{
		TArray<FString> FoundFiles;
		const FString SaveGameDirectory = FPaths::ProjectPersistentDownloadDir() / TEXT("SaveGames/");
		IFileManager::Get().FindFiles(FoundFiles, *SaveGameDirectory, TEXT("*.sav"));

		for (FString& File : FoundFiles)
		{
			FoundSaves.Add(FPaths::GetBaseFilename(File));
		}

		return true;
	}

	virtual bool SaveGame(bool bAttemptToUseUI, const TCHAR* Name, const int32 UserIndex, const TArray<uint8>& Data) override
	{
		return FFileHelper::SaveArrayToFile(Data, *GetSaveGamePath(Name));
	}

	virtual bool LoadGame(bool bAttemptToUseUI, const TCHAR* Name, const int32 UserIndex, TArray<uint8>& Data) override
	{
		return FFileHelper::LoadFileToArray(Data, *GetSaveGamePath(Name));
	}

	virtual bool DeleteGame(bool bAttemptToUseUI, const TCHAR* Name, const int32 UserIndex) override
	{
		return IFileManager::Get().Delete(*GetSaveGamePath(Name), true, false, !bAttemptToUseUI);
	}

	void SetSaveGameLocation(const FString& Location)
	{
		SaveGameLocation = Location;
	}

	const FString GetSaveGameLocation()
	{
		return SaveGameLocation;
	}

protected:

	virtual FString GetSaveGamePath(const TCHAR* Name)
	{
		// Chg: On Android, and potentially other devices, the constructor is to early to get the location.
		if (!bIsLocationInitialized)
		{
			SaveGameLocation = FString::Printf(TEXT("%s/SaveGames"), *FPaths::ProjectPersistentDownloadDir());
			bIsLocationInitialized = true;
		}
		return FString::Printf(TEXT("%s/%s.sav"), *SaveGameLocation, Name);
	}
	
protected:

	FString SaveGameLocation;
};