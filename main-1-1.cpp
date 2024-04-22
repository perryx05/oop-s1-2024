# include "Appliance.h"
using namespace std;

int main (){
    Appliance app1 (100);
    app1.turnOn();
    cout<<"Power rating: "<<app1.get_powerRating()<<endl;
    cout<<"Power consumption: "<<app1.getPowerConsumption()<<endl;
    cout<<"On/off: "<<app1.get_isOn()<<endl;
}