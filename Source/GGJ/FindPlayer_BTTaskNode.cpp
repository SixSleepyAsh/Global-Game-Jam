// Fill out your copyright notice in the Description page of Project Settings.
#include "FindPlayer_BTTaskNode.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

// find the player to follow
void UFindPlayer_BTTaskNode::FindPlayer()
{
  NodeName = "Find Player";
} 

// execute a task when following 
EBTNodeResult::Type UFindPlayer_BTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
  if (APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
  {
    UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
    Blackboard->SetValueAsObject(PlayerKey.SelectedKeyName, Player);
    return EBTNodeResult::Succeeded;
  }

  return EBTNodeResult::Type();
}
