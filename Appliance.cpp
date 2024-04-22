# include "Appliance.h"

Appliance :: Appliance(){
    this -> powerRating = 0;
    this -> isOn = false;
}
Appliance :: Appliance (int powerRating){
    this -> powerRating = powerRating;
    this -> isOn = false;
}
int Appliance :: get_powerRating(){
    return powerRating;
}
void Appliance :: set_powerRating(int powerRating){
    this -> powerRating = powerRating;
}
bool Appliance :: get_isOn(){
    return isOn;
}
void Appliance :: turnOn(){
    isOn = true;
}
void Appliance :: turnOff(){
    isOn = false;
}
 double Appliance :: getPowerConsumption(){
     return 0;
}
