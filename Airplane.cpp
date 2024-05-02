# include "Airplane.h"

Airplane :: Airplane (){}

Airplane :: Airplane (int w, int p) : AirCraft(w), numPassengers(p){

}
void Airplane :: reducePassengers(int x) {
    if (numPassengers - x >= 0) {
        this -> numPassengers -= x;
    } else {
        this -> numPassengers = 0;
    }
}
int Airplane :: get_numPassengers() {
    return numPassengers;
}
void Airplane :: fly(int headwind, int minutes) {
    float fuelUsage;
    if (headwind <60) {
        fuelUsage = 0.3 * minutes + 0.001 * numPassengers * minutes;
    }
    else if (headwind >= 60) {
        fuelUsage = 0.5 * minutes +  0.001 * numPassengers * minutes;
    }
    if (fuel - fuelUsage >=20) {
        fuel = fuel - fuelUsage;
        numberOfFlights ++ ;
    }
}