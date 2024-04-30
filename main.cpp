# include "University.h"
# include "Course.h"
# include "Gradebook.h"
# include "Person.h"
# include "Grade.h"
# include "Instructor.h"
# include "Student.h"

#include <iostream>
using namespace std;

int main (){
    University uni1("UniAdl", "NorthTce");
    uni1.addCourse(10, "OOP");
    Student *student1 = new Student(235, "Dung");
    uni1.getCourse(10).addPerson(student1);
    Gradebook gradebook1;
    gradebook1.addGrade (235, 10, "OOP",99 );


    
}