// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeObject.h"

UWorld* UUpgradeObject::GetWorld() const
{
	// Возвращаем ссылку на мир из владельца объекта, если не работаем редакторе.
	if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
	else if (GetOuter()) return GetOuter()->GetWorld();
	else return nullptr;
}

void UUpgradeObject::PostInitProperties()
{
	Super::PostInitProperties();

	//Вызываем только в игре, когда есть мир. В редакторе BeginPlay вызван не будет
	if (GetOuter() && GetOuter()->GetWorld())
		BeginPlay();
}

void UUpgradeObject::Tick(float DeltaTime)
{
	// Вызываем наше событие для определения в БП.
	EventTick(DeltaTime);

	// Остальной плюсовый код на тик.
}

// Необходимо тикать или нет
bool UUpgradeObject::IsTickable() const
{
	return true;
}

TStatId UUpgradeObject::GetStatId() const
{
	return TStatId();
}