# include "ParkingLot.h"
# include "Vehicle.h"

ParkingLot :: ParkingLot(int maxVehicle){
    this -> maxVehicle = maxVehicle;
    this -> vehicles = new Vehicle*[maxVehicle];
    this -> current = 0;
}
int ParkingLot :: getCount(){
    return current;
}
void ParkingLot :: parkVehicle(Vehicle *vehicle){
    if (current < maxVehicle){
        vehicles[current] = vehicle;
        current ++;
    } else {
        cout<<"The lot is full"<<endl;
    }
}
void ParkingLot :: unparkVehicle(int ID){
    for (int i = 0; i<current; i++){
        if (vehicles[i]->getID() == ID){
            delete vehicles[i];
            for (int j = i; j < current-1; j++)
            {
                    vehicles[j] = vehicles[j+1];
            }
            delete vehicles[current-1];
            return;
         }

    }
}
int ParkingLot :: countOverstayingVehicles(int maxParkingDuration){
    int count = 0;
    for (int i = 0; i<current; i++){
        if (vehicles[i]->getParkingDuration()>maxParkingDuration){
           count ++;
        }
    }
    return count;
}