#include "Fighter.h"

Fighter::Fighter(string n) : Character(n, 80, 12) {}

void Fighter::attack(Character* target) {
    target->takeDamage(this->getAttack());
}

