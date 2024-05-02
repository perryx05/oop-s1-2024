# include "AirCraft.h"

int main (){
    AirCraft plane1 (150);
    plane1.setFuel(50);
    plane1.setNumberOFFlights(120);
    plane1.setWeight (100);
    plane1.refuel();
    plane1.fly(0,0);
    cout<<plane1.getFuel()<<endl;
    cout<<plane1.getNumberOfFlights()<<endl;
    cout<<plane1.getWeight()<<endl;
}