// Copyright Epic Games, Inc. All Rights Reserved.

#include "VisualNovelPluginBPLibrary.h"
#include "VisualNovelPlugin.h"

UVisualNovelPluginBPLibrary::UVisualNovelPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UWorld* UVisualNovelPluginBPLibrary::GetGlobalWorld(UObject* Object)
{
	return Object->GetWorld();
}
