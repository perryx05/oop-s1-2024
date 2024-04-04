# include "Vehicle.h"
# ifndef PARKINGLOT_H
# define PARKINGLOT_H

class ParkingLot{
    private:
    int maxVehicle;
    Vehicle **vehicles;
    int current;
    int maxParkingDuration;
    public:
    ParkingLot(int maxVehicle);
    int getCount();
    void parkVehicle(Vehicle *vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};
#endif