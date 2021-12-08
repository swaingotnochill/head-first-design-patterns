#ifndef MODEL_DUCK_H
#define MODEL_DUCK_H

#include<iostream>
#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"

class ModelDuck : public Duck {
    public :
        ModelDuck();
        void display() const override { std::cout << " I'm a model duck \n"; }
};

inline ModelDuck::ModelDuck() {
    flyBehaviour = std::make_unique<FlyNoWay>();
    quackBehaviour = std::make_unique<Quack>();
}

#endif
