#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;
class Player
{
protected:
    string name;
    int health;
    int damage;

public:
    Player(string name, int health, int damage);
    void attack(Player *opponent, int damage);
    void takeDamage(int damage);
    string getName();
    int getHealth();
    int getDamage();
    void setHealth(int health);
    void setDamage(int damage);
};

#endif