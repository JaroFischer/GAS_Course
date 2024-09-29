// Copyright Fischer Industries

#pragma once

#include "CoreMinimal.h"
#include "Characters/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();


protected:


private:
	UPROPERTY(EditAnywhere, Category = "Camera")
	class USpringArmComponent* CameraArm;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* FollowCamera;

};
