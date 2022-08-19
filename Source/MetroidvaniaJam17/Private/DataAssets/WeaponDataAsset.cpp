// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/WeaponDataAsset.h"

#include "DataAssets/MetroidAssetManager.h"
#include "DataAssets/UniversalDataAsset.h"


UWeaponDataAsset::UWeaponDataAsset()
{
	AssetType = UMetroidAssetManager::WeaponType;
}

