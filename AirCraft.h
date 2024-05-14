# ifndef AIRCRAFT_H
# define AIRCRAFT_H

# include <iostream>
using namespace std;

class AirCraft {
    protected:
    int weight;
    float fuel;
    int numberOfFlights;
    public:
    AirCraft();
    AirCraft(int w);
    void set_weight(int w);
    int get_weight ();
    void set_fuel(int f);
    float get_fuel();
    void set_numberOfFlights(int n);
    int get_numberOfFlights ();
    void refuel();
    virtual void fly(int headwind, int minutes);

};
#endif