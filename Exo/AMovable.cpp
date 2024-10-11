#include "amovable.h"


AMovable::AMovable(const Vector2& dir, float spd) : direction(dir), speed(spd) {
   
}


void AMovable::setDirection(const Vector2& dir) {
    direction = dir; }

void AMovable::setSpeed(float spd) {
    speed = spd;
}

AMovable::~AMovable() {
    }
