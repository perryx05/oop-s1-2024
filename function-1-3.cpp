# include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
PersonList newPersonList;
newPersonList.people = new Person[pl.numPeople];
for (int i = 0; i<pl.numPeople; i++){
    newPersonList.people[i].name = pl.people[i].name;
    newPersonList.people[i].age = pl.people[i].age;
}
return newPersonList;
}
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