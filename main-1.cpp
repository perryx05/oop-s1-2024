#include <iostream>
#include <tuple>
#include "GameEntity.h"
#include "Utils.h"
#include "Effect.h"
using namespace std;

int main (){
    Utils util1;
    tuple<int, int> pos1 = util1.generateRandomPos(10, 10);
    tuple<int, int> pos2 = util1.generateRandomPos(20, 20);

    std :: cout<< "Distance between pos1 and pos2 is: " << util1.calculateDistance(pos1, pos2) << std::endl;
}