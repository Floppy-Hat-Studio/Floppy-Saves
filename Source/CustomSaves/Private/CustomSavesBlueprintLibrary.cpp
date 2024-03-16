#include "CustomSavesBlueprintLibrary.h"

#include "Kismet/GameplayStatics.h"
#include "GameFramework/SaveGame.h"
#include "CustomSavesSaveGameSystem.h"

DEFINE_LOG_CATEGORY_STATIC(LogCustomSavesBlueprintLibrary, Log, All);

#define Log(pmt, ...) UE_LOG(LogCustomSavesBlueprintLibrary, Log, TEXT(pmt), ##__VA_ARGS__)
#define Warn(pmt, ...) UE_LOG(LogCustomSavesBlueprintLibrary, Warning, TEXT(pmt), ##__VA_ARGS__)
#define Error(pmt, ...) UE_LOG(LogCustomSavesBlueprintLibrary, Error, TEXT(pmt), ##__VA_ARGS__)
#define Fatal(pmt, ...) UE_LOG(LogCustomSavesBlueprintLibrary, Fatal, TEXT(pmt), ##__VA_ARGS__)

static FCustomSavesSaveGameSystem CustomSavesGameSystem;

UCustomSavesBlueprintLibrary::UCustomSavesBlueprintLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool UCustomSavesBlueprintLibrary::SetCustomSaveGameLocation(const FString& Location)
{
	if (!Location.IsEmpty())
	{
		CustomSavesGameSystem.SetSaveGameLocation(Location);
		return true;
	}

	return false;
}

const FString UCustomSavesBlueprintLibrary::GetCustomSaveGameLocation()
{
	return CustomSavesGameSystem.GetSaveGameLocation();
}

bool UCustomSavesBlueprintLibrary::DoesCustomSaveGameExist(const FString& SlotName, const int32 UserIndex)
{
	return CustomSavesGameSystem.DoesSaveGameExist(*SlotName, UserIndex);
}

bool UCustomSavesBlueprintLibrary::DeleteCustomSaveGameExist(const FString& SlotName, const int32 UserIndex)
{
	return CustomSavesGameSystem.DeleteGame(false, *SlotName, UserIndex);
}


bool UCustomSavesBlueprintLibrary::CustomSaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex)
{
	// This is a wrapper around the functions reading to/from a byte array
	TArray<uint8> ObjectBytes;
	if (UGameplayStatics::SaveGameToMemory(SaveGameObject, ObjectBytes))
	{
		return SaveDataToSlot(ObjectBytes, SlotName, UserIndex);
	}
	return false;
}

USaveGame* UCustomSavesBlueprintLibrary::CustomLoadGameFromSlot(const FString& SlotName, const int32 UserIndex)
{
	// This is a wrapper around the functions reading to/from a byte array
	TArray<uint8> ObjectBytes;
	if (LoadDataFromSlot(ObjectBytes, SlotName, UserIndex))
	{
		return UGameplayStatics::LoadGameFromMemory(ObjectBytes);
	}

	return nullptr;
}

bool UCustomSavesBlueprintLibrary::SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex)
{
	if (InSaveData.Num() > 0 && SlotName.Len() > 0)
	{
		// Stuff that data into the save system with the desired file name
		return CustomSavesGameSystem.SaveGame(false, *SlotName, UserIndex, InSaveData);
	}

	return false;
}

bool UCustomSavesBlueprintLibrary::LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex)
{
	// If we have a save system and a valid name..
	if (SlotName.Len() > 0)
	{
		if (CustomSavesGameSystem.LoadGame(false, *SlotName, UserIndex, OutSaveData))
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