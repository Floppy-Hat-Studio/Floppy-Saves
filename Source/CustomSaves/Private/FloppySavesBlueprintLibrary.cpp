// Copyright 2024 Floppy Hat Studio. All Rights Reserved.

#include "FloppySavesBlueprintLibrary.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/SaveGame.h"
#include "FloppySavesSaveGameSystem.h"

DEFINE_LOG_CATEGORY_STATIC(LogFloppySavesBlueprintLibrary, Log, All);

#define Log(pmt, ...) UE_LOG(LogFloppySavesBlueprintLibrary, Log, TEXT(pmt), ##__VA_ARGS__)
#define Warn(pmt, ...) UE_LOG(LogFloppySavesBlueprintLibrary, Warning, TEXT(pmt), ##__VA_ARGS__)
#define Error(pmt, ...) UE_LOG(LogFloppySavesBlueprintLibrary, Error, TEXT(pmt), ##__VA_ARGS__)
#define Fatal(pmt, ...) UE_LOG(LogFloppySavesBlueprintLibrary, Fatal, TEXT(pmt), ##__VA_ARGS__)

static FFloppySavesSaveGameSystem FloppySavesGameSystem;

UFloppySavesBlueprintLibrary::UFloppySavesBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UFloppySavesBlueprintLibrary::SetFloppySaveGameLocation(const FString& Location)
{
	if (!Location.IsEmpty())
	{
		FloppySavesGameSystem.SetSaveGameLocation(Location);
		return true;
	}

	return false;
}

const FString UFloppySavesBlueprintLibrary::GetFloppySaveGameLocation()
{
	return FloppySavesGameSystem.GetSaveGameLocation();
}

bool UFloppySavesBlueprintLibrary::DoesFloppySaveGameExist(const FString& SlotName, const int32 UserIndex)
{
	return FloppySavesGameSystem.DoesSaveGameExist(*SlotName, UserIndex);
}

bool UFloppySavesBlueprintLibrary::DeleteFloppySaveGameExist(const FString& SlotName, const int32 UserIndex)
{
	return FloppySavesGameSystem.DeleteGame(false, *SlotName, UserIndex);
}


bool UFloppySavesBlueprintLibrary::FloppySaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	// This is a wrapper around the functions reading to/from a byte array
	TArray<uint8> ObjectBytes;
	if (UGameplayStatics::SaveGameToMemory(SaveGameObject, ObjectBytes))
	{
		return SaveDataToSlot(ObjectBytes, SlotName, UserIndex);
	}
	return false;
}

USaveGame* UFloppySavesBlueprintLibrary::FloppyLoadGameFromSlot(const FString& SlotName, const int32 UserIndex)
{
	// This is a wrapper around the functions reading to/from a byte array
	TArray<uint8> ObjectBytes;
	if (LoadDataFromSlot(ObjectBytes, SlotName, UserIndex))
	{
		return UGameplayStatics::LoadGameFromMemory(ObjectBytes);
	}

	return nullptr;
}

bool UFloppySavesBlueprintLibrary::SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex)
{
	if (InSaveData.Num() > 0 && SlotName.Len() > 0)
	{
		// Stuff that data into the save system with the desired file name
		return FloppySavesGameSystem.SaveGame(false, *SlotName, UserIndex, InSaveData);
	}

	return false;
}

bool UFloppySavesBlueprintLibrary::LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex)
{
	// If we have a save system and a valid name..
	if (SlotName.Len() > 0)
	{
		if (FloppySavesGameSystem.LoadGame(false, *SlotName, UserIndex, OutSaveData))
		{
			return true;
		}
	}

	// Clear buffer on a failed read
	OutSaveData.Reset();
	return false;
}

#undef Fatal
#undef Error
#undef Warn
#undef Log