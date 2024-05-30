#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
#include "Game.h"

int main (){
    Game game1;
    game1.initGame(10,5, 30, 30);
    game1.gameLoop(20, 15);
}