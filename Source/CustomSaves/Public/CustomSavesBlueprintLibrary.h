#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveGameSystem.h"
#include "CustomSavesBlueprintLibrary.generated.h"

class USaveGame;

UCLASS()
class UCustomSavesBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Custom Save Game Location", Keywords = "Set Save Game Custom Location"), Category = "Custom Saves")
	static bool SetCustomSaveGameLocation(const FString& Location);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Custom Save Game Location", Keywords = "Get Save Game Custom Location"), Category = "Custom Saves")
	static const FString GetCustomSaveGameLocation();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Does Custom Save Game Exist", Keywords = "Custom Save Game Exist"), Category = "Custom Saves")
	static bool DoesCustomSaveGameExist(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Custom Save Game", Keywords = "Delete Custom Save Game"), Category = "Custom Saves")
	static bool DeleteCustomSaveGameExist(const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Custom Save Game To Slot", Keywords = "Save Game Custom"), Category = "Custom Saves")
	static bool CustomSaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Custom Load Game From Slot", Keywords = "Load Game Custom"), Category = "Custom Saves")
	static USaveGame* CustomLoadGameFromSlot(const FString& SlotName, const int32 UserIndex);

protected:
	static bool SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex);

	static bool LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex);
};
