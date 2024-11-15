// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Decorador.h"
#include "DecoradorBase.generated.h"

UCLASS()
class PATRONDECORADOR_API ADecoradorBase : public AActor , public IDecorador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FString estado;
	FString atributos;

public:
	IDecorador* jugador;

public:
	void SetJugador(AActor* _PersonajeDecorado);
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

};
