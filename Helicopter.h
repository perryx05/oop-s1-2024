#include "AirCraft.h"
# ifndef HELICOPTER_H
# define HELICOPTER_H

class Helicopter : public AirCraft{
    private:
    string name;
    public:
    Helicopter ();
    Helicopter(int w, string n);
    void setName (string n);
    string getName ();
    void fly(int headwind, int minutes);

};
#endif
