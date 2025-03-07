#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OWSPlayerState.generated.h"

UCLASS()
class OWSPLUGIN_API AOWSPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	AOWSPlayerState();

	UFUNCTION(BlueprintPure, Category = "OWS|PlayerState")
	FString GetCharacterName() const;

	void SetCharacterName(const FString& NewCharacterName);

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;


private:
	//Replicated Variables
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "OWS|PlayerState")
	FString CharacterName;
};