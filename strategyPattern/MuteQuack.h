#ifndef MUTE_QUACK_H
#define MUTE_QUACK_H

#include<iostream>
#include "QuackBehaviour.h"

class MuteQuack : public QuackBehaviour {
    public :
        void quack() override { std::cout << " << SILENCE >> \n"; }
};

#endif
