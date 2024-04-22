# include "Appliance.h"
# include "TV.h"
using namespace std;
int main (){
    TV tv1(100, 75);
    tv1.turnOn();
    cout<<"The screen size of the tv: "<<tv1.getScreenSize()<<endl;
    cout<<"The power consumption of the tv: "<<tv1.getPowerConsumption()<<endl;
}