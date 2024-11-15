// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorBase.h"
#include "DecoradorDisparo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONDECORADOR_API ADecoradorDisparo : public ADecoradorBase
{
	GENERATED_BODY()
	
public:
	ADecoradorDisparo();
protected:
	
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

public:
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

	int proyectilRecord;
};
