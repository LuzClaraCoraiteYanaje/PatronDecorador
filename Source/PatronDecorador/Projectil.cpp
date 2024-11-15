// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectil.h"
#include "PatronDecoradorCharacter.h"

// Sets default values
AProjectil::AProjectil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ProyectilMesh->SetStaticMesh(MeshAsset.Object);
	RootComponent = ProyectilMesh;

	FVector NewScale(0.25f, 0.25f, 0.25f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);
	vel = 1000;
}

// Called when the game starts or when spawned
void AProjectil::BeginPlay()
{
	Super::BeginPlay();
	
} 

// Called every frame
void AProjectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);
}

void AProjectil::Mover(float DeltaTime)
{

	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	//FVector NewLocation = GetActorLocation() + FVector(0.0f, -vel, 0.0f) * DeltaTime;
	SetActorLocation(NewLocation);

}