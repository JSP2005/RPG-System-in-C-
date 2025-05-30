#include "Character.h"

Character::Character(string n, int h, int a) : name(n), stats(h, a) {}

string Character::getName() {
    return name;
}

int Character::getHealth() {
    return stats.getHealth();
}

int Character::getAttack() {
    return stats.getAttack();
}

void Character::takeDamage(int dmg) {
    stats.takeDamage(dmg);
}
void Character::attack(Character* target) {
}
