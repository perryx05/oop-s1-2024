# include "Unit.h"
# include <iostream>
using namespace std;

int main (){
   Unit unit1;
    cout<<" "<<unit1.get_Value()<<" "<<unit1.get_Num_Bedrooms()<<" "<<unit1.get_Area()<<endl;
   Unit unit2(20,3,50);
   cout<<" "<<unit2.get_Value()<<" "<<unit2.get_Num_Bedrooms()<<" "<<unit2.get_Area()<<endl;
}