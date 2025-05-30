#include "Stats.h"

Stats::Stats() : health(0), attack(0) {}

Stats::Stats(int h, int a) : health(h), attack(a) {}

void Stats::setHealth(int h) {
    health = h;
}

void Stats::setAttack(int a) {
    attack = a;
}

int Stats::getHealth() {
    return health;
}

int Stats::getAttack() {
    return attack;
}

void Stats::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
}

