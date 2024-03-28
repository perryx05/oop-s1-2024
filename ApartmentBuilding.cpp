# include "ApartmentBuilding.h"
# include "Unit.h"

# include <iostream>
using namespace std;

ApartmentBuilding :: ApartmentBuilding(){
    this -> capacity = 10;
    this -> current = 0;
}
ApartmentBuilding :: ApartmentBuilding(int capacity){
    this -> capacity = capacity;
    this -> unitArray = new Unit[capacity];
}
int ApartmentBuilding :: get_Current_Number_of_Units(){
    return current;
}
Unit *ApartmentBuilding :: get_Contents(){
    return unitArray;
}
bool ApartmentBuilding :: add_Unit(Unit unit){
    if (current <capacity){
        unitArray[current] = unit;
        current ++;
        return true;
    } else {
        return false;
    }
}
ApartmentBuilding :: ~ApartmentBuilding(){
    delete[] unitArray;
}
    

