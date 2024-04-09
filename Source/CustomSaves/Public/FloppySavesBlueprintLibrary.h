// Copyright 2024 Floppy Hat Studio. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveGameSystem.h"
#include "FloppySavesBlueprintLibrary.generated.h"

class USaveGame;

UCLASS()
class UFloppySavesBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Floppy Save Game Location", Keywords = "Set Save Game Floppy Location"), Category = "Floppy Saves")
	static bool SetFloppySaveGameLocation(const FString& Location);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Floppy Save Game Location", Keywords = "Get Save Game Floppy Location"), Category = "Floppy Saves")
	static const FString GetFloppySaveGameLocation();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Does Floppy Save Game Exist", Keywords = "Floppy Save Game Exist"), Category = "Floppy Saves")
	static bool DoesFloppySaveGameExist(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Floppy Save Game", Keywords = "Delete Floppy Save Game"), Category = "Floppy Saves")
	static bool DeleteFloppySaveGameExist(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Floppy Save Game To Slot", Keywords = "Save Game Floppy"), Category = "Floppy Saves")
	static bool FloppySaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Floppy Load Game From Slot", Keywords = "Load Game Floppy"), Category = "Floppy Saves")
	static USaveGame* FloppyLoadGameFromSlot(const FString& SlotName, const int32 UserIndex);

protected:
	static bool SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex);

	static bool LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex);
};
