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
    void setWeight(int w);
    int getWeight ();
    void setFuel(int f);
    float getFuel();
    void setNumberOFFlights(int n);
    int getNumberOfFlights ();
    void refuel();
    virtual void fly(int headwind, int minutes);

};
#endif