# include "Person.h"

PersonList createPersonList(int n){
    PersonList personList;
    personList.people = new Person[n];
    for (int i=0; i<n; i++){
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }
    personList.numPeople = n;
    return personList;
}