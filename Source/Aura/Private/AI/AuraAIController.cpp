// Copyright Brandon Fuller


#include "AI/AuraAIController.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AAuraAIController::AAuraAIController()
{
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
	check(Blackboard);
	BehaviourTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviourTreeComponent);
}
