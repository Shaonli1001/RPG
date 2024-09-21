#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped,
	ECS_EquippedOneHandedWeapon,
	ECS_EquippedTwoHandedWeapon
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied,
	EAS_Attacking,
	EAS_EquippingWeapon
};