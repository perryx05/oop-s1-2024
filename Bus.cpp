# include "Bus.h"

Bus ::  Bus (int ID) : Vehicle (ID){}
int Bus :: getParkingDuration(){
    int diffTime;
    diffTime = int(time(NULL) - timeOfEntry);
    return diffTime * 0.75;
}