# include "wizard.h"
# include <iostream>
using namespace std;

Wizard :: Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana){}
void Wizard::castSpell(Player *opponent){
     opponent -> takeDamage (mana);
     cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}
int Wizard :: getMana(){
    return mana;
}
void Wizard :: setMana (int mana){
    this -> mana = mana;
}
