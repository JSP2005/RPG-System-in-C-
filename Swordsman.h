#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "Player.h"
using namespace std;

class Swordsman : public Player {
public:
    Swordsman(string n);
    void attack(Character* target) override;
};

#endif

