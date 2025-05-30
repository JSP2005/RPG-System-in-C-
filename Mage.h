#ifndef MAGE_H
#define MAGE_H

#include "Player.h"
using namespace std;

class Mage : public Player {
public:
    Mage(string n);
    void attack(Character* target) override;
};

#endif

