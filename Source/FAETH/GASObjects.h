#pragma once

#include "CoreMinimal.h"
#include "GASObjects.generated.h"

UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	None			UMETA(DisplayName = "None"),

	Confirm			UMETA(DisplayName = "Confirm"),

	Cancel			UMETA(DisplayName = "Cancel"),

	Sprint			UMETA(DisplayName = "Sprint"),

	LightAttack		UMETA(DisplayName = "Light Attack"),

	HeavyAttack		UMETA(DisplayName = "Heavy Attack"),

	Dodge			UMETA(DisplayName = "Dodge"),

	Block			UMETA(DisplayName = "Block"),

	Ability1		UMETA(DisplayName = "Ability 1"),

	Ability2		UMETA(DisplayName = "Ability 2"),

	Ability3		UMETA(DisplayName = "Ability 3"),

	Ability4		UMETA(DisplayName = "Ability 4"),

	Ability5		UMETA(DisplayName = "Ability 5"),

	Ability6		UMETA(DisplayName = "Ability 6"),

	Ability7		UMETA(DisplayName = "Ability 7"),

	Ability8		UMETA(DisplayName = "Ability 8"),

	Item1			UMETA(DisplayName = "Item 1"),

	Item2			UMETA(DisplayName = "Item 2"),

	Item3			UMETA(DisplayName = "Item 3"),

	Item4			UMETA(DisplayName = "Item 4"),
};