#include <iostream>
#include "World.h"

int main() {
   
    World world;

    world.Init();

    while (true) {
        world.Step();

        
        if (world.isSimulationFinished()) {  
            std::cout << "Simulation Finished." << std::endl;
            break;
        }
    }

    return 0;
}

