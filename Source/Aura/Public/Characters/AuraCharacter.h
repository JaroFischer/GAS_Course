// Copyright Fischer Industries

#pragma once

#include "CoreMinimal.h"
#include "Characters/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
protected:


private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	class USpringArmComponent* CameraArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* FollowCamera;

	void InitAbilityActorInfo();
};
