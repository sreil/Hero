#ifndef HERO_HPP_INCLUDED
#define HERO_HPP_INCLUDED

class Hero {
private:
    int strength;
    int hitPoints;
    int speed;
    int money;

public:
    void setStrength(int strengthInput);
    void setStrength();
    int getStrength();

    void setHitPoints(int hitPointsInput);
    void setHitPoints();
    int getHitPoints();

    void setSpeed(int speedInput);
    void setSpeed();
    int getSpeed();

    void setMoney(int moneyInput);
    void setMoney();
    int getMoney();

    void setStats(int strengthInput, int hitPointsInput, int speedInput, int moneyInput);
    void setStats();
    void printStats();

    bool takeDamage(int damageInput);
};

#endif // HERO_HPP_INCLUDED
