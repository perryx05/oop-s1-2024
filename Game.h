#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Effect.h"
#include "Utils.h"
#include <vector>

class Game{
    private:
    std::vector<GameEntity*> entities;
    public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
        for (int i=0; i<numShips; i++ ){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i<numMines; i++){
            std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
        }
        return entities;
    }
     std::vector<GameEntity*> get_entities() const {
        return entities;
    }

    void set_entities(const std::vector<GameEntity*>& entities) {
        this->entities = entities;
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for (int i = 0; i<maxIterations; i++){
            for (GameEntity *entity:entities){
                if (entity -> getType()== 'S'){
                    static_cast<Ship*>(entity) -> move(0,1);
                
            }
            for (GameEntity *otherEntity:entities){
                if (otherEntity -> getType()== 'M'){
                    double distance = Utils::calculateDistance(entity->getPos(), otherEntity->getPos());
                    if (distance <= mineDistanceThreshold) {
                        Explosion explosion = static_cast<Mine*>(otherEntity) ->explode();
                        explosion.apply(*entity);
                    }
                }
            }
    }
    }
    }
};
#endif