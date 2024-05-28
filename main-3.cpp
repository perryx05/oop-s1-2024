#include <iostream>
#include "Game.h"

int main (){
    // Create a Game object
    Game game;

    // Initialize the game with 5 ships and 5 mines in a 100x100 grid
    game.initGame(5, 5, 100, 100);

    // Run the game loop for 10 iterations with a mine distance threshold of 10
    game.gameLoop(10, 10);

    return 0;
}