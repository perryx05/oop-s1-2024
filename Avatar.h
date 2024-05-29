#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"

class Avatar : public GridUnit{
    public:
     Avatar(int x, int y) : GridUnit(x,y, 'A'){}
    void shift(int dx, int dy){
        std::get<0>(this->coordinates) +=dx;
        std::get<1>(this->coordinates) +=dy;

    }

};
#endif