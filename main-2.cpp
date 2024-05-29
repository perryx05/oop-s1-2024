#include "Obstacle.h"
#include "Avatar.h"


int main (){
    Avatar ava1 (10,10);
    ava1.shift(1,1);
    std::cout<<std::get<0>(ava1.getCoordinates())<<" "<<std::get<1>(ava1.getCoordinates());
    Obstacle obstacle1(10,10);
    obstacle1.apply(ava1);
    std::cout<<ava1.getEntity()<<std::endl;
}