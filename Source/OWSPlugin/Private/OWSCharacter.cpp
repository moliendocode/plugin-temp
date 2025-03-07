#include "OWSCharacter.h"
#include "Net/UnrealNetwork.h"
#include "OWSPlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "../OWSPlugin.h"
#include "GenericPlatform/GenericPlatformMath.h"

DECLARE_LOG_CATEGORY_EXTERN(OWSPlugin, Log, All);

// Sets default values
AOWSCharacter::AOWSCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    bReplicates = true;

}

// Called when the game starts or when spawned
void AOWSCharacter::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(OWSPlugin, Verbose, TEXT("AOWSCharacter::BeginPlay"));

    //Server side only
    if (GetLocalRole() == ROLE_Authority)
    {
        AOWSPlayerController* PC = Cast<AOWSPlayerController>(GetController());
        if (!PC)
        {
            UE_LOG(OWSPlugin, Warning, TEXT("AOWSCharacter::BeginPlay - PlayerController is NULL"));
        }
    }
}

// Called every frame
void AOWSCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AOWSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AOWSCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    //Replicate to everyone
    DOREPLIFETIME(AOWSCharacter, CharacterData);
    DOREPLIFETIME(AOWSCharacter, InventoryData);
    DOREPLIFETIME(AOWSCharacter, CharacterStats);
}

void AOWSCharacter::SetCharacterData(const FCharacterData& InCharacterData)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        CharacterData = InCharacterData;
        OnRep_CharacterData(); // Immediately call the OnRep function to ensure consistency
    }
}

void AOWSCharacter::SetInventoryData(const TArray<FInventoryData>& InInventoryData)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        InventoryData = InInventoryData;
        OnRep_InventoryData();
    }
}

void AOWSCharacter::SetCharacterStats(const FCharacterStats& InCharacterStats)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        CharacterStats = InCharacterStats;
        OnRep_CharacterStats(); // Immediately call the OnRep function to ensure consistency
    }
}

void AOWSCharacter::OnRep_CharacterData()
{
    OnCharacterDataReceived.Broadcast(CharacterData);
    UE_LOG(OWSPlugin, Verbose, TEXT("OnRep_CharacterData Called - Character Name: %s"), *CharacterData.CharacterName);
}

void AOWSCharacter::OnRep_InventoryData()
{
    OnInventoryDataReceived.Broadcast(InventoryData);
    UE_LOG(OWSPlugin, Verbose, TEXT("OnRep_InventoryData Called - Inventory Size: %d"), InventoryData.Num());
}

void AOWSCharacter::OnRep_CharacterStats()
{
    OnCharacterStatsReceived.Broadcast(CharacterStats);
    UE_LOG(OWSPlugin, Verbose, TEXT("OnRep_CharacterStats Called - Health: %d"), CharacterStats.CurrentHealth);
}

// RPC function to move the player on the server
void AOWSCharacter::Server_Move_Implementation(FVector_NetQuantize NewLocation)
{
    // Basic validation to prevent cheating.  Adjust the threshold as needed.
    const float MaxMoveDistancePerTick = GetCharacterMovement()->MaxWalkSpeed * GetWorld()->GetDeltaSeconds() * 1.1f; // 10% tolerance
    if (FVector::DistSquared(GetActorLocation(), NewLocation) > FMath::Square(MaxMoveDistancePerTick))
    {
        // Log a warning, but don't update the position.  Consider kicking the player or applying a penalty.
        UE_LOG(OWSPlugin, Warning, TEXT("Player %s attempted to move too far! Possible cheat attempt."), *GetName());
        Client_RejectMove(GetActorLocation()); //Conform the client
        return;
    }

    SetActorLocation(NewLocation);
}

void AOWSCharacter::Client_RejectMove_Implementation(FVector_NetQuantize CorrectLocation)
{
    SetActorLocation(CorrectLocation);
}

//RPC para saltar
void AOWSCharacter::Server_Jump_Implementation()
{
    Jump();
}

bool AOWSCharacter::Server_Jump_Validate()
{
    return true; // Add validation if needed
}

void AOWSCharacter::GetCharacterData(FCharacterData& OutCharacterData) const
{
    OutCharacterData = CharacterData;
}

TArray<FInventoryData> AOWSCharacter::GetInventoryData() const
{
    return InventoryData;
}

void AOWSCharacter::GetCharacterStats(FCharacterStats& OutCharacterStats) const
{
    OutCharacterStats = CharacterStats;
}

void AOWSCharacter::UpdateCharacterData_Implementation(const FCharacterData& InCharacterData, const TArray<FInventoryData>& InInventoryData, const FCharacterStats& InCharacterStats)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        SetCharacterData(InCharacterData);
        SetInventoryData(InInventoryData);
        SetCharacterStats(InCharacterStats);

        //Broadcast Server Side
        OnCharacterDataReceived.Broadcast(InCharacterData);
        OnInventoryDataReceived.Broadcast(InInventoryData);
        OnCharacterStatsReceived.Broadcast(InCharacterStats);
    }
    else
    {
        UE_LOG(OWSPlugin, Warning, TEXT("UpdateCharacterData should only be called on the server."));
    }
}

bool AOWSCharacter::UpdateCharacterData_Validate(const FCharacterData& InCharacterData, const TArray<FInventoryData>& InInventoryData, const FCharacterStats& InCharacterStats)
{
    return true;
}