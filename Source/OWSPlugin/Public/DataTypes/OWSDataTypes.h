// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OWSDataTypes.generated.h" // This MUST be the last include

//Forward declarations
class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	FString CharacterName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 Gender;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 Alignment;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 CurrentLevel;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 CurrentXP;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 X;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 Y;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 Z;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 RX;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 RY;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 RZ;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	FString MapName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	int32 Team;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Data")
	FString CharacterClassName;
};

USTRUCT(BlueprintType)
struct FCharacterClass
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Class")
	FString CharacterClassName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Class")
	int32 Gender;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Character Class")
	UTexture2D* ClassIcon;
};

USTRUCT(BlueprintType)
struct FInventoryData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	int32 ItemID;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	FName ItemName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	int32 ItemType;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	int32 GoldValue;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	int32 MaxStackSize;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "InventoryData")
	int32 CurrentStackCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, BlueprintReadWrite, Category = "InventoryData")
	float Weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, BlueprintReadWrite, Category = "InventoryData")
	TObjectPtr<UTexture2D> ItemIcon;
};

USTRUCT(BlueprintType)
struct FItemData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ItemData")
	int32 ItemID;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ItemData")
	FName ItemName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ItemData")
	int32 ItemType;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ItemData")
	int32 GoldValue;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ItemData")
	int32 MaxStackSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	float Weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	TObjectPtr<UTexture2D> ItemIcon;
};


USTRUCT(BlueprintType)
struct FMapData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	FString MapName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	FString ZoneName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	FString FriendlyName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	int32 MapID;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	int32 MinX;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	int32 MaxX;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	int32 MinY;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "MapData")
	int32 MaxY;
};

USTRUCT(BlueprintType)
struct FZoneMap
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ZoneMap")
	FString MapName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ZoneMap")
	int32 ZoneID;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ZoneMap")
	FString ZoneName;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "ZoneMap")
	FString ServerIP;
};

USTRUCT(BlueprintType)
struct FCharacterStats
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Strength;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Dexterity;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Constitution;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Intelligence;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Wisdom;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Charisma;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Spirit;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 Luck;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 MaxHealth;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 CurrentHealth;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 MaxMana;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 CurrentMana;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 MaxEnergy;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Stats")
	int32 CurrentEnergy;
};