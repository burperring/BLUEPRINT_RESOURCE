// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// ConstructorHelpers�� C++ Ŭ������ �����ڿ��� ������Ʈ�� ���Ե� �������Ʈ Ŭ������ ������ �������� ���ؼ� ���ȴ�.
	// ConstructorHelpers�� �����ڿ��� Ŭ������ �ʱ�ȭ�ϴµ� ������ �ִ� Ŭ������ ������ �������� ���ҽ���
	// �������Ʈ Ŭ������ �ҷ����� �۾��� �����ִ� ����� ������ �ִ�.
	// �׸��� ConstructorHelpers Ŭ������ ������ �̿��� �ڵ忡�� �� Ŭ������ ����Ϸ��� �õ��ϸ� ������ ������ �߻��ϱ� ������
	// ������ �Լ������� ����ؾ� �Ѵ�.
	// <>�ȿ��� �������Ʈ Ŭ���� Ÿ���� �־���� �ϴµ� �������Ʈ ��ü�� Ŭ���� Ÿ���� ���� ������ 
	// �������Ʈ�� ��ӹ޴� C++ Ŭ������ Ÿ���� �־��ָ� �ȴ�.
	static ConstructorHelpers::FClassFinder<APawn> BpClass(TEXT("/Game/StarterContent/BP_TestClass"));

	// ���⼭ �������Ʈ Ŭ������ ������ �����ö��� ���ڿ��� ���� ��θ� ��� �ҷ����� ����̿��� ��Ÿ�� ����� ��� Ȥ�� ���ϸ����� ���ؼ�
	// Ŭ������ ����� �ҷ����� �ʴ� ��찡 �߻��� �� �ִ�.
	// �̷��� ��츦 ���ֱ� ���ؼ� Succeeded �Լ��� Class�� NULL üũ�� ���� �������Ʈ�� ���������� �ҷ��������� üũ�ϰ� ����ؾ� �Ѵ�.
	if (BpClass.Succeeded() && BpClass.Class != NULL)
	{
		// BpClass.Class.
		// BpClass.Class->
	}

	UStaticMeshComponent* MeshComponent = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
	if (MeshAsset.Succeeded() && MeshAsset.Object != NULL)
	{
		MeshComponent->SetStaticMesh(MeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

