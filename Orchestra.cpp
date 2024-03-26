#include "Orchestra.h"
Orchestra ::Orchestra(int size)
{
    this->size = size;
    this->current = 0;
    this->orchestra = new Musician[size];
}
Orchestra ::Orchestra() : Orchestra(0)
{
    
}

int Orchestra ::get_current_number_of_members()
{
    return current;
}
Musician *Orchestra::get_members()
    {

        return orchestra;
    }
bool Orchestra ::has_instrument(std::string instrument)
{
    for (int i = 0; i<current; i++){
    if (orchestra[i].get_instrument() == instrument)
    {
        return true;
    }
    }
    return false;
}
    
    bool Orchestra ::add_musician(Musician new_musician)
    {
        if (current < size)
        {
            orchestra[current] = new_musician;
            current++;
            return true;
        }
        else
        {
            return false;
        }
    }
    Orchestra ::~Orchestra(){
        delete[] orchestra;
    };
 