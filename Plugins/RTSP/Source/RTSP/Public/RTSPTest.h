// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RTSPTest.generated.h"

UCLASS()
class RTSP_API ARTSPTest : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARTSPTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
