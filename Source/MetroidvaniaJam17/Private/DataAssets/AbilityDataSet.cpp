// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/AbilityDataSet.h"

#include "DataAssets/MetroidAssetManager.h"

UAbilityDataSet::UAbilityDataSet(): UUniversalDataAsset()
{
	AssetType = UMetroidAssetManager::SkillType;
}
