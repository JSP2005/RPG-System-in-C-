#include <iostream>
#include "Swordsman.h"
#include "Mage.h"
#include "Fighter.h"
#include "Archer.h"
#include "Boss.h"

using namespace std;

void battle(Player* player, Character* enemy) {
    int choice;
    cout << "\nBattle started against " << enemy->getName() << "!\n";

    while (player->getHealth() > 0 && enemy->getHealth() > 0) {
        cout << "\nYour turn. Choose an action:\n";
        cout << "1. Normal attack\n2. Bonus attack\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            player->attack(enemy);
        } else if (choice == 2) {
            player->attack(enemy, 5);  // assuming attack overload with bonus damage
        } else {
            cout << "Invalid choice, you lose your turn.\n";
        }

        cout << enemy->getName() << " health: " << enemy->getHealth() <<  " \n " << endl;

        if (enemy->getHealth() <= 0) {
            cout << enemy->getName() << " has been defeated. You won this battle!\n";
            break;
        }

        cout << enemy->getName() << " attacks.\n";
        enemy->attack(player);
        cout << player->getName() << " health: " << player->getHealth() << endl;

        if (player->getHealth() <= 0) {
            cout << player->getName() << " has been defeated. You lost the game.\n";
            break;
        }
    }
}

int main() {
    cout << "Choose your character:\n1. Swordsman\n2. Mage\nChoice: ";
    int choice;
    cin >> choice;

    Player* player = nullptr;

    if (choice == 1) {
        player = new Swordsman("Swordsman");
    } else if (choice == 2) {
        player = new Mage("Mage");
    } else {
        cout << "Invalid choice. Defaulting to Swordsman.\n";
        player = new Swordsman("Swordsman");
    }

    Fighter fighterEnemy("Fighter");
    Archer archerEnemy("Archer");
    Boss bossEnemy("Dark Boss");

    // Fight against Fighter
    battle(player, &fighterEnemy);
    if (player->getHealth() <= 0) {
        delete player;
        return 0;
    }

    // Fight against Archer
    battle(player, &archerEnemy);
    if (player->getHealth() <= 0) {
        delete player;
        return 0;
    }

    // Fight against Boss
    battle(player, &bossEnemy);
    if (player->getHealth() <= 0) {
        delete player;
        return 0;
    }

    cout << "Congratulations! You defeated all enemies!\n";

    delete player;
    return 0;
}

