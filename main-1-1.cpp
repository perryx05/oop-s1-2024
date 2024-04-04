#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main (){
    int numVehicles;
    cout<<"Enter the number of vehicles: ";
    cin>>numVehicles;
    Vehicle **vehicles = new Vehicle*[numVehicles];
    for (int i = 0; i < numVehicles; i++) {
        string type;
        int id;
        cout << "Enter the type of vehicle (Car, Bus, Motorbike): ";
        cin >> type;
        cout << "Enter the ID of the vehicle: ";
        cin >> id;
        if (type == "Car") {
            vehicles[i] = new Car(id);
        } else if (type == "Bus") {
            vehicles[i] = new Bus(id);
        } else if (type == "Motorbike") {
            vehicles[i] = new Motorbike(id);
        }
        }
    for (int i = 0; i< numVehicles; i++){
         cout<<vehicles[i]->getParkingDuration()<<endl;;
    }
   
}
