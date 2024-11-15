// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorEscudo.h"
#include "Escudo.h"
#include "PatronDecorador.h"
#include "Kismet/GameplayStatics.h"

ADecoradorEscudo::ADecoradorEscudo()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ADecoradorEscudo::BeginPlay()
{
	Super::BeginPlay();
}

void ADecoradorEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADecoradorEscudo::Empezar()
{
	APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (Player)
	{
		FVector ubicacion = Player->GetActorLocation() + FVector(20.0f, 40.0f, -15.0f);
		FRotator rotacion = Player->GetActorRotation();
		AEscudo* NewProj0 = GetWorld()->SpawnActor<AEscudo>(ubicacion, rotacion);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, TEXT("Mario con escudo"));
	}
}

FString ADecoradorEscudo::Estado()
{
	estado = " Protegerse con Escudo";
	return Super::Estado() + estado;
}

FString ADecoradorEscudo::ObtenerAtributos()
{
	atributos = " Escudo activo ";
	return Super::ObtenerAtributos() + atributos;
}

float ADecoradorEscudo::Duracion()
{
	return Super::Duracion() + 5.f;
}
