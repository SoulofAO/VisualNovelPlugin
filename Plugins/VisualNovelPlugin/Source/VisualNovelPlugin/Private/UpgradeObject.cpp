// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeObject.h"

UWorld* UUpgradeObject::GetWorld() const
{
	// ���������� ������ �� ��� �� ��������� �������, ���� �� �������� ���������.
	if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
	else if (GetOuter()) return GetOuter()->GetWorld();
	else return nullptr;
}

void UUpgradeObject::PostInitProperties()
{
	Super::PostInitProperties();

	//�������� ������ � ����, ����� ���� ���. � ��������� BeginPlay ������ �� �����
	if (GetOuter() && GetOuter()->GetWorld())
		BeginPlay();
}

void UUpgradeObject::Tick(float DeltaTime)
{
	// �������� ���� ������� ��� ����������� � ��.
	EventTick(DeltaTime);

	// ��������� �������� ��� �� ���.
}

// ���������� ������ ��� ���
bool UUpgradeObject::IsTickable() const
{
	return true;
}

TStatId UUpgradeObject::GetStatId() const
{
	return TStatId();
}