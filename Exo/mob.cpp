#include "Mob.h"

Mob::Mob(float x, float y, float maxLife, const Vector2& direction, float speed)
    : Entity(x, y), Alive(maxLife), AMovable(direction, speed) {

        std::cout << "Mob just created at x = " << x
        << " and y = " << y
        << " with " << maxLife << " life"
        << " with direction x = " << direction.getX()
        << " and y = " << direction.getY() << std::endl;
}

void Mob::takeDamage(float damage) {
        Alive::takeDamage(damage);

        if (getCurrentHealth() <= 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

void Mob::move() {
        Vector2 currentPosition = getPosition(); 
        currentPosition.setX(currentPosition.getX() + direction.getX() * speed);
    currentPosition.setY(currentPosition.getY() + direction.getY() * speed);

        setPosition(currentPosition.getX(), currentPosition.getY());

        std::cout << "Mob move to x = " << currentPosition.getX()
        << " and y = " << currentPosition.getY() << std::endl;
}

void Mob::attack(Alive* target) {
    if (target) {
        target->takeDamage(10);          std::cout << "Mob just attacked." << std::endl;
    }
    else {
        std::cout << "No target to attack." << std::endl;
    }
}
