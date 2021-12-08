#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H

#include<iostream>
#include<memory>
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

class MallardDuck : public Duck {
    public:
        MallardDuck();
        void display() const override { std::cout << "I'm a real Mallard Duck!\n"; }
};

inline MallardDuck:: MallardDuck() {
    quackBehaviour = std::make_unique<Quack>();
    flyBehaviour = std::make_unique<FlyWithWings>();
}

#endif
