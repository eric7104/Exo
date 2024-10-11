#pragma once
#include <cmath>

class Vector2
{
private:

	float x;
	float y;

public:

	Vector2() : x(0), y(0) {}  
	Vector2(float x, float y) : x(x), y(y) {}
    float getX() const { return x; }
    float getY() const { return y; }

    void setX(float x) { this->x = x; }
    void setY(float y) { this->y = y; }

 
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

   
    float magnitude() const {
        return std::sqrt(x * x + y * y);
    }
};


