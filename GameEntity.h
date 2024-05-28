#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>
using namespace std;

class GameEntity
{
    protected:
    tuple<int, int> position;
    char type;
    public:
    GameEntity(int x, int y, char type){
        this->position = make_tuple(0, 0);
        this->type = type;
    }
    tuple<int, int> getPos(){
        return this -> position;
    }
    char getType(){
        return this -> type;
    }

};
#endif
