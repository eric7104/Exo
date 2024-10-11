#pragma once
#include <iostream>
#include "Vector2.h"


class AMovable {
protected:
    Vector2 direction; 
    float speed;       

public:
    
    AMovable(const Vector2& dir, float spd);

    
    virtual void setDirection(const Vector2& dir);

    
    virtual void setSpeed(float spd);

   
    virtual void move() = 0;

  
    virtual ~AMovable();
};


