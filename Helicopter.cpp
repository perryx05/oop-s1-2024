# include "Helicopter.h"

Helicopter :: Helicopter (){}

Helicopter :: Helicopter(int w, string n) : AirCraft (w) , name (n){}

void Helicopter :: setName (string n){
        this -> name = n;
    }
string Helicopter :: getName (){
        return name;
    }

void Helicopter :: fly(int headwind, int minutes) {
     float fuelUsage;
     if (headwind < 40 && weight < 5670){
        fuelUsage = 0.2 * minutes;
     }
     else if (headwind < 40 && weight >=5670) {
        fuelUsage = 0.2 * minutes + 0.01 * (weight - 5670) * minutes;
     }
     else if (headwind >= 40 && weight < 5670) {
        fuelUsage = 0.4 * minutes ;
     }
     else if (headwind >= 40 && weight >= 5670) {
        fuelUsage = 0.4 * minutes + 0.01 * (weight - 5670) * minutes;
     }
     if (fuel - fuelUsage >=20){
         fuel = fuel - fuelUsage;
         numberOfFlights ++;

     }
}