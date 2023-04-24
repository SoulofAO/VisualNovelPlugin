// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UpgradeObject.h"
#include "BaseNovelExecuteObject.generated.h"

/**
 * 
 */

USTRUCT(Blueprintable)
struct FBaseNovelExecuteStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite)
	UBaseNovelExecuteObject* BaseNovelExecuteObject;
};

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class VISUALNOVELPLUGIN_API UBaseNovelExecuteObject : public UUpgradeObject
{
	GENERATED_BODY()
	
};
