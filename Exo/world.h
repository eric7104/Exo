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
    std::vector<std::shared_ptr<Entity>> entities; // Vecteur d'entités

public:
    void Init(); // Méthode pour initialiser les entités
    void Step(); // Méthode pour exécuter un pas de simulation
    bool isSimulationFinished() const; // Méthode pour vérifier si la simulation est terminée
};

