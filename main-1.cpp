#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
# include <iostream>


int main() {
    Helper help1;
    std::tuple<int, int> coord1 = help1.generateRandomCoordinates(10,10);
    std::tuple<int, int> coord2 = help1.generateRandomCoordinates(10,10);
    std::cout<<help1.calculateDistance(coord1, coord2)<<std::endl;


}