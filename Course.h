#ifndef COURSE_H
#define COURSE_H

#include "Person.h"

class Course{
    private:
    string name;
    int id;
    int course_id;
    Person** persons; 
    int current;
    public:
    Course(int id, string name);
    void addPerson(Person *person);
      
};
#endif