#ifndef QUACK_BEHAVIOUR_H
#define QUACK_BEHAVIOUR_H

class QuackBehaviour {
    public:
        virtual ~QuackBehaviour() = default;
        virtual void quack() = 0;
};

#endif
