#include "Archer.h"

Archer::Archer(string n) : Character(n, 90, 15) {}

void Archer::attack(Character* target) {
    target->takeDamage(getAttack());
}

