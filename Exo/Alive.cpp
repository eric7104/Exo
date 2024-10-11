#include "Alive.h"

Alive::Alive(float health) : maxHealth(health), currentHealth(health) {}

float Alive::getMaxHealth() const {
    return maxHealth;
}

float Alive::getCurrentHealth() const {
    return currentHealth;
}

void Alive::takeDamage(float damage) {
    currentHealth -= damage;
    if (currentHealth < 0) {
        currentHealth = 0;         std::cout << "Object just died" << std::endl;     }
    else {
        std::cout << "Received damage, current health: " << currentHealth << std::endl;     }
}

Alive::~Alive() {}
