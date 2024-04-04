# include "ParkingLot.h"
# include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include<iostream>
using namespace std;

int main (){
     ParkingLot vehicles(10);
    for (int i = 0; i<10; i++){
         string type;
       int id;
        cout << "Enter the type of vehicle (Car, Bus, Motorbike): ";
        cin >> type;
        cout << "Enter the ID of the vehicle: ";
        cin >> id;
        if (type == "Car") {
            vehicles.parkVehicle(new Car(id));
        } else if (type == "Bus") {
            vehicles.parkVehicle(new Bus(id));
        } else if (type == "Motorbike") {
            vehicles.parkVehicle(new Motorbike(id));
        }
        }
    cout<<vehicles.countOverstayingVehicles(15)<<endl;
}