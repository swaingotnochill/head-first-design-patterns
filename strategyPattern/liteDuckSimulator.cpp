#include<iostream>
#include<memory>

#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"
#include "DuckCall.h"
#include "MuteDuck.h"

int main() {
    std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
    mallard->performQuack();
    mallard->performFly();

    std::unique_ptr<Duck> modelDuck = std::make_unique<ModelDuck>();
    modelDuck->performFly();
    modelDuck->performQuack();
    modelDuck->setFlyBehaviour(std::make_unique<FlyRocketPowered>());
    modelDuck->performFly();

    auto duckCall = DuckCall();
    duckCall.performQuack();
    duckCall.display();

    std::unique_ptr<Duck> muteDuck = std::make_unique<MuteDuck>();
    muteDuck->performFly();
    muteDuck->performQuack();
    muteDuck->display();

    return 0;

}
