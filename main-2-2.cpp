# include "AirCraft.h"
# include "Airplane.h"

int main (){
    Airplane plane1(5000, 110);
    plane1.setFuel(95);
    plane1.reducePassengers(10);
    plane1.fly(65, 120);
    cout<<plane1.getFuel()<<endl;
    cout<<plane1.getNumberOfFlights()<<endl;
    cout<<plane1.get_numPassengers()<<endl;
}
    