#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include "Course.h"
#include "Gradebook.h"
#include <iostream>
using namespace std;

class University{
    private:
    string name;
    string location;
    Course* courses;
    Gradebook gradebook;
    int current;
    public:
    University(string name, string location);
    void addCourse(int id, std::string name);

};
#endif