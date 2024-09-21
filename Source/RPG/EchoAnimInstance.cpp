// Fill out your copyright notice in the Description page of Project Settings.


#include "EchoAnimInstance.h"
#include "Echo.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UEchoAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Character = Cast<AEcho>(TryGetPawnOwner());
	if (Character)
	{
		CharacterMovement = Character->GetCharacterMovement();
	}
}

void UEchoAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);
	
	if(CharacterMovement)
		{
			GroundSpeed = UKismetMathLibrary::VSizeXY(CharacterMovement->Velocity);
			isFalling = CharacterMovement->IsFalling();
			CharacterState = Character->GetCharacterState();
		}
}
