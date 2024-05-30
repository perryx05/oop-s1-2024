#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <tuple>

class Cell {
    protected:
    std::tuple<int, int> position;
    char type;
    public:
    Cell() : Cell(0,0, ' '){}
    Cell(int x, int y, char type) {
        this ->position = std::make_tuple(x,y);
        this -> type = type;
    }
    std::tuple<int, int> getPos() {
        return this -> position;
    }
    char getType() {
        return this -> type;
    }
    void setPos(int x, int y){
        this ->position = std::make_tuple(x,y);
    }
    void setType(char type) {
        this -> type = type;
    }
 
};
#endif