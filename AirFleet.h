# include "AirCraft.h"
# include "Airplane.h"
# include "Helicopter.h"

#ifndef AIRFLEET_H
#define AIRFLEET_H

class AirFleet {
    private:
    AirCraft **fleet;
    public:
    AirFleet ();
    AirCraft **get_fleet();

};
#endif