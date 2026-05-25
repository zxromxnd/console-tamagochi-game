#include "Pet.h"
#include <cstdlib>
#include <ctime>

Pet::Pet(string name) {
    _name = name;
    _hunger = 0;
    _energy = 100;
    _age = 0;
}

void Pet::fixStats() {
    if (_hunger < 0) _hunger = 0;
    if (_hunger > 100) _hunger = 100;
    if (_energy < 0) _energy = 0;
    if (_energy > 100) _energy = 100;
}

void Pet::status() {
    string mood = "( ^_^ )";
    if (_hunger > 70) mood = "( >_< ) - I'm hungry!";
    if (_energy < 30) mood = "( -_- ) zZ - So tired...";
    if (_hunger > 80 && _energy < 20) mood = "( x_x ) - I'm dying..";

    cout << "\n--- " << _name << " Status ---" << endl;
    cout << "Mood: " << mood << endl;
    cout << "Hunger: " << _hunger << endl;
    cout << "Energy: " << _energy << endl;
    cout << "Days lived: " << _age << endl;
    cout << "--------------------" << endl;
}

void Pet::feed() {
    _hunger -= 20;
    _energy -= 10;
    fixStats();
}

void Pet::sleep() {
    _energy = 100;
    _hunger += 30;
    fixStats();
}

void Pet::play() {
    _energy -= 30;
    _hunger += 20;
    fixStats();
}

void Pet::passTime() {
    _age++;
    _hunger += (rand() % 10);
    fixStats();
}

int Pet::getAge() {
    return _age;
}

bool Pet::isAlive() {
    if (_hunger >= 100 || _energy <= 0) {
        return false;
    }
    return true;
}

Pet::~Pet() {
    cout << "\nDestructor for Pet class:" << endl;
}