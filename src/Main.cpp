#include "Platform/Platform.hpp"
#include <iostream>
#include "Game.h"



int main() {

    //initGame
    Game game;

    //Game Loop
    while (game.running()) {

        //Update
    game.update();
        //Render
    game.render();
    }

    //End of Application
    return 0;
	
}