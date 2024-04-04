# include "Vehicle.h"
# ifndef CAR_H
# define CAR_H

class Car : public Vehicle {
    public:
    Car(int ID);
    int getParkingDuration();
};
# endif