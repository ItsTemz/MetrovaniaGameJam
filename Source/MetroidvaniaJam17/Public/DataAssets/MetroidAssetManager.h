// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UniversalDataAsset.h"
#include "AssetRegistry/AssetRegistryState.h"
#include "Engine/AssetManager.h"
#include "UObject/Object.h"
#include "MetroidAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UMetroidAssetManager : public UAssetManager
{
	GENERATED_BODY()
	virtual void StartInitialLoading() override;

	virtual void FinishInitialLoading() override;

#if WITH_EDITOR
	virtual bool OnAssetRegistryAvailableAfterInitialization(FName InName, FAssetRegistryState& OutNewState) override;
	virtual void OnAssetRegistryFilesLoaded() override;
#endif
		
public:
	/** Static types for all Usable Assets */
	static const FPrimaryAssetType	GeneralType;
	
	/** Static types for Skills */
	static const FPrimaryAssetType	SkillType;
	
	/** Static types for Weapons */
	static const FPrimaryAssetType	WeaponType;

	/** Static types for Items */
	static const FPrimaryAssetType	ItemType;

	TArray<UUniversalDataAsset*> GetAssets(const FPrimaryAssetType& Type) const;

	/** Returns the current AssetManager object */
	static UMetroidAssetManager& Get();

	UFUNCTION(BlueprintCallable)
	static UUniversalDataAsset* GetAssetById(const FPrimaryAssetId& AssetID);
	UFUNCTION(BlueprintCallable)
	static UObject* GetAssetObjectById(const FPrimaryAssetId& AssetID);

	UFUNCTION()
	void LoadAssets(const FPrimaryAssetType& Type);
};
