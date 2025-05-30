#ifndef FIGHTER_H
#define FIGHTER_H

#include "Character.h"
using namespace std;

class Fighter : public Character {
public:
    Fighter(string n);
    void attack(Character* target) override;
};

#endif

