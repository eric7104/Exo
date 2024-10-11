#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable {
public:
        Mob(float x, float y, float maxLife, const Vector2& direction, float speed);

        void takeDamage(float damage) override;

        void move() override;
        void attack(Alive* target);  

        ~Mob() = default;
};

