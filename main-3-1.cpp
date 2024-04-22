#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"
#include "Appliance.h"

int main() {
    // Create a House object
    House house1(2);
    Fridge* fridge1 = new Fridge(100, 300);
    TV* tv1 = new TV(100, 50);
    house1.addAppliance(fridge1);
    house1.addAppliance(tv1);
    std::cout<<"Total power consumption: "<<house1.getTotalPowerConsumption()<<endl;
}