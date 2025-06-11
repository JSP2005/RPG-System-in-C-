#include "Swordsman.h"

Swordsman::Swordsman(string n) : Player(n, 400, 15) {}

void Swordsman::attack(Character* target) {
    int damage = this->getAttack() + 5;
    target->takeDamage(damage);
}

