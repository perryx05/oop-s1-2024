# include <iostream>
# include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main(){
    PersonList originalList = createPersonList(5);
    PersonList newList = shallowCopyPersonList(originalList);
    for (int i = 0; i<5; i++){
        cout<<newList.people[i].name<<endl;
        cout<<newList.people[i].age<<endl;
    }
}