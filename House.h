#include "Appliance.h"

# ifndef HOUSE_H
# define HOUSE_H

class House {
    private:
    Appliance ** appliances;
    int numAppliances;
    int current;
    public:
    House();
    House(int numAppliances);
    bool addAppliance (Appliance *appliance);
    double getTotalPowerConsumption();


};
# endif