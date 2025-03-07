#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DataTypes/OWSDataTypes.h"
#include "OWSCharacter.generated.h" // This MUST be the last include

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDataReceivedDelegate, const FCharacterData&, CharacterData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryDataReceivedDelegate, const TArray<FInventoryData>&, InventoryData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterStatsReceivedDelegate, const FCharacterStats&, CharacterStats);


UCLASS()
class OWSPLUGIN_API AOWSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOWSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	//Setters - No blueprint - Server Side Only
	void SetCharacterData(const FCharacterData& InCharacterData);
	void SetInventoryData(const TArray<FInventoryData>& InInventoryData);
	void SetCharacterStats(const FCharacterStats& InCharacterStats);

	// RPC function to move the player on the server
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Move(FVector_NetQuantize NewLocation);
	void Server_Move_Implementation(FVector_NetQuantize NewLocation);

	UFUNCTION(Client, Reliable)
	void Client_RejectMove(FVector_NetQuantize CorrectLocation);
	void Client_RejectMove_Implementation(FVector_NetQuantize CorrectLocation);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_Jump();
	void Server_Jump_Implementation();
	bool Server_Jump_Validate();

	//Getters
	UFUNCTION(BlueprintPure, Category = "OWS|Character")
	void GetCharacterData(FCharacterData& OutCharacterData) const;

	UFUNCTION(BlueprintPure, Category = "OWS|Character")
	TArray<FInventoryData> GetInventoryData() const;

	UFUNCTION(BlueprintPure, Category = "OWS|Character")
	void GetCharacterStats(FCharacterStats& OutCharacterStats) const;

	//Replicated Variables
	UPROPERTY(ReplicatedUsing = OnRep_CharacterData, VisibleAnywhere, BlueprintReadWrite, Category = "OWS|Character")
	FCharacterData CharacterData;

	UPROPERTY(ReplicatedUsing = OnRep_InventoryData, VisibleAnywhere, BlueprintReadWrite, Category = "OWS|Character")
	TArray<FInventoryData> InventoryData;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterStats, VisibleAnywhere, BlueprintReadWrite, Category = "OWS|Character")
	FCharacterStats CharacterStats;

	// OnRep Functions
	UFUNCTION()
	void OnRep_CharacterData();

	UFUNCTION()
	void OnRep_InventoryData();

	UFUNCTION()
	void OnRep_CharacterStats();

	// Delegates - Blueprint
	UPROPERTY(BlueprintAssignable, Category = "OWS|Character")
	FOnCharacterDataReceivedDelegate OnCharacterDataReceived;

	UPROPERTY(BlueprintAssignable, Category = "OWS|Character")
	FOnInventoryDataReceivedDelegate OnInventoryDataReceived;

	UPROPERTY(BlueprintAssignable, Category = "OWS|Character")
	FOnCharacterStatsReceivedDelegate OnCharacterStatsReceived;


	//Main function to update character values - Server Side Only
	void UpdateCharacterData(const FCharacterData& InCharacterData, const TArray<FInventoryData>& InInventoryData, const FCharacterStats& InCharacterStats);
};