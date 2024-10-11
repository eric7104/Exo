#ifndef IATTACKER_H
#define IATTACKER_H

class Alive;

class IAttacker {
public:
        virtual void attack(Alive* target) = 0;

        virtual ~IAttacker() = default;
};

#endif 