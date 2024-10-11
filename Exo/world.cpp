#include "World.h"

void World::Init() {
        entities.push_back(std::make_unique<StaticObject>(2.0f, 3.0f));     entities.push_back(std::make_unique<BreakableObject>(4.0f, 5.0f, 1.0f));     entities.push_back(std::make_unique<Mob>(6.0f, 7.0f, 20.0f, Vector2(1.0f, 0.0f), 1.0f));     entities.push_back(std::make_unique<Player>(8.0f, 9.0f, 10.0f, Vector2(0.0f, 1.0f), 1.5f)); }

void World::Step() {
    bool allDead = true; 
        for (auto& entity : entities) {
                if (Mob* mob = dynamic_cast<Mob*>(entity.get())) {
                        for (const auto& target : entities) {
                if (BreakableObject* breakable = dynamic_cast<BreakableObject*>(target.get())) {
                    if (breakable->getCurrentHealth() > 0) {
                                                mob->move();
                        if ((breakable->getPosition() - mob->getPosition()).magnitude() < 1.0f) {
                            mob->attack(breakable);
                            break;                         }
                    }
                }
            }
        }

                if (Player* player = dynamic_cast<Player*>(entity.get())) {
            bool mobAlive = false;             for (const auto& target : entities) {
                if (Mob* mob = dynamic_cast<Mob*>(target.get())) {
                    if (mob->getCurrentHealth() > 0) {
                        mobAlive = true;                                                 player->move();
                        if ((mob->getPosition() - player->getPosition()).magnitude() < 1.0f) {
                            player->attack(mob);
                            break;                         }
                    }
                }
            }

                        if (!mobAlive) {
                for (const auto& target : entities) {
                    if (BreakableObject* breakable = dynamic_cast<BreakableObject*>(target.get())) {
                        if (breakable->getCurrentHealth() > 0) {
                                                        player->move();
                            if ((breakable->getPosition() - player->getPosition()).magnitude() < 1.0f) {
                                player->attack(breakable);
                                break;                             }
                        }
                    }
                }
            }
        }

                if (Mob* mob = dynamic_cast<Mob*>(entity.get())) {
            if (mob->getCurrentHealth() > 0) {
                allDead = false;
            }
        }
        if (BreakableObject* breakable = dynamic_cast<BreakableObject*>(entity.get())) {
            if (breakable->getCurrentHealth() > 0) {
                allDead = false;
            }
        }
    }

        if (allDead) {
        std::cout << "Simulation Finished" << std::endl;
    }
}
