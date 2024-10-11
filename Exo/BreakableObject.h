#pragma once
#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive {
public:
        BreakableObject(float x, float y, float maxLife);

        void takeDamage(float damage) override;
        float getCurrentHealth() const;

        ~BreakableObject() = default;
};

