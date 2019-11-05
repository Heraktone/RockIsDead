// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainController.generated.h"

/**
 * 
 */
UCLASS()
class ROCKISDEAD_API AMainController : public APlayerController
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TalkAction;

	UFUNCTION(BlueprintImplementableEvent)
	void Talk();

	void SetupPlayerInputComponent();
	
};