#ifndef SQUEAK_H
#define SQUEAK_H

#include<iostream>
#include "QuackBehaviour.h"

class Squeak : public QuackBehaviour {
    public :
        void quack() override { std::cout << " Squeak \n"; }
};

#endif
