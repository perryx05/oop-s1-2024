#ifndef ApartmentBuilding_H
#define ApartmentBuilding_H
#include "Unit.h"
#include <iostream>
using namespace std;

class ApartmentBuilding
{
private:
    int capacity;
    int current;
    Unit *unitArray;

public:
    ApartmentBuilding();             // default constructor allocates capacity for 10 units
    ApartmentBuilding(int capacity); // constructor for ApartmentBuilding with given capacity
    int get_Capacity();              // returns the maximum number of units allowed

    // returns the current number of units in the apartment building
    int get_Current_Number_of_Units();

    // returns a dynamic array of the units in the apartment building
    Unit *get_Contents();

    // returns true and adds unit to the apartment if there is sufficient space
    // otherwise returns false
    bool add_Unit(Unit unit);

    // destructor
    ~ApartmentBuilding();
};
#endif