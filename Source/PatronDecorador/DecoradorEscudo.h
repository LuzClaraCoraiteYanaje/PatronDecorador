// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorBase.h"
#include "DecoradorEscudo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONDECORADOR_API ADecoradorEscudo : public ADecoradorBase
{
	GENERATED_BODY()
	
public:
	ADecoradorEscudo();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

};
