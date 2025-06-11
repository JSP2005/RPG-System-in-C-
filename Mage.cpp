#include "Mage.h"

Mage::Mage(string n) : Player(n, 300, 20) {}

void Mage::attack(Character* target) {
    int damage = this->getAttack() + 5;
    target->takeDamage(damage);
}

