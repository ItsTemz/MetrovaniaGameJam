// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UniversalDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class METROIDVANIAJAM17_API UUniversalDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UUniversalDataAsset();

	FPrimaryAssetType AssetType;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BaseInformation)
	FName InternalID;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BaseInformation)
	FText DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BaseInformation)
	TArray<FText> Description;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = BaseInformation)
	UTexture2D* Icon;
	
	FString GetIdentifierString() const;
	/** Overridden to use saved type */
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
	
};
