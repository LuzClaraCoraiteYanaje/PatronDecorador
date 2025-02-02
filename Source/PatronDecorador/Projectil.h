// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectil.generated.h"

UCLASS()
class PATRONDECORADOR_API AProjectil : public AActor
{
	GENERATED_BODY()
	
	UStaticMeshComponent* ProyectilMesh;

public:	
	// Sets default values for this actor's properties
	AProjectil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Mover(float DeltaTime);
	float vel;
};
