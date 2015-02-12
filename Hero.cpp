#include <iostream>
#include "Hero.hpp"

using namespace std;

void Hero::setStrength(int strengthInput) {
    strength = strengthInput;
}
void Hero::setStrength() {
    strength = 1;
}
int Hero::getStrength() {
    return strength;
}

void Hero::setHitPoints(int hitPointsInput) {
    hitPoints = hitPointsInput;
}
void Hero::setHitPoints() {
    hitPoints = 1;
}
int Hero::getHitPoints() {
    return hitPoints;
}

void Hero::setSpeed(int speedInput) {
    speed = speedInput;
}
void Hero::setSpeed() {
    speed = 1;
}
int Hero::getSpeed() {
    return speed;
}

void Hero::setMoney(int moneyInput) {
    money = moneyInput;
}
void Hero::setMoney() {
    money = 1;
}
int Hero::getMoney() {
    return money;
}

void Hero::setStats(int strengthInput, int hitPointsInput, int speedInput, int moneyInput) {
    setStrength(strengthInput);
    setHitPoints(hitPointsInput);
    setSpeed(speedInput);
    setMoney(moneyInput);
}
//default stats constructor
void Hero::setStats() {
    setStrength();
    setHitPoints();
    setSpeed();
    setMoney();
}
void Hero::printStats() {
    cout << "Strength: " << getStrength() << endl;
    cout << "Health: " << getHitPoints() << endl;
    cout << "Speed: " << getSpeed() << endl;
    cout << "Money: " << getMoney() << endl; //prints out stats
    }

bool Hero::takeDamage(int damageInput) {
    setHitPoints(getHitPoints()-damageInput);
    if (getHitPoints() > 0) {
        return true;
    } else {
        return false; //if getHitPoints is negative hero dies
    }
}

int main() {

    //creates hero instance
    Hero hero;
    hero.Hero::setStats();

    int strengthInput;
    int hitPointsInput; //these are the player stats
    int speedInput;
    int moneyInput;
    bool heroIsAlive = true;


    int damageInput = 0; //damage hero taken

    cout << "We've heard of you...you are a Hero!" << endl;

    cout << "How strong are you? " << endl;
    cin >> strengthInput;
    hero.Hero::setStrength(strengthInput);

    cout << "How much health do you possess? " << endl;
    cin >> hitPointsInput;
    hero.Hero::setHitPoints(hitPointsInput);

    cout << "How fast are you? " << endl;
    cin >> speedInput;
    hero.Hero::setSpeed(speedInput);

    cout << "How much money do you have?" << endl;
    cin >> moneyInput;
    hero.Hero::setMoney(moneyInput);


   cout << "Thank you for your input.  But think fast, an enemy lurks.." << endl;



    while (heroIsAlive) {
        cout << "It attacks and wounds you. How much damage did they do? " << endl; //allows user to input how much damage has been done to the hero
        cin >> damageInput;
        heroIsAlive = hero.Hero::takeDamage(damageInput);

        cout << "Just a scratch!" << endl;
        cout << "You check your health and other statistics and carry on like nothing happened:" << endl;
        hero.Hero::printStats();
    }
    cout << " " << endl;
    cout << "You're dead :-(, I guess you aren't that heroic after all..." << endl;

    return 0;
}
