
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MELEESYSTEM_API UHealth : public UActorComponent
{
	GENERATED_BODY()
	
private:
	float Health = -1;
	
public:	
	// Sets default values for this component's properties
	UHealth();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="HealthBar")
	float GetHealth()const;

	UFUNCTION(BlueprintCallable, Category="HealthBar")
	void SetHealth(float NewHealth);

		
};
