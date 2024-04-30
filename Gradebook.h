#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <iostream>
using namespace std;

class Gradebook{
    private:
    Grade *grades;
    public:
    void addGrade(int stud_id, int course_id, string assignment, int value);

};
#endif