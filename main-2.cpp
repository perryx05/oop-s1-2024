#include "Trap.h"
#include "Character.h"

int main (){
    Character char1(10,10);
    char1.move(1,1);
    std::cout<<std::get<0>(char1.getPos())<<" "<< std::get<1>(char1.getPos())<<std::endl;
    Trap trap1(10,10);
    trap1.apply(char1);
    std::cout<<char1.getType()<<std::endl;
}