# include "Vehicle.h"
# include <iostream>
using namespace std;

Vehicle :: Vehicle(int ID) {
    this -> ID = ID;
    this -> timeOfEntry = time(NULL);
}
int Vehicle :: getID(){
    return ID;
}
 int Vehicle ::  getParkingDuration(){
    int diffTime;
    diffTime = int(time(NULL) - timeOfEntry);
    return diffTime;
}
