# include <iostream>
# include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main(){
    PersonList personList = createPersonList(5);
    for (int i = 0; i<5; i++){
        cout<<personList.people[i].name<<endl;
        cout<<personList.people[i].age<<endl;
    }
    delete[] personList.people;

}
