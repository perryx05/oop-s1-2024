#ifndef UTILS_H
#define UTILS_H

#include "Cell.h"
#include <cmath>

class Utils {
    public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        double x1, y1;
        x1 = rand() % gridWidth;
        y1 = rand() % gridHeight;
        return std::make_tuple(x1, y1);
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        double x1, y1, x2, y2;
        x1 = std::get<0>(pos1);
        y1 = std::get<1>(pos1);
        x2 = std::get<0>(pos2);
        y2 = std::get<1>(pos2);
        double distance = sqrt(pow(x1-x2, 2)+pow(y2-y1, 2));
        return distance;

    }

};
#endif