#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pet {
private:
    string _name;
    int _hunger;
    int _energy;
    int _age;

    void fixStats();

public:
    Pet(string name);

    void status();
    void feed();
    void sleep();
    void play();
    void passTime();

    int getAge();
    bool isAlive();

    ~Pet();
};