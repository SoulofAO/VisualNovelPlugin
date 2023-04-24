// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UpgradeObject.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (ShowWorldContextPin))
class VISUALNOVELPLUGIN_API UUpgradeObject : public UObject, public FTickableGameObject
{
	GENERATED_BODY()
	
	virtual UWorld* GetWorld() const override;

public:
	UFUNCTION(BlueprintPure)
	AActor* GetOwner() const { return Cast<AActor>(GetOuter()); };

	virtual void PostInitProperties() override;

	// Функция, которую определяем мы уже в Блупринтах.
	UFUNCTION(BlueprintImplementableEvent)
		void BeginPlay();
public:

	// Необходимые функции
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

protected:

	// Для определения в БП
	UFUNCTION(BlueprintImplementableEvent)
		void EventTick(float DeltaTime);

};
