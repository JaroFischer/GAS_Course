// Copyright Fischer Industries


#include "Characters/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->TargetArmLength = 750.f;
	CameraArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("Camera");
	FollowCamera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);
}

