# include "AirCraft.h"

int main (){
    AirCraft plane1 (150);
    plane1.set_fuel(50);
    plane1.set_numberOFFlights(120);
    plane1.set_weight (100);
    plane1.refuel();
    plane1.fly(0,0);
    cout<<plane1.get_fuel()<<endl;
    cout<<plane1.get_numberOfFlights()<<endl;
    cout<<plane1.get_weight()<<endl;
}