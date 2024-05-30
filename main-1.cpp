#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

int main (){
    Utils util1;
    std::tuple<int, int> pos1 = util1.generateRandomPos(10,10);
    std::tuple<int, int> pos2 = util1.generateRandomPos(10,10);
    std::cout<<" "<<util1.calculateDistance(pos1, pos2)<<std::endl;
}