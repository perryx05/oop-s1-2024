#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string name, int health, int damage) : name(name), health(health), damage(damage)
{
}
void Player ::attack(Player *opponent, int damage)
{
    opponent->takeDamage(damage);
}
void Player ::takeDamage(int damage)
{
    health = health - damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
string Player ::getName()
{
    return name;
}
int Player ::getHealth()
{
    return health;
}
int Player::getDamage()
{
    return damage;
}
void Player::setHealth(int health) { 
    this->health = health;   
}
void Player::setDamage(int damage) { 
    this->damage = damage; 
}
