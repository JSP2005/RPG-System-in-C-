#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"
using namespace std;

class Archer : public Character {
public:
    Archer(string n);
    void attack(Character* target) override;
};

#endif

