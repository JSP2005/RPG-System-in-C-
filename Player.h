#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
using namespace std;

class Player : public Character {
public:
    Player(string n, int hp, int atk);
    virtual void attack(Character* target) override;
    void attack(Character* target, int bonusDamage);  // overload with bonus damage
};

#endif

