#include "Gradebook.h"

void Gradebook :: addGrade(int stud_id, int course_id, string assignment, int value){
    Grade newGrade(stud_id, assignment, value);
    grades[course_id] = newGrade;

}