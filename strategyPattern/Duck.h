#ifndef DUCK_H
#define DUCK_H

#include<iostream>
#include<memory>

#include "FlyBehaviour.h"
#include "QuackBehaviour.h"

class Duck {
    public:
        virtual ~Duck() = default;
        virtual void display() const = 0;
        void performQuack() const { quackBehaviour->quack(); }
        void performFly() const { flyBehaviour->fly(); }
        void swim() const { std::cout << "All ducks float, even decoys!" << "\n"; }
        void setFlyBehaviour( std::unique_ptr<FlyBehaviour> fb) { flyBehaviour = std::move(fb); }
        void setQuackBehaviour( std::unique_ptr<QuackBehaviour> qb) { quackBehaviour = std::move(qb); }

    protected:
        std::unique_ptr<FlyBehaviour> flyBehaviour = nullptr;
        std::unique_ptr<QuackBehaviour> quackBehaviour = nullptr;

};

#endif


