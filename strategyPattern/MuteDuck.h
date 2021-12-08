#ifndef MUTE_DUCK_H
#define MUTE_DUCK_H

#include<iostream>
#include<memory>
#include "Duck.h"
#include "FlyWithWings.h"
#include "MuteQuack.h"

class MuteDuck : public Duck {
    public :
        MuteDuck();
        void display() const override { std::cout << "I'm a Mute Duck! \n"; }
};

inline MuteDuck::MuteDuck() {
    flyBehaviour = std::make_unique<FlyWithWings>();
    quackBehaviour = std::make_unique<MuteQuack>();
}

#endif
