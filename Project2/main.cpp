#include <iostream>
#include "Pet.h"

using namespace std;

int main() {
    Pet myTamagochi("Sugar");
    int choice = -1;


    srand(time(0));
    while (choice != 0) {
        myTamagochi.status();

        if (myTamagochi.isAlive() == false) {
            cout << "\n[GAME OVER] Your pet is completely exhausted and has left you..\n" << endl;
            cout << "Sugar lived for " << myTamagochi.getAge() << " days." << endl;
            break;
        }

        cout << "\nWhat shall we do?\n";
        cout << "1 - To feed\n";
        cout << "2 - To sleep\n";
        cout << "3 - To play\n";
        cout << "0 - Exit\n";
        cout << "Your choice: ";

        cin >> choice;
        if (choice == 0) {
            cout << "Exiting the game.." << endl;
            break;
        }

        switch (choice) {
        case 1: myTamagochi.feed(); break;
        case 2: myTamagochi.sleep(); break;
        case 3: myTamagochi.play(); break;
        default: cout << "Unknown command! Try again." << endl; break;
        }

        myTamagochi.passTime();
    }

    return 0;
}