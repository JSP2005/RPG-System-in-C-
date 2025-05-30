#ifndef BOSS_H
#define BOSS_H

#include "Fighter.h"
using namespace std;

class Boss : public Fighter {
public:
    Boss(string n);
    void attack(Character* target) override;
};

#endif

