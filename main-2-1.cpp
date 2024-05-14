# include "AirCraft.h"
# include "Helicopter.h"

int main (){
    Helicopter h1(5690, "");
    h1.set_name("buoi");
    h1.set_fuel(80);
    h1.fly(45,10);
    cout<<h1.get_name()<<endl;
    cout<<h1.get_fuel()<<endl;
    cout<<h1.get_numberOfFlights()<<endl;
}