// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PositionReporter.generated.h"

UCLASS()
class BUILDINGESACPE_API APositionReporter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APositionReporter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
