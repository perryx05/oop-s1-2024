#ifndef GAME_H
#define GAME_H

#include "Cell.h"
#include "Character.h"
#include "Effect.h"
#include "Trap.h"
#include "Utils.h"
#include "vector"

class Game {
    private:
    std::vector<Cell*> grid;
    int _gridWidth;
    int _gridHeight;
    public:
    std::vector<Cell*>& getGrid(){
        return grid;
    }
    void setGrid(std::vector<Cell*> newGrid){
        grid = newGrid;
    }
    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight){
        this ->_gridWidth = gridWidth;
        this -> _gridHeight = gridHeight;
        std::vector<Cell*> newGrid;
        for (int i = 0; i<numCharacters; i++){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Character(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i<numTraps; i++){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            grid.push_back(new Trap(std::get<0>(pos), std::get<1>(pos)));
        }
        setGrid(newGrid);
    }
    void gameLoop(int maxIterations, double trapActivationDistance){
        bool won = false;
        int iter = 0;
        while (iter <= maxIterations){
            for (Cell* cell : grid){
                if (cell->getType() == 'C'){
                    static_cast<Character*>(cell) -> move(1,0);
                int x = std::get<0>(static_cast<Character*>(cell)->getPos());
                int y = std::get<1>(static_cast<Character*>(cell)->getPos());
                if (x > _gridWidth || y> _gridHeight){
                    won = true;
                    std::cout<<"Character has won the game!"<<std::endl;
                    break;
                }
                }
                for (Cell* otherCell : grid){
                    if (otherCell -> getType()== 'T'){
                        double distance = Utils::calculateDistance(cell->getPos(), otherCell->getPos());
                        if (distance <= trapActivationDistance){
                            Trap *trap = static_cast<Trap*>(otherCell);
                            trap->apply(*cell);
                        }
                    }
                }

            }
            iter ++ ;
        }
        if (iter>=maxIterations) {
           std::cout<<"Maximum number of iterations reached. Game over."<<std::endl;
        } 
     //   end:
       // if (won == true){
           // std::cout<<"Character has won the game!"<<std::endl;
       // }
    }


};
#endif