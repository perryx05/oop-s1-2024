#include "Person.h"

Person* createPersonArray(int n) {
    Person *person = new Person [n];
    for (int i = 0; i<n; i++){
      person[i].name = "John Doe";
      person[i].age = 0;
    }
    return person;
}