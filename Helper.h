#ifndef HELPER_H
#define HELPER_H

#include "GridUnit.h"
#include <cmath>


class Helper {
    public :
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight){
        int x = rand() % gridWidth;
        int y = rand() % gridHeight;
        return std::make_tuple(x,y);
    }
    double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
        double x1 = std::get<0>(coords1);
        double y1 = std::get<1>(coords1);
        double x2 = std::get<0>(coords2);
        double y2 = std::get<1>(coords2);
        double distance = sqrt(pow(x2-x1, 2)) + sqrt(pow(y2-y1, 2));
        return distance;
    }
};
#endif