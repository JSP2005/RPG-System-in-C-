#include "Player.h"

Player::Player(string n, int hp, int atk) : Character(n, hp, atk) {}

void Player::attack(Character* target) {
    target->takeDamage(this->getAttack());
}

void Player::attack(Character* target, int bonusDamage) {
    target->takeDamage(this->getAttack() + bonusDamage);
}

