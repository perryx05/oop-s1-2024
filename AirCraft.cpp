# include "AirCraft.h"

 AirCraft :: AirCraft() {}

 AirCraft :: AirCraft (int w){
    this -> weight = w;
    this -> fuel = 100;
    this ->numberOfFlights = 0;
}
void AirCraft :: set_weight(int w) {
     this -> weight = w;
}
 int AirCraft :: get_weight (){
    return weight;
 }
 void AirCraft :: set_fuel(int f){
    this -> fuel = f;
 }
 float AirCraft :: get_fuel (){
    return fuel;
 }
 void AirCraft :: set_numberOfFlights(int n) {
    this -> numberOfFlights = n;
 }
 int AirCraft :: get_numberOfFlights(){
    return numberOfFlights;
 }
 void AirCraft :: refuel(){
    this -> fuel = 100;
 }
 void AirCraft :: fly(int headwind, int minutes) {
    this ->numberOfFlights ++;
 }