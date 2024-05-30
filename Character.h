#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
    public:
    Character(int x, int y) : Cell (x,y, 'C'){}
    void move(int dx, int dy){
        std::get<0>(this->position) +=dx;
        std::get<1>(this->position) +=dy;
    }

};
#endif