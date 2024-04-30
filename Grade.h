# ifndef GRADE_H
# define GRADE_H

# include <iostream>
using namespace std;

class Grade{
    private: 
    string assignment;
    int value;
    int student_id;
    public:
    Grade (int student_id, string assignment, int value);

};
#endif