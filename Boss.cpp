#include "Boss.h"

Boss::Boss(string n) : Fighter(n) {
    stats.setHealth(150);  // more life points than normal fighter
    stats.setAttack(25);   // more attack points than normal fighter
}

void Boss::attack(Character* target) {
    // Increased attack damage
    int damage = this->getAttack() + 10;
    target->takeDamage(damage);
}

