#ifndef STATS_H
#define STATS_H

class Stats {
private:
    int health;
    int attack;

public:
    Stats();
    Stats(int h, int a);

    void setHealth(int h);
    void setAttack(int a);

    int getHealth();
    int getAttack();

    void takeDamage(int dmg);
};

#endif

