// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorBase.h"

// Sets default values
ADecoradorBase::ADecoradorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecoradorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorBase::SetJugador(AActor* _PersonajeDecorado)
{
	jugador = Cast<IDecorador>(_PersonajeDecorado);
	if (!jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("No serealizo la conversion de tipo decoreitor")));
	}
}

void ADecoradorBase::Empezar()
{
	if (!jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("Estado(): jugador el null")));
	}
	else
	{
		return jugador->Empezar();
	}
}

FString ADecoradorBase::Estado()
{
	if (!jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Estado(): Jugador es null")));
		return " ";
	}
	else
	{
		return jugador->Estado();
	}
}

FString ADecoradorBase::ObtenerAtributos()
{
	if (!jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado(): Jugador es null")));
		return " ";
	}
	else
	{
		return jugador->ObtenerAtributos();
	}
}

float ADecoradorBase::Duracion()
{
	if (!jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Purple, FString::Printf(TEXT("Estado(): Jugador es null")));
		return 0.f;
	}
	else
	{
		return jugador->Duracion();
	}
}

