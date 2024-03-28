# include "ApartmentBuilding.h"
# include "Unit.h"
# include <iostream>

using namespace std;

int main (){
    ApartmentBuilding tower2(5);
    Unit unit1(20,3,50);
    Unit unit2(30,5,40);
    Unit unit3(40,6,50);
    Unit unit4(35,5,40);
    Unit unit5(45,5,40);
    Unit unit6(35,3,50);
    if (tower2.add_Unit(unit1)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }
   if (tower2.add_Unit(unit2)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }
    if (tower2.add_Unit(unit3)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }
    if (tower2.add_Unit(unit4)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }
    if (tower2.add_Unit(unit5)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }
    if (tower2.add_Unit(unit6)){
        cout<<"add successful"<<endl;
    } else {
        cout<<"add fail"<<endl;
    }   
    Unit *unitArray = tower2.get_Contents();
    for (int i = 0; i<tower2.get_Current_Number_of_Units(); i++){
        cout<<unitArray[i].get_Value()<<" "<<unitArray[i].get_Num_Bedrooms()<<" "<<unitArray[i].get_Area()<<endl;
    }

}
