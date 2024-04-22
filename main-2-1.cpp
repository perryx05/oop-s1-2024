# include "Appliance.h"
# include "Fridge.h"
using namespace std;
int main (){
    Fridge fridge1(100, 300);
    fridge1.turnOn();
    cout<<"The volume of fridge: "<<fridge1.getVolume()<<endl;
    cout<<"The power consumption of the fridge: "<<fridge1.getPowerConsumption()<<endl;

}