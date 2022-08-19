// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/MetroidAssetManager.h"


//Not really used this General Type !
const FPrimaryAssetType	UMetroidAssetManager::GeneralType			= TEXT("General");
const FPrimaryAssetType	UMetroidAssetManager::SkillType			= TEXT("Skill");
const FPrimaryAssetType	UMetroidAssetManager::ItemType				= TEXT("Item");
const FPrimaryAssetType	UMetroidAssetManager::WeaponType			= TEXT("Weapon");

void UMetroidAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
}

void UMetroidAssetManager::FinishInitialLoading()
{
	Super::FinishInitialLoading();
}

#if WITH_EDITOR
bool UMetroidAssetManager::OnAssetRegistryAvailableAfterInitialization(FName InName, FAssetRegistryState& OutNewState)
{
	return Super::OnAssetRegistryAvailableAfterInitialization(InName, OutNewState);
}

void UMetroidAssetManager::OnAssetRegistryFilesLoaded()
{
	Super::OnAssetRegistryFilesLoaded();
}
#endif

TArray<UUniversalDataAsset*> UMetroidAssetManager::GetAssets(const FPrimaryAssetType& Type) const
{
	UAssetManager& Manager = UMetroidAssetManager::Get();

	TArray<FPrimaryAssetId> IdList;
	TArray<UUniversalDataAsset*> AssetList;
	Manager.GetPrimaryAssetIdList(Type, IdList);

	UUniversalDataAsset* Asset = nullptr;
	
	for (const FPrimaryAssetId& ID : IdList)
	{
		//Initialize
		Asset = nullptr;

		FSoftObjectPath ItemPath;
		ItemPath = Manager.GetPrimaryAssetPath(ID);

		Asset = Cast<UUniversalDataAsset>(ItemPath.TryLoad());

		if(Asset == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("UMetroidAssetManager::GetAssets %s"), *ID.ToString());
			continue;
		}
		AssetList.Add(Asset);
	}
	return AssetList;
}

UMetroidAssetManager& UMetroidAssetManager::Get()
{
	UMetroidAssetManager* This = Cast<UMetroidAssetManager>(GEngine->AssetManager);

	if (This)
	{
		return *This;
	} else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be UMetroidAssetManager!"));
		return *NewObject<UMetroidAssetManager>(); // never calls this
	}
}

UUniversalDataAsset* UMetroidAssetManager::GetAssetById(const FPrimaryAssetId& AssetID)
{
	const UMetroidAssetManager& Manager = UMetroidAssetManager::Get();
	FSoftObjectPath ItemPath = Manager.GetPrimaryAssetPath(AssetID);

	UUniversalDataAsset* Asset = Cast<UUniversalDataAsset>(ItemPath.TryLoad());
	return Asset;
}

UObject* UMetroidAssetManager::GetAssetObjectById(const FPrimaryAssetId& AssetID)
{
	const UMetroidAssetManager& Manager = UMetroidAssetManager::Get();
	FSoftObjectPath ItemPath = Manager.GetPrimaryAssetPath(AssetID);
	UObject* UObjAsset = ItemPath.TryLoad();
	return UObjAsset;
}

void UMetroidAssetManager::LoadAssets(const FPrimaryAssetType& Type)
{
}
