# include "AirCraft.h"
# include "Helicopter.h"

int main (){
    Helicopter h1(5690, "");
    h1.setName("buoi");
    h1.setFuel(80);
    h1.fly(45,10);
    cout<<h1.getName()<<endl;
    cout<<h1.getFuel()<<endl;
    cout<<h1.getNumberOfFlights()<<endl;
}