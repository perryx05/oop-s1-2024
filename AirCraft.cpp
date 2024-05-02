# include "AirCraft.h"

 AirCraft :: AirCraft() {}

 AirCraft :: AirCraft (int w){
    this -> weight = w;
    this -> fuel = 100;
    this ->numberOfFlights = 0;
}
void AirCraft :: setWeight(int w) {
     this -> weight = w;
}
 int AirCraft :: getWeight (){
    return weight;
 }
 void AirCraft :: setFuel(int f){
    this -> fuel = f;
 }
 float AirCraft :: getFuel (){
    return fuel;
 }
 void AirCraft :: setNumberOFFlights(int n) {
    this -> numberOfFlights = n;
 }
 int AirCraft :: getNumberOfFlights(){
    return numberOfFlights;
 }
 void AirCraft :: refuel(){
    this -> fuel = 100;
 }
 void AirCraft :: fly(int headwind, int minutes) {
    this ->numberOfFlights ++;
 }