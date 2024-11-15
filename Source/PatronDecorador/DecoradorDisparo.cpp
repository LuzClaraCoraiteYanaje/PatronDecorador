// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorDisparo.h"
#include "Projectil.h"
#include "Kismet/GameplayStatics.h"

ADecoradorDisparo::ADecoradorDisparo()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ADecoradorDisparo::BeginPlay()
{
    Super::BeginPlay();
}

void ADecoradorDisparo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    proyectilRecord += 1;
    if (proyectilRecord >= 50)
    {
        Empezar();
        proyectilRecord = 0;
    }
}

void ADecoradorDisparo::Empezar()
{
    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (Player)
    {
        FVector ubicacion = Player->GetActorLocation() + FVector(0.0f, 0.0f, 20.0f);
        FRotator rotacion = Player->GetActorRotation();
        AProjectil* NewProj0 = GetWorld()->SpawnActor<AProjectil>(ubicacion, rotacion);
        //GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, TEXT("¡Disparo realizado!"));
    }
}

FString ADecoradorDisparo::Estado()
{
    estado = "Estado disparador";
    return Super::Estado() + estado;
}

FString ADecoradorDisparo::ObtenerAtributos()
{
    atributos = "Poder disparar";
    return Super::ObtenerAtributos() + atributos;
}

float ADecoradorDisparo::Duracion()
{
    return Super::Duracion() + 15.f;
}
