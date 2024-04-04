# include "Bus.h"

Bus ::  Bus (int ID) : Vehicle (ID){}
int Bus :: getParkingDuration(){
   
   return Vehicle::getParkingDuration() * 0.75;
}