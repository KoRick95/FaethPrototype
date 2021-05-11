#pragma once

#include "CoreMinimal.h"
#include "BaseEquipment.h"
#include "BaseArmour.generated.h"

UCLASS()
class FAETH_API ABaseArmour : public ABaseEquipment
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseArmour();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Stats", meta = (ClampMin = "0"))
	float Defence = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
