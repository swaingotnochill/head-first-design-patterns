#ifndef FLY_WITH_WINGS_H
#define FLY_WITH_WINGS_H

#include<iostream>
#include "FlyBehaviour.h"

class FlyWithWings: public FlyBehaviour {
    public:
        void fly() override { std::cout<< "I'm flying !! \n"; }
};

#endif
