#pragma once
#include <iostream>

class Alive {
protected:
    float maxHealth;          float currentHealth;  
public:
        Alive(float health);

        virtual float getMaxHealth() const;
    virtual float getCurrentHealth() const;

        virtual void takeDamage(float damage);

        virtual ~Alive();
};
