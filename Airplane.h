# include "AirCraft.h"
# ifndef AIRPLANE_H
# define AIRPLANE_H

class Airplane : public AirCraft {
    private :
    int numPassengers;
    public :
    Airplane ();
    Airplane (int w, int p);
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);  

};
#endif