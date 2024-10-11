#include "BreakableObject.h"

BreakableObject::BreakableObject(float x, float y, float maxLife)
    : Entity(x, y), Alive(maxLife) {
        std::cout << "Breakable Object just created at x = " << x
        << " and y = " << y
        << " with " << maxLife << " life" << std::endl;
}

void BreakableObject::takeDamage(float damage) {
        Alive::takeDamage(damage);

        if (getCurrentHealth() <= 0) {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}

float BreakableObject::getCurrentHealth() const {
    return currentHealth;  
}