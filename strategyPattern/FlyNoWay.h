#ifndef FLY_NOWAY_H
#define FLY_NOWAY_H

#include "FlyBehaviour.h"
#include<iostream>

class FlyNoWay : public FlyBehaviour {
    public:
        void fly() override { std::cout << "I can't fly! \n"; }
};

#endif
