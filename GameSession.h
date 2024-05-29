#ifndef GAMESESSION_H
#define GAMESESSION_H

#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include <vector>

class GameSession {
    private:
    std::vector<GridUnit*> grid;
    int gridWidth;
    int gridHeight;
    public:
    GameSession(){
    }
     std::vector<GridUnit*>& getGrid() {
        return grid;
     }
     void setGrid(std::vector<GridUnit*>newGrid){
        grid = newGrid;
     }
    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
         this->gridWidth = gridWidth;
        this->gridHeight = gridHeight;  
        std::vector<GridUnit*> newGrid;
         for (int i = 0; i<numAvatars; i++){
            std::tuple<int,int> pos = Helper :: generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Avatar(std::get<0>(pos), std::get<1>(pos)));
         }
         for (int i = 0; i<numObstacles; i++){
            std::tuple<int,int> pos = Helper :: generateRandomCoordinates(gridWidth, gridHeight);
             grid.push_back(new Obstacle(std::get<0>(pos), std::get<1>(pos)));
         }
         setGrid(newGrid);
    }
    void gameCycle(int maxCycles, double obstacleActivationDistance){
        int iteration = 0;
        bool won = false;
        for (int i = 0; i<maxCycles; i++){
            for (GridUnit *grids : grid){
                if (grids ->getEntity()=='A'){
                    static_cast<Avatar*>(grids) -> shift(1,0);
                int x = std::get<0>(static_cast<Avatar*>(grids)->getCoordinates());
                int y = std::get<1>(static_cast<Avatar*>(grids)->getCoordinates());
                if (x > gridWidth || y > gridHeight){
                    won = true;
                    return;
                }
                }
                for (GridUnit* otherGrids : grid){
                    if (otherGrids->getEntity() == 'O'){
                        double distance = Helper().calculateDistance(grids->getCoordinates(), otherGrids->getCoordinates());
                        if (distance <= obstacleActivationDistance) {
                            Obstacle* obstacle = static_cast<Obstacle*>(otherGrids);
                            obstacle->apply(*grids);
                        }
                    }
                }
            }

        }
        if (won==false) {
        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }else {
        std::cout << "Avatar has won the game!"<<std::endl;
    }
    }   
   
};
#endif