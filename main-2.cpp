// main-2.cpp
#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main (){
    Ship ship1(10,10);
    Mine mine1(20,20);
    ship1.move(1,1);
    std::cout<<"Ship1 position: "<<std::get<0>(ship1.getPos())<<", "<<std::get<1>(ship1.getPos())<<std::endl;
    Explosion explosion = mine1.explode();
    explosion.apply(ship1);
    std::cout<<"Ship1 position after explode: "<<std::get<0>(ship1.getPos())<<", "<<std::get<1>(ship1.getPos())<<std::endl;

}