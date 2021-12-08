#ifndef FLY_ROCKET_POWERED_H
#define FLY_ROCKET_POWERED_H

class FlyRocketPowered : public FlyBehaviour {
    public:
        void fly() override { std:: cout << "I'm flying with a rocket! \n"; }

};

#endif
