#include "Course.h"

Course :: Course (int id, string name) : id(id), name (name){
}

void Course :: addPerson (Person*person){
     persons[id] = person;
    
}
