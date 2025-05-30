#include "Mage.h"

Mage::Mage(string n) : Player(n, 70, 20) {}

void Mage::attack(Character* target) {
    int damage = this->getAttack() + 3;
    target->takeDamage(damage);
}

