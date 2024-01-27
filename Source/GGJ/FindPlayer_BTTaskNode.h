// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FindPlayer_BTTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class GGJ_API UFindPlayer_BTTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	void FindPlayer();

	UPROPERTY(EditAnywhere);
	FBlackboardKeySelector PlayerKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
