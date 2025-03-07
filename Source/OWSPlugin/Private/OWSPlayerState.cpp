#include "OWSPlayerState.h"
#include "Net/UnrealNetwork.h"

AOWSPlayerState::AOWSPlayerState()
{
    //Important:  This needs to be set to true if you want to replicate variables
    bReplicates = true;
}

FString AOWSPlayerState::GetCharacterName() const
{
    return CharacterName;
}

void AOWSPlayerState::SetCharacterName(const FString& NewCharacterName)
{
    if (GetLocalRole() == ROLE_Authority)
    {
        CharacterName = NewCharacterName;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SetCharacterName should only be called on the server."));
    }
}

void AOWSPlayerState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    //Replicate to everyone
    DOREPLIFETIME(AOWSPlayerState, CharacterName);
}