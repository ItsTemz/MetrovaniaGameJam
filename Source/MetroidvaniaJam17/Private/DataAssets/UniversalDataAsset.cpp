// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/UniversalDataAsset.h"

#include "DataAssets/MetroidAssetManager.h"

UUniversalDataAsset::UUniversalDataAsset()
{
	AssetType = UMetroidAssetManager::GeneralType;
}

FString UUniversalDataAsset::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetId UUniversalDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(AssetType, GetFName());
}
