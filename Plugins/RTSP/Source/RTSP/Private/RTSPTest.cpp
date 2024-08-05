// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSPTest.h"
#include "RTSPService.hh"

// Sets default values
ARTSPTest::ARTSPTest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTSPTest::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("STARTING RTSP SERVICE"));
	CStart("rtsp://192.168.137.129:8086/?camera=gaze");
}

// Called every frame
void ARTSPTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	float gazePoint[2];
	CGetGazePoint(gazePoint);
	UE_LOG(LogTemp, Warning, TEXT("GAZE POINT: %f %f"), gazePoint[0], gazePoint[1]);
}

void ARTSPTest::EndPlay(const EEndPlayReason::Type EndPlayReason) {
	Super::EndPlay(EndPlayReason);
	UE_LOG(LogTemp, Warning, TEXT("STOPPING RTSP SERVICE"));
	CStop();
}

