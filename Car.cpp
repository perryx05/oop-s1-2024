# include "Car.h"

int Car::getParkingDuration(){
    return Vehicle::getParkingDuration() * 0.9;
}
 Car:: Car(int ID) : Vehicle(ID){}