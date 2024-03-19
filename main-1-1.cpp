# include "Person.h"
# include <iostream>
using namespace std;

extern Person* createPersonArray(int n);

int main (){
    Person *person = createPersonArray(5);
    for (int i = 0; i<5; i++){
        cout<<person[i].name<<endl;
        cout<<person[i].age<<endl;
    }
    delete[] person;
}