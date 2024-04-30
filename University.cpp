# include "University.h"

University :: University(string name, string location) : name(name), location (location){
    this -> current = 0;
}
void University :: addCourse(int id, std::string name){
    Course newCourse (id, name);
    courses [current] = newCourse;
    current ++;

}