#ifndef FLY_BEHAVIOUR_H
#define FLY_BEHAVIOUR_H

class FlyBehaviour {
    public:
        virtual ~FlyBehaviour() = default;
        virtual void fly() = 0;
};

#endif
