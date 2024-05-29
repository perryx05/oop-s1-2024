#ifndef GRIDUNIT_H
#define GRIDUNIT_H

#include <tuple>
#include <iostream>

class GridUnit {
     protected:
     std::tuple<int, int> coordinates;
     char entity;
     public:
     GridUnit () : GridUnit(0,0, ' '){}
     GridUnit(int x, int y, char entity) {
        this -> coordinates = std::make_tuple(x,y);
        this -> entity = entity;
     }
    std::tuple<int, int> getCoordinates(){
        return coordinates;
    }
    char getEntity() {
        return entity;
    }
   void setCoordinates(int x, int y){
        this -> coordinates = std::make_tuple(x,y);
   }
   void setEntity(char entity){
         this -> entity = entity;
   }


};
#endif