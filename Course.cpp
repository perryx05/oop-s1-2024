#include "Course.h"

Course :: Course (int id, string name) : id(id), name (name){
    this -> current = 0;
}

void Course :: addPerson (Person*person){
     persons[current] = person;
     current ++;
}