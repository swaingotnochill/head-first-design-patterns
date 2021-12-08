#ifndef DUCK_CALL_H
#define DUCK_CALL_H

#include<iostream>
#include<memory>
#include "QuackBehaviour.h"
#include "Quack.h"

class DuckCall {
    public:
        DuckCall();
        void display() const { std::cout << "I'm not a Duck! \n"; }
        void performQuack() { quackBehaviour->quack(); }
    private:
        std::shared_ptr<QuackBehaviour> quackBehaviour;
};

inline DuckCall::DuckCall() {
    quackBehaviour = std::make_shared<Quack>();
}

#endif
