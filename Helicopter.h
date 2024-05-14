#include "AirCraft.h"
# ifndef HELICOPTER_H
# define HELICOPTER_H

class Helicopter : public AirCraft{
    private:
    string name;
    public:
    Helicopter ();
    Helicopter(int w, string n);
    void set_name (string n);
    string get_name ();
    void fly(int headwind, int minutes);

};
#endif
