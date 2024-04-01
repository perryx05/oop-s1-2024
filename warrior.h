# include "player.h"
# ifndef WARRIOR_H
# define WARRIOR_H
class Warrior : public Player
{
private:
    string weapon;
public:
    Warrior (string name, int health, int damage, string weapon);
     void swingWeapon(Player* opponent);

    string getWeapon();
    void setWeapon(std::string weapon);
};
#endif