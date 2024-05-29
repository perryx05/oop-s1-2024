#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include "GameSession.h"
#include <vector>

int main() {
    GameSession gameSession;
    gameSession.initGameSession(10, 5, 20, 20); // 10 Avatars, 5 Obstacles, 20x20 grid
    gameSession.gameCycle(10, 5.0); // 100 cycles, Obstacles activate within a distance of 5.0
    return 0;
}