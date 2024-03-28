# include "Unit.h"
# include <iostream>
using namespace std;

Unit :: Unit(){
    this -> unit_val = 0;
    this -> num_beds = 0;
    this -> unit_size = 0;
    
}
Unit :: Unit(int unit_val, int num_beds, double unit_size){
   if (unit_val<0 ){
        this -> unit_val = 0;
    } else {
        this -> unit_val = unit_val;
    }

    if (num_beds <0){
        this -> num_beds = 0;
    } else {
        this -> num_beds = num_beds;
    }
    if (unit_size <0){
       this -> unit_size = 0;
    } else {
        this -> unit_size = unit_size;
    }
}
int Unit :: get_Num_Bedrooms(){
    return num_beds;
}
int Unit :: get_Value() {
    return unit_val;
}
double Unit :: get_Area(){
    return unit_size;
}