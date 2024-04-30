# include "University.h"

University :: University(string name, string location) : name(name), location (location){

}
void University :: addCourse(int id, std::string name){
    Course newCourse (id, name);
    courses [id] = newCourse;
    }
Course University :: getCourse(int id){
    return courses[id];
}

