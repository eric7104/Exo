#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World {
private:
    std::vector<std::shared_ptr<Entity>> entities; // Vecteur d'entit�s

public:
    void Init(); // M�thode pour initialiser les entit�s
    void Step(); // M�thode pour ex�cuter un pas de simulation
    bool isSimulationFinished() const; // M�thode pour v�rifier si la simulation est termin�e
};

