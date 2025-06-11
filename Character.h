#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Stats.h"

using namespace std;

class Character {
protected:
    string name;
    Stats stats;

public:
    Character(string n, int h, int a);
    
    string getName();
    int getHealth();
    int getAttack();
    void takeDamage(int dmg);

    virtual void attack(Character* target) = 0;  
    
	virtual ~Character() {}
};

#endif

